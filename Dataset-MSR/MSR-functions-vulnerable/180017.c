void FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4;
	unsigned long VAR5;

	if (FUN2(VAR2))
		return;
	VAR4 = VAR2->VAR4;

	FUN3(VAR2, VAR5);
	if (!FUN4(VAR2) ||
	    FUN5(VAR2, 1) < 0)
		goto VAR6;

#ifdef VAR7
	if (VAR2->VAR8)
 		FUN6(VAR2->VAR9, 1);
 #endif
  VAR6:

	FUN7(VAR2, VAR5);
 	FUN8(&VAR4->VAR10, VAR11, VAR12);


 }