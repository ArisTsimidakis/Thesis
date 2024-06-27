FUN1(VAR1 *VAR2,
                         const VAR3 *VAR4, int VAR5)
{
	int VAR6, VAR7;

	if (VAR5 < 2)
		return 0;
	FUN2(*VAR4, 2);
	VAR6 = VAR4[1];
	VAR7 = VAR4[0];
	if (VAR5 < VAR6)
		return 0;
	if (VAR6 < 2) {
		FUN3((VAR2, "",
		          FUN4(VAR8, "", VAR7),
		          VAR7,
		          VAR6));
		return 0;
	}

	FUN3((VAR2, "",
	          FUN4(VAR8, "", VAR7),
	          VAR7,
	          VAR6));

	switch (VAR7) {
	case VAR9:
		if (VAR6 < 3) {
 			FUN3((VAR2, ""));
 			return VAR6;
 		}

		FUN2(*(VAR4 + 2), 1);


 		FUN3((VAR2, "",
 			VAR4[2] >> 5, VAR4[2] & 0x1f));
 		break;
	case VAR10:
		if (VAR6 < 4) {
 			FUN3((VAR2, ""));
 			return VAR6;
 		}

		FUN2(*(VAR4 + 2), 1);


 		FUN3((VAR2, "",
 				(VAR4[2] & 0xc0) >> 6,
 				(VAR4[2] & 0x20) ? "" : "",
				VAR4[2] & 0x1f, VAR4[3]));
		break;
	case VAR11:
		if (VAR6 < 4) {
 			FUN3((VAR2, ""));
 			return VAR6;
 		}

		FUN2(*(VAR4 + 2), 1);


 		FUN3((VAR2, "",
 			(VAR4[2] & 0xf0) >> 4,
 			((VAR4[2] & 0x0f) == 8) ? "" : "",
			VAR4[2] & 0x0f, (VAR4[3] & 0xfc) >> 2, VAR4[3] & 0x03));
		break;


#if 0
	case VAR12:
	case VAR13:
	case VAR14:
	case VAR15:
	case VAR16:
	case VAR17:
	case VAR18:
	case VAR19:
	case VAR20:
	case VAR21:
	case VAR22:
	case VAR23:
		break;
#endif
	default:
		
		if (VAR2->VAR24 < 2)
			FUN5(VAR2, &VAR4[2], "", VAR6 - 2);
		break;
	}
	if (VAR2->VAR24 > 1)
		FUN5(VAR2, &VAR4[2], "", VAR6 - 2); 

	return VAR6;

VAR25:
	FUN3((VAR2, ""));
	return 0;
}