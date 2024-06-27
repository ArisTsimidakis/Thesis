FUN1(VAR1)
{
	VAR2 *VAR3;
	char *VAR4;
	int VAR5;
	VAR6 *VAR7;
	unsigned char* VAR8;
	int VAR9, VAR10;

 	if (FUN2(FUN3() VAR11, "", &VAR3, &VAR4, &VAR5) == VAR12) {
 		return;
 	}

	


 	FUN4(VAR7, VAR6 *, &VAR3, -1, "", VAR13);
 	VAR14
 
	if (VAR5 == 0) {
		FUN5(NULL VAR11, VAR15, "");
		VAR16
	}

	
 	if (FUN6(VAR7->VAR17) == 1) { 
 		VAR9 = FUN7(VAR7->VAR17);
 		VAR10 = (((VAR5 - 1) / VAR9) + 1) * VAR9;








 		VAR8 = FUN8(VAR10 + 1);
 		memset(VAR8, 0, VAR10);
 		memcpy(VAR8, VAR4, VAR5);
	} else { 
		VAR10 = VAR5;
		VAR8 = FUN8(VAR10 + 1);
 		memset(VAR8, 0, VAR10);
 		memcpy(VAR8, VAR4, VAR5);
 	}

	


 	FUN9(VAR7->VAR17, VAR8, VAR10);
 	VAR8[VAR10] = '';
 
	FUN10(VAR8, VAR10, 1);
	FUN11(VAR8);
}