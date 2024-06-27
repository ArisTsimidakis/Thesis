static VAR1 FUN1(int VAR2, void *VAR3)
{
	struct VAR4 *VAR5;
	struct VAR6 *VAR6;
	unsigned long VAR7;
	unsigned char VAR8, VAR9;
	unsigned int VAR10;
	unsigned int VAR11;
	bool VAR12;
	int VAR13 = 1;

	FUN2(&VAR14, VAR7);

	VAR8 = FUN3();
	if (FUN4(~VAR8 & VAR15)) {
		FUN5(&VAR14, VAR7);
		if (VAR2)
			FUN6("", VAR2);
		VAR13 = 0;
		goto VAR16;
	}

	VAR9 = FUN7();

	if (VAR17 && (VAR8 & VAR18)) {
		static unsigned long VAR19;
		static unsigned char VAR20;

		VAR10 = 0;
		if (VAR8 & VAR21) {
			FUN6("",
			    VAR8, VAR9);


			switch (VAR9) {
				default:
					if (FUN8(VAR22, VAR19 + VAR23/10)) {
						VAR8 = VAR20;
						break;
					}
					
				case 0xfc:
				case 0xfd:
				case 0xfe: VAR10 = VAR24; VAR9 = 0xfe; break;
				case 0xff: VAR10 = VAR25;  VAR9 = 0xfe; break;
			}
		}

		VAR11 = VAR26 + ((VAR8 >> 6) & 3);
		VAR20 = VAR8;
		VAR19 = VAR22;
	} else {

		VAR10 = ((VAR8 & VAR27) ? VAR25 : 0) |
		      ((VAR8 & VAR28 && !VAR29) ? VAR24 : 0);

		VAR11 = (VAR8 & VAR18) ?
				VAR30 : VAR31;
	}

	VAR5 = &VAR32[VAR11];
	VAR6 = VAR5->VAR33 ? VAR5->VAR6 : NULL;

	FUN9(VAR5->VAR34, VAR9, "",
		   VAR11, VAR2,
		   VAR10 & VAR25 ? "" : "",
		   VAR10 & VAR24 ? "" : "");

	VAR12 = FUN10(VAR9, VAR8, VAR6);
 
 	FUN5(&VAR14, VAR7);
 

	if (FUN11(VAR5->VAR33 && !VAR12))


 		FUN12(VAR6, VAR9, VAR10);
 
  VAR16:
	return FUN13(VAR13);
}