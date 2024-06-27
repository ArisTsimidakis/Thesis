FUN1(VAR1)
 {
	char*       	VAR2        = NULL;
	int         	VAR3    = 0;
	const char*     VAR4       = NULL;
	int         	VAR5   = 0;

	int		VAR6		= 0;
	char*		VAR7		= 0;
	char*		VAR8	= NULL;

	char*       	VAR9    = NULL;
	char*       	VAR10   = NULL;

 	char*       	VAR11    = NULL;
 	char*       	VAR12   = NULL;
 

	zend_bool 	VAR13 	= 0;	


 	UErrorCode	VAR14		= VAR15;
 
 	FUN2( NULL VAR16 );

	


 	if(FUN3( FUN4() VAR16, "",

		&VAR2, &VAR3 , &VAR4 , &VAR5 , 


 		&VAR13) == VAR17)
 	{
 		FUN5( NULL, VAR18,
		"", 0 VAR16 );

		VAR19;
	}

	if(VAR5 == 0) {
		VAR4 = FUN6(VAR20);
	}

	if( strcmp(VAR4,"")==0){
		VAR21;
	}

	if( VAR13 ){
 		
 		VAR10=FUN7( VAR4 , VAR22 , &VAR6 , 0);
 		if( VAR6 ==0) {

			FUN5( NULL, VAR14, 


 				"" , 0 VAR16 );
 			VAR19;
 		}
 
 		
 		VAR9 = FUN7( VAR2 , VAR22 , &VAR6 ,  0);
 		if( VAR6 ==0) {

			FUN5( NULL, VAR14, 


 				"" , 0 VAR16 );
 			VAR19;
 		}

		
		VAR11 = FUN8( 1, strlen(VAR9) + 1);

		
		VAR6 = FUN9( VAR9 , VAR11);
		if( VAR6 == 0) {
			FUN10( VAR11 );
			FUN10( VAR9 );
			VAR19;
		}

		VAR12 = FUN8( 1, strlen(VAR10) + 1);
		VAR6 = FUN9( VAR10 , VAR12 );
		if( VAR6 == 0) {
			FUN10( VAR11 );
			FUN10( VAR9 );
			FUN10( VAR12 );
			FUN10( VAR10 );
			VAR19;
		}
 
 		
 		VAR7 	= strstr( VAR11 , VAR12 );

	


 		if( VAR7 && (VAR7==VAR11) ){
 			
 			VAR8 = VAR7 + (strlen(VAR12));

			if( FUN11(*VAR8) || FUN12(*VAR8) ){ 


 				if( VAR11){
 					FUN10( VAR11 );
 				}
				if( VAR12){
					FUN10( VAR12 );
				}
				if( VAR9){
					FUN10( VAR9 );
				}
				if( VAR10){
					FUN10( VAR10 );
				}
				VAR21;
			}
		}

		
		if( VAR11){
			FUN10( VAR11 );
		}
		if( VAR12){
			FUN10( VAR12 );
		}
		if( VAR9){
			FUN10( VAR9 );
		}
		if( VAR10){
			FUN10( VAR10 );
		}
		VAR19;

	} 
 	else{
 		
 		VAR11 = FUN8( 1, strlen(VAR2 ) + 1);

		


 		VAR6 = FUN9( VAR2 , VAR11);
 		if( VAR6 == 0) {
 			FUN10( VAR11 );
			VAR19;
		}
		VAR12 = FUN8( 1, strlen(VAR4 ) + 1);
		VAR6 = FUN9( VAR4 , VAR12 );
		if( VAR6 == 0) {
			FUN10( VAR11 );
			FUN10( VAR12 );
			VAR19;
		}
 
 		
 		VAR7 	= strstr( VAR11 , VAR12 );

		


 		if( VAR7 && (VAR7==VAR11) ){
 			
 			VAR8 = VAR7 + (strlen(VAR12));

			if( FUN11(*VAR8) || FUN12(*VAR8) ){ 


 				if( VAR11){
 					FUN10( VAR11 );
 				}
				if( VAR12){
					FUN10( VAR12 );
				}
				VAR21;
			}
		}

		
		if( VAR11){
			FUN10( VAR11 );
		}
		if( VAR12){
			FUN10( VAR12 );
		}
		VAR19;

	}
}