FUN1 (VAR1 *VAR2, char const *VAR3, ...)
{	va_list			VAR4 ;
	VAR5		*VAR6, VAR7 ;
	unsigned char	*VAR8, VAR9 [16] ;
	unsigned int 	*VAR10, VAR11 ;
	unsigned short	*VAR12 ;
	char			*VAR13 ;
 	float			*VAR14 ;
 	double			*VAR15 ;
 	char			VAR16 ;

	int				VAR17 = 0, VAR18 ;


 
 	if (! VAR3)
 		return FUN2 (VAR2) ;
 
 	FUN3 (VAR4, VAR3) ;
 
 	while ((VAR16 = *VAR3++))

	{	switch (VAR16)










 		{	case '' : 
 					VAR2->VAR19 = VAR20 ;
 					break ;

			case '' : 
					VAR2->VAR19 = VAR21 ;
					break ;
 
 			case '' : 
 					VAR10 = FUN4 (VAR4, unsigned int*) ;


 					VAR8 = (unsigned char*) VAR10 ;
 					VAR17 += FUN5 (VAR2, VAR8, sizeof (int)) ;
 					*VAR10 = FUN6 (VAR8) ;
 					break ;
 
 			case '' :
 					VAR10 = FUN4 (VAR4, unsigned int*) ;


 					VAR8 = (unsigned char*) VAR10 ;
 					VAR17 += FUN5 (VAR2, VAR9, sizeof (VAR9)) ;
 					{	int VAR22 ;
						VAR11 = 0 ;
						for (VAR22 = 0 ; VAR22 < 16 ; VAR22++)
							VAR11 ^= VAR9 [VAR22] << VAR22 ;
						}
					*VAR10 = VAR11 ;
					break ;

			case '' :
					VAR13 = FUN4 (VAR4, char*) ;
					*VAR13 = 0 ;
					VAR17 += FUN5 (VAR2, VAR13, sizeof (char)) ;
					break ;

			case '' : 
					VAR12 = FUN4 (VAR4, unsigned short*) ;
					*VAR12 = 0 ;
					VAR8 = (unsigned char*) VAR12 ;
					VAR17 += FUN5 (VAR2, VAR8, sizeof (short)) ;
					if (VAR2->VAR19 == VAR21)
						*VAR12 = FUN7 (VAR8) ;
					else
						*VAR12 = FUN8 (VAR8) ;
					break ;

			case '' : 
					VAR10 = FUN4 (VAR4, unsigned int*) ;
					*VAR10 = 0 ;
					VAR17 += FUN5 (VAR2, VAR9, 3) ;
					if (VAR2->VAR19 == VAR21)
						*VAR10 = FUN9 (VAR9) ;
					else
						*VAR10 = FUN10 (VAR9) ;
					break ;

			case '' : 
					VAR10 = FUN4 (VAR4, unsigned int*) ;
					*VAR10 = 0 ;
					VAR8 = (unsigned char*) VAR10 ;
					VAR17 += FUN5 (VAR2, VAR8, sizeof (int)) ;
					if (VAR2->VAR19 == VAR21)
						*VAR10 = FUN11 (VAR8, 0) ;
					else
						*VAR10 = FUN12 (VAR8, 0) ;
					break ;

			case '' : 
					VAR6 = FUN4 (VAR4, VAR5 *) ;
					*VAR6 = 0 ;
					VAR17 += FUN5 (VAR2, VAR9, 8) ;
					if (VAR2->VAR19 == VAR21)
						VAR7 = FUN13 (VAR9, 0) ;
					else
						VAR7 = FUN14 (VAR9, 0) ;
					*VAR6 = VAR7 ;
					break ;

			case '' : 
					VAR14 = FUN4 (VAR4, float *) ;
					*VAR14 = 0.0 ;
					VAR17 += FUN5 (VAR2, VAR14, sizeof (float)) ;
					if (VAR2->VAR19 == VAR21)
						*VAR14 = FUN15 ((unsigned char*) VAR14) ;
					else
						*VAR14 = FUN16 ((unsigned char*) VAR14) ;
					break ;

			case '' : 
					VAR15 = FUN4 (VAR4, double *) ;
					*VAR15 = 0.0 ;
					VAR17 += FUN5 (VAR2, VAR15, sizeof (double)) ;
					if (VAR2->VAR19 == VAR21)
						*VAR15 = FUN17 ((unsigned char*) VAR15) ;
					else
						*VAR15 = FUN18 ((unsigned char*) VAR15) ;
					break ;

			case '' :
					FUN19 (VAR2, "") ;
					
 					break ;
 
 			case '' : 
 					VAR13 = FUN4 (VAR4, char*) ;
 					VAR18 = FUN4 (VAR4, VAR23) ;

					if (VAR18 > 0)

						VAR17 += FUN5 (VAR2, VAR13, VAR18) ;




 					break ;
 
 			case '' :
 					VAR13 = FUN4 (VAR4, char*) ;
 					VAR18 = FUN4 (VAR4, VAR23) ;

					if (VAR18 > 0)

						VAR17 += FUN20 (VAR2, VAR13, VAR18) ;












 					break ;
 
 			case '' :
 					FUN19 (VAR2, "") ;
 					
 					break ;
 

			case '' :

					


 					VAR18 = FUN4 (VAR4, VAR23) ;
 					FUN21 (VAR2, VAR18, VAR24) ;
 					VAR17 = VAR18 ;
 					break ;
 

			case '' :

					


 					VAR18 = FUN4 (VAR4, VAR23) ;

					if (VAR18)

					{	FUN21 (VAR2, VAR18, VAR25) ;

						VAR17 += VAR18 ;

						} ;




 					break ;
 
 			default :
				FUN19 (VAR2, "", VAR16) ;
				VAR2->VAR26 = VAR27 ;
				break ;
			} ;
		} ;

	FUN22 (VAR4) ;

	return VAR17 ;
}