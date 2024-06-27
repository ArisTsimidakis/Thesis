static int FUN1(struct VAR1 *VAR2, int VAR3,
    struct VAR4 *VAR5, unsigned char *VAR6, int VAR7)
{
	struct VAR8 *VAR9 = &VAR2->VAR2;
	unsigned char *VAR10 = VAR6;
	int VAR11;
	int VAR12, VAR13;
	int VAR14, VAR15, VAR16;
	struct VAR17 *VAR18;
	unsigned char *VAR19;
	int VAR20;
	struct VAR21 *VAR22;
	int VAR23, VAR24;
	u8 VAR25[VAR26], VAR27[VAR26];
	unsigned VAR28 = 0;

	memcpy(&VAR5->VAR29, VAR6, VAR30);
	if (VAR5->VAR29.VAR31 != VAR32 ||
	    VAR5->VAR29.VAR33 < VAR30 ||
	    VAR5->VAR29.VAR33 > VAR7) {
		FUN2(VAR9, ""
		    "", VAR3,
		    VAR5->VAR29.VAR31, VAR5->VAR29.VAR33);
		return -VAR34;
	}
	VAR11 = VAR5->VAR29.VAR35;

	VAR6 += VAR5->VAR29.VAR33;
	VAR7 -= VAR5->VAR29.VAR33;

	VAR12 = VAR13 = VAR5->VAR29.VAR36;
	if (VAR12 > VAR26) {
		FUN3(VAR9, ""
		    "",
		    VAR11, VAR12, VAR26);
		VAR12 = VAR26;
	}

	
	VAR16 = 0;
	for ((VAR19 = VAR6, VAR20 = VAR7);
	      VAR20 > 0;
	     (VAR19 += VAR22->VAR33, VAR20 -= VAR22->VAR33)) {

		if (VAR20 < sizeof(struct VAR21)) {
			FUN3(VAR9, ""
			    "",
			    VAR11, VAR20, FUN4(VAR20));
			break;
		}

		VAR22 = (struct VAR21 *) VAR19;
		if ((VAR22->VAR33 > VAR20) || (VAR22->VAR33 < 2)) {
			FUN3(VAR9, ""
			    "",
			    VAR11, VAR22->VAR33);
			break;
		}

		if (VAR22->VAR31 == VAR37) {
			struct VAR38 *VAR39;
			int VAR40;

			VAR39 = (struct VAR38 *) VAR22;
			if (VAR39->VAR33 < VAR41) {
				FUN3(VAR9, ""
				    ""
				    "", VAR11, VAR39->VAR33);
				continue;
			}

			VAR40 = VAR39->VAR42;

			if ((VAR2->VAR43 & VAR44) &&
			    VAR16 >= VAR13) {
				FUN3(VAR9, ""
				    ""
				    ""
				    "", VAR11, VAR40);
				continue;
			}

			if (VAR40 >= VAR13)
				FUN3(VAR9, ""
				    "",
				    VAR11, VAR40, VAR13 - 1);

			
			for (VAR14 = 0; VAR14 < VAR16; ++VAR14) {
				if (VAR25[VAR14] == VAR40)
					break;
			}
			if (VAR14 < VAR16) {
				if (VAR27[VAR14] < 255)
					++VAR27[VAR14];
			} else if (VAR16 < VAR26) {
				VAR25[VAR16] = VAR40;
				VAR27[VAR16] = 1;
				++VAR16;
			}
 
 		} else if (VAR22->VAR31 ==
 				VAR45) {




















 			if (VAR28 == VAR46) {
 				FUN3(VAR9, ""
 					       ""
 					       ""
 					       "", VAR11);
 			} else {

				VAR5->VAR47[VAR28] =

					(struct VAR48

					*)VAR22;


 				VAR28++;
 			}
 
		} else if (VAR22->VAR31 == VAR49 ||
			    VAR22->VAR31 == VAR32)
			FUN3(VAR9, ""
			    "",
			    VAR11, VAR22->VAR31);

	}	
	VAR7 = VAR19 - VAR6;
	VAR5->VAR29.VAR50 = FUN5(VAR19 - VAR10);

	if (VAR16 != VAR12)
		FUN3(VAR9, ""
		    "",
		    VAR11, VAR16, FUN4(VAR16), VAR13);
	else if (VAR16 == 0)
		FUN3(VAR9, "", VAR11);
	VAR5->VAR29.VAR36 = VAR12 = VAR16;

	
	for (VAR14 = 0; VAR14 < VAR12; ++VAR14) {
		for (VAR15 = 0; VAR15 < VAR12; ++VAR15) {
			if (VAR25[VAR15] == VAR14)
				break;
		}
		if (VAR15 >= VAR12)
			FUN3(VAR9, ""
			    "", VAR11, VAR14);
	}

	
	for (VAR14 = 0; VAR14 < VAR12; ++VAR14) {
		VAR15 = VAR27[VAR14];
		if (VAR15 > VAR51) {
			FUN3(VAR9, ""
			    ""
			    "",
			    VAR11, VAR25[VAR14], VAR15, VAR51);
			VAR27[VAR14] = VAR15 = VAR51;
		}

		VAR23 = sizeof(*VAR18) + sizeof(struct VAR52) * VAR15;
		VAR5->VAR53[VAR14] = VAR18 = FUN6(VAR23, VAR54);
		if (!VAR18)
			return -VAR55;
		FUN7(&VAR18->VAR56);
	}

	

	
	VAR5->VAR57 = VAR6;
	VAR14 = FUN8(VAR6, VAR7, VAR37,
	    VAR37, &VAR16);
	VAR5->VAR58 = VAR14;
	if (VAR16 > 0)
		FUN9(VAR9, "",
		    VAR16, FUN4(VAR16), "");
	VAR6 += VAR14;
	VAR7 -= VAR14;

	
	while (VAR7 > 0) {
		VAR24 = FUN10(VAR9, VAR11, VAR5,
		    VAR6, VAR7, VAR25, VAR27);
		if (VAR24 < 0)
			return VAR24;

		VAR6 += VAR24;
		VAR7 -= VAR24;
	}

	
	for (VAR14 = 0; VAR14 < VAR12; ++VAR14) {
		VAR18 = VAR5->VAR53[VAR14];
		for (VAR15 = 0; VAR15 < VAR18->VAR59; ++VAR15) {
			for (VAR16 = 0; VAR16 < VAR18->VAR59; ++VAR16) {
				if (VAR18->VAR60[VAR16].VAR29.
				    VAR61 == VAR15)
					break;
			}
			if (VAR16 >= VAR18->VAR59)
				FUN3(VAR9, ""
				    "", VAR11, VAR25[VAR14], VAR15);
		}
	}

	return 0;
}