int FUN1(int VAR1, const unsigned char *VAR2, int VAR3,
 		const unsigned char *VAR4, int VAR5, VAR6 *VAR7)
  	{
 	VAR8 *VAR9;






 	int VAR10=-1;
 
 	VAR9 = FUN2();
 	if (VAR9 == NULL) return(VAR10);

	if (FUN3(&VAR9, &VAR4, VAR5) == NULL) goto VAR11;










 	VAR10=FUN4(VAR2, VAR3, VAR9, VAR7);
 VAR11:










 	FUN5(VAR9);
 	return(VAR10);
 	}