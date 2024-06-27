void FUN1(struct VAR1 *VAR2,
			  show_commit_fn VAR3,
			  show_object_fn VAR4,
			  void *VAR5)
{
	int VAR6;
	struct VAR7 *VAR7;
	struct strbuf VAR8;

	FUN2(&VAR8, VAR9);
	while ((VAR7 = FUN3(VAR2)) != NULL) {
		
		if (VAR7->VAR10)
			FUN4(VAR2, VAR7->VAR10);
		FUN5(VAR7, VAR5);
	}
	for (VAR6 = 0; VAR6 < VAR2->VAR11.VAR12; VAR6++) {
		struct VAR13 *VAR11 = VAR2->VAR11.VAR14 + VAR6;
		struct VAR15 *VAR16 = VAR11->VAR17;
		const char *VAR18 = VAR11->VAR18;
		const char *VAR19 = VAR11->VAR19;
		if (VAR16->VAR20 & (VAR21 | VAR22))
 			continue;
 		if (VAR16->VAR23 == VAR24) {
 			VAR16->VAR20 |= VAR22;

			FUN6(VAR16, NULL, VAR18, VAR5);


 			continue;
 		}
 		if (!VAR19)
			VAR19 = "";
		if (VAR16->VAR23 == VAR25) {
			FUN7(VAR2, (struct VAR10 *)VAR16, VAR4,
				     &VAR8, VAR19, VAR5);
			continue;
 		}
 		if (VAR16->VAR23 == VAR26) {
 			FUN8(VAR2, (struct VAR27 *)VAR16, VAR4,

				     NULL, VAR19, VAR5);


 			continue;
 		}
 		FUN9("",
		    FUN10(&VAR16->VAR28), VAR18);
	}
	FUN11(&VAR2->VAR11);
	FUN12(&VAR8);
}