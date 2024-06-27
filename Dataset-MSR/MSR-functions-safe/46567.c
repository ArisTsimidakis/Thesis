int FUN1(off_t VAR1, char *VAR2, size_t VAR3, VAR4 *VAR5, int VAR6) {
	char VAR7[VAR8];
	off_t VAR9,VAR10,VAR11;
	off_t VAR12,VAR13; 
	off_t VAR14;
	off_t VAR15;

	if (!(VAR5->VAR16->VAR17 & VAR18))
		return(FUN2(VAR1, VAR2, VAR3, VAR5, VAR6)); 
	FUN3("", (unsigned int)VAR3, (unsigned long long)VAR1);

	VAR10=VAR1/VAR8 ; VAR11=(VAR1+VAR3-1)/VAR8 ;

	for (VAR9=VAR10;VAR9<=VAR11;VAR9++) {
		VAR14=VAR9*VAR8 ;
		VAR15=VAR1-VAR14 ;
		VAR12=(0<VAR8-VAR15 && VAR3<(VAR19)(VAR8-VAR15)) ?
			VAR3 : (VAR19)VAR8-VAR15;

		if (VAR5->VAR20[VAR9]!=(VAR21)(-1)) { 
			FUN3("", (unsigned long long)VAR9,
			       (unsigned long)(VAR5->VAR20[VAR9])) ;
			FUN4(VAR5->VAR22,
					VAR5->VAR20[VAR9]*VAR8+VAR15);
			if (write(VAR5->VAR22, VAR2, VAR12) != VAR12) return -1 ;
		} else { 
			FUN4(VAR5->VAR22,VAR5->VAR23*VAR8) ;
			VAR5->VAR20[VAR9]=(VAR5->VAR16->VAR17&VAR24)?VAR9:VAR5->VAR23++;
			FUN3("",
			       (unsigned long long)VAR9,
			       (unsigned long)(VAR5->VAR20[VAR9]));
			VAR13=VAR8 ;
			if (FUN5(VAR14, VAR7, VAR13, VAR5))
				return -1;
			memcpy(VAR7+VAR15,VAR2,VAR12) ;
			if (write(VAR5->VAR22, VAR7, VAR8) !=
					VAR8)
				return -1;
		}						    
		VAR3-=VAR12 ; VAR1+=VAR12 ; VAR2+=VAR12 ;
	}
	if (VAR5->VAR16->VAR17 & VAR25) {
		FUN6(VAR5->VAR22);
	} else if (VAR6) {
		
		FUN7(VAR5->VAR22);
	}
	return 0;
}