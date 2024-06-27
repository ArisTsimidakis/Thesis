int FUN1(VAR1 *VAR2, int VAR3, long VAR4)
{
	int VAR5;
 
 	

	assert(VAR3 >= 0 && VAR3 < 32);








 	
 	assert(!(VAR4 & (~FUN2(VAR3))));
 
	
	VAR5 = VAR3 - 1;
	while (--VAR3 >= 0) {
		if (FUN3(VAR2, (VAR4 >> VAR5) & 1) == VAR6) {
			return VAR6;
		}
		VAR4 <<= 1;
	}
	return 0;
}