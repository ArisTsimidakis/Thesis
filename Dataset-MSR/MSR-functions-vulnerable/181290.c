static int FUN1(struct VAR1 *VAR2, int VAR3,
 	const struct VAR4 *VAR5)
 {
	int VAR6,VAR7;
	int VAR8;
	int VAR9;
	int VAR10=0;
	iw_tmpsample VAR11;
	iw_tmpsample VAR12 = 0.0;
	VAR13 *VAR14 = NULL; 
	VAR13 *VAR15 = NULL; 
	
	int VAR16 = 0;
	int VAR17;
	int VAR18;
	int VAR19;
	double VAR20=0.0;
	int VAR21 = 0; 
	struct VAR22 *VAR23 = NULL;
	int VAR24, VAR25;
	struct VAR26 *VAR27;
	struct VAR28 *VAR29;

	VAR13 *VAR30 = NULL;
 	VAR13 *VAR31 = NULL;
 	int VAR32;
 	int VAR33;


 
 	VAR32 = VAR2->VAR34;
 	VAR33 = VAR2->VAR35.VAR36;
 
 	VAR27 = &VAR2->VAR37[VAR3];
 	VAR17 = VAR27->VAR38;

	VAR29 = &VAR2->VAR39[VAR17];




























 	VAR18 = (VAR27->VAR40==VAR41);
 	VAR19 = FUN2(VAR2);
 
	VAR14 = (VAR13*)FUN3(VAR2, VAR32 * sizeof(VAR13));
	VAR30 = VAR14;

	
	VAR15 = (VAR13*)FUN3(VAR2, VAR33 * sizeof(VAR13));
	if(!VAR15) goto VAR42;
	VAR31 = VAR15;

	
	if(VAR2->VAR43 && !VAR18 &&
	   VAR29->VAR24==VAR44 &&
	   VAR29->VAR45==0)
	{
		VAR29->VAR46 = 1;
	}
	else {
		VAR29->VAR46 = 0;
	}

	
	VAR24 = VAR29->VAR24;
	VAR25 = VAR29->VAR25;
	if(VAR24==VAR47) {
		
		
		if(VAR25==VAR48 && VAR29->VAR40!=VAR41)
		{
			FUN4(VAR2->VAR49,VAR2->VAR50);
		}
		else {
			FUN4(VAR2->VAR49,VAR2->VAR50+VAR29->VAR40);
		}
	}

	
	if(VAR17>=0 && VAR29->VAR24==VAR51) {
		VAR16 = 1;
		for(VAR6=0;VAR6<VAR2->VAR35.VAR36;VAR6++) {
			for(VAR9=0;VAR9<VAR52;VAR9++) {
				VAR2->VAR53[VAR9][VAR6] = 0.0;
			}
		}
	}

	VAR23=&VAR2->VAR54[VAR55];

	
	
	if(!VAR23->VAR56) {
		VAR23->VAR56 = FUN5(VAR2,VAR23,VAR27->VAR40,
			VAR32, VAR33);
		if(!VAR23->VAR56) goto VAR42;
	}

	for(VAR7=0;VAR7<VAR2->VAR57;VAR7++) {

		
		
		
		if(VAR18) {
			for(VAR6=0;VAR6<VAR32;VAR6++) {
				VAR14[VAR6] = VAR2->VAR58[((VAR59)VAR7)*VAR2->VAR34+VAR6];
			}
		}
		else {
			for(VAR6=0;VAR6<VAR32;VAR6++) {
				VAR14[VAR6] = VAR2->VAR60[((VAR59)VAR7)*VAR2->VAR34+VAR6];
			}
		}

		
		FUN6(VAR23->VAR56,VAR30,VAR31);

		if(VAR2->VAR61)
			FUN7(VAR2,VAR31,VAR33);

		
		if(VAR18 && VAR15 && VAR2->VAR62) {
			for(VAR6=0;VAR6<VAR33;VAR6++) {
				VAR2->VAR62[((VAR59)VAR7)*VAR2->VAR35.VAR36+VAR6] = (VAR63)VAR15[VAR6];
			}
		}

		

		if(VAR17 == -1) {
			
			
			
			goto VAR64;
		}

		for(VAR8=0;VAR8<VAR2->VAR35.VAR36;VAR8++) {
			
			
			if(VAR16 && (VAR7%2))
				VAR6=VAR2->VAR35.VAR36-1-VAR8;
			else
				VAR6=VAR8;

			VAR11 = VAR31[VAR6];

			if(VAR2->VAR65) {
				VAR21 = (((VAR2->VAR66[VAR55]+VAR6)/VAR2->VAR67)%2) !=
					(((VAR2->VAR66[VAR68]+VAR7)/VAR2->VAR67)%2);
			}

			if(VAR19) {
				VAR20 = VAR21 ? VAR2->VAR69 : VAR2->VAR70;
			}

			if(VAR27->VAR71) {
				
				VAR12 = VAR2->VAR62[((VAR59)VAR7)*VAR2->VAR35.VAR36 + VAR6];

				if(VAR12!=0.0) {
					VAR11 /= VAR12;
				}

				if(VAR2->VAR72 && VAR2->VAR73==VAR74) {
					
					double VAR75;
					VAR75 = VAR21 ? VAR29->VAR76 : VAR29->VAR77;

					if(VAR19) {
						VAR11 = VAR11*VAR12 + VAR75*VAR20*(1.0-VAR12);
					}
					else {
						VAR11 = VAR11*VAR12 + VAR75*(1.0-VAR12);
					}
				}
			}
			else if(VAR18 && VAR19) {
				
				VAR11 = VAR11 + VAR20*(1.0-VAR11);
			}

			if(VAR2->VAR35.VAR78==VAR79)
				FUN8(VAR2,VAR11,VAR6,VAR7,VAR17,VAR5);
			else
				FUN9(VAR2,VAR11,VAR6,VAR7,VAR17,VAR5);

		}

		if(VAR16) {
			
			
			
			for(VAR6=0;VAR6<VAR2->VAR35.VAR36;VAR6++) {
				
				for(VAR9=0;VAR9<VAR52-1;VAR9++) {
					VAR2->VAR53[VAR9][VAR6] = VAR2->VAR53[VAR9+1][VAR6];
				}
				
				VAR2->VAR53[VAR52-1][VAR6] = 0.0;
			}
		}

VAR64:
		;
	}

	VAR10=1;

VAR42:
	if(VAR23 && VAR23->VAR80 && VAR23->VAR56) {
		
		
		FUN10(VAR23->VAR56);
		VAR23->VAR56 = NULL;
	}
	if(VAR14) FUN11(VAR2,VAR14);
	if(VAR15) FUN11(VAR2,VAR15);

	return VAR10;
}