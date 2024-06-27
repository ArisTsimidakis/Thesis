static int VAR1 FUN1(void)
{
	cnodeid_t VAR2, VAR3 = -1;

	if (!FUN2(""))
		return 0;

	
	if (VAR4 < 100000) {
		FUN3(VAR5 "",
		       VAR6);
		goto VAR7;
	}

	VAR8 = ((unsigned long)1E15 + VAR4 /
			       2) / VAR4;

	if (FUN4(VAR9, VAR10, VAR11, VAR6, NULL)) {
		FUN3(VAR12 "",
			VAR6);
		goto VAR7;
	}

	if (FUN5(&VAR13)) {
		FUN3(VAR5 "",
		       VAR6);
		goto VAR14;
	}

	
	FUN6(VAR2) {
		VAR3 = VAR2;
	}
	VAR3++;

	
	VAR15 = FUN7(sizeof(struct VAR16)*VAR3, VAR17);
	if (VAR15 == NULL) {
		FUN3(VAR5 "",
				VAR6);
		goto VAR18;
	}

	
	FUN6(VAR2) {
		FUN8(&VAR15[VAR2].VAR19);
		FUN9(&VAR15[VAR2].VAR20, VAR21,
			(unsigned long) VAR2);
	}

	VAR22 = VAR23.VAR24 = VAR25 / VAR4;
	FUN10(VAR26, &VAR23);

	FUN3(VAR27 "", VAR28, VAR29,
	       VAR4/(unsigned long)1E6);

	return 0;

VAR18:
	FUN11(VAR15);
	FUN12(&VAR13);
VAR14:
	FUN13(VAR9, NULL);
VAR7:
	return -1;
}