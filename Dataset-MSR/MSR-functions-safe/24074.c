int FUN1( struct VAR1 *VAR2 )
{
	int VAR3;
	struct VAR4 *VAR5 = VAR2->VAR6;

	if (FUN2 (VAR2, 1))
		return -1;

	if ( FUN3(VAR5, VAR2->VAR7, 1 ) != VAR8 ) {
		FUN4(VAR2->VAR9, "");
		return -1;
	}
	FUN5(VAR2->VAR9, "", VAR2->VAR7);
	
	if (!FUN6(VAR10,&VAR5->VAR11))
		for( VAR3 = 0; VAR3 < VAR12; VAR3++ )
			VAR5->VAR13[VAR3] = FUN7 (VAR5,VAR14,VAR3>=VAR12/2);

	FUN8( VAR5 );
	FUN9(VAR2);
	return 0;
}