static int FUN1(register VAR1 *VAR2)
{
	int VAR3;
	VAR4 *VAR5;
	VAR6 *VAR7;
	int VAR8;
	int VAR9;
	int *VAR10;
	int VAR11;
	VAR12 *VAR13;
	int VAR14;
	int VAR15;
	uint_fast32_t VAR16;
	uint_fast32_t VAR17;
	uint_fast32_t VAR18;
	uint_fast32_t VAR19;
	uint_fast32_t VAR20;

	VAR7 = VAR2->VAR7;
	if (!VAR2->VAR21) {
		goto VAR22;
	} else {
		VAR2->VAR14 = 0;
		VAR2->VAR15 = 0;
		for (VAR11 = 0, VAR13 = VAR2->VAR23; VAR11 < VAR2->VAR24;
 		  ++VAR11, ++VAR13) {
 			for (VAR3 = 0, VAR5 = VAR13->VAR25; VAR3 <
 			  VAR13->VAR26; ++VAR3, ++VAR5) {

				VAR14 = VAR13->VAR27 * (1 <<

				  (VAR5->VAR28 + VAR13->VAR26 -

				  VAR3 - 1));

				VAR15 = VAR13->VAR29 * (1 <<

				  (VAR5->VAR30 + VAR13->VAR26 -

				  VAR3 - 1));

				VAR2->VAR14 = (!VAR2->VAR14) ? VAR14 :

				  FUN2(VAR2->VAR14, VAR14);

				VAR2->VAR15 = (!VAR2->VAR15) ? VAR15 :

				  FUN2(VAR2->VAR15, VAR15);


























 			}
 		}
 		VAR2->VAR21 = 0;
	}

	for (VAR2->VAR31 = VAR2->VAR32; VAR2->VAR31 < VAR2->VAR33; VAR2->VAR31 += VAR2->VAR15 -
	  (VAR2->VAR31 % VAR2->VAR15)) {
		for (VAR2->VAR34 = VAR2->VAR35; VAR2->VAR34 < VAR2->VAR36; VAR2->VAR34 += VAR2->VAR14 -
		  (VAR2->VAR34 % VAR2->VAR14)) {
			for (VAR2->VAR11 = VAR7->VAR37, VAR2->VAR13 =
			  &VAR2->VAR23[VAR2->VAR11]; VAR2->VAR11 < VAR2->VAR24
			  && VAR2->VAR11 < FUN3(int, VAR7->VAR38); ++VAR2->VAR11,
			  ++VAR2->VAR13) {
				for (VAR2->VAR3 = VAR7->VAR39,
				  VAR2->VAR5 = &VAR2->VAR13->VAR25[VAR2->VAR3];
				  VAR2->VAR3 < VAR2->VAR13->VAR26 &&
				  VAR2->VAR3 < VAR7->VAR40; ++VAR2->VAR3,
				  ++VAR2->VAR5) {
					if (VAR2->VAR5->VAR41 == 0) {
						continue;
					}
					VAR18 = VAR2->VAR13->VAR26 - 1 - VAR2->VAR3;
					VAR16 = FUN4(VAR2->VAR35, VAR2->VAR13->VAR27 << VAR18);
 					VAR17 = FUN4(VAR2->VAR32, VAR2->VAR13->VAR29 << VAR18);
 					VAR19 = VAR18 + VAR2->VAR5->VAR28;
 					VAR20 = VAR18 + VAR2->VAR5->VAR30;

					if (((VAR2->VAR34 == VAR2->VAR35 && ((VAR16 << VAR18) % (1 << VAR19))) ||




 					  !(VAR2->VAR34 % (VAR2->VAR13->VAR27 << VAR19))) &&

					  ((VAR2->VAR31 == VAR2->VAR32 && ((VAR17 << VAR18) % (1 << VAR20))) ||




 					  !(VAR2->VAR31 % (VAR2->VAR13->VAR29 << VAR20)))) {

						VAR8 = FUN5(FUN4(VAR2->VAR34, VAR2->VAR13->VAR27

						  << VAR18), VAR2->VAR5->VAR28) - FUN5(VAR16,

						  VAR2->VAR5->VAR28);

						VAR9 = FUN5(FUN4(VAR2->VAR31, VAR2->VAR13->VAR29

						  << VAR18), VAR2->VAR5->VAR30) - FUN5(VAR17,

						  VAR2->VAR5->VAR30);












 						VAR2->VAR42 = VAR9 * VAR2->VAR5->VAR43 + VAR8;
 						assert(VAR2->VAR42 < VAR2->VAR5->VAR41);
 						for (VAR2->VAR44 = 0; VAR2->VAR44 < VAR2->VAR45 &&

						  VAR2->VAR44 < FUN3(int, VAR7->VAR46); ++VAR2->VAR44) {




 							VAR10 = &VAR2->VAR5->VAR47[VAR2->VAR42];
 							if (VAR2->VAR44 >= *VAR10) {
 								++(*VAR10);
								return 0;
							}
VAR22:
							;
						}
					}
				}
			}
		}
	}
	return 1;
}