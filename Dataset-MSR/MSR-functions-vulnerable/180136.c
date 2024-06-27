static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, int VAR5) {
	struct mt_mactelnet_control_hdr VAR6;
	struct mt_packet VAR7;
	unsigned char *VAR8 = VAR4->VAR8;
	unsigned int VAR9 = 0;
	int VAR10 = 0;
	int VAR11 = 0;
	int VAR12 = 0;
	int VAR13 = 0;
	int VAR14;

	
	VAR14 = FUN2(VAR8, VAR5 - VAR15, &VAR6);

	while (VAR14) {
		if (VAR6.VAR16 == VAR17) {
			int VAR18,VAR19;
			if (!VAR2->VAR20) {
				for (VAR19 = 0; VAR19 < 16; ++VAR19) {
					VAR2->VAR21[VAR19] = rand() % 256;
				}
				VAR2->VAR20 = 1;

				memset(VAR2->VAR22, 0, sizeof(VAR2->VAR22));
			}
			FUN3(&VAR7, VAR23, VAR4->VAR24, VAR4->VAR25, VAR4->VAR26, VAR2->VAR27);
			VAR18 = FUN4(&VAR7, VAR28, (VAR2->VAR21), 16);
			VAR2->VAR27 += VAR18;

			FUN5(VAR2, &VAR7);
		
		
		} else if (VAR6.VAR16 == VAR29 && VAR2->VAR30 != VAR31) {
			memcpy(VAR2->VAR32, VAR6.VAR8, VAR9 = (VAR6.VAR33 > VAR34 - 1 ? VAR34 - 1 : VAR6.VAR33));
			VAR2->VAR32[VAR9] = 0;
			VAR10 = 1;

		} else if (VAR6.VAR16 == VAR35 && VAR6.VAR33 >= 2) {
			unsigned short VAR36;

			memcpy(&VAR36, VAR6.VAR8, 2);
			VAR2->VAR37 = FUN6(VAR36);
			VAR12 = 1;

		} else if (VAR6.VAR16 == VAR38 && VAR6.VAR33 >= 2) {
			unsigned short VAR39;

			memcpy(&VAR39, VAR6.VAR8, 2);
			VAR2->VAR40 = FUN6(VAR39);
			VAR13 = 1;

		} else if (VAR6.VAR16 == VAR41) {

 			memcpy(VAR2->VAR42, VAR6.VAR8, VAR9 = (VAR6.VAR33 > 30 - 1 ? 30 - 1 : VAR6.VAR33));
 			VAR2->VAR42[VAR9] = 0;
 

		} else if (VAR6.VAR16 == VAR43) {


 
 #if FUN7(VAR44) && FUN7(VAR45)
 			mlock(VAR2->VAR22, 17);
#endif
			memcpy(VAR2->VAR22, VAR6.VAR8, 17);
			VAR11 = 1;

		} else if (VAR6.VAR16 == VAR46) {

			
			if (VAR2->VAR30 == VAR31 && VAR2->VAR47 != -1) {
				write(VAR2->VAR47, VAR6.VAR8, VAR6.VAR33);
 			}
 
 		} else {

			syslog(VAR48, FUN8(""), VAR2->VAR26, VAR6.VAR16);


 		}
 
 		
		VAR14 = FUN2(NULL, 0, &VAR6);
	}

	if (VAR10 && VAR11) {
		FUN9(VAR2, VAR4);
	}

	if (VAR2->VAR30 == VAR31 && (VAR12 || VAR13)) {
		FUN10(VAR2->VAR47, VAR2->VAR37, VAR2->VAR40);

	}
}