FUN1(void) FUN2 (gdImagePtr VAR1, VAR2 * VAR3, int VAR4)
{
	VAR5 *VAR6;
	int VAR7, VAR8;
	VAR5 *VAR9;
	VAR5 *VAR10;
	size_t VAR11;

	if (VAR1 == NULL) {
		return;
	}

	if (!FUN3(VAR1)) {
		FUN4("");
		return;
	}

	if (VAR4 == -1) {
 		VAR4 = 80;
 	}
 
















 	VAR6 = (VAR5 *)FUN5(FUN6(VAR1) * 4 * FUN7(VAR1));
 	if (!VAR6) {
 		return;
	}
	VAR9 = VAR6;
	for (VAR8 = 0; VAR8 < FUN7(VAR1); VAR8++) {
		for (VAR7 = 0; VAR7 < FUN6(VAR1); VAR7++) {
			register int VAR12;
			register char VAR13;
			VAR12 = VAR1->VAR14[VAR8][VAR7];
			VAR13 = FUN8(VAR12);
			if (VAR13 == 127) {
				VAR13 = 0;
			} else {
				VAR13 = 255 - ((VAR13 << 1) + (VAR13 >> 6));
			}
			*(VAR9++) = FUN9(VAR12);
			*(VAR9++) = FUN10(VAR12);
			*(VAR9++) = FUN11(VAR12); 
			*(VAR9++) = VAR13;
		}
	}
	VAR11 = FUN12(VAR6, FUN6(VAR1), FUN7(VAR1), FUN6(VAR1) * 4, VAR4, &VAR10);
	if (VAR11 == 0) {
		FUN4("");
		goto VAR15;
	}
	FUN13(VAR10, VAR11, VAR3);
	free(VAR10);

VAR15:
	FUN14(VAR6);
}