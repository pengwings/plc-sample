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
  __INIT_VAR(data__->TEMPSENSOR1,0,retain)
  __INIT_VAR(data__->TEMPSENSOR2,0,retain)
  __INIT_VAR(data__->FAN,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void TEMP_SENSOR_body__(TEMP_SENSOR *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->,FAN,,(__GET_VAR(data__->TEMPSENSOR1,) > __GET_VAR(data__->TEMPSENSOR2,)));

  goto __end;

__end:
  return;
} // TEMP_SENSOR_body__() 





