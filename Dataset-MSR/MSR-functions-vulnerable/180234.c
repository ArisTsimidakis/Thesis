FUN1(VAR1, VAR2)
{
	VAR3 *VAR4 = (VAR3*)FUN2(FUN3() VAR5);
	char VAR6 = VAR4->VAR7.VAR8.VAR6, VAR9 = VAR4->VAR7.VAR8.VAR9, VAR10 = VAR4->VAR7.VAR8.VAR10;
 	char *VAR11 = NULL, *VAR12 = NULL, *VAR13 = NULL;
 	int VAR14 = 0, VAR15 = 0, VAR16 = 0, VAR17;
 	VAR18 *VAR19 = NULL;

	


 	if (FUN4(FUN5() VAR5, "", &VAR19, &VAR11, &VAR14, &VAR12, &VAR15, &VAR13, &VAR16) == VAR20) {
 		switch(FUN5())
 		{
		case 4:
			if (VAR16 != 1) {
				FUN6(NULL VAR5, VAR21, "");
				VAR22;
			}
			VAR10 = VAR13[0];
			
		case 3:
			if (VAR15 != 1) {
				FUN6(NULL VAR5, VAR21, "");
				VAR22;
			}
			VAR9 = VAR12[0];
			
		case 2:
			if (VAR14 != 1) {
				FUN6(NULL VAR5, VAR21, "");
				VAR22;
			}
			VAR6 = VAR11[0];
			
		case 1:
		case 0:
			break;
		}
		VAR17 = FUN7(VAR4->VAR7.VAR8.VAR23, VAR19, VAR6, VAR9, escape VAR5);
		FUN8(VAR17);
	}
}