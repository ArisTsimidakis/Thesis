static void FUN1( char* VAR1, VAR2) 


 {
 	const char* VAR3        	= NULL;
 	int         VAR4    	= 0;

	const char* VAR5       = NULL;
	int         VAR6   = 0;
	int         VAR7       = 0;

	VAR8*      VAR9      	= NULL;
	int32_t     VAR10  	= 0;

	char*       VAR11        = NULL;

	int32_t     VAR12          	= 512;
	UErrorCode  VAR13          	= VAR14;

	char*       VAR15		= NULL;
	int         VAR16   	= 0;

  	char*       VAR17             	= NULL;
	int         VAR18    	= 0;

 	FUN2( NULL VAR19 );
 
 	if(FUN3( FUN4() VAR19, "",

		&VAR3, &VAR4 , 


 		&VAR5 ,&VAR6 ) == VAR20)
 	{
 		FUN5(&VAR17 , 0, "", VAR1 );
		FUN6( NULL, VAR21,  VAR17 , 1 VAR19 );
		FUN7(VAR17);
		VAR22;
	}

    if(VAR4 > VAR23) {
        
		FUN5(&VAR17 , 0, "", VAR1 );
		FUN6( NULL, VAR21,  VAR17 , 1 VAR19 );
		FUN7(VAR17);
		VAR22;
    }

	if(VAR4 == 0) {
		VAR3 = FUN8(VAR24);
	}

	if( strcmp(VAR1, VAR25) != 0 ){
		
		VAR18 = FUN9( VAR26 , VAR3 );
		if( VAR18 >= 0 ){
			if( strcmp(VAR1 , VAR27)==0 ){
				VAR11 = FUN10( VAR3 );
			} else {
				
				VAR22;
			}
		}
	} 

 	if( VAR11==NULL ){
 		VAR11 = FUN11( VAR3 );
 	}

	


 	
 	if( !VAR5){
 		VAR5 = FUN11(FUN8(VAR24));
		VAR7 = 1;
	}

    
    do{
        VAR9 = FUN12( VAR9 , VAR12 * sizeof(VAR8)  );
        VAR10 = VAR12;

		if( strcmp(VAR1 , VAR27)==0 ){
			VAR12 = FUN13 ( VAR11 , VAR5 , VAR9 , VAR10 , &VAR13);
		} else if( strcmp(VAR1 , VAR28)==0 ){
			VAR12 = FUN14 ( VAR11 , VAR5 , VAR9 , VAR10 , &VAR13);
		} else if( strcmp(VAR1 , VAR29)==0 ){
			VAR12 = FUN15 ( VAR11 , VAR5 , VAR9 , VAR10 , &VAR13);
		} else if( strcmp(VAR1 , VAR30)==0 ){
			VAR12 = FUN16 ( VAR11 , VAR5 , VAR9 , VAR10 , &VAR13);
		} else if( strcmp(VAR1 , VAR25)==0 ){
			VAR12 = FUN17 ( VAR11 , VAR5 , VAR9 , VAR10 , &VAR13);
		}

		
		if( FUN18( VAR13 ) )
		{
			if( VAR13 == VAR31 )
			{
				VAR13 = VAR14;
				continue;
			}

			FUN5(&VAR17, 0, "", VAR1 , VAR1 );
			FUN6( NULL, VAR13, VAR17 , 1 VAR19 );
			FUN7(VAR17);
			if( VAR9){
				FUN7( VAR9 );
			}
			if( VAR11){
				FUN7( VAR11 );
			}
			if (VAR7) {
				FUN7((void *)VAR5);
				VAR5 = NULL;
			}
			VAR22;
		}
	} while( VAR12 > VAR10 );

	if( VAR11){
		FUN7( VAR11 );
	}
	if (VAR7) {
		FUN7((void *)VAR5);
		VAR5 = NULL;
	}
	
	FUN19( &VAR15, &VAR16, VAR9, VAR12, &VAR13 );
	FUN7( VAR9 );
	if( FUN18( VAR13 ) )
	{
		FUN5(&VAR17, 0, "", VAR1 , VAR1 );
		FUN6( NULL, VAR13, VAR17 , 1 VAR19 );
		FUN7(VAR17);
		VAR22;
	}

	FUN20( VAR15, VAR16 , VAR32);

}