static void FUN1(VAR1, VAR2 *VAR3)
{
	VAR2 *VAR4;
	int VAR5, VAR6, VAR7, VAR8;

	FUN2(VAR9, VAR10, VAR3);

	switch (VAR3->VAR11) {
	case VAR12:
		break;

	case VAR13:
		FUN3(VAR9, VAR10, VAR3->VAR14);
		break;

	case VAR15:
		if (VAR10->VAR16) {
			FUN4(VAR9, VAR10, VAR17);
			FUN4(VAR9, VAR10, VAR18);
		}
		break;

	case VAR19:
		FUN5(VAR9, VAR10, VAR3->VAR14);
		break;

	case VAR20:
		if (VAR3->VAR21) {
			FUN6(VAR9, VAR10, VAR3->VAR14);
			VAR7 = FUN7(VAR9, VAR10, VAR22);
			FUN1(VAR9, VAR10, VAR3->VAR21);
			VAR8 = FUN7(VAR9, VAR10, VAR23);
			FUN8(VAR9, VAR10, VAR7);
			FUN1(VAR9, VAR10, VAR3->VAR24);
			FUN8(VAR9, VAR10, VAR8);
		} else {
			FUN6(VAR9, VAR10, VAR3->VAR14);
			VAR8 = FUN7(VAR9, VAR10, VAR25);
			FUN1(VAR9, VAR10, VAR3->VAR24);
			FUN8(VAR9, VAR10, VAR8);
		}
		break;

	case VAR26:
		VAR5 = FUN9(VAR9, VAR10);
		FUN1(VAR9, VAR10, VAR3->VAR14);
		VAR6 = FUN9(VAR9, VAR10);
		FUN6(VAR9, VAR10, VAR3->VAR24);
		FUN10(VAR9, VAR10, VAR22, VAR5);
		FUN11(VAR9, VAR10, VAR3->VAR27, FUN9(VAR9,VAR10), VAR6);
		break;

	case VAR28:
		VAR5 = FUN9(VAR9, VAR10);
		FUN6(VAR9, VAR10, VAR3->VAR14);
		VAR8 = FUN7(VAR9, VAR10, VAR25);
		FUN1(VAR9, VAR10, VAR3->VAR24);
		FUN10(VAR9, VAR10, VAR23, VAR5);
		FUN8(VAR9, VAR10, VAR8);
		FUN11(VAR9, VAR10, VAR3->VAR27, FUN9(VAR9,VAR10), VAR5);
		break;

	case VAR29:
	case VAR30:
		if (VAR3->VAR11 == VAR30) {
			FUN5(VAR9, VAR10, VAR3->VAR14);
		} else {
			if (VAR3->VAR14) {
				FUN6(VAR9, VAR10, VAR3->VAR14);
				FUN4(VAR9, VAR10, VAR17);
			}
		}
		VAR5 = FUN9(VAR9, VAR10);
		if (VAR3->VAR24) {
			FUN6(VAR9, VAR10, VAR3->VAR24);
			VAR8 = FUN7(VAR9, VAR10, VAR25);
		} else {
			VAR8 = 0;
		}
		FUN1(VAR9, VAR10, VAR3->VAR31);
		VAR6 = FUN9(VAR9, VAR10);
		if (VAR3->VAR21) {
			FUN6(VAR9, VAR10, VAR3->VAR21);
			FUN4(VAR9, VAR10, VAR17);
		}
		FUN10(VAR9, VAR10, VAR23, VAR5);
		if (VAR8)
			FUN8(VAR9, VAR10, VAR8);
		FUN11(VAR9, VAR10, VAR3->VAR27, FUN9(VAR9,VAR10), VAR6);
		break;

	case VAR32:
	case VAR33:
		FUN6(VAR9, VAR10, VAR3->VAR24);
		FUN4(VAR9, VAR10, VAR34);
		VAR5 = FUN9(VAR9, VAR10);
		{
			FUN4(VAR9, VAR10, VAR35);
			VAR8 = FUN7(VAR9, VAR10, VAR25);
			FUN12(VAR9, VAR10, VAR3);
			if (VAR10->VAR16) {
				FUN4(VAR9, VAR10, VAR36);
				FUN1(VAR9, VAR10, VAR3->VAR21);
				FUN4(VAR9, VAR10, VAR36);
			} else {
				FUN1(VAR9, VAR10, VAR3->VAR21);
			}
			FUN10(VAR9, VAR10, VAR23, VAR5);
		}
		FUN8(VAR9, VAR10, VAR8);
		FUN11(VAR9, VAR10, VAR3->VAR27, FUN9(VAR9,VAR10), VAR5);
		break;

	case VAR37:
		FUN13(VAR9, VAR10, VAR3->VAR14, VAR3->VAR24);
		FUN11(VAR9, VAR10, VAR3->VAR27, FUN9(VAR9,VAR10), 0);
		break;

	case VAR38:
		FUN1(VAR9, VAR10, VAR3->VAR24);
		
		while (VAR3->VAR11 == VAR38)
			VAR3 = VAR3->VAR24;
		
		if (!FUN14(VAR3->VAR11) && VAR3->VAR11 != VAR37)
			FUN11(VAR9, VAR10, VAR3->VAR27, FUN9(VAR9,VAR10), 0);
		break;
 
        case VAR39:
                if (VAR3->VAR14) {

                       VAR4 = FUN15(VAR9, VAR10, VAR3, VAR3->VAR14->VAR40);


                        if (!VAR4)
                                FUN16(VAR9, VAR3, "", VAR3->VAR14->VAR40);
                } else {

                       VAR4 = FUN15(VAR9, VAR10, VAR3, NULL);


                        if (!VAR4)
                                FUN16(VAR9, VAR3, "");
                }
		FUN17(VAR9, VAR10, VAR39, VAR3, VAR4);
		FUN18(VAR9, VAR10, VAR39, VAR4, FUN7(VAR9, VAR10, VAR23));
		break;
 
        case VAR41:
                if (VAR3->VAR14) {

                       VAR4 = FUN19(VAR9, VAR10, VAR3, VAR3->VAR14->VAR40);


                        if (!VAR4)
                                FUN16(VAR9, VAR3, "", VAR3->VAR14->VAR40);
                } else {

                       VAR4 = FUN19(VAR9, VAR10, VAR3, NULL);


                        if (!VAR4)
                                FUN16(VAR9, VAR3, "");
                }
		FUN17(VAR9, VAR10, VAR41, VAR3, VAR4);
		FUN18(VAR9, VAR10, VAR41, VAR4, FUN7(VAR9, VAR10, VAR23));
		break;

	case VAR42:
		if (VAR3->VAR14)
                        FUN6(VAR9, VAR10, VAR3->VAR14);
                else
                        FUN4(VAR9, VAR10, VAR18);

               VAR4 = FUN20(VAR9, VAR10, VAR3);


                if (!VAR4)
                        FUN16(VAR9, VAR3, "");
                FUN17(VAR9, VAR10, VAR42, VAR3, VAR4);
		FUN4(VAR9, VAR10, VAR43);
		break;

	case VAR44:
		FUN6(VAR9, VAR10, VAR3->VAR14);
		FUN4(VAR9, VAR10, VAR45);
		break;

	case VAR46:
		FUN6(VAR9, VAR10, VAR3->VAR14);
		FUN4(VAR9, VAR10, VAR47);
		FUN1(VAR9, VAR10, VAR3->VAR24);
		FUN4(VAR9, VAR10, VAR48);
		break;

	case VAR49:
		if (VAR3->VAR24 && VAR3->VAR21) {
			if (VAR3->VAR31)
				FUN21(VAR9, VAR10, VAR3->VAR14, VAR3->VAR24, VAR3->VAR21, VAR3->VAR31);
			else
				FUN22(VAR9, VAR10, VAR3->VAR14, VAR3->VAR24, VAR3->VAR21);
		} else {
			FUN23(VAR9, VAR10, VAR3->VAR14, VAR3->VAR31);
		}
		break;

	case VAR50:
		FUN4(VAR9, VAR10, VAR51);
		break;

	default:
		if (VAR10->VAR16) {
			FUN4(VAR9, VAR10, VAR17);
			FUN6(VAR9, VAR10, VAR3);
		} else {
			FUN6(VAR9, VAR10, VAR3);
			FUN4(VAR9, VAR10, VAR17);
		}
		break;
	}
}