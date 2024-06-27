static int FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4 = (struct VAR3 *)VAR2;
	unsigned long VAR5;
	int VAR6;

	VAR4->VAR7 = VAR8[VAR4->VAR2.VAR9].VAR5;
	VAR4->VAR10 = 0;

	if (VAR4->VAR7 & VAR11) {
		FUN2(VAR4, VAR12, VAR13);
		FUN2(VAR4, VAR12, VAR13 |
				VAR14 | VAR15);
		FUN2(VAR4, VAR12, 0);
	}

	(void) FUN3(VAR4, VAR16);
	(void) FUN3(VAR4, VAR17);
	(void) FUN3(VAR4, VAR18);
	(void) FUN3(VAR4, VAR19);
	
	FUN2(VAR4, VAR19, 0);


	if (!(VAR4->VAR2.VAR5 & VAR20) &&
			(FUN3(VAR4, VAR16) == 0xff)) {
		FUN4("", VAR4->VAR2.VAR21);
		
	}

	if ((!FUN5(VAR4->VAR2.VAR22)) || (VAR4->VAR23==VAR24)) {
		unsigned int VAR25 = VAR4->VAR2.VAR25;

		VAR25 = VAR25 > 6 ? (VAR25 / 2 - 2) : 1;

		VAR4->VAR26.VAR27 = (unsigned long)VAR4;
		FUN6(&VAR4->VAR26, VAR28 + VAR25);
	} 
	else 
	{
		VAR6 = FUN7(VAR4);
		if (VAR6)
			return VAR6;
	}

	FUN2(VAR4, VAR29, VAR30);

	FUN8(&VAR4->VAR2.VAR31, VAR5);
	if ((FUN5(VAR4->VAR2.VAR22))||(VAR4->VAR23==VAR32))
		VAR4->VAR2.VAR33 |= VAR34;

	FUN9(&VAR4->VAR2, VAR4->VAR2.VAR33);
	FUN10(&VAR4->VAR2.VAR31, VAR5);

	
	VAR4->VAR35 = VAR36 | VAR37;
	FUN2(VAR4, VAR38, VAR4->VAR35);

	(void) FUN3(VAR4, VAR16);
	(void) FUN3(VAR4, VAR17);
	(void) FUN3(VAR4, VAR18);
	(void) FUN3(VAR4, VAR19);

	return 0;
}