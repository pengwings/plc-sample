void MAIN_init__(MAIN *data__, BOOL retain) {
  __INIT_VAR(data__->SWITCHA,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->SWITCHB,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LIGHT,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void MAIN_body__(MAIN *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->,LIGHT,,(__GET_VAR(data__->SWITCHA,) && __GET_VAR(data__->SWITCHB,)));

  goto __end;

__end:
  return;
} // MAIN_body__() 





void TEMP_SENSOR_init__(TEMP_SENSOR *data__, BOOL retain) {
  __INIT_LOCATED(DINT,__MD0,data__->TEMPSENSOR1,retain)
  __INIT_LOCATED_VALUE(data__->TEMPSENSOR1,0)
  __INIT_LOCATED(DINT,__MD1,data__->TEMPSENSOR2,retain)
  __INIT_LOCATED_VALUE(data__->TEMPSENSOR2,0)
  __INIT_LOCATED(BOOL,__QX0_0,data__->FAN,retain)
  __INIT_LOCATED_VALUE(data__->FAN,__BOOL_LITERAL(FALSE))
}

// Code part
void TEMP_SENSOR_body__(TEMP_SENSOR *data__) {
  // Initialise TEMP variables

  if ((__GET_LOCATED(data__->TEMPSENSOR1,) > 80)) {
    __SET_LOCATED(data__->,FAN,,__BOOL_LITERAL(TRUE));
  } else if ((__GET_LOCATED(data__->TEMPSENSOR2,) > 90)) {
    __SET_LOCATED(data__->,FAN,,__BOOL_LITERAL(TRUE));
  } else {
    __SET_LOCATED(data__->,FAN,,__BOOL_LITERAL(FALSE));
  };

  goto __end;

__end:
  return;
} // TEMP_SENSOR_body__() 





