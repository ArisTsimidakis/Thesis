int FUN1(gdImagePtr VAR1,
		  int VAR2, int VAR3,
		  const gdImagePtr VAR4,
		  gdRectPtr VAR5,
		  const double VAR6[6])
{
	int VAR7,VAR8,VAR9,VAR10;
	int VAR11 = 0;
	int VAR12, VAR13, VAR14, VAR15;
	register int VAR16, VAR17, VAR18, VAR19;
	double VAR20[6];
	int *VAR21;
	gdPointF VAR22, VAR23;
	gdRect VAR24;
	int VAR25, VAR26;
	gdInterpolationMethod VAR27 = VAR28;
	interpolation_method VAR29;

	
 	if (VAR4->VAR30 == VAR31 || VAR4->VAR30 == VAR32 || VAR4->VAR30 == VAR33) {
 		VAR27 = VAR4->VAR30;
 		VAR29 = VAR4->VAR34;

		


 		FUN2(VAR4, VAR35);
 	}
 

	FUN3(VAR4, VAR5);

	if (VAR5->VAR16 > 0 || VAR5->VAR17 > 0
		|| VAR5->VAR36 < FUN4(VAR4)
		|| VAR5->VAR37 < FUN5(VAR4)) {
		VAR11 = 1;

		FUN6(VAR4, &VAR12, &VAR13,
		&VAR14, &VAR15);

		FUN7(VAR4, VAR5->VAR16, VAR5->VAR17,
			VAR5->VAR16 + VAR5->VAR36 - 1,
			VAR5->VAR17 + VAR5->VAR37 - 1);
	}

	if (!FUN8(VAR5, VAR6, &VAR24)) {
		if (VAR11) {
			FUN7(VAR4, VAR12, VAR13,
					VAR14, VAR15);
		}
		FUN2(VAR4, VAR27);
		return VAR38;
	}

	FUN6(VAR1, &VAR7, &VAR8, &VAR9, &VAR10);

	VAR25 = VAR24.VAR36  + (int) FUN9(VAR24.VAR16);
	VAR26 = VAR24.VAR37 + (int) FUN9(VAR24.VAR17);

	
	FUN10(VAR20, VAR6);

	VAR18 =  VAR5->VAR16;
	VAR19 =  VAR5->VAR17;

	if (VAR1->VAR39) {
		for (VAR17 = VAR24.VAR17; VAR17 <= VAR26; VAR17++) {
			VAR22.VAR17 = VAR17 + 0.5;
			for (VAR16 = 0; VAR16 <= VAR25; VAR16++) {
				VAR22.VAR16 = VAR16 + 0.5;
				FUN11(&VAR23, &VAR22, VAR20);
				FUN12(VAR1, VAR2 + VAR16, VAR3 + VAR17, FUN13(VAR4, VAR18 + VAR23.VAR16, VAR19 + VAR23.VAR17, 0));
			}
		}
	} else {
		for (VAR17 = 0; VAR17 <= VAR26; VAR17++) {
			VAR22.VAR17 = VAR17 + 0.5 + VAR24.VAR17;
			if ((VAR3 + VAR17) < 0 || ((VAR3 + VAR17) > FUN5(VAR1) -1)) {
				continue;
			}
			VAR21 = VAR1->VAR40[VAR3 + VAR17] + VAR2;

			for (VAR16 = 0; VAR16 <= VAR25; VAR16++) {
				VAR22.VAR16 = VAR16 + 0.5 + VAR24.VAR16;
				FUN11(&VAR23, &VAR22, VAR20);

				if ((VAR2 + VAR16) < 0 || (VAR2 + VAR16) > (FUN4(VAR1) - 1)) {
					break;
				}
				*(VAR21++) = FUN13(VAR4, VAR18 + VAR23.VAR16, VAR19 + VAR23.VAR17, -1);
			}
		}
	}

	
	if (VAR11) {
		FUN7(VAR4, VAR12, VAR13,
				VAR14, VAR15);
	}

	FUN2(VAR4, VAR27);
	return VAR41;
}