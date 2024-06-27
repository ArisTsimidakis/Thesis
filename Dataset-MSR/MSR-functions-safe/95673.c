static void FUN1(void)
{
	int VAR1 = 0;
	unsigned char VAR2[ VAR3 ];
	fileHandle_t VAR4;

	VAR1 = FUN2( VAR5, &VAR4 );
	FUN3( VAR4 );
	if( VAR1 == VAR3 ) {
		FUN4( "" );
		return;
	}
	else {
		if( VAR1 > 0 ) {
			FUN4( "",
				VAR3 );
		}

		FUN4( "" );
		FUN5( VAR2, sizeof(VAR2) );

		VAR4 = FUN6( VAR5 );
		if( !VAR4 ) {
			FUN4( "",
				VAR5 );
			return;
		}
		FUN7( VAR2, sizeof(VAR2), VAR4 );
		FUN3( VAR4 );
		FUN4( "" );
	}
}