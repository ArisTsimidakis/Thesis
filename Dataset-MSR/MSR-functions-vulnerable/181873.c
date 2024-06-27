int FUN1(VAR1 *VAR2, VAR1 *VAR3)
 {

	int VAR4;

	int VAR5;




 
 	if (VAR2->VAR6 != VAR3->VAR6 || VAR2->VAR7 !=
 	  VAR3->VAR7) {
		return 1;
	}
	for (VAR4 = 0; VAR4 < VAR2->VAR6; VAR4++) {
		for (VAR5 = 0; VAR5 < VAR2->VAR7; VAR5++) {
			if (FUN2(VAR2, VAR4, VAR5) != FUN2(VAR3, VAR4, VAR5)) {
				return 1;
			}
		}
	}
	return 0;
}