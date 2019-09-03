#include <all.h>

// This file is auto-generated.  Do not edit

#ifdef STM32
#include <unistd.h>

static union Option_8E9F45 camkes_buffer[7] = { 0 };

Z building_control_SharedMemory_create(STACK_FRAME Z id) {
    DeclNewNone_964667(t_0);
    None_964667_apply(CALLER &t_0);
    Type_assign((camkes_buffer + id), (&t_0), sizeof(union Option_8E9F45));

    return -1;
}

void building_control_SharedMemory_receive(STACK_FRAME art_DataContent result, Z port) {
    // NO IMPL
}

void building_control_SharedMemory_receiveAsync(STACK_FRAME Option_8E9F45 result, Z port) {
    union Option_8E9F45 p = camkes_buffer[port];

    if (p.type == TSome_D29615) {
        Type_assign(result, &p, sizeOf((Type) &p));
        memset(camkes_buffer + port, 0, sizeof(union Option_8E9F45));
    } else {
        result->type = TNone_964667;
    }
}

Unit building_control_SharedMemory_send(STACK_FRAME Z destid, Z port, art_DataContent d) {
    // NO IMPL
}

B building_control_SharedMemory_sendAsync(STACK_FRAME Z destid, Z port, art_DataContent d) {

    Option_8E9F45 p = (Option_8E9F45) camkes_buffer + port;
    p->type = TSome_D29615;
    Type_assign(&(p->Some_D29615.value), d, sizeOf((Type) d));

    return T;
}

Unit building_control_SharedMemory_remove(STACK_FRAME Z id) {
    // NO IMPL
}

Unit building_control_Process_sleep(STACK_FRAME Z n) {
    // NO IMPL
}

#else

#include <sys/types.h>
#include <sys/shm.h>
#include <sys/sem.h>
#include <unistd.h>

static inline void sem_op(int sid, short val) {
    struct sembuf sem_op;
    sem_op.sem_num = 0;
    sem_op.sem_op = val;
    sem_op.sem_flg = 0;
    semop(sid, &sem_op, 1);
}

static inline void lock(int sid) {
    sem_op(sid, -1);
}

static inline void unlock(int sid) {
    sem_op(sid, 1);
}

static inline int create_sem(Z msgid) {
    unsigned int permission = 0666;
    unsigned int mask = IPC_CREAT;
    int sem_set_id = semget((key_t) msgid, 1, mask | permission);

    if (sem_set_id >= 0) {
        union semun {
            int val;
            struct semid_ds *buf;
            ushort *array;
        } sem_val;
        sem_val.val = 1;
        semctl(sem_set_id, 0, SETVAL, sem_val);
    }
    return sem_set_id;
}

Z building_control_SharedMemory_create(STACK_FRAME Z id) {
    unsigned int permission = 0666;
    unsigned int mask = IPC_CREAT;

    create_sem(id);

    int shmid = shmget((key_t) id, sizeof(union Option_8E9F45), (int) (permission | mask));
    void *p = shmat(shmid, (void *) 0, 0);
    memset(p, 0, sizeof(union Option_8E9F45));
    shmdt(p);

    return (Z) shmid;
}

void building_control_SharedMemory_receive(STACK_FRAME art_DataContent result, Z port) {
    int sid = semget((key_t) port, 1, 0666);

    lock(sid);

    int shmid = shmget((key_t) port, sizeof(union Option_8E9F45), 0666);

    Option_8E9F45 p = (Option_8E9F45) shmat(shmid, (void *) 0, 0);

    while (p->type != TSome_D29615) { // wait until there is a data
        unlock(sid);
        usleep((useconds_t) 10 * 1000);
        lock(sid);
    }

    art_DataContent d = &p->Some_D29615.value;
    Type_assign(result, d, sizeOf((Type) d));
    memset(p, 0, sizeof(union Option_8E9F45));
    shmdt(p);

    unlock(sid);
}

void building_control_SharedMemory_receiveAsync(STACK_FRAME Option_8E9F45 result, Z port) {
    int sid = semget((key_t) port, 1, 0666);

    lock(sid);

    int shmid = shmget((key_t) port, sizeof(union Option_8E9F45), 0666);

    Option_8E9F45 p = (Option_8E9F45) shmat(shmid, (void *) 0, 0);

    if (p->type == TSome_D29615) {
        Type_assign(result, p, sizeOf((Type) p));
        memset(p, 0, sizeof(union Option_8E9F45));
    } else {
        result->type = TNone_964667;
    }

    shmdt(p);

    unlock(sid);
}

Unit building_control_SharedMemory_send(STACK_FRAME Z destid, Z port, art_DataContent d) {
    int sid = semget((key_t) port, 1, 0666);

    lock(sid);

    int shmid = shmget((key_t) port, sizeof(union Option_8E9F45), 0666);

    Option_8E9F45 p = (Option_8E9F45) shmat(shmid, (void *) 0, 0);

    while (p->type == TSome_D29615) {
        unlock(sid);
        usleep((useconds_t) 10 * 1000);
        lock(sid);
    }

    p->type = TSome_D29615;
    Type_assign(&(p->Some_D29615.value), d, sizeOf((Type) d));

    shmdt(p);

    unlock(sid);
}

B building_control_SharedMemory_sendAsync(STACK_FRAME Z destid, Z port, art_DataContent d) {
    int sid = semget((key_t) port, 1, 0666);

    lock(sid);

    int shmid = shmget((key_t) port, sizeof(union Option_8E9F45), 0666);

    Option_8E9F45 p = (Option_8E9F45) shmat(shmid, (void *) 0, 0);
    p->type = TSome_D29615;
    Type_assign(&(p->Some_D29615.value), d, sizeOf((Type) d));

    shmdt(p);

    unlock(sid);
    return T;
}

Unit building_control_SharedMemory_remove(STACK_FRAME Z id) {
    semctl(semget((key_t) id, 1, 0666), 0, IPC_RMID);
    shmctl(shmget((key_t) id, sizeof(union Option_8E9F45), 0666), IPC_RMID, NULL);
}

Unit building_control_Process_sleep(STACK_FRAME Z n) {
    usleep((useconds_t) n * 1000);
}

#endif