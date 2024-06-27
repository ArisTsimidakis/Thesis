void FUN1 (gdImagePtr VAR1, gdImagePtr VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9)
{
	int VAR10, VAR11;
	int VAR12, VAR13;
	int VAR14, VAR15;
	int VAR16, VAR17, VAR18;
	VAR15 = VAR4;

	for (VAR13 = VAR6; VAR13 < (VAR6 + VAR8); VAR13++) {
		VAR14 = VAR3;
		for (VAR12 = VAR5; VAR12 < (VAR5 + VAR7); VAR12++) {
			int VAR19;
			VAR10 = FUN2(VAR2, VAR12, VAR13);
			
			if (FUN3(VAR2) == VAR10) {
				VAR14++;
				continue;
			}
			
			if (VAR1 == VAR2) {
				VAR19 = VAR10;
			} else {
				VAR11 = FUN2(VAR1, VAR14, VAR15);

 				VAR16 = (int)(FUN4 (VAR2, VAR10) * (VAR9 / 100.0) + FUN4 (VAR1, VAR11) * ((100 - VAR9) / 100.0));
 				VAR17 = (int)(FUN5 (VAR2, VAR10) * (VAR9 / 100.0) + FUN5 (VAR1, VAR11) * ((100 - VAR9) / 100.0));
 				VAR18 = (int)(FUN6 (VAR2, VAR10) * (VAR9 / 100.0) + FUN6 (VAR1, VAR11) * ((100 - VAR9) / 100.0));

				
				VAR19 = FUN7 (VAR1, VAR16, VAR17, VAR18);
			}
			FUN8 (VAR1, VAR14, VAR15, VAR19);
			VAR14++;
		}
		VAR15++;
	}
}