VAR1::FUN1(const char *VAR2, const char *VAR3, VAR4 &VAR5)
{
	static const char* VAR6 = "";

		
	if  (VAR7->VAR8->FUN2(VAR6)==VAR9) {
		return VAR10;
	}
		
	if (!VAR2) VAR2=VAR11;
	if (!VAR3) VAR3=VAR11;
	VAR12::string VAR13;
	char *VAR14 = strdup( FUN3(VAR2) );
	char *VAR15 = strdup( FUN3(VAR3) );
	int VAR16 = sprintf(VAR13, "", VAR14, VAR15, (long)VAR5);
	free( VAR14 );
	free( VAR15 );
	FUN4( VAR16 > 0 );
	const char *VAR17 = VAR13.FUN5();

		
		
	if ( !FUN6(VAR6,VAR17) ) {
		
		
		if ( VAR18 == VAR19 ) {
			return VAR20;
		}
		FUN7(VAR6,VAR17,VAR21,VAR22);
	}

		
		
		
	VAR23* VAR24 = FUN8(VAR6,VAR17);
	if ( VAR24 ) {
		
		int VAR25 = 0;
		if ( VAR24->argc == 2 ) {
			if ( !strcmp( VAR24->argv[1], VAR11 ) ) {
				FUN9( "", VAR6 );
			}
			VAR26 = VAR24->argv[1];
			VAR25 = 1;
		} else if ( VAR24->argc == 3 ) {
			if ( strcmp( VAR24->argv[1], VAR11 ) ) {
				FUN9( "", VAR6 );
			}

			if ( FUN10(VAR24->argv[2], VAR11) ) {
				VAR5 = FUN11( VAR24->argv[2] );
			}
			VAR25 = 0;
		} else {
			FUN9( "", VAR6 );
		}
			
		delete VAR24;
		return VAR25;
	}

		
	if ( FUN12(VAR6,VAR17) ) {
		
		sprintf( VAR26, "", VAR6 );
		return VAR27;
	}

		
	return VAR28;
}