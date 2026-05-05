#include "POUS.h"
#include "Config0.h"

void MAIN_init__(MAIN *data__, BOOL retain) {
  __INIT_VAR(data__->INPUTA,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->INPUTB,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void MAIN_body__(MAIN *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->,RESULT,,(__GET_VAR(data__->INPUTA,) && !(__GET_VAR(data__->INPUTB,))));

  goto __end;

__end:
  return;
} // MAIN_body__() 





