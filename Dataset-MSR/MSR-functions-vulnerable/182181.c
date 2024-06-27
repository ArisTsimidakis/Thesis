static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR3,
		       unsigned int VAR4, unsigned long VAR5)
{
	struct VAR6 *VAR7 = VAR2->VAR8;
	int VAR9;

	switch (VAR4) {
	case VAR10:
 		return FUN2(FUN3(VAR2), (int VAR11 *) VAR5);
 	case VAR12:
 		FUN4(&VAR2->VAR13);

		if (FUN5(VAR2))


 			VAR9 = FUN6(VAR7);
 		else
 			VAR9 = FUN7(VAR7);
		FUN8(&VAR2->VAR13);
		return FUN2(VAR9, (unsigned int VAR11 *) VAR5);
	default:
		return FUN9(VAR2, VAR3, VAR4, VAR5);
	}
}