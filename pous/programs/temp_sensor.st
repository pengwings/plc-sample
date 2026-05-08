PROGRAM temp_sensor
VAR
	TempSensor1 : dint AT %MD0;
	TempSensor2 : dint AT %MD1;
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