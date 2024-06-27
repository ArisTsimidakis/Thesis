FUN1(VAR1)
{
	VAR2           *VAR3 = NULL;
	char           *VAR4 = NULL;
	int             VAR5 = 0;
	zval            VAR6;

	if (FUN2(FUN3() VAR7, "", &VAR4, &VAR5, &VAR3, VAR8) == VAR9) {
		VAR10;
	}

	FUN4(VAR11, &datetime_object VAR7);
	if (!FUN5(FUN6(&datetime_object VAR7), VAR4, VAR5, NULL, VAR3, 0 VAR7)) {
		FUN7(&VAR6);
		VAR10;
	}
	FUN8(&VAR6, 0, 0);
}