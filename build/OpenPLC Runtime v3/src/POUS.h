#ifndef __POUS_H
#define __POUS_H

#include "accessor.h"
#include "iec_std_lib.h"

// PROGRAM MAIN
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  __DECLARE_VAR(BOOL,SWITCHA)
  __DECLARE_VAR(BOOL,SWITCHB)
  __DECLARE_VAR(BOOL,LIGHT)

} MAIN;

void MAIN_init__(MAIN *data__, BOOL retain);
// Code part
void MAIN_body__(MAIN *data__);
// PROGRAM TEMP_SENSOR
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(DINT,TEMPSENSOR1)
  __DECLARE_VAR(DINT,TEMPSENSOR2)
  __DECLARE_VAR(BOOL,FAN)

  // PROGRAM private variables - TEMP, private and located variables

} TEMP_SENSOR;

void TEMP_SENSOR_init__(TEMP_SENSOR *data__, BOOL retain);
// Code part
void TEMP_SENSOR_body__(TEMP_SENSOR *data__);
#endif //__POUS_H
