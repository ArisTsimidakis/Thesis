static void FUN1( char* VAR1[] , int VAR2)
 {
 	int VAR3=0;

	for( VAR3=0; VAR3< VAR2; VAR3++ ){ 


 		if( VAR1[VAR3*2] ){
 			FUN2( VAR1[VAR3*2]);
 		}
	}
	FUN2(VAR1);
}