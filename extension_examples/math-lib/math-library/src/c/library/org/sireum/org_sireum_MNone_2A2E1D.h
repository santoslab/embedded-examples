#ifndef SIREUM_H_org_sireum_MNone_2A2E1D
#define SIREUM_H_org_sireum_MNone_2A2E1D
#include <types.h>

// MNone[art.Bridge]


B MNone_2A2E1D__eq(MNone_2A2E1D this, MNone_2A2E1D other);
static inline B MNone_2A2E1D__ne(MNone_2A2E1D this, MNone_2A2E1D other) {
  return !MNone_2A2E1D__eq(this, other);
};
void MNone_2A2E1D_cprint(MNone_2A2E1D this, B isOut);
void MNone_2A2E1D_string(String result, StackFrame caller, MNone_2A2E1D this);

#define MNone_2A2E1D__is(sf, this) (((MNone_2A2E1D) this)->type == TMNone_2A2E1D)

static inline MNone_2A2E1D MNone_2A2E1D__as(StackFrame caller, void *this) {
  if (MNone_2A2E1D__is(caller, this)) return (MNone_2A2E1D) this;
  fprintf(stderr, "Invalid case from %s to MNone[art.Bridge].", TYPE_string(this));
  sfAbortImpl(caller, "");
  abort();
}

void MNone_2A2E1D_apply(StackFrame caller, MNone_2A2E1D this);

#endif