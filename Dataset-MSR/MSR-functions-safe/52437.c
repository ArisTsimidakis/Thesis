struct VAR1 *FUN1(u8 VAR2, const char *VAR3, u8 VAR4)
{
	struct VAR1 *VAR5;

	VAR5 = FUN2(VAR2, VAR3, VAR4);
	if (FUN3(VAR5)) {
		FUN4("", VAR6[VAR2], VAR3);
		VAR5 = FUN2(VAR2, VAR3, VAR4);
	}

	return VAR5;
}