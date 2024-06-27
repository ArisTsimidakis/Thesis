static int FUN1(struct VAR1 *VAR1)
{
	struct VAR2 *VAR3 = FUN2(VAR1,
				struct VAR2, VAR4);
	struct VAR5 *VAR6 = VAR3->VAR6;
	struct VAR7 *VAR8 = NULL;
	u32 VAR9 = 0;
	int VAR10;
	
	VAR10 = FUN3(VAR1, VAR6->VAR11);
	if (VAR10 == -VAR12) {
		
		return VAR13;
	} else if (VAR10 == -VAR14) {
		
		if (VAR1->VAR15 & VAR16)
			return VAR17;
		
		return VAR18;
	}

	
	if (VAR1->VAR19) {
		struct VAR20 *VAR21 = FUN4(VAR6);

		VAR8 = VAR21->VAR22.VAR23;
		VAR9 = VAR21->VAR22.VAR24;
	}

	
	VAR10 = FUN5(VAR1, FUN6(VAR6),
			FUN7(VAR6), VAR8, VAR9);
	if (VAR10 < 0)
		return VAR13;

	return 0;
}