FUN1(VAR1)
{
	VAR2 *VAR3 = NULL;
	zend_long VAR4;
	char *VAR5, *VAR6;
	size_t VAR7;
	VAR8 *VAR9;
	Oid VAR10;
	int VAR11 = -1;
	int argc = FUN2();

	
	if (FUN3(VAR12, argc,
								 "", &VAR3, &VAR5, &VAR7) == VAR13) {
		VAR10 = (VAR14)FUN4(VAR5, &VAR6, 10);
		if ((VAR5+VAR7) != VAR6) {
			
			FUN5(NULL, VAR15, "");
			VAR16;
		}
	}
	else if (FUN3(VAR12, argc,
								 "", &VAR3, &VAR4) == VAR13) {
		if (VAR4 <= VAR17) {
			FUN5(NULL, VAR15, "");
			VAR16;
		}
		VAR10 = (VAR14)VAR4;
	}
	else if (FUN3(VAR12, argc,
								 "", &VAR5, &VAR7) == VAR13) {
		VAR10 = (VAR14)FUN4(VAR5, &VAR6, 10);
		if ((VAR5+VAR7) != VAR6) {
			
			FUN5(NULL, VAR15, "");
			VAR16;
		}
		VAR11 = FUN6();
		FUN7(VAR11);
	}
	else if (FUN3(VAR12, argc,
								 "", &VAR4) == VAR13) {
		if (VAR4 <= VAR17) {
			FUN5(NULL, VAR15, "");
			VAR16;
		}
		VAR10 = (VAR14)VAR4;
		VAR11 = FUN6();
		FUN7(VAR11);
	}
	else {
		FUN5(NULL, VAR18, "");
		VAR16;
	}
	if (VAR3 == NULL && VAR11 == -1) {
		VAR16;
	}

	FUN8(VAR9, VAR8 *, VAR3, VAR11, "", VAR19, VAR20);

	if (FUN9(VAR9, VAR10) == -1) {
		FUN5(NULL, VAR18, "", VAR10);
		VAR16;
	}
	VAR21;
}