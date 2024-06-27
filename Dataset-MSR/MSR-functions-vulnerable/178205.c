static int FUN1(VAR1 *VAR2, char *VAR3, char *VAR4, size_t VAR5, size_t VAR6, int section_index VAR7)
{
	int VAR8;
	int VAR9;
	int VAR10;

#ifdef VAR11
	FUN2(NULL VAR12, VAR2, VAR13, "", FUN3(VAR14), VAR5, VAR5);
#endif
 
        VAR2->VAR15 |= VAR16;
 










        VAR9 = FUN4(VAR3, VAR2->VAR17);
 
        if ((VAR3+2+VAR9*12) > (VAR4+VAR5)) {
		if (!FUN5(VAR2, VAR3 + 2 + 12 * VAR8,
								  VAR4, VAR5, VAR6, VAR14, 1, FUN6(VAR14) VAR18)) {
			return VAR19;
		}
	}
	
	if (VAR14 == VAR20) {
		return VAR21;
	}
	
	VAR10 = FUN7(VAR3+2+12*VAR8, VAR2->VAR17);
	if (VAR10) {
         * Hack to make it process IDF1 I VAR22
         * There are 2 VAR23, the second one holds the FUN8 (0x0201 and 0x0202) to the VAR24








        VAR10 = FUN7(VAR3+2+12*VAR8, VAR2->VAR17);
        if (VAR10) {
                
#ifdef VAR11
			FUN2(NULL VAR12, VAR2, VAR13, "", VAR2->VAR25.VAR26);
#endif
			if (VAR2->VAR25.VAR27 != VAR28
			&&  VAR2->VAR25.VAR26
			&&  VAR2->VAR25.VAR29
			&&  VAR2->VAR30
			) {
				FUN9(VAR2, VAR4, IFDlength VAR18);
			}
			return VAR21;
		} else {
			return VAR19;
		}
	}
	return VAR21;
}