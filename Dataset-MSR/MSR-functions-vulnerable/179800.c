static void FUN1(struct VAR1 *VAR2, long VAR3)
{
	struct VAR4 *VAR4 = FUN2(VAR2);
	struct VAR5 *VAR6;
	struct VAR7 *VAR8;
	struct VAR9 *VAR10, *VAR11;
	unsigned int VAR12;

	FUN3("", VAR13, VAR2, VAR3);

	FUN4(VAR2);
	VAR2->VAR14 = VAR15;
	VAR2->VAR16 = VAR17;

	VAR6 = FUN5(VAR2)->VAR6;

	
	VAR12 = FUN6(&VAR2->VAR18);
	VAR12 += FUN6(&FUN5(VAR2)->VAR19);

	
	FUN7(VAR10, VAR11, &VAR6->VAR20) {
		VAR8 = FUN8(VAR10, struct VAR7, VAR20);

		if (FUN9(VAR2, VAR21)) {
			
			if (FUN10(VAR8, VAR22)) {
				FUN11(VAR8);
				FUN12(VAR8);
				continue;
			}
		}

		if (VAR12 || !FUN13(&VAR8->VAR23.VAR24) ||
		    !FUN13(&VAR8->VAR23.VAR25) ||
		    (FUN14(VAR2, VAR26) && !VAR2->VAR27)) {
			struct VAR28 *VAR29;

			VAR29 = FUN15(VAR8, NULL, 0);
			if (VAR29)
				FUN16(VAR4, VAR8, VAR29);
		} else
			FUN17(VAR4, VAR8, NULL);
	}

	
	if (FUN9(VAR2, VAR21) && VAR3)
		FUN18(VAR2, VAR3);

	
	FUN19(VAR2);
 
 	

	FUN20();


 	FUN21(VAR2);
 
 	
	FUN22(VAR2);
 	FUN23(VAR2);
 
 	FUN24(VAR2);

	FUN25();


 
 	FUN26(VAR2);
 
	FUN27(VAR1);
}