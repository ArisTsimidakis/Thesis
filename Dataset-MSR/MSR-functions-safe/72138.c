FUN1(VAR1 *VAR2)
{
	time_t VAR3 = FUN2(NULL);
	static uint16_t VAR4 = 0;
	static uint16_t VAR5;
	int VAR6, VAR7;
	char *VAR8;
	char **VAR9 = FUN3(VAR2);

	if (VAR4 == 0)
		VAR4 = FUN4();

	if (VAR5 == 0)
		VAR5 = FUN5();

	FUN6(&VAR10->VAR11);
	VAR8 = xstrdup(VAR10->VAR12);
	FUN7(&VAR10->VAR11);

	FUN8(VAR2->VAR13);

	if (VAR5 == (VAR14)VAR15)
		VAR6 = FUN9("", VAR8, VAR2->VAR13,
					     -1, VAR9, VAR2->VAR16);
	else
		VAR6 = FUN9("", VAR8, VAR2->VAR13,
					     VAR5, VAR9, VAR2->VAR16);

	FUN10(VAR8);
	FUN11(VAR9);

	VAR7 = FUN12(FUN2(NULL), VAR3);
	if (VAR7 >= (VAR4 / 2)) {
		FUN13("",
		     VAR2->VAR13, VAR7);
	}

	return VAR6;
}