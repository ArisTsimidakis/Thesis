static VAR1 *FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, VAR8 **VAR9)


 {
 	u_short VAR10, class, VAR11;
 	u_long VAR12;
	long VAR13, VAR14;
	u_short VAR15;
	VAR1 *VAR16, *VAR17;
	char VAR18[VAR19];
	int VAR20 = 0, VAR21 = 0;
 
 	*VAR9 = NULL;
 

	VAR13 = FUN2(VAR4->VAR22, VAR4->VAR22+65536, VAR2, VAR18, sizeof(VAR18) - 2);


 	if (VAR13 < 0) {
 		return NULL;
 	}
 	VAR2 += VAR13;
 


 	FUN3(VAR10, VAR2);
 	FUN3(class, VAR2);
 	FUN4(VAR12, VAR2);
 	FUN3(VAR11, VAR2);


 	if (VAR5 != VAR23 && VAR10 != VAR5) {
 		VAR2 += VAR11;
 		return VAR2;
	}

	if (!VAR6) {
		VAR2 += VAR11;
		return VAR2;
	}

	FUN5(*VAR9);
	FUN6(*VAR9);

	FUN7(*VAR9, "", VAR18, 1);
	FUN7(*VAR9, "", "", 1);
	FUN8(*VAR9, "", VAR12);

	if (VAR7) {
		FUN8(*VAR9, "", VAR10);
		FUN9(*VAR9, "", (char*) VAR2, (VAR24) VAR11, 1);
		VAR2 += VAR11;
		return VAR2;
	}
 
 	switch (VAR10) {
 		case VAR25:


 			FUN7(*VAR9, "", "", 1);
 			snprintf(VAR18, sizeof(VAR18), "", VAR2[0], VAR2[1], VAR2[2], VAR2[3]);
 			FUN7(*VAR9, "", VAR18, 1);
 			VAR2 += VAR11;
 			break;
 		case VAR26:


 			FUN7(*VAR9, "", "", 1);
 			FUN3(VAR13, VAR2);
 			FUN8(*VAR9, "", VAR13);
			
		case VAR27:
			if (VAR10 == VAR27) {
				FUN7(*VAR9, "", "", 1);
			}
			
		case VAR28:
			if (VAR10 == VAR28) {
				FUN7(*VAR9, "", "", 1);
			}
			
		case VAR29:
 			if (VAR10 == VAR29) {
 				FUN7(*VAR9, "", "", 1);
 			}

			VAR13 = FUN2(VAR4->VAR22, VAR4->VAR22+65536, VAR2, VAR18, (sizeof VAR18) - 2);


 			if (VAR13 < 0) {
 				return NULL;
 			}
			VAR2 += VAR13;
			FUN7(*VAR9, "", VAR18, 1);
			break;
 		case VAR30:
 			
 			FUN7(*VAR9, "", "", 1);


 			VAR13 = *VAR2 & 0xFF;
 			VAR2++;


 			FUN9(*VAR9, "", (char*)VAR2, VAR13, 1);
 			VAR2 += VAR13;


 			VAR13 = *VAR2 & 0xFF;
 			VAR2++;


 			FUN9(*VAR9, "", (char*)VAR2, VAR13, 1);
 			VAR2 += VAR13;
 			break;
 		case VAR31:
 			{

				int VAR32 = 0;


 				VAR8 *VAR33 = NULL;
 
 				FUN7(*VAR9, "", "", 1);
				VAR16 = FUN10(VAR11 + 1);
				
 				FUN11(VAR33);
 				FUN6(VAR33);
 				

				while (VAR32 < VAR11) {

					VAR13 = VAR2[VAR32];

					if ((VAR32 + VAR13) >= VAR11) {






 						

						VAR13 = VAR11 - (VAR32 + 1);










 					}

					memcpy(VAR16 + VAR32 , VAR2 + VAR32 + 1, VAR13);

					FUN12(VAR33, VAR2 + VAR32 + 1, VAR13, 1);

					VAR32 = VAR32 + VAR13 + 1;




 				}

				VAR16[VAR11] = '';


 				VAR2 += VAR11;
 

				FUN9(*VAR9, "", VAR16, (VAR11>0)?VAR11 - 1:0, 0);


 				FUN13(*VAR9, "", VAR33);
 			}
 			break;
 		case VAR34:
 			FUN7(*VAR9, "", "", 1);

			VAR13 = FUN2(VAR4->VAR22, VAR4->VAR22+65536, VAR2, VAR18, (sizeof VAR18) -2);


 			if (VAR13 < 0) {
 				return NULL;
 			}
 			VAR2 += VAR13;
 			FUN7(*VAR9, "", VAR18, 1);

			VAR13 = FUN2(VAR4->VAR22, VAR4->VAR22+65536, VAR2, VAR18, (sizeof VAR18) -2);


 			if (VAR13 < 0) {
 				return NULL;
 			}
 			VAR2 += VAR13;
 			FUN7(*VAR9, "", VAR18, 1);


 			FUN4(VAR13, VAR2);
 			FUN8(*VAR9, "", VAR13);
 			FUN4(VAR13, VAR2);
			FUN8(*VAR9, "", VAR13);
			FUN4(VAR13, VAR2);
			FUN8(*VAR9, "", VAR13);
			FUN4(VAR13, VAR2);
			FUN8(*VAR9, "", VAR13);
			FUN4(VAR13, VAR2);
			FUN8(*VAR9, "", VAR13);
 			break;
 		case VAR35:
 			VAR16 = (VAR1*)VAR18;


 			for(VAR14=0; VAR14 < 8; VAR14++) {
 				FUN3(VAR15, VAR2);
 				if (VAR15 != 0) {
					if (VAR16 > (VAR1 *)VAR18) {
						VAR21 = 0;
						VAR16[0] = '';
						VAR16++;
					}
					VAR16 += sprintf((char*)VAR16,"",VAR15);
				} else {
					if (!VAR20) {
						VAR20 = 1;
						VAR21 = 1;
						VAR16[0] = '';
						VAR16++;
					} else if (!VAR21) {
						VAR16[0] = '';
						VAR16++;
						VAR16[0] = '';
						VAR16++;
					}
				}
			}
			if (VAR20 && VAR21) {
				VAR16[0] = '';
				VAR16++;
			}
			VAR16[0] = '';
			FUN7(*VAR9, "", "", 1);
			FUN7(*VAR9, "", VAR18, 1);
			break;
 		case VAR36:
 			VAR17 = VAR2;
 			FUN7(*VAR9, "", "", 1);


 			VAR13 = ((int)VAR2[0]) & 0xFF;
 			VAR2++;
 			FUN8(*VAR9, "", VAR13);
			VAR16 = (VAR1*)VAR18;
			if (VAR13 > 15) {
				VAR20 = 1;
				VAR21 = 1;
				VAR16[0] = '';
				VAR16++;
			}
			if (VAR13 % 16 > 8) {
				
				if (VAR2[0] != 0) {
					if (VAR16 > (VAR1 *)VAR18) {
						VAR21 = 0;
						VAR16[0] = '';
						VAR16++;
					}
					sprintf((char*)VAR16, "", VAR2[0] & 0xFF);
				} else {
					if (!VAR20) {
						VAR20 = 1;
						VAR21 = 1;
						VAR16[0] = '';
						VAR16++;
					} else if (!VAR21) {
						VAR16[0] = '';
						VAR16++;
						VAR16[0] = '';
						VAR16++;
					}
				}
 				VAR2++;
 			}
 			for (VAR14 = (VAR13 + 8) / 16; VAR14 < 8; VAR14++) {


 				FUN3(VAR15, VAR2);
 				if (VAR15 != 0) {
 					if (VAR16 > (VAR1 *)VAR18) {
						VAR21 = 0;
						VAR16[0] = '';
						VAR16++;
					}
					VAR16 += sprintf((char*)VAR16,"",VAR15);
				} else {
					if (!VAR20) {
						VAR20 = 1;
						VAR21 = 1;
						VAR16[0] = '';
						VAR16++;
					} else if (!VAR21) {
						VAR16[0] = '';
						VAR16++;
						VAR16[0] = '';
						VAR16++;
					}
				}
			}
			if (VAR20 && VAR21) {
				VAR16[0] = '';
				VAR16++;
			}
 			VAR16[0] = '';
 			FUN7(*VAR9, "", VAR18, 1);
 			if (VAR2 < VAR17 + VAR11) {

				VAR13 = FUN2(VAR4->VAR22, VAR4->VAR22+65536, VAR2, VAR18, (sizeof VAR18) - 2);


 				if (VAR13 < 0) {
 					return NULL;
 				}
				VAR2 += VAR13;
				FUN7(*VAR9, "", VAR18, 1);
 			}
 			break;
 		case VAR37:


 			FUN7(*VAR9, "", "", 1);
 			FUN3(VAR13, VAR2);
 			FUN8(*VAR9, "", VAR13);
 			FUN3(VAR13, VAR2);
 			FUN8(*VAR9, "", VAR13);
 			FUN3(VAR13, VAR2);
 			FUN8(*VAR9, "", VAR13);

			VAR13 = FUN2(VAR4->VAR22, VAR4->VAR22+65536, VAR2, VAR18, (sizeof VAR18) - 2);


 			if (VAR13 < 0) {
 				return NULL;
 			}
 			VAR2 += VAR13;
 			FUN7(*VAR9, "", VAR18, 1);
 			break;
 		case VAR38:


 			FUN7(*VAR9, "", "", 1);
 			FUN3(VAR13, VAR2);
 			FUN8(*VAR9, "", VAR13);
 			FUN3(VAR13, VAR2);
 			FUN8(*VAR9, "", VAR13);




 			VAR13 = (VAR2[0] & 0xFF);

			FUN9(*VAR9, "", (char*)++VAR2, VAR13, 1);






 			VAR2 += VAR13;




 			VAR13 = (VAR2[0] & 0xFF);

			FUN9(*VAR9, "", (char*)++VAR2, VAR13, 1);






 			VAR2 += VAR13;




 			VAR13 = (VAR2[0] & 0xFF);

			FUN9(*VAR9, "", (char*)++VAR2, VAR13, 1);






 			VAR2 += VAR13;

			VAR13 = FUN2(VAR4->VAR22, VAR4->VAR22+65536, VAR2, VAR18, (sizeof VAR18) - 2);




 			if (VAR13 < 0) {
 				return NULL;
 			}
			VAR2 += VAR13;
			FUN7(*VAR9, "", VAR18, 1);
			break;
		default:
			FUN14(VAR9);
			*VAR9 = NULL;
			VAR2 += VAR11;
			break;
	}

	return VAR2;
}