FUN1(VAR1 *VAR2, u_char tpay VAR3,
		const struct VAR4 *VAR5,
		u_int VAR6, const VAR7 *VAR8,
		uint32_t phase VAR3, uint32_t doi VAR3,
		uint32_t proto VAR3, int depth VAR3)
{
 	const struct VAR9 *VAR10;
 	struct ikev2_n VAR11;
 	const VAR7 *VAR12;

	u_char VAR13, VAR14, VAR15;


 	const char *VAR16;
 	uint32_t VAR17;
 
	VAR10 = (const struct VAR9 *)VAR5;
	FUN2(*VAR10);
	FUN3(&VAR11, VAR5, sizeof(VAR11));
 	FUN4(VAR2, FUN5(VAR18), VAR11.VAR19.VAR20);
 
 	VAR13 = 1;

	VAR14 = 0;
 	VAR15=0;
 	VAR16=NULL;
 
	FUN6((VAR2,"", FUN7(VAR11.VAR21)));

	VAR17 = FUN8(VAR11.VAR17);

	
	switch(VAR17) {
	case VAR22:
		VAR16 = "";
		VAR13 = 0;
		break;

	case VAR23:
		VAR16 = "";
		VAR13 = 1;
		break;

	case VAR24:
		VAR16 = "";
		VAR13 = 0;
		break;

	case VAR25:
		VAR16 = "";
		VAR13 = 1;
		break;

	case VAR26:
		VAR16 = "";
		VAR13 = 1;
		break;

	case VAR27:
		VAR16 = "";
		VAR13 = 1;
		break;

	case VAR28:
		VAR16 = "";
		VAR13 = 1;
		break;

	case VAR29:
		VAR16 = "";
		VAR13 = 1;
		break;

	case VAR30:
		VAR16 = "";
		VAR13 = 1;
		break;

	case VAR31:
		VAR16 = "";
		VAR13 = 1;
		break;

	case VAR32:
		VAR16 = "";
		VAR13 = 0;
		break;

	case VAR33:
		VAR16 = "";
		VAR13 = 0;
		break;

	case VAR34:
		VAR16 = "";
		VAR13 = 0;
		break;

	case VAR35:
		VAR16 = "";
		VAR13 = 0;
		break;

	case VAR36:
		VAR16 = "";
		VAR13 = 0;
		break;

	case VAR37:
		VAR16 = "";
		VAR13 = 0;
		break;

	case VAR38:
		VAR16 = "";
		VAR13 = 0;
		break;

	case VAR39:
		VAR16 = "";
		VAR13 = 0;
		break;

	case VAR40:
		VAR16 = "";
		VAR13 = 1;
		break;

	case VAR41:
		VAR16 = "";
		VAR13 = 1;
		break;

	case VAR42:
 		VAR16 = "";
 		VAR13 = 1;
 		VAR15= 1;

		VAR14= 0;
 		break;
 
 	case VAR43:
		VAR16 = "";
		VAR13 = 0;
		break;

	case VAR44:
		VAR16 = "";
		VAR13 = 0;
		break;

	case VAR45:
		VAR16 = "";
		VAR13 = 1;
		break;

	case VAR46:
		VAR16 = "";
		VAR13 = 0;
		break;

	case VAR47:
		VAR16 = "";
		VAR13 = 0;
		break;

	default:
		if (VAR17 < 8192) {
			VAR16="";
		} else if(VAR17 < 16384) {
			VAR16="";
		} else if(VAR17 < 40960) {
			VAR16="";
		} else {
			VAR16="";
		}
	}

	if(VAR16) {
		FUN6((VAR2,"", VAR17, VAR16));
	}


	if (VAR13 && VAR11.VAR48) {
		FUN6((VAR2,""));
		if (!FUN9(VAR2, (const VAR49 *)(VAR10 + 1), VAR11.VAR48))
			goto VAR50;
	}
 
 	VAR12 = (const VAR7 *)(VAR10 + 1) + VAR11.VAR48;
 

	if(3 < VAR2->VAR51) {

		VAR14 = 1;

	}



	if ((VAR14 || (VAR15 && VAR8-VAR12 < 30)) && VAR12 < VAR8) {

		FUN6((VAR2,""));

		if (!FUN9(VAR2, (const VAR49 *)(VAR12), VAR8 - VAR12))

			goto VAR50;



		FUN6((VAR2,""));










 

	} else if(VAR15 && VAR12 < VAR8) {

		if(!FUN10(VAR2, VAR12, VAR8)) goto VAR50;










 	}
 
 	return (const VAR7 *)VAR5 + VAR6;
VAR50:
	FUN6((VAR2,"", FUN5(VAR18)));
	return NULL;
}