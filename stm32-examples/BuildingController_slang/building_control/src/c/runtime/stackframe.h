#ifndef SIREUM_STACK_FRAME_H
#define SIREUM_STACK_FRAME_H

#include <stdlib.h>
#include <type.h>

typedef struct StackFrame *StackFrame;
struct StackFrame {
  StackFrame caller;
  const char *uri;
  const char *owner;
  const char *name;
  int line;
};

#define DeclNewStackFrame(_caller, _uri, _owner, _name, _line) struct StackFrame sf[1] = { (struct StackFrame) { .caller = (_caller), .uri = (_uri), .owner = (_owner), .name = (_name), .line = (_line) } }

#define sfAbort(msg) sfAbortImpl(sf, msg); abort()

void sfAbortImpl(StackFrame sf, char *msg);

#define sfAssert(cond, msg) if (!(cond)) { sfAbort(msg); }

#ifdef SIREUM_NO_LOC
#define sfUpdateLoc(l)
#else
#define sfUpdateLoc(l) sf->line = l
#endif

#define sfDump(isOut) sfDumpImpl(sf, isOut)

void sfDumpImpl(StackFrame sf, B isOut);

#endif