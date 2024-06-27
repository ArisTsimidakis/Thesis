static char* FUN1(const char* VAR1)

{ 


 	char* VAR2 = NULL;
 	int VAR3 = 0;
 
	VAR3 = FUN2( VAR4 ,VAR1);
	if(VAR3 < 0) {
		return NULL;
	}
	if( VAR3 < VAR5 ){
		
		VAR2 = FUN3( VAR6[VAR3] );
	} else {
		
		VAR2 = FUN3( VAR4[VAR3] );
	}
	return VAR2;
 }