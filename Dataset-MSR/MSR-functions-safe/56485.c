static int FUN1(struct VAR1 *VAR2, struct mcontext VAR3 *VAR4,
			  struct mcontext VAR3 *VAR5, int VAR6,
			  int VAR7)
{
	unsigned long VAR8 = VAR2->VAR8;

	
	FUN2(VAR9);

	
	if (FUN3(VAR2, VAR4))
		return 1;

#ifdef VAR10
	
	if (VAR9->VAR11.VAR12) {
		FUN4(VAR9);
		if (FUN5(&VAR4->VAR13, &VAR9->VAR11.VAR14,
				   VAR15 * sizeof(VAR16)))
			return 1;
		
		VAR8 |= VAR17;
	}
	

	
	if (FUN6(VAR18))
		VAR9->VAR11.VAR19 = FUN7(VAR20);
	if (FUN8(VAR9->VAR11.VAR19, (u32 VAR3 *)&VAR4->VAR13[32]))
		return 1;
#endif 
	if (FUN9(&VAR4->VAR21, VAR9))
		return 1;

	
	VAR8 &= ~VAR22;
#ifdef VAR23
	
	if (VAR9->VAR11.VAR24 && VAR7) {
		FUN10(VAR9);
		if (FUN11(&VAR4->VAR25, VAR9))
			return 1;
		VAR8 |= VAR22;
	}
#endif 
#ifdef VAR26
	
	if (VAR9->VAR11.VAR27) {
		FUN12(VAR9);
		if (FUN5(&VAR4->VAR13, VAR9->VAR11.VAR28,
				   VAR29 * sizeof(VAR30)))
			return 1;
		
		VAR8 |= VAR31;
	}
	

	
	if (FUN8(VAR9->VAR11.VAR32, (u32 VAR3 *)&VAR4->VAR13 + VAR29))
		return 1;
#endif 

	if (FUN8(VAR8, &VAR4->VAR33[VAR34]))
		return 1;
	
	if (VAR5 && FUN8(0, &VAR5->VAR33[VAR34]))
		return 1;

	if (VAR6) {
		
		if (FUN8(0x38000000UL + VAR6, &VAR4->VAR35[0])
		    || FUN8(0x44000002UL, &VAR4->VAR35[1]))
			return 1;
		FUN13((unsigned long) &VAR4->VAR35[0],
				   (unsigned long) &VAR4->VAR35[2]);
	}

	return 0;
}