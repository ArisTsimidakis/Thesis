void VAR1 FUN1(struct VAR2 *VAR2)
{
	unsigned long VAR3;

	VAR3 = (unsigned long) VAR2->VAR4.VAR5;
	FUN2(VAR3 < VAR6 ||
	       VAR3 > VAR7);

	if (FUN3(&VAR2->VAR8) == 1) {
		FUN4(VAR2);
		FUN5(VAR2, 0);
		FUN6(&VAR2->VAR4);
		FUN7(VAR2, 0);
	}

}