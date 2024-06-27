VAR1 FUN1(VAR2* VAR3, VAR4* VAR5, VAR4* VAR6, ttile_t VAR7){

	uint16 VAR8=0;
	tsize_t VAR9=0;
	unsigned char* VAR10=NULL;
	tsize_t VAR11=0;
	unsigned char* VAR12=NULL;
	tsize_t VAR13=0;
	tsize_t read=0;
	uint16 VAR14=0;
	ttile_t VAR15=0;
	
	ttile_t VAR16=0;
	tsize_t VAR17=0;
#ifdef VAR18
	unsigned char* VAR19;
	float* VAR20;
	uint32 VAR21=0;
#endif

	
	if (VAR3->VAR22 != VAR23)
		return(0);

	VAR8 |= FUN2(VAR3->VAR24[VAR3->VAR25], VAR7);
	VAR8 |= FUN3(VAR3->VAR24[VAR3->VAR25], VAR7);

	if( (VAR3->VAR26 == VAR27) && ((VAR8 == 0)
#if FUN4(VAR18) || FUN4(VAR28)
		|| (VAR3->VAR29 == VAR30)
#endif
	)
	){
#ifdef VAR31
		if(VAR3->VAR29 == VAR32){
			VAR10= (unsigned char*) FUN5(VAR3->VAR33);
			if(VAR10==NULL){
				FUN6(VAR34, 
					""
                                        "", 
					(unsigned long) VAR3->VAR33, 
					FUN7(VAR5));
				VAR3->VAR22 = VAR35;
				return(0);
			}
			FUN8(VAR5, VAR7, (VAR36) VAR10, VAR3->VAR33);
			if (VAR3->VAR37==VAR38){
					FUN9(VAR10, VAR3->VAR33);
			}
			FUN10(VAR6, (VAR36) VAR10, VAR3->VAR33);
			FUN11(VAR10);
			return(VAR3->VAR33);
		}
#endif
#ifdef VAR39
		if(VAR3->VAR29 == VAR40){
			VAR10= (unsigned char*) FUN5(VAR3->VAR33);
			if(VAR10==NULL){
				FUN6(VAR34, 
					""
                                        "", 
					(unsigned long) VAR3->VAR33, 
					FUN7(VAR5));
				VAR3->VAR22 = VAR35;
				return(0);
			}
			FUN8(VAR5, VAR7, (VAR36) VAR10, VAR3->VAR33);
			if (VAR3->VAR37==VAR38){
					FUN9(VAR10, VAR3->VAR33);
			}
			FUN10(VAR6, (VAR36) VAR10, VAR3->VAR33);
			FUN11(VAR10);
			return(VAR3->VAR33);
		}
#endif
#ifdef VAR28
		if(VAR3->VAR41 == VAR42){
			if(! VAR3->VAR43){
				FUN6(VAR34, 
					""
                                        "", 
					FUN7(VAR5));
				VAR3->VAR22 = VAR35;
				return(0);
			}
			VAR10=(unsigned char*) FUN5(VAR3->VAR33);
			if(VAR10==NULL){
				FUN6(VAR34, 
					""
                                        "", 
					(unsigned long) VAR3->VAR33, 
					FUN7(VAR5));
				VAR3->VAR22 = VAR35;
				return(0);
			}
			FUN12(VAR10, VAR3->VAR43, VAR3->VAR44);
			if(VAR8!=0){
				if(FUN3(VAR3->VAR24[VAR3->VAR25], VAR7)){
					VAR10[7]=
						(VAR3->VAR24[VAR3->VAR25].VAR45 >> 8) & 0xff;
					VAR10[8]=
						(VAR3->VAR24[VAR3->VAR25].VAR45 ) & 0xff;
				}
				if(FUN2(VAR3->VAR24[VAR3->VAR25], VAR7)){
					VAR10[9]=
						(VAR3->VAR24[VAR3->VAR25].VAR46 >> 8) & 0xff;
					VAR10[10]=
						(VAR3->VAR24[VAR3->VAR25].VAR46 ) & 0xff;
				}
			}
			VAR11=VAR3->VAR44;
			VAR11+=FUN8(VAR5, 
					VAR7, 
					(VAR36) &(((unsigned char*)VAR10)[VAR11]), 
					-1);
			((unsigned char*)VAR10)[VAR11++]=0xff;
			((unsigned char*)VAR10)[VAR11++]=0xd9;
			FUN10(VAR6, (VAR36) VAR10, VAR11);
			FUN11(VAR10);
			return(VAR11);
		}
#endif
#ifdef VAR18
		if(VAR3->VAR41 == VAR47){
			unsigned char VAR48[2];
			uint32 VAR49 = 0;
			VAR10= (unsigned char*) FUN5(VAR3->VAR33);
			if(VAR10==NULL){
				FUN6(VAR34, 
					"" VAR50 ""
                                        "", 
                                          (VAR51) VAR3->VAR33, 
					FUN7(VAR5));
				VAR3->VAR22 = VAR35;
 				return(0);
 			}
 			if(FUN13(VAR5, VAR52, &VAR49, &VAR19) != 0) {

				if (VAR49 >= 4) {


                                         int VAR53;
                     
 					FUN12(VAR10, VAR19, VAR49 - 2);
					VAR11 += VAR49 - 2;
                    
					VAR48[0] = VAR10[VAR11-2];
					VAR48[1] = VAR10[VAR11-1];
					VAR21 = VAR11;
                                        VAR11 -= 2;
                                        VAR53= FUN8(
						VAR5, 
						VAR7, 
						(VAR36) &(((unsigned char*)VAR10)[VAR11]), 
						-1);
                                        if( VAR53 < 0 )
                                        {
                                            FUN11(VAR10);
                                            VAR3->VAR22 = VAR35;
                                            return(0);
                                        }
					VAR11 += VAR53;
                    
                    
					VAR10[VAR21-2]=VAR48[0];
					VAR10[VAR21-1]=VAR48[1];
				}
			}
			FUN10(VAR6, (VAR36) VAR10, VAR11);
			FUN11(VAR10);
			return(VAR11);
		}
#endif
		(void)0;
	}

	if(VAR3->VAR54==VAR55){
		VAR10 = (unsigned char*) FUN5(VAR3->VAR33);
		if(VAR10==NULL){
			FUN6(VAR34, 
				""
                                "", 
				(unsigned long) VAR3->VAR33, 
				FUN7(VAR5));
			VAR3->VAR22 = VAR35;
			return(0);
		}

		read = FUN14(
			VAR5, 
			VAR7, 
			(VAR36) &VAR10[VAR11], 
			VAR3->VAR33);
		if(read==-1){
			FUN6(VAR34, 
				"", 
				VAR7, 
				FUN7(VAR5));
			FUN11(VAR10);
			VAR3->VAR22=VAR35;
			return(0);
		}

	} else {

		if(VAR3->VAR54 == VAR56){
			VAR17=FUN15(VAR5);
			VAR16=FUN16(VAR5);
			
			VAR15=VAR16/VAR3->VAR57;
			VAR10 = (unsigned char*) FUN5(VAR3->VAR33);
			if(VAR10==NULL){
				FUN6(VAR34, 
					""
                                        "", 
					(unsigned long) VAR3->VAR33, 
					FUN7(VAR5));
				VAR3->VAR22 = VAR35;
				return(0);
			}
			VAR12 = (unsigned char*) FUN5(VAR3->VAR33);
			if(VAR12==NULL){
				FUN6(VAR34, 
					""
                                        "", 
					(unsigned long) VAR3->VAR33, 
					FUN7(VAR5));
				VAR3->VAR22 = VAR35;
				return(0);
			}
			VAR13=0;
			for(VAR14=0;VAR14<VAR3->VAR57;VAR14++){
				read = 
					FUN14(VAR5, 
						VAR7 + VAR14*VAR15, 
						(VAR36) &(VAR12[VAR13]), 
						VAR17);
				if(read==-1){
					FUN6(VAR34, 
						"", 
						VAR7 + VAR14*VAR15, 
						FUN7(VAR5));
						FUN11(VAR12);
						FUN11(VAR10);
					VAR3->VAR22=VAR35;
					return(0);
				}
				VAR13+=read;
			}
			FUN17(
				VAR3,
				&(VAR10[VAR11]),
				VAR12, 
				VAR13); 
			VAR11+=VAR13;
			FUN11(VAR12);
		}

		if(VAR10==NULL){
			VAR10 = (unsigned char*) FUN5(VAR3->VAR33);
			if(VAR10==NULL){
				FUN6(VAR34, 
					""
                                        "", 
					(unsigned long) VAR3->VAR33, 
					FUN7(VAR5));
				VAR3->VAR22 = VAR35;
				return(0);
			}
			read = FUN14(
				VAR5, 
				VAR7, 
				(VAR36) &VAR10[VAR11], 
				VAR3->VAR33);
			if(read==-1){
				FUN6(VAR34, 
					"", 
					VAR7, 
					FUN7(VAR5));
				FUN11(VAR10);
				VAR3->VAR22=VAR35;
				return(0);
			}
		}

		if(VAR3->VAR54 & VAR58){
			VAR3->VAR33=FUN18(
				(VAR36)VAR10, 
				VAR3->VAR24[VAR3->VAR25].VAR59
				*VAR3->VAR24[VAR3->VAR25].VAR60);
		}

		if(VAR3->VAR54 & VAR61){
			VAR3->VAR33=FUN19(
				(VAR36)VAR10, 
				VAR3->VAR24[VAR3->VAR25].VAR59
				*VAR3->VAR24[VAR3->VAR25].VAR60);
		}

		if(VAR3->VAR54 & VAR62){
			FUN6(VAR34, 
				"", 
				FUN7(VAR5));
			FUN11(VAR10);
			VAR3->VAR22 = VAR35;
			return(0);
		}

		if(VAR3->VAR54 & VAR63){
			VAR3->VAR33=FUN20(
				(VAR36)VAR10, 
				VAR3->VAR24[VAR3->VAR25].VAR59
				*VAR3->VAR24[VAR3->VAR25].VAR60);
		}
	}

	if(FUN2(VAR3->VAR24[VAR3->VAR25], VAR7) != 0){
		FUN21(
			VAR10, 
			FUN22(VAR5),
			VAR3->VAR24[VAR3->VAR25].VAR59,
			VAR3->VAR24[VAR3->VAR25].VAR46, 
			VAR3->VAR24[VAR3->VAR25].VAR60);
	}


	FUN23(VAR6);
	FUN24(VAR6, VAR64, VAR3->VAR65);
	FUN24(VAR6, VAR66, VAR3->VAR67);
	FUN24(VAR6, VAR68, VAR3->VAR57);
	if(FUN2(VAR3->VAR24[VAR3->VAR25], VAR7) == 0){
		FUN24(
			VAR6, 
			VAR69, 
			VAR3->VAR24[VAR3->VAR25].VAR59);
	} else {
		FUN24(
			VAR6, 
			VAR69, 
			VAR3->VAR24[VAR3->VAR25].VAR46);
	}
	if(FUN3(VAR3->VAR24[VAR3->VAR25], VAR7) == 0){
		FUN24(
			VAR6, 
			VAR70, 
			VAR3->VAR24[VAR3->VAR25].VAR60);
		FUN24(
			VAR6, 
			VAR71, 
			VAR3->VAR24[VAR3->VAR25].VAR60);
	} else {
		FUN24(
			VAR6, 
			VAR70, 
			VAR3->VAR24[VAR3->VAR25].VAR45);
		FUN24(
			VAR6, 
			VAR71, 
			VAR3->VAR24[VAR3->VAR25].VAR45);
	}
	FUN24(VAR6, VAR72, VAR73);
	FUN24(VAR6, VAR74, VAR75);

	switch(VAR3->VAR29){
	case VAR76:
		FUN24(VAR6, VAR77, VAR78);
		break;
#ifdef VAR31
	case VAR32:
		FUN24(VAR6, VAR77, VAR79);
		break;
#endif
#ifdef VAR18
	case VAR30:
		if (VAR3->VAR65==VAR80) {
			uint16 VAR81 = 0, VAR82 = 0;
			if (FUN13(VAR5, VAR83, &VAR81, &VAR82)!=0) {
				if (VAR81 != 0 && VAR82 != 0) {
					FUN24(VAR6, VAR83, VAR81, VAR82);
				}
			}
			if(FUN13(VAR5, VAR84, &VAR20)!=0){
				FUN24(VAR6, VAR84, VAR20);
			}
		}
		FUN24(VAR6, VAR77, VAR47);
		FUN24(VAR6, VAR85, 0); 
		if(VAR3->VAR86 & (VAR87 | VAR88)){
			FUN24(VAR6, VAR64, VAR80);
			if(VAR3->VAR65 != VAR80){
				FUN24(VAR6, VAR89, VAR90);
			} else {
				FUN24(VAR6, VAR89, VAR91);
			}
		}
		if(VAR3->VAR86 & VAR92){
			(void)0;
		}
		if(VAR3->VAR86 & VAR93){
			(void)0;
		}
		if(VAR3->VAR94 != 0){
			FUN24(VAR6, 
				VAR95, 
				VAR3->VAR94);
		}
		break;
#endif
#ifdef VAR39
	case VAR40:
		FUN24(VAR6, VAR77, VAR96);
		if(VAR3->VAR94%100 != 0){
			FUN24(VAR6, 
				VAR97, 
				VAR3->VAR94 % 100);
		}
		if(VAR3->VAR94/100 != 0){
			FUN24(VAR6, 
				VAR98, 
				(VAR3->VAR94 / 100));
		}
		break;
#endif
	default:
		break;
	}

	FUN25(VAR6);
	VAR3->VAR99 = 0;
	VAR11 = FUN26(VAR6, (VAR100) 0, VAR10,
					     FUN27(VAR6)); 
	if (VAR10 != NULL) {
		FUN11(VAR10);
		VAR10 = NULL;
	}
	if (VAR11 == -1) {
		FUN6(VAR34, 
			  "", 
			  FUN7(VAR6));
		VAR3->VAR22 = VAR35;
		return(0);
	}
	
	VAR9 = VAR3->VAR99;
	
	return(VAR9);
}