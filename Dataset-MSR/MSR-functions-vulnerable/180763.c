static inline VAR1 *FUN1(unsigned int VAR2, unsigned int VAR3, double VAR4,  const interpolation_method VAR5)
{
	double VAR6;
	double VAR7 = 1.0;
	const double VAR8 = VAR9;
	int VAR10;
	unsigned int VAR11;
	VAR1 *VAR12;

	if (VAR4 < 1.0) {
		VAR6 = VAR8 / VAR4;
		VAR7 = VAR4;
	}  else {
		VAR6= VAR8;
	}

	VAR10 = 2 * (int)FUN2(VAR6) + 1;
	VAR12 = FUN3(VAR2, VAR10);

	for (VAR11 = 0; VAR11 < VAR2; VAR11++) {
		const double VAR13 = (double)VAR11 / VAR4;
		
		register int VAR14 = FUN4(0, (int)FUN5 (VAR13 - VAR6));
		int VAR15 = FUN6((int)FUN2(VAR13 + VAR6), (int)VAR3 - 1);
 		double VAR16 = 0.0;
 		int VAR17;
 

		VAR12->VAR18[VAR11].VAR19 = VAR14;

		VAR12->VAR18[VAR11].VAR20 = VAR15;


 		
 		if (VAR15 - VAR14 + 1 > VAR10)  {
 			if (VAR14 < ((int)VAR3 - 1 / 2))  {
				VAR14++;
			} else {
				VAR15--;
 			}
 		}
 






 		for (VAR17 = VAR14; VAR17 <= VAR15; VAR17++) {
 			VAR16 += (VAR12->VAR18[VAR11].VAR21[VAR17-VAR14] =  VAR7 * (*VAR5)(VAR7 * (VAR13 - (double)VAR17)));
 		}

		if (VAR16 < 0.0) {
			FUN7(VAR12);
			return NULL;
		}

		if (VAR16 > 0.0) {
			for (VAR17 = VAR14; VAR17 <= VAR15; VAR17++) {
				VAR12->VAR18[VAR11].VAR21[VAR17-VAR14] /= VAR16;
			}
		}
	}
	return VAR12;
}