static void VAR1 FUN1(void)
 {
 	enum spectre_v2_mitigation_cmd VAR2 = FUN2();
	enum spectre_v2_mitigation VAR3 = VAR4;

	
	if (!FUN3(VAR5) &&
	    (VAR2 == VAR6 || VAR2 == VAR7))
		return;

	switch (VAR2) {
	case VAR6:
		return;

	case VAR8:
	case VAR7:
		if (FUN4(VAR9))
			goto VAR10;
		break;
	case VAR11:
		if (FUN4(VAR9))
			goto VAR12;
		break;
	case VAR13:
		if (FUN4(VAR9))
			goto VAR14;
		break;
	case VAR15:
		if (FUN4(VAR9))
			goto VAR10;
		break;
	}
	FUN5("");
	return;

VAR10:
	if (VAR16.VAR17 == VAR18) {
	VAR12:
		if (!FUN6(VAR19)) {
			FUN5("");
			goto VAR14;
		}
		VAR3 = FUN7() ? VAR20 :
					 VAR21;
		FUN8(VAR22);
		FUN8(VAR23);
	} else {
	VAR14:
		VAR3 = FUN7() ? VAR24 :
					 VAR25;
		FUN8(VAR23);
	}

	VAR26 = VAR3;
 	FUN9("", VAR27[VAR3]);
 
 	

	if ((!FUN6(VAR28) &&

	     !FUN6(VAR29)) || FUN10()) {

		FUN8(VAR30);

		FUN9("");

	}




 
 	
 	if (FUN6(VAR31)) {
		FUN8(VAR32);
		FUN9("");
	}

	
	if (FUN6(VAR33)) {
		FUN8(VAR34);
		FUN9("");
	}
}