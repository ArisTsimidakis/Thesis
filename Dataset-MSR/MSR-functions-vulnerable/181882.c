VAR1 *FUN1(VAR2 *VAR3)
 {
 	VAR1 *VAR4;

	int VAR5;

	int VAR6;




 	long VAR7;

	int VAR8;

	int VAR9;

	int VAR10;

	int VAR11;



	if (fscanf(VAR3, "", &VAR10, &VAR11) != 2)




















 		return 0;

	if (fscanf(VAR3, "", &VAR9, &VAR8) != 2)








 		return 0;

	if (!(VAR4 = FUN2(VAR10, VAR11, VAR10 + VAR9, VAR11 + VAR8)))










 		return 0;


 
 	if (FUN3(VAR4) != VAR8 ||
 	  FUN4(VAR4) != VAR9) {
		FUN5();
	}

	
	for (VAR5 = 0; VAR5 < FUN3(VAR4); VAR5++) {
		for (VAR6 = 0; VAR6 < FUN4(VAR4); VAR6++) {
			if (fscanf(VAR3, "", &VAR7) != 1) {
				FUN6(VAR4);
				return 0;
			}
			FUN7(VAR4, VAR5, VAR6, FUN8(VAR12, VAR7));
		}
	}

	return VAR4;
}