int FUN1(VAR1 *VAR2)
 {

	uchar VAR3[VAR4];


 	uint_fast32_t VAR5;
 	int VAR6;
 	int VAR7;

	assert(VAR8 >= VAR4);

	
	if ((VAR7 = FUN2(VAR2, VAR3, VAR4)) < 0) {
		return -1;
	}

	
	for (VAR6 = VAR7 - 1; VAR6 >= 0; --VAR6) {
		if (FUN3(VAR2, VAR3[VAR6]) == VAR9) {
			return -1;
		}
	}

	
	if (VAR7 < VAR4) {
		return -1;
	}

	
	VAR5 = (VAR3[0] << 8) | VAR3[1];

	
	if (VAR5 != VAR10) {
		return -1;
	}

	return 0;
}