FUN1(VAR1 *VAR2,
	  const char *VAR3, const char *VAR4, const char *VAR5,
	  int VAR6, int VAR7)
{
	char VAR8[VAR9];
	struct VAR10 *VAR11;
 {
        char VAR8[VAR9];
        struct VAR10 *VAR11;

       VAR12 *VAR13;

       int VAR14, VAR15;




        uid_t VAR16;


        
        VAR11 = FUN2(VAR2, VAR4);
        if (VAR11 == NULL) {
	}
	
	VAR14 = snprintf(VAR8, sizeof(VAR8), "", VAR11->VAR17, VAR3);
	if ((VAR14 >= (int)sizeof(VAR8)) || (VAR14 < 0)) {
		FUN3(VAR2, VAR18,
			   "");
		return VAR19;
	}
	VAR16 = FUN4(VAR11->VAR20);
	VAR13 = fopen(VAR8, "");
                return VAR19;
        }
        VAR16 = FUN4(VAR11->VAR20);

       VAR13 = fopen(VAR8, "");












        VAR15 = VAR21;
        FUN4(VAR16);

       if (VAR13 != NULL) {


























                char VAR22[VAR23], *VAR24;
                
                while (fgets(VAR22, sizeof(VAR22), VAR13) != NULL) {
				   VAR5, VAR8);
		}
		fclose(VAR13);
		return VAR25;
	} else {
		
	        VAR21 = VAR15;
		switch (VAR21) {
		case VAR26:
			if (VAR6 == VAR27) {
				if (VAR7) {
					FUN3(VAR2, VAR28,
						   "",
						   VAR8);
				}
			} else {
				if (VAR7) {
					FUN3(VAR2, VAR28,
						   "",
						   VAR8);
				}
			}
			return VAR6;
		default:
			if (VAR7) {
				FUN3(VAR2, VAR28,
					   "", VAR8);
			}
			return VAR25;
		}
	}
}