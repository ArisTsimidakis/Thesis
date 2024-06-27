int FUN1(const unsigned char *VAR1, size_t VAR2,
 			  unsigned char *VAR3, VAR4 *VAR5)
{
	unsigned char *VAR6;
	const unsigned char *VAR7;
	size_t VAR8, VAR9;
	size_t VAR10 = 0;
	const unsigned char *VAR11;
	const unsigned char * const VAR12 = VAR1 + VAR2;
	unsigned char * const VAR13 = VAR3 + *VAR5;

	VAR6 = VAR3;
	VAR7 = VAR1;

	if (FUN2(VAR2 < 3))
		goto VAR14;
	if (*VAR7 > 17) {
		VAR8 = *VAR7++ - 17;
		if (VAR8 < 4) {
			VAR9 = VAR8;
			goto VAR15;
		}
		goto VAR16;
	}

	for (;;) {
		VAR8 = *VAR7++;
		if (VAR8 < 16) {
			if (FUN3(VAR10 == 0)) {
				if (FUN2(VAR8 == 0)) {
 					while (FUN2(*VAR7 == 0)) {
 						VAR8 += 255;
 						VAR7++;

						FUN4(1);


 					}
 					VAR8 += 15 + *VAR7++;
 				}
 				VAR8 += 3;
 VAR16:
 #if FUN5(VAR17)

				if (FUN3(FUN6(VAR8 + 15) && FUN7(VAR8 + 15))) {


 					const unsigned char *VAR18 = VAR7 + VAR8;
 					unsigned char *VAR19 = VAR6 + VAR8;
 					do {
						FUN8(VAR6, VAR7);
						VAR6 += 8;
						VAR7 += 8;
						FUN8(VAR6, VAR7);
						VAR6 += 8;
						VAR7 += 8;
					} while (VAR7 < VAR18);
					VAR7 = VAR18;
					VAR6 = VAR19;
 				} else
 #endif
 				{

					FUN9(VAR8);

					FUN4(VAR8 + 3);




 					do {
 						*VAR6++ = *VAR7++;
 					} while (--VAR8 > 0);
				}
				VAR10 = 4;
				continue;
			} else if (VAR10 != 4) {
				VAR9 = VAR8 & 3;
				VAR11 = VAR6 - 1;
 				VAR11 -= VAR8 >> 2;
 				VAR11 -= *VAR7++ << 2;
 				FUN10(VAR11);

				FUN9(2);


 				VAR6[0] = VAR11[0];
 				VAR6[1] = VAR11[1];
 				VAR6 += 2;
				goto VAR15;
			} else {
				VAR9 = VAR8 & 3;
				VAR11 = VAR6 - (1 + VAR20);
				VAR11 -= VAR8 >> 2;
				VAR11 -= *VAR7++ << 2;
				VAR8 = 3;
			}
		} else if (VAR8 >= 64) {
			VAR9 = VAR8 & 3;
			VAR11 = VAR6 - 1;
			VAR11 -= (VAR8 >> 2) & 7;
			VAR11 -= *VAR7++ << 3;
			VAR8 = (VAR8 >> 5) - 1 + (3 - 1);
		} else if (VAR8 >= 32) {
			VAR8 = (VAR8 & 31) + (3 - 1);
			if (FUN2(VAR8 == 2)) {
 				while (FUN2(*VAR7 == 0)) {
 					VAR8 += 255;
 					VAR7++;

					FUN4(1);


 				}
 				VAR8 += 31 + *VAR7++;

				FUN4(2);


 			}
 			VAR11 = VAR6 - 1;
 			VAR9 = FUN11(VAR7);
			VAR7 += 2;
			VAR11 -= VAR9 >> 2;
			VAR9 &= 3;
		} else {
			VAR11 = VAR6;
			VAR11 -= (VAR8 & 8) << 11;
			VAR8 = (VAR8 & 7) + (3 - 1);
			if (FUN2(VAR8 == 2)) {
 				while (FUN2(*VAR7 == 0)) {
 					VAR8 += 255;
 					VAR7++;

					FUN4(1);


 				}
 				VAR8 += 7 + *VAR7++;

				FUN4(2);


 			}
 			VAR9 = FUN11(VAR7);
 			VAR7 += 2;
			VAR11 -= VAR9 >> 2;
			VAR9 &= 3;
			if (VAR11 == VAR6)
				goto VAR21;
			VAR11 -= 0x4000;
		}
		FUN10(VAR11);
 #if FUN5(VAR17)
 		if (VAR6 - VAR11 >= 8) {
 			unsigned char *VAR19 = VAR6 + VAR8;

			if (FUN3(FUN7(VAR8 + 15))) {


 				do {
 					FUN8(VAR6, VAR11);
 					VAR6 += 8;
					VAR11 += 8;
					FUN8(VAR6, VAR11);
					VAR6 += 8;
 					VAR11 += 8;
 				} while (VAR6 < VAR19);
 				VAR6 = VAR19;

				if (FUN6(6)) {


 					VAR10 = VAR9;
 					FUN12(VAR6, VAR7);
 					VAR6 += VAR9;
 					VAR7 += VAR9;
 					continue;
 				}
 			} else {

				FUN9(VAR8);


 				do {
 					*VAR6++ = *VAR11++;
 				} while (VAR6 < VAR19);
			}
		} else
 #endif
 		{
 			unsigned char *VAR19 = VAR6 + VAR8;

			FUN9(VAR8);


 			VAR6[0] = VAR11[0];
 			VAR6[1] = VAR11[1];
 			VAR6 += 2;
			VAR11 += 2;
			do {
				*VAR6++ = *VAR11++;
			} while (VAR6 < VAR19);
		}
VAR15:
 		VAR10 = VAR9;
 		VAR8 = VAR9;
 #if FUN5(VAR17)

		if (FUN3(FUN6(6) && FUN7(4))) {


 			FUN12(VAR6, VAR7);
 			VAR6 += VAR8;
 			VAR7 += VAR8;
 		} else
 #endif
 		{

			FUN4(VAR8 + 3);

			FUN9(VAR8);




 			while (VAR8 > 0) {
 				*VAR6++ = *VAR7++;
 				VAR8--;
			}
		}
	}

VAR21:
	*VAR5 = VAR6 - VAR3;
	return (VAR8 != 3       ? VAR22 :
		VAR7 == VAR12 ? VAR23 :
		VAR7 <  VAR12 ? VAR24 : VAR25);

VAR14:
	*VAR5 = VAR6 - VAR3;
	return VAR25;

VAR26:
	*VAR5 = VAR6 - VAR3;
	return VAR27;

VAR28:
	*VAR5 = VAR6 - VAR3;
	return VAR29;
}