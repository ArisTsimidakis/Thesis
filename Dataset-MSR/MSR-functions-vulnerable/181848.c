int FUN1(struct VAR1 *VAR2, unsigned long VAR3,
			int VAR4)
{
	struct VAR5 *VAR6;
	unsigned long VAR7;
	int VAR8, VAR9 = 0;

	
	if (!VAR2)
		return VAR3;

	
	if (VAR4 != VAR10 &&
 	    !FUN2(VAR4, VAR2->VAR11))
 		return VAR3;
 

	VAR3 = FUN3(VAR3, VAR12);

	VAR3 *= VAR12;


 
 	

	if (VAR3 < VAR12 * 2)

		VAR3 = VAR12 * 2;




 

	VAR7 = FUN3(VAR3, VAR12);


 
 	
	if (FUN4(&VAR2->VAR13))
		return -VAR14;

	
	FUN5(&VAR2->mutex);

	if (VAR4 == VAR10) {
		
		FUN6(VAR2, VAR8) {
			VAR6 = VAR2->VAR15[VAR8];

			VAR6->VAR16 = VAR7 -
							VAR6->VAR7;
			
			if (VAR6->VAR16 <= 0)
				continue;
			
			FUN7(&VAR6->VAR17);
			if (FUN8(VAR6->VAR16,
						&VAR6->VAR17, VAR8)) {
				
				VAR9 = -VAR18;
				goto VAR19;
			}
		}

		FUN9();
		
		FUN6(VAR2, VAR8) {
			VAR6 = VAR2->VAR15[VAR8];
			if (!VAR6->VAR16)
				continue;

			
			if (!FUN10(VAR8)) {
				FUN11(VAR6);
				VAR6->VAR16 = 0;
			} else {
				FUN12(VAR8,
						&VAR6->VAR20);
			}
		}

		
		FUN6(VAR2, VAR8) {
			VAR6 = VAR2->VAR15[VAR8];
			if (!VAR6->VAR16)
				continue;

			if (FUN10(VAR8))
				FUN13(&VAR6->VAR21);
			VAR6->VAR16 = 0;
		}

		FUN14();
	} else {
		
		if (!FUN2(VAR4, VAR2->VAR11))
			goto VAR22;

		VAR6 = VAR2->VAR15[VAR4];

		if (VAR7 == VAR6->VAR7)
			goto VAR22;

		VAR6->VAR16 = VAR7 -
						VAR6->VAR7;

		FUN7(&VAR6->VAR17);
		if (VAR6->VAR16 > 0 &&
			FUN8(VAR6->VAR16,
					    &VAR6->VAR17, VAR4)) {
			VAR9 = -VAR18;
			goto VAR19;
		}

		FUN9();

		
		if (!FUN10(VAR4))
			FUN11(VAR6);
		else {
			FUN12(VAR4,
					 &VAR6->VAR20);
			FUN13(&VAR6->VAR21);
		}

		VAR6->VAR16 = 0;
		FUN14();
	}

 VAR22:
	
	if (FUN4(&VAR2->VAR23)) {
		FUN15(&VAR2->VAR23);
		
		FUN16();
		FUN6(VAR2, VAR8) {
			VAR6 = VAR2->VAR15[VAR8];
			FUN17(VAR6);
		}
		FUN18(&VAR2->VAR23);
	}

	FUN19(&VAR2->mutex);
	return VAR3;

 VAR19:
	FUN6(VAR2, VAR8) {
		struct VAR24 *VAR25, *VAR26;

		VAR6 = VAR2->VAR15[VAR8];
		VAR6->VAR16 = 0;

		if (FUN20(&VAR6->VAR17))
			continue;

		FUN21(VAR25, VAR26, &VAR6->VAR17,
					VAR27) {
			FUN22(&VAR25->VAR27);
			FUN23(VAR25);
		}
	}
	FUN19(&VAR2->mutex);
	return VAR9;
}