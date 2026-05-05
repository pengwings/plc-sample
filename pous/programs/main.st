(* simple boolean *)

PROGRAM main
VAR
	SwitchA : bool := TRUE;
	SwitchB : bool := FALSE;
	Light : bool;
END_VAR

Light := SwitchA AND NOT SwitchB;

END_PROGRAM