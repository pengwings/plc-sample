(* simple boolean *)

PROGRAM main
VAR
	SwitchA : bool := TRUE;
	SwitchB : bool := FALSE;
	Light : bool := FALSE;
END_VAR

Light := SwitchA AND SwitchB;

END_PROGRAM