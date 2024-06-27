void FUN1( const char *VAR1 ) {
	fileHandle_t VAR2;
	char VAR3[33];
	char VAR4[VAR5];

	FUN2(VAR4, sizeof(VAR4), "", VAR1);

	FUN3( VAR4, &VAR2 );
	if ( !VAR2 ) {
		FUN4( &VAR6[16], "", 17 );
		return;
	}

	FUN5( VAR3, 0, sizeof( VAR3 ) );

	FUN6( VAR3, 16, VAR2 );
	FUN7( VAR2 );

	if ( FUN8( VAR3, NULL ) ) {
		strcat( &VAR6[16], VAR3 );
	} else {
		FUN4( &VAR6[16], "", 17 );
	}
}