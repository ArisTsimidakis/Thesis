FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
	u8 VAR5;
	CK_ATTRIBUTE_TYPE VAR6 = VAR4->VAR7;
	const VAR8 *VAR9 = VAR4->VAR10->VAR11;
	const VAR8 *VAR12 = NULL;
	size_t VAR13 = VAR4->VAR10->VAR14;
	VAR15 *VAR16;
	int VAR17,VAR18;
	VAR4->VAR19 = VAR20;
	VAR4->VAR21 = 0;
	VAR4->VAR22 = NULL;

	if (VAR9 == NULL) {
		
		int VAR23 = FUN2(VAR2, (VAR24 *)VAR4->VAR10);
		if (VAR23 < 0) {
			return VAR23;
		}
		VAR9 = VAR4->VAR10->VAR11;
	}

	
	assert(sizeof(VAR15) >= sizeof(VAR25));
	
	if (VAR13 <= sizeof(VAR25)) {
		return VAR26;
	}
	VAR16 = (VAR15 *)VAR9;
	VAR5 = VAR16->VAR27;
	
	if ((VAR5 != VAR28) && (VAR5 != VAR29)) {
		return VAR26;
	}


	
	VAR12 = FUN3(VAR9, VAR5, VAR13);
	if (VAR12 == NULL) {
		return VAR26;
	}
	VAR13 -= (VAR12-VAR9);

	
	VAR17 = FUN4(VAR9, VAR5, VAR13);
 	for (VAR18=0; VAR18 < VAR17; VAR18++) {
 		size_t VAR30 = FUN5(VAR12, VAR5, VAR13);
 		

		if (VAR13 < VAR30) {


 				return VAR26;
 		}
 		
		if (VAR6 == FUN6(VAR12, VAR5, VAR30)) {
			
			return FUN7(VAR12, VAR5, VAR30, VAR4);
		}
		
		VAR13 -= VAR30;
		VAR12 += VAR30;
	}
	
	if (VAR5 == VAR28) {
		unsigned long VAR31 = FUN8(VAR16->VAR32);

		return FUN9(VAR6, VAR31, VAR4);
	}
	return VAR33;
}