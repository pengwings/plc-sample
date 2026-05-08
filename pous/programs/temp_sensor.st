(* temperature control scenario *)

PROGRAM temp_sensor
VAR_INPUT
	TempSensor1 : dint AT %MD0;
	TempSensor2 : dint AT %MD1;
END_VAR

VAR_OUTPUT
	Fan : bool AT %QX0.0;
END_VAR

IF TempSensor1 > 80 THEN
  FAN := TRUE;
ELSIF TempSensor2 > 90 THEN
  FAN := TRUE;
ELSE
  FAN := FALSE;
END_IF;

END_PROGRAM