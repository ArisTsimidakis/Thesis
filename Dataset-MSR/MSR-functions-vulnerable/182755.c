static void FUN1(VAR1 *VAR2, void *VAR3, uint32_t VAR4, VAR5 *VAR6) {
VAR7 *VAR8;

	
 	while ( VAR4 ) {
 		uint32_t VAR9;
 
















 		
 		VAR8 = (VAR7 *)VAR3;
 		VAR4 		-= 4;

		VAR9 	  = FUN2(VAR8->VAR10);
		

		if ( VAR9 == VAR11 ) {
			
			FUN3(VAR2);
			FUN4(VAR6);
		} else {
			FUN5(VAR6, VAR2, VAR9);
		}

		VAR3 = VAR3 + 4;
		if ( VAR4 < 4 ) {
			
			FUN6("", VAR4);
			VAR4 = 0;
		}
	}
 
}