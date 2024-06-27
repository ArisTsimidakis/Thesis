static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
				 struct VAR5 *VAR6,
				 struct VAR7 *VAR8)
{
	int VAR9;
	unsigned int VAR10;

	VAR10 = FUN2(VAR8);

	
	
	memcpy(FUN3(VAR4), &VAR8->class, VAR11);

	
	if ((VAR8->VAR12 & VAR13) && VAR10 > 7) {
		if (memcmp(VAR8->VAR14, VAR15, 8) == 0) {
			VAR4->VAR16 = NULL;
			VAR4->VAR10 = 0;
		}
	} else {
		VAR9 = VAR17->FUN4(VAR6, VAR8,
					      VAR8->VAR12 & VAR13,
					      VAR4->VAR16, VAR10, NULL);
		if (VAR9) {
			FUN5(VAR4);
			return;
		}
		
		if (VAR2->VAR18 == VAR19 &&
		    VAR4->VAR20 >= VAR2->VAR21 / 4) {
			VAR9 = FUN6(VAR2, VAR4, VAR10);
			FUN5(VAR4);
			VAR4 = NULL;
			if (VAR9) {
				VAR17->FUN7(VAR6, NULL);
				return;
			}
			VAR4 = FUN8(&FUN9(VAR2)->VAR22);
		} else {
			FUN10(VAR4);
			FUN11(VAR4);
			VAR4->VAR10 = VAR10;
		}
	}

	if (FUN12(VAR2, VAR4))
		FUN13(&FUN9(VAR2)->VAR22, VAR4);
}