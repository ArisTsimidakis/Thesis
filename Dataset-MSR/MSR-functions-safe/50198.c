FUN1(VAR1)
{
	char *VAR2;
	int VAR3, VAR4, *VAR5;
#ifdef VAR6
	struct stat VAR7;
#endif

	if (FUN2(FUN3() VAR8, "", &VAR2, &VAR3) == VAR9) {
		return;
	}

#ifdef VAR6
	if (FUN4(VAR2, &VAR7) < 0) {
		FUN5(NULL VAR8, VAR10, "", VAR2);
		VAR11;
	}
#endif

	VAR4 = FUN6(VAR2);

	if (VAR4 < 0) {
		FUN5(NULL VAR8, VAR10, "", VAR4, FUN7(VAR4));
		VAR11;
	}

	if (FUN8(VAR4)) {
		FUN5(NULL VAR8, VAR10, "");
		VAR11;
	}

	VAR5 = (int *) FUN9(sizeof(int));
	*VAR5 = VAR4;
	FUN10(VAR12, VAR5, VAR13);
}