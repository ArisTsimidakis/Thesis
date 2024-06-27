FUN1 (VAR1 *VAR2, const float *VAR3, sf_count_t VAR4)
{	VAR5* VAR6 = (VAR5*) VAR2->VAR7 ;
	void (*VAR8) (const float *, VAR9 *, int, int) ;
	int VAR10, VAR11, VAR12 ;
	sf_count_t	VAR13 = 0 ;
	VAR9* VAR14 = VAR6->VAR15 ;

	switch (FUN2 (VAR2->VAR16.VAR17))
	{	case VAR18 :
			VAR8 = (VAR2->VAR19) ? VAR20 : VAR21 ;
			break ;
		case VAR22 :
			VAR8 = (VAR2->VAR19) ? VAR23 : VAR24 ;
			break ;
		case VAR25 :
			VAR8 = (VAR2->VAR19) ? VAR26 : VAR27 ;
			break ;
		default :
			return -1 ;
		} ;

	VAR10 = VAR28 / (sizeof (VAR9) * VAR2->VAR16.VAR29) ;
	VAR10 *= VAR2->VAR16.VAR29 ;

	while (VAR4 > 0)
	{	VAR11 = (VAR4 >= VAR10) ? VAR10 : (int) VAR4 ;
		FUN3 (VAR3 + VAR13, VAR14, VAR11, VAR2->VAR30) ;
		if (FUN4 (VAR6->VAR31, VAR14, VAR11 / VAR2->VAR16.VAR29))
			VAR12 = VAR11 ;
		else
			break ;
		VAR13 += VAR12 ;
		if (VAR12 < VAR11)
			break ;

		VAR4 -= VAR12 ;
		} ;

	return VAR13 ;
}