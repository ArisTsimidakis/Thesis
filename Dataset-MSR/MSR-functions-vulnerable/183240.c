FUN1	(int VAR1, int VAR2, VAR3 *VAR4, int VAR5)
{	VAR6 	*VAR7 ;

	if ((FUN2 (VAR4->VAR8)) == VAR9)
	{	VAR10 = VAR11 ;
 		return	NULL ;
 		} ;
 

	if ((VAR7 = calloc (1, sizeof (VAR6))) == NULL)


 	{	VAR10 = VAR12 ;
 		return	NULL ;
 		} ;

	FUN3 (VAR7) ;
	FUN4 (VAR7, "") ;

	VAR7->VAR13.VAR2 = VAR2 ;
	FUN5 (VAR7, VAR1) ;
	VAR7->VAR14 = FUN6 (VAR7) ;
	VAR7->VAR15 = FUN7 (VAR7) ;

	if (! VAR5)
		VAR7->VAR13.VAR16 = VAR17 ;

	return FUN8 (VAR7, VAR4) ;
}