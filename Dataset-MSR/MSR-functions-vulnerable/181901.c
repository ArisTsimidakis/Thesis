int FUN1(VAR1 *VAR2)
 {

	uchar VAR3[VAR4];


 	int VAR5;
 	int VAR6;
 	uint_fast32_t VAR7;

	assert(VAR8 >= VAR4);

	
	if ((VAR6 = FUN2(VAR2, VAR3, VAR4)) < 0) {
		return -1;
	}

	
	for (VAR5 = VAR6 - 1; VAR5 >= 0; --VAR5) {
		if (FUN3(VAR2, VAR3[VAR5]) == VAR9) {
			return -1;
		}
	}

	
	if (VAR6 < VAR4) {
		return -1;
	}

	VAR7 = (FUN4(VAR10, VAR3[0]) << 24) |
	  (FUN4(VAR10, VAR3[1]) << 16) |
	  (FUN4(VAR10, VAR3[2]) << 8) |
	  VAR3[3];

	
	if (VAR7 != VAR11) {
		return -1;
	}
	return 0;
}