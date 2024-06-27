VAR1
(
		OUT	VAR2	*VAR3,
	IN		char					*VAR4,
	IN		char					*VAR5,
	IN		int						VAR6
)
{
	VAR7	*VAR8 = NULL;
	hsm_com_errno_t			VAR9 = VAR10;
	

	if((strlen(VAR4) > (VAR11 - 1)) ||
	   (strlen(VAR4) == 0)){
		VAR9 = VAR12;
		goto VAR13;
	}

	if((strlen(VAR5) > (VAR11 - 1)) ||
	   (strlen(VAR5) == 0)){
		VAR9 = VAR12;
		goto VAR13;
	}


	if((VAR8 = calloc(1,sizeof(VAR7))) == NULL)
	{
		VAR9 = VAR14;
		goto VAR13;
	}

	if((VAR8->VAR15.VAR16 = malloc(VAR6)) == NULL) 
	{
		VAR9 = VAR14;
		goto VAR13;
	}

	if((VAR8->VAR17 = malloc(VAR6)) == NULL) 
	{
		VAR9 = VAR14;
		goto VAR13;
	}

	if((VAR8->VAR18 = malloc(VAR6)) == NULL) 
	{
		VAR9 = VAR14;
		goto VAR13;
	}

	VAR8->VAR15.VAR19 = 0;
	VAR8->VAR15.VAR20 = VAR6;
	VAR8->VAR21 = VAR6;
	VAR8->VAR22 = 1;


 	strcpy(VAR8->VAR23,VAR4);
 	strcpy(VAR8->VAR24,VAR5);
 










 
 	VAR8->VAR25 = VAR26;
 
	*VAR3 = VAR8;

	return VAR9;

VAR13:
	if(VAR8)
	{
		if (VAR8->VAR15.VAR16) {
			free(VAR8->VAR15.VAR16);
		}
		if (VAR8->VAR17) {
			free(VAR8->VAR17);
		}
		free(VAR8);
	}

	return VAR9;

}