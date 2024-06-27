FUN1(const struct VAR1 *VAR1,

		   const struct VAR2 *VAR3)




 {
 	int VAR4, VAR5, VAR6 = 0;
 	const char *VAR7 = VAR1->VAR8, *VAR9 = VAR3->VAR10;

	FUN2("", VAR7, VAR9);

	if (!VAR7 || !VAR9)
		goto VAR11;

	if (FUN3(VAR7, VAR9) == 0)
		goto VAR12;

	VAR4 = strlen(VAR7);
	VAR5 = strlen(VAR9);
	if (VAR4 <= 0 || VAR5 <= 0)
		goto VAR11;
	if (VAR7[VAR4 - 1] == '')
		VAR4--;
	if (VAR9[VAR5 - 1] == '')
		VAR5--;
	if (VAR4 != VAR5 || FUN4(VAR7, VAR9, VAR4) != 0)
		goto VAR11;

VAR12:
	VAR6 = 1;
VAR11:
	FUN5("", VAR6);
 	return VAR6;
 }