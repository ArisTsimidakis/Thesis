FUN1(VAR1 *VAR2, register const VAR3 *VAR4, u_int VAR5)
 {
 	u_int VAR6;


 






 	VAR6 = FUN2(&VAR4[2]);
 	if (VAR2->VAR7) {
                 FUN3((VAR2, "",
                       FUN4(VAR8, "", VAR4[0]),
                       FUN4(VAR9, "", VAR6),
                       VAR6,
                       VAR5));
	}

	VAR5 -= VAR10;
	VAR4 += VAR10;

	switch (VAR6) {
	case VAR11:
		FUN5(VAR2, VAR4, VAR5);
		break;
	case VAR12:
		FUN6(VAR2, VAR4, VAR5);
		break;
	case VAR13:
		FUN7(VAR2, VAR4, VAR5);
		break;
#if 0
	case VAR14:
		FUN8(VAR4, VAR5);
		break;
#endif
        case VAR15:
        case VAR16:
                FUN9(VAR2, VAR4, VAR5);
 		break;
         case VAR17:
                 






                 if (*(VAR4+1) == 0x81 ||
                     *(VAR4+1) == 0x82 ||
                     *(VAR4+1) == 0x83)
                    FUN10(VAR2, VAR4 + 1, VAR5 - 1, VAR2->VAR18 - VAR4 - 1);
                else
                    FUN10(VAR2, VAR4, VAR5, VAR2->VAR18 - VAR4);
                break;
	default:
                if (!VAR2->VAR7)
                        FUN3((VAR2, "", VAR6));
                break;
 	}
 
 	return (VAR10);








 }