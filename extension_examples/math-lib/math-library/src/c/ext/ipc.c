#include <all.h>
#include <sys/msg.h>
#include <unistd.h>

// This file is auto-generated.  Do not edit

struct Message {
  long mtype;
  union art_DataContent data;
};

static int msqid = 0;

Z math_library_MessageQueue_create(StackFrame caller, Z msgid) {
  unsigned int permission = 0666;
  unsigned int mask = IPC_CREAT;
  msqid = msgget((key_t) msgid, (int) (permission | mask));
  return (Z) msqid;
}

Unit math_library_MessageQueue_remove(StackFrame caller, Z msgid) {
  msgctl((int) msgid, IPC_RMID, NULL);
}

void math_library_MessageQueue_receive(Tuple2_D0E3BB result, StackFrame caller) {
  struct Message r;
  msgrcv(msqid, &r, sizeof(union art_DataContent), 0, 0);
  result->type = TTuple2_D0E3BB;
  result->_1 = (Z) r.mtype;
  Type_assign(&result->_2, &r.data, sizeOf((Type) &r.data));
}

Unit math_library_MessageQueue_send(StackFrame caller, Z msgid, Z port, art_DataContent d) {
  struct Message m = { .mtype = port, .data = *d };
  msgsnd(msgget((key_t) msgid, 0644), &m, sizeof(union art_DataContent), 0);
}

Unit math_library_Process_sleep(StackFrame caller, Z n) {
  usleep((useconds_t) n * 1000);
}
