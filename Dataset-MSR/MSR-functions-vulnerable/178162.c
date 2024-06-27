int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, int VAR5)
{
	struct VAR6 *VAR7 = &VAR2->VAR7;
	struct VAR8 *VAR9 = &VAR2->VAR7.VAR4;

	if (FUN2(VAR9->VAR10 < VAR11))
		return 0;

	if ((VAR4->VAR12 & (VAR13|VAR14|VAR15|VAR16)) ||
	    ((VAR4->VAR12 & VAR17) && (VAR4->VAR18 || VAR4->VAR19->VAR20))) {
		
		VAR9->VAR10 = VAR21;
		FUN3(VAR2);
		return 1;
	}

	

	if (VAR9->VAR22 > 0) {
		
		FUN4(VAR4->VAR19, VAR9->VAR22);
		VAR9->VAR23 -= VAR9->VAR22;
		VAR9->VAR22 = 0;

		
		if (VAR9->VAR10 < VAR24) {
			if (VAR9->VAR12 & VAR25)
				VAR9->VAR10 = VAR24;
			else
				VAR9->VAR10 = VAR26;
		}
	}

	
	if (FUN2(VAR9->VAR12 & VAR27)) {
		if (!(VAR2->VAR28->VAR12 & VAR29)) {
			FUN5(VAR4);
			VAR4->VAR12 |= VAR30;
			goto VAR31;
		}
		VAR9->VAR12 &= ~VAR27;
	}

	
	FUN6(VAR4);

	if (VAR4->VAR18) {
		
		VAR4->VAR12 |= VAR32;
		goto VAR31;
	}

	while (1) {
		if (VAR9->VAR10 == VAR26) {
			
			
			if (VAR9->VAR33 > VAR4->VAR19->VAR34 - VAR9->VAR23) {
				VAR4->VAR12 |= VAR32;
				goto VAR31;
			}
			VAR9->VAR23 += VAR9->VAR33;
			VAR9->VAR33 = 0;

			
			if (VAR9->VAR12 & VAR25)
				VAR9->VAR10 = VAR35;
			else
				VAR9->VAR10 = VAR36;
		}
		else if (VAR9->VAR10 == VAR24) {
			
			int VAR37 = FUN7(VAR9);

			if (VAR37 == 0)
				goto VAR31;
			else if (VAR37 < 0) {
				FUN8(VAR2);
				if (VAR9->VAR38 >= 0)
					FUN9(&VAR2->VAR39->VAR40, VAR2, VAR9, VAR24, VAR2->VAR41);
				goto VAR42;
			}
			
		}
		else if (VAR9->VAR10 == VAR35) {
			
			int VAR37 = FUN10(VAR9);

			if (VAR37 == 0)
				goto VAR31;
			else if (VAR37 < 0) {
				FUN8(VAR2);
				if (VAR9->VAR38 >= 0)
					FUN9(&VAR2->VAR39->VAR40, VAR2, VAR9, VAR35, VAR2->VAR41);
				goto VAR42;
			}
			
		}
		else if (VAR9->VAR10 == VAR43) {
			int VAR37 = FUN11(VAR9);

			if (VAR37 == 0)
				goto VAR31;
			else if (VAR37 < 0) {
				FUN8(VAR2);
				if (VAR9->VAR38 >= 0)
					FUN9(&VAR2->VAR39->VAR40, VAR2, VAR9, VAR43, VAR2->VAR41);
				goto VAR42;
			}
			
		}
		else {
			int VAR44 = VAR9->VAR10;

			

			
                        FUN4(VAR4->VAR19, VAR9->VAR23);

                       if (FUN2(!(VAR2->VAR28->VAR12 & VAR29)))


                                VAR9->VAR22 -= VAR9->VAR23;
                        VAR9->VAR23 = 0;
 
			
			if ((VAR7->VAR12 & VAR45) == VAR46 ||
			    (VAR7->VAR12 & VAR45) == VAR47)
				FUN12(VAR4);
			if (FUN3(VAR2)) {
				
				if (FUN2(VAR9->VAR10 == VAR21)) {
					if (VAR4->VAR12 & VAR17) {
						
						goto VAR48;
					}
					if (VAR9->VAR38 >= 0)
						FUN9(&VAR2->VAR39->VAR40, VAR2, VAR9, VAR44, VAR2->VAR41);
					goto VAR42;
				}
				return 1;
			}

			
			if (VAR2->VAR41->VAR49 & VAR50) {
				FUN13(VAR4);
				FUN6(VAR4);
			}
			else if (VAR2->VAR7.VAR51 == VAR52) {
				
				FUN13(VAR4);
			}

			return 0;
		}
	}

  VAR31:
        
        FUN4(VAR4->VAR19, VAR9->VAR23);

       if (FUN2(!(VAR2->VAR28->VAR12 & VAR29)))


                VAR9->VAR22 -= VAR9->VAR23 + FUN14(VAR9->VAR33, VAR4->VAR19->VAR34);
 
        VAR9->VAR23 = 0;
	VAR9->VAR33 -= FUN15(VAR4, VAR9->VAR33);

	
	if (VAR4->VAR12 & VAR53) {
		if (!(VAR2->VAR12 & VAR54))
			VAR2->VAR12 |= VAR55;
		if (!(VAR2->VAR12 & VAR56)) {
			if (VAR7->VAR57.VAR10 < VAR21)
				VAR2->VAR12 |= VAR58;
			else
				VAR2->VAR12 |= VAR59;
		}

		VAR2->VAR39->VAR60.VAR61++;
		VAR2->VAR41->VAR62.VAR61++;
		if (FUN16(VAR2->VAR63))
			FUN16(VAR2->VAR63)->VAR64.VAR61++;

		goto VAR65;
	}

	
	if (VAR4->VAR12 & VAR17)
		goto VAR48;

	
	if (VAR9->VAR12 & VAR25)
		FUN12(VAR4);

	
	if (VAR9->VAR12 & VAR25)
		VAR4->VAR12 |= VAR66;

	return 0;

 VAR42: 
	VAR2->VAR39->VAR60.VAR67++;
	if (VAR2->VAR68->VAR64)
		VAR2->VAR68->VAR64->VAR67++;

 VAR65:
	
	FUN4(VAR4->VAR19, VAR9->VAR23);
	VAR9->VAR23 = 0;

	VAR7->VAR4.VAR10 = VAR21;
	if (VAR7->VAR69) {
		
		FUN17(VAR4->VAR70, NULL);
	} else {
		VAR7->VAR69 = 400;
		FUN17(VAR4->VAR70, FUN18(VAR2, VAR71));
	}
	VAR4->VAR72 = 0;
	VAR2->VAR28->VAR72 = 0; 

	if (!(VAR2->VAR12 & VAR54))
		VAR2->VAR12 |= VAR73;
	if (!(VAR2->VAR12 & VAR56)) {
		if (VAR7->VAR57.VAR10 < VAR21)
			VAR2->VAR12 |= VAR58;
		else
			VAR2->VAR12 |= VAR59;
	}
	return 0;

 VAR48:
	VAR7->VAR4.VAR10 = VAR21;
	if (VAR7->VAR69) {
		
		FUN17(VAR4->VAR70, NULL);
	} else {
		VAR7->VAR69 = 502;
		FUN17(VAR4->VAR70, FUN18(VAR2, VAR74));
	}
	VAR4->VAR72 = 0;
	VAR2->VAR28->VAR72 = 0; 

	VAR2->VAR39->VAR60.VAR75++;
	VAR2->VAR41->VAR62.VAR75++;
	if (FUN16(VAR2->VAR63))
		FUN16(VAR2->VAR63)->VAR64.VAR75++;

	if (!(VAR2->VAR12 & VAR54))
		VAR2->VAR12 |= VAR76;
	if (!(VAR2->VAR12 & VAR56)) {
		if (VAR7->VAR57.VAR10 < VAR21)
			VAR2->VAR12 |= VAR58;
		else
			VAR2->VAR12 |= VAR59;
	}
	return 0;
}