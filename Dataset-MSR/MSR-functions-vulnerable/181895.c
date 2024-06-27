int FUN1(VAR1 *VAR2)
 {

	uchar VAR3[VAR4];


 	int VAR5;
 	int VAR6;
 
	assert(VAR7 >= VAR4);

	
	if ((VAR6 = FUN2(VAR2, VAR3, VAR4)) < 0) {
		return -1;
	}

	
	for (VAR5 = VAR6 - 1; VAR5 >= 0; --VAR5) {
		if (FUN3(VAR2, VAR3[VAR5]) == VAR8) {
			return -1;
		}
	}

	
	if (VAR6 < VAR4) {
		return -1;
	}

	
	if (VAR3[0] != (VAR9 >> 8) || VAR3[1] != (VAR9 & 0xff)) {
		return -1;
	}

	return 0;
}