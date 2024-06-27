static void FUN1(struct VAR1 *VAR1)
{
	struct VAR2 *VAR3, *VAR4;
	FUN2(VAR5);
	struct VAR6 *VAR7 = FUN3(VAR1, VAR8);
	struct socket *VAR9 = VAR7->VAR10;

	VAR7->VAR10 = NULL;
	FUN4(VAR9, &VAR7->VAR11);
	FUN5(&VAR12);
 	FUN6(VAR3, VAR4, &VAR13, VAR14) {
 		struct VAR1 *VAR15 = FUN7(&VAR3->VAR16->VAR17->VAR15);
 

		if (VAR1 != VAR15 || !VAR3->VAR18)


 			continue;
 		if (!FUN8(&VAR5, VAR3->VAR16->VAR17)) {
 			FUN9(&VAR3->VAR14, &VAR5);
		} else {
			FUN10(&VAR3->VAR14);
			VAR3->VAR19 = true;
		}
	}
	FUN11(&VAR12);
	FUN6(VAR3, VAR4, &VAR5, VAR14)
		FUN12(VAR3->VAR16->VAR17);
}