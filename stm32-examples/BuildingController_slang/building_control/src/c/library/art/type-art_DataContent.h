#ifndef SIREUM_TYPE_H_art_DataContent
#define SIREUM_TYPE_H_art_DataContent
#include <misc.h>

// art.DataContent

#include <type-building_control_Base_Types_Integer_16_Payload.h>
#include <type-building_control_Base_Types_Boolean_Payload.h>
#include <type-art_Empty.h>

typedef union art_DataContent *art_DataContent;
union art_DataContent {
  TYPE type;
  struct building_control_Base_Types_Integer_16_Payload building_control_Base_Types_Integer_16_Payload;
  struct building_control_Base_Types_Boolean_Payload building_control_Base_Types_Boolean_Payload;
  struct art_Empty art_Empty;
};

#define DeclNewart_DataContent(x) union art_DataContent x = { 0 }

#endif