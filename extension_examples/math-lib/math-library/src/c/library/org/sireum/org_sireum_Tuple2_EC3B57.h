#ifndef SIREUM_H_org_sireum_Tuple2_EC3B57
#define SIREUM_H_org_sireum_Tuple2_EC3B57
#include <types.h>

// (Z, Z)
void Tuple2_EC3B57_apply(StackFrame caller, Tuple2_EC3B57 this, Z _1, Z _2);
B Tuple2_EC3B57__eq(Tuple2_EC3B57 this, Tuple2_EC3B57 other);
void Tuple2_EC3B57_cprint(Tuple2_EC3B57 this, B isOut);
void Tuple2_EC3B57_string(String result, StackFrame caller, Tuple2_EC3B57 this);

static inline Z Tuple2_EC3B57_1(Tuple2_EC3B57 this) {
  return this->_1;
}

static inline Z Tuple2_EC3B57_2(Tuple2_EC3B57 this) {
  return this->_2;
};

static inline B Tuple2_EC3B57__ne(Tuple2_EC3B57 this, Tuple2_EC3B57 other) {
  return !Tuple2_EC3B57__eq(this, other);
}

#endif