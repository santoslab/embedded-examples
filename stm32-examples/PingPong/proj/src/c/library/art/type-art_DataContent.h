#ifndef SIREUM_TYPE_H_art_DataContent
#define SIREUM_TYPE_H_art_DataContent
#include <misc.h>

// art.DataContent

#include <type-art_Empty.h>
#include <type-proj_Base_Types_Integer_8_Payload.h>

typedef union art_DataContent *art_DataContent;
union art_DataContent {
  TYPE type;
  struct art_Empty art_Empty;
  struct proj_Base_Types_Integer_8_Payload proj_Base_Types_Integer_8_Payload;
};

#define DeclNewart_DataContent(x) union art_DataContent x = { 0 }

#endif