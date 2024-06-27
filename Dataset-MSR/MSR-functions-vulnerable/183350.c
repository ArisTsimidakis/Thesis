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
 				

				if (VAR5->VAR27 + VAR2->VAR13->VAR26 >


 				  VAR28 - 2 ||

				  VAR5->VAR29 + VAR2->VAR13->VAR26 >


 				  VAR28 - 2) {
 					return -1;
 				}
				VAR14 = VAR13->VAR30 * (FUN2(VAR31, 1) <<
				  (VAR5->VAR27 + VAR13->VAR26 - VAR3 - 1));
				VAR15 = VAR13->VAR32 * (FUN2(VAR31, 1) <<
				  (VAR5->VAR29 + VAR13->VAR26 - VAR3 - 1));
				VAR2->VAR14 = (!VAR2->VAR14) ? VAR14 : FUN3(VAR2->VAR14, VAR14);
				VAR2->VAR15 = (!VAR2->VAR15) ? VAR15 : FUN3(VAR2->VAR15, VAR15);
			}
		}
		VAR2->VAR21 = 0;
	}

	for (VAR2->VAR3 = VAR7->VAR33; VAR2->VAR3 < VAR7->VAR34 &&
	  VAR2->VAR3 < VAR2->VAR35; ++VAR2->VAR3) {
		for (VAR2->VAR36 = VAR2->VAR37; VAR2->VAR36 < VAR2->VAR38; VAR2->VAR36 +=
		  VAR2->VAR15 - (VAR2->VAR36 % VAR2->VAR15)) {
			for (VAR2->VAR39 = VAR2->VAR40; VAR2->VAR39 < VAR2->VAR41; VAR2->VAR39 +=
			  VAR2->VAR14 - (VAR2->VAR39 % VAR2->VAR14)) {
				for (VAR2->VAR11 = VAR7->VAR42,
				  VAR2->VAR13 = &VAR2->VAR23[VAR2->VAR11];
				  VAR2->VAR11 < FUN2(int, VAR7->VAR43) && VAR2->VAR11 <
				  VAR2->VAR24; ++VAR2->VAR11, ++VAR2->VAR13) {
					if (VAR2->VAR3 >= VAR2->VAR13->VAR26) {
						continue;
					}
					VAR2->VAR5 = &VAR2->VAR13->VAR25[VAR2->VAR3];
					if (VAR2->VAR5->VAR44 == 0) {
						continue;
					}
					VAR16 = VAR2->VAR13->VAR26 - 1 - VAR2->VAR3;
					VAR17 = VAR16 + VAR2->VAR5->VAR27;
					VAR18 = VAR16 + VAR2->VAR5->VAR29;
					VAR19 = FUN4(VAR2->VAR40, VAR2->VAR13->VAR30 << VAR16);
					VAR20 = FUN4(VAR2->VAR37, VAR2->VAR13->VAR32 << VAR16);
					if (((VAR2->VAR39 == VAR2->VAR40 &&
					  ((VAR19 << VAR16) % (FUN2(VAR31, 1) << VAR17)))
					  || !(VAR2->VAR39 % (FUN2(VAR31, 1) << VAR17))) &&
					  ((VAR2->VAR36 == VAR2->VAR37 &&
					  ((VAR20 << VAR16) % (FUN2(VAR31, 1) << VAR18)))
					  || !(VAR2->VAR36 % (FUN2(VAR31, 1) << VAR18)))) {
						VAR8 = FUN5(FUN4(VAR2->VAR39,
						  VAR2->VAR13->VAR30 << VAR16), VAR2->VAR5->VAR27) -
						  FUN5(VAR19, VAR2->VAR5->VAR27);
						VAR9 = FUN5(FUN4(VAR2->VAR36,
						  VAR2->VAR13->VAR32 << VAR16), VAR2->VAR5->VAR29) -
						  FUN5(VAR20, VAR2->VAR5->VAR29);
						VAR2->VAR45 = VAR9 * VAR2->VAR5->VAR46 + VAR8;

						assert(VAR2->VAR45 < VAR2->VAR5->VAR44);
						for (VAR2->VAR47 = 0; VAR2->VAR47 <
						  VAR2->VAR48 && VAR2->VAR47 < FUN2(int,
						  VAR7->VAR49); ++VAR2->VAR47) {
							VAR10 = &VAR2->VAR5->VAR50[VAR2->VAR45];
							if (VAR2->VAR47 >= *VAR10) {
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