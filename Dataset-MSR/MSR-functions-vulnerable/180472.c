static double FUN1( double VAR1, int VAR2 )




 {

	double VAR3;


 

	if ( VAR2 < 0 )

		return 1.0 / FUN1( VAR1, -VAR2 );

	VAR3 = 1;

	while ( VAR2 > 0 ) {

		if ( VAR2 & 1 )

			VAR3 *= VAR1;

		VAR2 >>= 1;

		VAR1 *= VAR1;














 	}

	return VAR3;

}