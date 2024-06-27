FUN1(VAR1, VAR2)
{
	char *VAR3, *VAR4;
	size_t VAR5;
	VAR6 *VAR7;
	FUN2();

	if (FUN3(VAR8) && !VAR9->VAR10->VAR11) {
		FUN4(VAR12, 0, "");
                return;
        }
 

       if (FUN5(FUN6(), "", &VAR3, &VAR5) == VAR13) {


                return;
        }
 
	if (FUN7(&VAR9->VAR10->VAR14, VAR3, (VAR15) VAR5)) {
		if (NULL != (VAR7 = FUN8(&VAR9->VAR10->VAR14, VAR3, (VAR15) VAR5))) {
			if (VAR7->VAR16) {
				
				return;
			}

			if (VAR9->VAR10->VAR17) {
				if (VAR13 == FUN9(&(VAR9->VAR10))) {
					FUN4(VAR18, 0, ""%VAR19\"", VAR9->VAR10->VAR3);
					return;
				}
				
				VAR7 = FUN8(&VAR9->VAR10->VAR14, VAR3, (VAR15) VAR5);
			}
			VAR7->VAR20 = 0;
			VAR7->VAR16 = 1;
			
			FUN10(VAR9->VAR10, 0, 0, 0, &VAR4);

			if (VAR4) {
				FUN4(VAR18, 0, "", VAR4);
				FUN11(VAR4);
			}

			VAR21;
		}
	} else {
		VAR22;
	}
}