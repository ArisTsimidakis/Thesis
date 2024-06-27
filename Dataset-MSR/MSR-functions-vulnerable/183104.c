int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6,
		char *VAR7, VAR8 *VAR9)
	{
	EVP_MD_CTX VAR10;
	const VAR11 *VAR12;
	unsigned char *VAR13,*VAR14=NULL;
	int VAR15= -1,VAR16,VAR17;

	EVP_MD_CTX_init(&VAR10);
	VAR16=FUN2(VAR4->VAR18);
	VAR12=FUN3(FUN4(VAR16));
	if (VAR12 == NULL)
		{
 		FUN5(VAR19,VAR20);
 		goto VAR21;
 		}












 	
 	VAR17=FUN6(VAR7,NULL);
 	VAR14=FUN7((unsigned int)VAR17);
	if (VAR14 == NULL)
		{
		FUN5(VAR19,VAR22);
		goto VAR21;
		}
	VAR13=VAR14;

	FUN6(VAR7,&VAR13);
	VAR15=
		FUN8(&VAR10,VAR12, NULL)
		&& FUN9(&VAR10,(unsigned char *)VAR14,VAR17);

	FUN10(VAR14,(unsigned int)VAR17);
	FUN11(VAR14);

	if (!VAR15)
		{
		FUN5(VAR19,VAR23);
		goto VAR21;
		}
	VAR15 = -1;


	if (FUN12(&VAR10,(unsigned char *)VAR6->VAR7,
			(unsigned int)VAR6->VAR24,VAR9) <= 0)
		{
		FUN5(VAR19,VAR23);
		VAR15=0;
		goto VAR21;
		}
	
	
	VAR15=1;
VAR21:
	FUN13(&VAR10);
	return(VAR15);
	}