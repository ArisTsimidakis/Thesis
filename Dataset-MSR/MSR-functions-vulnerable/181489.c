VAR1 *FUN1(int VAR2)


 {
 	VAR1 *VAR3;

	VAR4 *VAR5;


 	if (!(VAR3 = FUN2(sizeof(VAR1)))) {
 		return 0;
 	}
 	memset(VAR3, 0, sizeof(VAR1));






























 	VAR3->VAR2 = VAR2;
 	VAR3->VAR6 = 0;
 	if (!(VAR5 = FUN3(VAR2))) {
		return 0;
	}
	VAR3->VAR7 = VAR5;
	VAR3->VAR8 = &VAR5->VAR8;
	return VAR3;
}