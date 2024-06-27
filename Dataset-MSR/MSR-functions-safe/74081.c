static int FUN1(const struct VAR1* VAR2)
{
	if (FUN2(VAR2->VAR3->VAR4) & VAR5)
		FUN3("");

	if (VAR2->VAR6)
		return 0;

	VAR2->VAR3->VAR4 = FUN4(
			FUN2(VAR2->VAR3->VAR4) | VAR5);
	return FUN5(VAR2);
}