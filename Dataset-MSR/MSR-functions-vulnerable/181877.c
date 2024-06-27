int FUN1(VAR1 *VAR2, int VAR3, int VAR4)




 {

	int VAR5;

	int VAR6;




 
 	VAR5 = VAR3 * VAR4;
 	if (VAR5 > VAR2->VAR7 || VAR3 > VAR2->VAR8) {
		return -1;
	}

	VAR2->VAR9 = VAR3;
	VAR2->VAR10 = VAR4;

	for (VAR6 = 0; VAR6 < VAR3; ++VAR6) {
		VAR2->VAR11[VAR6] = &VAR2->VAR12[VAR4 * VAR6];
	}

	return 0;
}