void FUN1( void ) {
	VAR1	*VAR2;
	int			VAR3, VAR4;
	int			VAR5, VAR6;
	int			VAR7, VAR8;
	int			VAR9;

	VAR3 = 0;
	VAR7 = 0;
	VAR8 = 0;
	VAR4 = 0;
	for (VAR2 = VAR10->VAR11.VAR12 ; ; VAR2 = VAR2->VAR12) {
		if ( FUN2() != 1 ) {
			FUN3 ("",
				(void *)VAR2, VAR2->VAR13, VAR2->VAR14);
		}
		if ( VAR2->VAR14 ) {
			VAR3 += VAR2->VAR13;
			VAR4++;
			if ( VAR2->VAR14 == VAR15 ) {
				VAR7 += VAR2->VAR13;
			} else if ( VAR2->VAR14 == VAR16 ) {
				VAR8 += VAR2->VAR13;
			}
		}

		if (VAR2->VAR12 == &VAR10->VAR11) {
			break;			
		}
		if ( (VAR17 *)VAR2 + VAR2->VAR13 != (VAR17 *)VAR2->VAR12) {
			FUN3 ("");
		}
		if ( VAR2->VAR12->VAR18 != VAR2) {
			FUN3 ("");
		}
		if ( !VAR2->VAR14 && !VAR2->VAR12->VAR14 ) {
			FUN3 ("");
		}
	}

	VAR5 = 0;
	VAR6 = 0;
	for (VAR2 = VAR19->VAR11.VAR12 ; ; VAR2 = VAR2->VAR12) {
		if ( VAR2->VAR14 ) {
			VAR5 += VAR2->VAR13;
			VAR6++;
		}

		if (VAR2->VAR12 == &VAR19->VAR11) {
			break;			
		}
	}

	FUN3( "", VAR20 );
	FUN3( "", VAR21 );
	FUN3( "" );
	FUN3( "", VAR22.VAR23 );
	FUN3( "", VAR22.VAR24 );
	if ( VAR22.VAR25 != VAR22.VAR24 ) {
		FUN3( "", VAR22.VAR25 );
	}
	FUN3( "", VAR22.VAR26 );
	FUN3( "" );
	FUN3( "", VAR27.VAR23 );
	FUN3( "", VAR27.VAR24 );
	if ( VAR27.VAR25 != VAR27.VAR24 ) {
		FUN3( "", VAR27.VAR25 );
	}
	FUN3( "", VAR27.VAR26 );
	FUN3( "" );
	FUN3( "", VAR22.VAR24 + VAR27.VAR24 );
	VAR9 = 0;
	if ( VAR22.VAR26 > VAR22.VAR24 ) {
		VAR9 += VAR22.VAR26 - VAR22.VAR24;
	}
	if ( VAR27.VAR26 > VAR27.VAR24 ) {
		VAR9 += VAR27.VAR26 - VAR27.VAR24;
	}
	FUN3( "", VAR9 );
	FUN3( "" );
	FUN3( "", VAR3, VAR4	);
	FUN3( "", VAR7 );
	FUN3( "", VAR8 );
	FUN3( "", VAR3 - ( VAR7 + VAR8 ) );
	FUN3( "", VAR5 );
}