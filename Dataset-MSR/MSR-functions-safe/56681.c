static void FUN1(struct VAR1 *VAR2,
					struct VAR3 *VAR4)
{
	VAR5 *VAR6 = FUN2(VAR2)->VAR7;

	if (!FUN3(VAR2)) {
		FUN4(VAR6 != NULL);
		return;
	}
	FUN5(VAR6);
	if (FUN6(VAR6) < 0)
		goto VAR8;

	if (FUN7(VAR2) &&
	    VAR2->VAR9 & VAR10) {
		FUN8(VAR2);
		FUN9(VAR2, 1);
	}

VAR8:
	FUN10(VAR6);
}