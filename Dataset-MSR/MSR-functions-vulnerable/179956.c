FUN1 (VAR1 *VAR2)
{	SD2_RSRC VAR3 ;
	int VAR4, VAR5, VAR6 = 0 ;

	FUN2 (VAR2, VAR7) ;

	memset (&VAR3, 0, sizeof (VAR3)) ;

	VAR3.VAR8 = FUN3 (VAR2) ;
	FUN4 (VAR2, "", VAR3.VAR8, VAR3.VAR8) ;

	if (VAR3.VAR8 > FUN5 (VAR2->VAR9))
	{	VAR3.VAR10 = calloc (1, VAR3.VAR8) ;
		VAR3.VAR11 = VAR7 ;
		}
	else
	{
		VAR3.VAR10 = VAR2->VAR9 ;
		VAR3.VAR11 = VAR12 ;
		} ;

	
	FUN6 (VAR3.VAR10, VAR3.VAR8, 1, VAR2) ;

	
	VAR2->VAR13 = VAR2->VAR14 = VAR3.VAR8 ;

	VAR3.VAR15 = FUN7 (&VAR3, 0) ;
	VAR3.VAR16 = FUN7 (&VAR3, 4) ;
	VAR3.VAR17 = FUN7 (&VAR3, 8) ;
	VAR3.VAR18 = FUN7 (&VAR3, 12) ;

	if (VAR3.VAR15 == 0x51607 && VAR3.VAR16 == 0x20000)
	{	FUN4 (VAR2, "") ;
		VAR3.VAR15 = FUN7 (&VAR3, 0x52 + 0) + 0x52 ;
		VAR3.VAR16 = FUN7 (&VAR3, 0x52 + 4) + 0x52 ;
		VAR3.VAR17 = FUN7 (&VAR3, 0x52 + 8) ;
		VAR3.VAR18 = FUN7 (&VAR3, 0x52 + 12) ;
		} ;

	FUN4 (VAR2, ""
				"",
				VAR3.VAR15, VAR3.VAR16, VAR3.VAR17, VAR3.VAR18) ;

	if (VAR3.VAR15 > VAR3.VAR8)
	{	FUN4 (VAR2, "", VAR3.VAR15, VAR3.VAR15) ;
		VAR6 = VAR19 ;
		goto VAR20 ;
		} ;

	if (VAR3.VAR16 > VAR3.VAR8)
	{	FUN4 (VAR2, "") ;
		VAR6 = VAR21 ;
		goto VAR20 ;
		} ;

	if (VAR3.VAR17 > VAR3.VAR8)
	{	FUN4 (VAR2, "") ;
		VAR6 = VAR22 ;
		goto VAR20 ;
		} ;

	if (VAR3.VAR18 > VAR3.VAR8)
	{	FUN4 (VAR2, "") ;
		VAR6 = VAR23 ;
		goto VAR20 ;
		} ;

	if (VAR3.VAR15 + VAR3.VAR17 != VAR3.VAR16 || VAR3.VAR16 + VAR3.VAR18 != VAR3.VAR8)
	{	FUN4 (VAR2, "") ;
		VAR6 = VAR24 ;
		goto VAR20 ;
		} ;

	if (VAR3.VAR16 + 28 >= VAR3.VAR8)
	{	FUN4 (VAR2, "", VAR3.VAR16, VAR3.VAR8) ;
		VAR6 = VAR24 ;
		goto VAR20 ;
		} ;

	VAR3.VAR25 = VAR3.VAR16 + FUN8 (&VAR3, VAR3.VAR16 + 26) ;
	if (VAR3.VAR25 > VAR3.VAR8)
	{	FUN4 (VAR2, "", VAR3.VAR25) ;
		VAR6 = VAR24 ;
		goto VAR20 ;
		} ;
 
 	VAR3.VAR26 = VAR3.VAR16 + 30 ;
 










 	VAR3.VAR27 = FUN8 (&VAR3, VAR3.VAR16 + 28) + 1 ;
 	if (VAR3.VAR27 < 1)
 	{	FUN4 (VAR2, "") ;
		VAR6 = VAR24 ;
		goto VAR20 ;
		} ;

	VAR3.VAR28 = VAR3.VAR26 + VAR3.VAR27 * 8 ;
	if (VAR3.VAR28 < 0 || VAR3.VAR28 > VAR3.VAR8)
	{	FUN4 (VAR2, "", VAR3.VAR28) ;
		VAR6 = VAR24 ;
		goto VAR20 ;
		} ;
 
 	VAR3.VAR29 = -1 ;
 	for (VAR4 = 0 ; VAR4 < VAR3.VAR27 ; VAR4 ++)

	{	VAR5 = FUN9 (&VAR3, VAR3.VAR26 + VAR4 * 8) ;












 
 		if (VAR5 == VAR30)
 		{	VAR3.VAR29 = VAR4 ;
			VAR3.VAR31 = FUN8 (&VAR3, VAR3.VAR26 + VAR4 * 8 + 4) + 1 ;
			VAR6 = FUN10 (VAR2, &VAR3) ;
			goto VAR20 ;
			} ;
		} ;

	FUN4 (VAR2, "") ;
	VAR6 = VAR24 ;

VAR20 :

	FUN2 (VAR2, VAR12) ;

	if (VAR3.VAR11)
		free (VAR3.VAR10) ;

	return VAR6 ;
}