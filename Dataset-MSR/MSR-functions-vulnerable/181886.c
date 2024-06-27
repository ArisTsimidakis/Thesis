int FUN1(VAR1 *VAR2)
 {
 	int VAR3;
 	int VAR4;

	uchar VAR5[2];


 
 	assert(VAR6 >= 2);
 
	
	if ((VAR3 = FUN2(VAR2, (char *) VAR5, 2)) < 0) {
		return -1;
	}
	
	for (VAR4 = VAR3 - 1; VAR4 >= 0; --VAR4) {
		if (FUN3(VAR2, VAR5[VAR4]) == VAR7) {
			return -1;
		}
	}
	
	if (VAR3 < 2) {
		return -1;
	}
	
	if (VAR5[0] == (VAR8 & 0xff) && VAR5[1] == (VAR8 >> 8)) {
		return 0;
	}
	return -1;
}