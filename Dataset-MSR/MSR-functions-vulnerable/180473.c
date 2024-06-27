static const char *FUN1( VAR1 *VAR2, const char *VAR3 )


 {
 	VAR1 *VAR4;


 

	if ( *VAR3 != '' ) {

		

		VAR5 = VAR3;

		return 0;

	}



	VAR2->VAR6 = VAR7;

	VAR3 = FUN2( VAR3 + 1 );

	if ( *VAR3 == '' )

		return VAR3 + 1;	






 

	if ( ! ( VAR2->VAR4 = VAR4 = FUN3() ) )

		return 0;		 

	if ( ! ( VAR3 = FUN2( FUN4( VAR4, FUN2( VAR3 ) ) ) ) )

		return 0;








 

	while ( *VAR3 == '' ) {




 		VAR1 *VAR8;

		if ( ! ( VAR8 = FUN3() ) )

			return 0;	

		VAR4->VAR9 = VAR8;

		VAR8->VAR10 = VAR4;

		VAR4 = VAR8;

		if ( ! ( VAR3 = FUN2( FUN4( VAR4, FUN2( VAR3+1 ) ) ) ) )

			return 0;	








 	}
 

	if ( *VAR3 == '' )

		return VAR3 + 1;	

	

	VAR5 = VAR3;

	return 0;




 }