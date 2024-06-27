char *FUN1(const VAR1 *VAR2, M_fs_system_t VAR3)
{
	VAR1 *VAR4;
	const char   *VAR5;
	char         *VAR6;
	size_t        VAR7;
	size_t        VAR8;
	size_t        VAR9;

	if (VAR2 == NULL) {
		return NULL;
	}
	VAR7 = FUN2(VAR2);
	if (VAR7 == 0) {
		return NULL;
	}

 	VAR3 = FUN3(VAR3);
 
 	


 	VAR4 = FUN4(VAR2);
 	for (VAR8=VAR7-1; VAR8>0; VAR8--) {
 		VAR5 = FUN5(VAR4, VAR8);
		if (VAR5 == NULL || *VAR5 == '') {
			FUN6(VAR4, VAR8);
		}
	}

	VAR7 = FUN2(VAR4);

	
	VAR5 = FUN5(VAR4, 0);
	if (VAR7 == 1 && (VAR5 == NULL || *VAR5 == '')) {
		FUN7(VAR4);
		if (VAR3 == VAR10) {
			return FUN8("");
		}
		return FUN8("");
	}

	
	if (VAR3 == VAR10 && VAR7 > 0) {
		VAR5  = FUN5(VAR4, 0);
		
		VAR9 = (VAR7 == 1) ? 2 : 1;
		
		if (VAR5 != NULL && *VAR5 == '') {
			for (VAR8=0; VAR8<VAR9; VAR8++) {
				FUN9(VAR4, "", 0);
			}
		} else if (FUN10(VAR5, VAR3) && VAR7 == 1) {
			
			FUN9(VAR4, "", 1);
		}
	}

	VAR6 = FUN11(VAR4, (unsigned char)FUN12(VAR3));
	FUN7(VAR4);
	return VAR6;
}