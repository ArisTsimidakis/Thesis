int VAR1 FUN1(struct VAR2 *VAR3, unsigned long VAR4,
			    unsigned long VAR5)
{
	struct VAR6 * VAR7;
	struct VAR8 *VAR9 = VAR10->VAR9;
	siginfo_t VAR11;
	int VAR12 = VAR13;
	int VAR14 = 0, VAR15;
	int VAR16 = FUN2(VAR3);
 	int VAR17 = VAR16 == 0x400;

#if !(FUN3(VAR18) || FUN3(VAR19))
	
	if (VAR16 == 0x400)
		VAR5 &= 0x48200000;
	else
		VAR14 = VAR5 & VAR20;
#else
	VAR14 = VAR5 & VAR21;
#endif 

	if (FUN4(VAR3))
		return 0;

	if (FUN5(FUN6(VAR3)))
		return 0;

	
	if (!FUN7(VAR3) && (VAR4 >= VAR22))
		return VAR23;

#if !(FUN3(VAR18) || FUN3(VAR19) || \
			     FUN3(VAR24))
  	if (VAR5 & VAR25) {
		
		FUN8(VAR3, VAR4, VAR5);
		return 0;
	}
#endif

	if (FUN9() || VAR9 == NULL) {
		if (!FUN7(VAR3))
			return VAR23;
		
		FUN10(VAR26 ""
		       "", FUN9(), VAR9);
		FUN10(VAR26 "",
		       VAR3->VAR27, VAR3->VAR28);
 		FUN11("", VAR3, VAR23);
 	}
 

	FUN12(VAR29, 1, 0, VAR3, VAR4);


 
 	
	if (!FUN13(&VAR9->VAR30)) {
		if (!FUN7(VAR3) && !FUN14(VAR3->VAR27))
			goto VAR31;

		FUN15(&VAR9->VAR30);
	}

	VAR7 = FUN16(VAR9, VAR4);
	if (!VAR7)
		goto VAR32;
	if (VAR7->VAR33 <= VAR4)
		goto VAR34;
	if (!(VAR7->VAR35 & VAR36))
		goto VAR32;

	
	if (VAR4 + 0x100000 < VAR7->VAR37) {
		
		struct VAR2 *VAR38 = VAR10->VAR39.VAR3;
		if (VAR38 == NULL)
			goto VAR32;

		
		if (VAR4 + 2048 < VAR38->VAR40[1]
		    && (!FUN7(VAR3) || !FUN17(VAR3)))
			goto VAR32;
	}
	if (FUN18(VAR7, VAR4))
		goto VAR32;

VAR34:
	VAR12 = VAR41;
#if FUN3(VAR42)
	if (VAR5 & 0x95700000)
		
		goto VAR32;
#endif 
#if FUN3(VAR43)
	
	if (VAR5 & 0x40000000) 
		FUN19(VAR4, 0, 0, 0);

        
	if (VAR5 & 0x10000000)
                
		goto VAR32;
#endif 

	if (VAR17) {
#ifdef VAR44
		
		if (VAR5 & VAR45)
			goto VAR32;
#endif 

		
		if (!(VAR7->VAR35 & VAR46) &&
		    (FUN20(VAR47) ||
		     !(VAR7->VAR35 & (VAR48 | VAR49))))
			goto VAR32;
	
	} else if (VAR14) {
		if (!(VAR7->VAR35 & VAR49))
			goto VAR32;
	
	} else {
		
		if (VAR5 & 0x08000000)
			goto VAR32;
		if (!(VAR7->VAR35 & (VAR48 | VAR46 | VAR49)))
			goto VAR32;
	}

	
	VAR15 = FUN21(VAR9, VAR7, VAR4, VAR14 ? VAR50 : 0);
	if (FUN5(VAR15 & VAR51)) {
		if (VAR15 & VAR52)
			goto VAR53;
		else if (VAR15 & VAR54)
			goto VAR55;
		FUN22();
 	}
 	if (VAR15 & VAR56) {
 		VAR10->VAR57++;

		FUN12(VAR58, 1, 0,


 				     VAR3, VAR4);
 #ifdef VAR59
 		if (FUN23(VAR60)) {
			FUN24();
			FUN25()->VAR61 += (1 << VAR62);
			FUN26();
		}
 #endif
 	} else {
 		VAR10->VAR63++;

		FUN12(VAR64, 1, 0,


 				     VAR3, VAR4);
 	}
 	FUN27(&VAR9->VAR30);
	return 0;

VAR32:
	FUN27(&VAR9->VAR30);

VAR31:
	
	if (FUN7(VAR3)) {
		FUN28(VAR23, VAR3, VAR12, VAR4);
		return 0;
	}

	if (VAR17 && (VAR5 & VAR45)
	    && FUN29())
		FUN10(VAR65 ""
		       "",
		       VAR4, FUN30());

	return VAR23;


VAR53:
	FUN27(&VAR9->VAR30);
	if (!FUN7(VAR3))
		return VAR66;
	FUN31();
	return 0;

VAR55:
	FUN27(&VAR9->VAR30);
	if (FUN7(VAR3)) {
		VAR11.VAR67 = VAR68;
		VAR11.VAR69 = 0;
		VAR11.VAR70 = VAR71;
		VAR11.VAR72 = (void VAR73 *)VAR4;
		FUN32(VAR68, &VAR11, VAR10);
		return 0;
	}
	return VAR68;
}