static int FUN1(struct VAR1 *VAR2, int VAR3,
	struct VAR4 * VAR5,
	struct VAR4 * VAR6)
{
	unsigned long VAR7, VAR8, VAR9;
	int VAR10 = 0;
	cnodeid_t VAR11;
	struct VAR12 *VAR13;
	struct VAR14 *VAR15;

	if (VAR6)
 		FUN2(VAR2, VAR6);
 
 	FUN3(VAR2);

	VAR7 = FUN4(VAR5->VAR16);

	VAR8 = FUN4(VAR5->VAR17);




 
 	if (VAR7 == 0)
 		
		return 0;

	VAR13 = FUN5(sizeof(struct VAR12), VAR18);
	if (VAR13 == NULL)
		return -VAR19;

	if (VAR3 & VAR20) {
		struct timespec VAR15;
 		unsigned long VAR21;
 
 		FUN6(&VAR15);

		VAR21 = FUN4(VAR15);


 		if (VAR7 > VAR21)
 			VAR7 -= VAR21;
 		else
			
			VAR7 = 0;
	}

	
	VAR7 = (VAR7 + VAR22 - 1) / VAR22 + FUN7();
	VAR8 = (VAR8 + VAR22 - 1)  / VAR22;

	
	FUN8();

	VAR11 =  FUN9(FUN10());

	
	FUN11(&VAR23[VAR11].VAR24, VAR9);

	VAR13->VAR25 = VAR2;
	VAR13->VAR26 = FUN10();

	VAR2->VAR27.VAR12.VAR28 = VAR29;
	VAR2->VAR27.VAR12.VAR30 = VAR11;
	VAR2->VAR27.VAR12.VAR31 = VAR8;
	VAR2->VAR27.VAR12.VAR32 = VAR7;

	VAR15 = VAR23[VAR11].VAR33;

	
	FUN12(VAR13);

	if (VAR23[VAR11].VAR33 == VAR15) {
		
		FUN13(&VAR23[VAR11].VAR24, VAR9);
		FUN14();
		return VAR10;
	}

	
	if (VAR15)
		FUN15(FUN16(VAR11), VAR34);

	FUN17(VAR11);

	
	FUN13(&VAR23[VAR11].VAR24, VAR9);

	FUN14();

	return VAR10;
}