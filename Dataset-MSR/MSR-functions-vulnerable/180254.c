static VAR1 * FUN1(int VAR2, VAR1 *VAR3, int VAR4, VAR5 *VAR6, VAR7 *return_value VAR8) 
{
	VAR1 *VAR9;
	zend_bool VAR10 = 0;
	VAR7 *VAR11, *VAR12;
	zend_error_handling VAR13;

	FUN2(VAR14, VAR15, &error_handling VAR16);

	switch (VAR3->VAR4) {
	case VAR17:
	case VAR18:
		break;
	case VAR19:
		if (!VAR3->VAR20.VAR21.VAR22.VAR23[0]) {
			FUN3(VAR15, 0 VAR16, "");
			FUN4(&error_handling VAR16);
			return NULL;
		}
	}

	switch (VAR4) {
	case VAR17:
		VAR6 = VAR6 ? VAR6 : VAR3->VAR24;

		FUN5(ce VAR16);

		VAR25->VAR26.VAR27 = FUN6(VAR6, &intern VAR16);
		FUN7(VAR25) = VAR28;

		FUN8(source VAR16);
		if (VAR6->VAR29->VAR30.VAR31 != VAR32) {
			FUN9(VAR11);
			FUN10(VAR11, VAR3->VAR33, VAR3->VAR34, 1);
			FUN11(&VAR25, VAR6, &VAR6->VAR29, "", NULL, VAR11);
			FUN12(&VAR11);
		} else {
			VAR9->VAR33 = FUN13(VAR3->VAR33, VAR3->VAR34);
			VAR9->VAR34 = VAR3->VAR34;
			VAR9->VAR35 = FUN14(VAR3, &VAR9->_path_len VAR16);
			VAR9->VAR35 = FUN13(VAR9->VAR35, VAR9->VAR36);
		}
		break;
	case VAR18:
		VAR6 = VAR6 ? VAR6 : VAR3->VAR37;

		FUN5(ce VAR16);
 
 		VAR25->VAR26.VAR27 = FUN6(VAR6, &intern VAR16);
 		FUN7(VAR25) = VAR28;

	


 		FUN8(source VAR16);
 
 		if (VAR6->VAR29->VAR30.VAR31 != VAR38) {
			FUN9(VAR11);
			FUN9(VAR12);
			FUN10(VAR11, VAR3->VAR33, VAR3->VAR34, 1);
			FUN10(VAR12, "", 1, 1);
			FUN15(&VAR25, VAR6, &VAR6->VAR29, "", NULL, VAR11, VAR12);
			FUN12(&VAR11);
			FUN12(&VAR12);
		} else {
			VAR9->VAR33 = VAR3->VAR33;
 			VAR9->VAR34 = VAR3->VAR34;
 			VAR9->VAR35 = FUN14(VAR3, &VAR9->_path_len VAR16);
 			VAR9->VAR35 = FUN13(VAR9->VAR35, VAR9->VAR36);

		


 			VAR9->VAR20.VAR39.VAR40 = "";
 			VAR9->VAR20.VAR39.VAR41 = 1;

		

			if (VAR2 && FUN16(FUN17() VAR16, "", 

					&VAR9->VAR20.VAR39.VAR40, &VAR9->VAR20.VAR39.VAR41, 






 					&VAR10, &VAR9->VAR20.VAR39.VAR42) == VAR43) {
 				FUN4(&error_handling VAR16);
 				VAR9->VAR20.VAR39.VAR40 = NULL;
				VAR9->VAR33 = NULL;
				FUN18(VAR25);
 				FUN7(VAR25) = VAR44;
 				return NULL;
 			}

		


 			if (FUN19(VAR9, VAR10, 0 VAR16) == VAR43) {
 				FUN4(&error_handling VAR16);
 				FUN18(VAR25);
				FUN7(VAR25) = VAR44;
				return NULL;
 			}
 		}
 		break;

	case VAR19:	


 		FUN4(&error_handling VAR16);
 		FUN3(VAR15, 0 VAR16, "");
 		return NULL;
	}
	FUN4(&error_handling VAR16);
	return NULL;
}