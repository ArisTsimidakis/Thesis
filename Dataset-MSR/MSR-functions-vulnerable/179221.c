static int FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
	const struct VAR4 *VAR4 = FUN2(), *VAR5;

	
	int VAR6 = 0;
	
	if (FUN3(VAR2, VAR7))
		return 0;
	FUN4();
	VAR5 = FUN5(VAR2);
	if (FUN6(VAR4->VAR8, VAR5->VAR9) &&
	    FUN6(VAR4->VAR8, VAR5->VAR10) &&
	    FUN6(VAR4->VAR8, VAR5->VAR8)  &&
	    FUN7(VAR4->VAR11, VAR5->VAR12) &&
	    FUN7(VAR4->VAR11, VAR5->VAR13) &&
	    FUN7(VAR4->VAR11, VAR5->VAR11))
		goto VAR14;
	if (FUN8(VAR5->VAR15, VAR3))
		goto VAR14;
	FUN9();
	return -VAR16;
VAR14:
	FUN9();
	FUN10();
 	if (VAR2->VAR17)
 		VAR6 = FUN11(VAR2->VAR17);
 	FUN4();

	if (!VAR6 && !FUN8(FUN5(VAR2)->VAR15, VAR3)) {




 		FUN9();
 		return -VAR16;
 	}
	FUN9();

	return FUN12(VAR2, VAR3);
}