VAR1::FUN1(unicore_gahp_callback_func_t VAR2)
{
	char VAR3[150];
	static const char* VAR4 = "";

		
		
	if ( VAR5->VAR6 != NULL ) {
		if ( VAR2 != VAR5->VAR6 ) {
			FUN2("");
		}
		return 0;
	}

		
	if  (VAR5->VAR7->FUN3(VAR4)==VAR8) {
		return VAR9;
	}

		
		
	if ( VAR10 == VAR11 ) {
		return VAR12;
	}

	int VAR13 = VAR5->FUN4();
	int VAR14 = snprintf(VAR3,sizeof(VAR3),"",VAR4,VAR13);
	FUN5( VAR14 > 0 && VAR14 < (int)sizeof(VAR3) );
	VAR5->FUN6(VAR3);
	Gahp_Args VAR15;
	VAR5->FUN7(VAR15);
	if ( VAR15.argc != 1 || VAR15.argv[0][0] != '' ) {
			
		FUN8(VAR16,"",VAR4);
		VAR17 = "";
		return 1;
	} 

		
	VAR5->VAR18 = VAR13;
 	VAR5->VAR6 = VAR2;

	return 0;
}