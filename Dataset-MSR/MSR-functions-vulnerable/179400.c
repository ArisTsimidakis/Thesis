static unsigned int FUN1(unsigned int VAR1,
					    struct VAR2 **VAR3)
{
	struct VAR4 *VAR4;
	struct VAR5 *VAR6;
	struct VAR7 *VAR8;
	int VAR9 = 0;

	FUN2(!VAR1);
	FUN2(!FUN3(&VAR10));

	if (VAR11.VAR4)
		VAR4 = VAR11.VAR4;
	else {
		VAR4 = FUN4(VAR11.VAR12.VAR13,
				     struct VAR4, VAR14);
		VAR11.VAR15 = 0;
		VAR11.VAR4 = VAR4;
	}
	FUN5(&VAR10);

	VAR6 = VAR4->VAR6;
	FUN6(&VAR6->VAR16);
	if (FUN7(FUN8(VAR6)))
		VAR8 = NULL;
	else
		VAR8 = FUN9(VAR6, VAR11.VAR15);

	VAR9++;
	for (; VAR8; VAR8 = VAR8->VAR17) {
		unsigned long VAR18, VAR19;

		FUN10();
		if (FUN7(FUN8(VAR6))) {
			VAR9++;
			break;
		}

		if ((!(VAR8->VAR20 & VAR21) &&
		     !FUN11()) ||
		    (VAR8->VAR20 & VAR22)) {
		VAR23:
 			VAR9++;
 			continue;
 		}

		

		if (!VAR8->VAR24 || VAR8->VAR25 || VAR8->VAR26)


 			goto VAR23;
 		if (FUN12(VAR8))
 			goto VAR23;



		FUN2(FUN13(VAR8) || FUN14(VAR8));












 
 		VAR18 = (VAR8->VAR27 + ~VAR28) & VAR28;
 		VAR19 = VAR8->VAR29 & VAR28;
		if (VAR18 >= VAR19)
			goto VAR23;
		if (VAR11.VAR15 > VAR19)
			goto VAR23;
		if (VAR11.VAR15 < VAR18)
			VAR11.VAR15 = VAR18;
		FUN2(VAR11.VAR15 & ~VAR28);

		while (VAR11.VAR15 < VAR19) {
			int VAR30;
			FUN10();
			if (FUN7(FUN8(VAR6)))
				goto VAR31;

			FUN2(VAR11.VAR15 < VAR18 ||
				  VAR11.VAR15 + VAR32 >
				  VAR19);
			VAR30 = FUN15(VAR6, VAR8,
						  VAR11.VAR15,
						  VAR3);
			
			VAR11.VAR15 += VAR32;
			VAR9 += VAR33;
			if (VAR30)
				
				goto VAR34;
			if (VAR9 >= VAR1)
				goto VAR31;
		}
	}
VAR31:
	FUN16(&VAR6->VAR16); 
VAR34:

	FUN17(&VAR10);
	FUN2(VAR11.VAR4 != VAR4);
	
	if (FUN8(VAR6) || !VAR8) {
		
		if (VAR4->VAR14.VAR13 != &VAR11.VAR12) {
			VAR11.VAR4 = FUN4(
				VAR4->VAR14.VAR13,
				struct VAR4, VAR14);
			VAR11.VAR15 = 0;
		} else {
			VAR11.VAR4 = NULL;
			VAR35++;
		}

		FUN18(VAR4);
	}

	return VAR9;
}