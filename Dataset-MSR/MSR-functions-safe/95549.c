static void FUN1( alSrcPriority_t VAR1, sfxHandle_t VAR2,
		const vec3_t VAR3, const vec3_t VAR4, int VAR5 )
{
	int				VAR6;
	VAR7	*VAR8 = &VAR9[ VAR5 ];
	VAR10		*VAR11;
	vec3_t		VAR12, VAR13;

	if(FUN2(VAR5, VAR2))
		return;

	
	if( !VAR8->VAR14 )
	{
		
		VAR6 = FUN3( VAR1, VAR5, -1 );
		if( VAR6 == -1 )
		{
			FUN4( VAR15 ""
					"", VAR2, VAR5 );
			return;
		}

		VAR11 = &VAR16[VAR6];

		VAR8->VAR17 = VAR18;

		VAR11->VAR19 = -1.0;
		VAR11->VAR20 = FUN5();
	}
	else
	{
		VAR6 = VAR8->VAR21;
		VAR11 = &VAR16[VAR6];
	}

	VAR8->VAR14 = VAR18;
	VAR8->VAR21 = VAR6;

	VAR8->VAR22 = VAR1;
	VAR8->VAR23 = VAR2;

	
	VAR8->VAR24 = VAR18;

	
	
	
	
	VAR11->VAR25 = VAR5;
	VAR11->VAR26 = VAR18;

	if( FUN6( VAR5 ) )
	{
		VAR11->VAR27 = VAR18;

		FUN7(VAR12);

		FUN8(VAR11->VAR28, VAR29, VAR12);
		FUN8(VAR11->VAR28, VAR30, VAR31);
	}
	else
	{
		VAR11->VAR27 = VAR32;

		if(VAR3)
			FUN9(VAR3, VAR12);
		else
			FUN9(VAR8->VAR3, VAR12);

		FUN10(VAR12);
		
		FUN9(VAR12, VAR11->VAR33);
		
		if(VAR4)
		{
			FUN9(VAR4, VAR13);
			FUN10(VAR13);
		}
		else
			FUN7(VAR13);

		FUN8(VAR11->VAR28, VAR29, (VAR34 *) VAR12);
		FUN8(VAR11->VAR28, VAR30, (VAR34 *) VAR13);
	}
}