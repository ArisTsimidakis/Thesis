static void FUN1(unsigned VAR1, unsigned VAR2)
{
	unsigned VAR3, VAR4;
	static int VAR5 = -1;

	FUN2(((int)(VAR1 - VAR2)) > 0);

	VAR3 = VAR1;
 	VAR4 = VAR1;
 	while (VAR3 != VAR2) {
 		if (VAR5 < 0 && ((VAR2 - VAR3) > 2)) {






















 			

			VAR3 += FUN3(&FUN4(VAR3), &VAR5, NULL);


 			VAR4 = VAR3;
 		}
 		while (VAR3 != VAR2) {
			char VAR6 = FUN4(VAR3);

			VAR3++;
			if (VAR6 == '') {
				if (VAR5 < 0) {
					
					VAR5 = VAR7;
				}
				FUN5(VAR4, VAR3, VAR5);
				VAR5 = -1;
				VAR4 = VAR3;
				break;
			}
		}
	}
	FUN5(VAR4, VAR2, VAR5);
}