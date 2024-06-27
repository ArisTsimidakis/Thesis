FUN1(VAR1 *VAR2,
                     const VAR3 *VAR4, char *VAR5, u_int VAR6)
{
        uint8_t VAR7, VAR8, VAR9, VAR10;
        u_int VAR11;

	FUN2(VAR4[0], 2);
        VAR7 = *VAR4++;
        VAR8 = *VAR4++;

        snprintf(VAR5, VAR6, "",
                 FUN3(VAR12,
                         "", VAR7),
                 VAR7, VAR8);

        switch(VAR7) {
        case VAR13:
            FUN2(VAR4[0], VAR14);
            VAR11 = strlen(VAR5);
            snprintf(VAR5 + VAR11, VAR6 - VAR11, "",
                     FUN4(VAR2, VAR4),
                     FUN5(VAR2, VAR4 + VAR14,
                                      (VAR8 - VAR14) << 3));
            break;
        case VAR15:
            FUN2(VAR4[0], VAR14 + 4);
            VAR11 = strlen(VAR5);
	    snprintf(VAR5 + VAR11, VAR6 - VAR11, "",
		FUN4(VAR2, VAR4),
		FUN6(VAR2, VAR16, sizeof(VAR16),
		FUN7(VAR4 + VAR14)));
            break;

        case VAR17:
            FUN2(VAR4[0], VAR14);
            VAR11 = strlen(VAR5);
            snprintf(VAR5 + VAR11, VAR6 - VAR11, "",
                     FUN4(VAR2, VAR4));
            VAR4 += VAR14;

            VAR10 = FUN8(VAR2, VAR4, VAR5, VAR6);
            VAR9 =  VAR8 - VAR10;

            FUN2(VAR4[0], VAR9);
            VAR11 = strlen(VAR5);
            snprintf(VAR5 + VAR11, VAR6 - VAR11, "",
                     FUN5(VAR2, VAR4, VAR9 << 3));
            break;

        case VAR18:
            FUN2(VAR4[0], VAR14);
            VAR11 = strlen(VAR5);
            snprintf(VAR5 + VAR11, VAR6 - VAR11, "",
                     FUN4(VAR2, VAR4));
            VAR4 += VAR14;

            FUN8(VAR2, VAR4, VAR5, VAR6);
            break;
 
         case VAR19: 
         case VAR20:

            FUN2(VAR4[0], VAR14);


             VAR11 = strlen(VAR5);
 	    snprintf(VAR5 + VAR11, VAR6 - VAR11, "",
 		FUN4(VAR2, VAR4),
 		FUN6(VAR2, VAR16, sizeof(VAR16),
 		FUN7(VAR4 + VAR14)));

            VAR4 += VAR14;


 
             FUN8(VAR2, VAR4, VAR5, VAR6);
             break;

            
        case VAR21:
        default:
            break;
        }

        return VAR8 + 2;

VAR22:
	return -2;
}