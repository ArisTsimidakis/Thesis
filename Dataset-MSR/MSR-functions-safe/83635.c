VAR1 FUN1(
         VAR2 *VAR3,
         VAR4 *VAR5,
         VAR6 *VAR7,
         VAR8 *VAR9,
         uint8_t VAR10,
         VAR11 **VAR12 )
{
	uint8_t VAR13[ 4 ];

	VAR14 *VAR15      = NULL;
	static char *VAR16     = "";
	size_t VAR17          = 0;
	size_t VAR18 = 0;
	ssize_t VAR19        = 0;
	ssize_t VAR20  = 0;
	uint32_t VAR21 = 0;

	if( VAR3 == NULL )
	{
		FUN2(
		 VAR12,
		 VAR22,
		 VAR23,
		 "",
		 VAR16 );

		return( -1 );
	}
	if( VAR7 == NULL )
	{
		FUN2(
		 VAR12,
		 VAR22,
		 VAR23,
		 "",
		 VAR16 );

		return( -1 );
	}
	if( VAR9 == NULL )
	{
		FUN2(
		 VAR12,
		 VAR22,
		 VAR23,
		 "",
		 VAR16 );

		return( -1 );
	}
	VAR3->VAR24 = *VAR9;

	VAR19 = FUN3(
	              VAR5,
	              VAR13,
	              sizeof( VAR25 ),
	              VAR12 );

	if( VAR19 != (VAR1) sizeof( VAR25 ) )
	{
		FUN2(
		 VAR12,
		 VAR26,
		 VAR27,
		 "",
		 VAR16 );

		goto VAR28;
	}
	*VAR9    += VAR19;
	VAR20 = VAR19;

	FUN4(
	 VAR13,
	 VAR21 );

	if( VAR21 < 4 )
	{
		FUN2(
		 VAR12,
		 VAR29,
		 VAR30,
		 "",
		 VAR16 );

		goto VAR28;
	}
#if VAR31 <= 4
	if( (VAR32) VAR21 > (VAR32) VAR33 )
	{
		FUN2(
		 VAR12,
		 VAR29,
		 VAR34,
		 "",
		 VAR16 );

		goto VAR28;
	}
#endif
	
	VAR15 = (VAR14 *) FUN5(
	                           sizeof( VAR14 ) * VAR21 );

	if( VAR15 == NULL )
	{
		FUN2(
		 VAR12,
		 VAR35,
		 VAR36,
		 "",
		 VAR16 );

		goto VAR28;
	}
	FUN6(
	 VAR15,
	 VAR21 );

	VAR18 = 4;

	VAR17 = VAR21 - VAR18;

	if( ( (VAR37) *VAR9 + VAR17 ) > VAR7->VAR38 )
	{
		VAR17 = (VAR32) ( VAR7->VAR38 - *VAR9 );
	}
	VAR19 = FUN3(
	              VAR5,
	              &( VAR15[ VAR18 ] ),
	              VAR17,
	              VAR12 );

	if( VAR19 != (VAR1) VAR17 )
	{
		FUN2(
		 VAR12,
		 VAR26,
		 VAR27,
		 "",
		 VAR16 );

		goto VAR28;
	}
	*VAR9       += VAR19;
	VAR18 += VAR19;
	VAR20   += VAR19;

	if( VAR18 < (VAR32) VAR21 )
	{
		if( FUN7(
		     VAR5,
		     (VAR8) sizeof( VAR39 ),
		     VAR40,
		     VAR12 ) == -1 )
		{
			FUN2(
			 VAR12,
			 VAR26,
			 VAR41,
			 "" VAR42 "",
			 VAR16,
			 sizeof( VAR39 ) );

			goto VAR28;
		}
		*VAR9 = (VAR8) sizeof( VAR39 );

		VAR17 = (VAR32) VAR21 - VAR18;

		VAR19 = FUN3(
		              VAR5,
		              &( VAR15[ VAR18 ] ),
		              VAR17,
		              VAR12 );

		if( VAR19 != (VAR1) VAR17 )
		{
			FUN2(
			 VAR12,
			 VAR26,
			 VAR27,
			 "",
			 VAR16 );

			goto VAR28;
		}
		*VAR9     += VAR19;
		VAR20 += VAR19;
	}
#if FUN8( VAR43 )
	if( VAR44 != 0 )
	{
		FUN9(
		 "",
		 VAR16 );
		FUN10(
		 VAR15,
		 (VAR32) VAR21,
		 VAR45 );
	}
#endif
	if( FUN11(
	     &( VAR15[ 4 ] ),
	     VAR46,
	     4 ) == 0 )
	{
		VAR3->VAR47 = VAR48;
	}
	else if( FUN11(
	          &( VAR15[ 4 ] ),
	          VAR49,
	          4 ) == 0 )
	{
		VAR3->VAR47 = VAR50;
	}
	else
	{
		FUN2(
		 VAR12,
		 VAR29,
		 VAR51,
		 "",
		 VAR16 );

		goto VAR28;
	}
	if( VAR3->VAR47 == VAR48 )
	{
		if( FUN12(
		     VAR3,
		     VAR15,
		     (VAR32) VAR21,
		     VAR10,
		     VAR12 ) != 1 )
		{
			FUN2(
			 VAR12,
			 VAR26,
			 VAR27,
			 "",
			 VAR16 );

			goto VAR28;
		}
	}
	else if( VAR3->VAR47 == VAR50 )
	{
		if( FUN13(
		     VAR3,
		     VAR15,
		     (VAR32) VAR21,
		     VAR12 ) != 1 )
		{
			FUN2(
			 VAR12,
			 VAR26,
			 VAR27,
			 "",
			 VAR16 );

			goto VAR28;
		}
	}
	FUN14(
	 VAR15 );

	return( VAR20 );

VAR28:
	if( VAR15 != NULL )
	{
		FUN14(
		 VAR15 );
	}
	return( -1 );
}