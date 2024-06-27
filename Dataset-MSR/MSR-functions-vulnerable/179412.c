FUN1(VAR1 *VAR2,
          const VAR3 *VAR4, int VAR5)
 {

	VAR3 *VAR6, *VAR7, *VAR8, VAR9;




 	int VAR10, VAR11;
 	const void *VAR12;
 
         if (VAR5 <= 0)
                 return;
 

	VAR6 = (VAR13 *)malloc(VAR5);


 	if (VAR6 == NULL)
 		return;
 
	

	for (VAR7 = (VAR3 *)VAR4, VAR8 = VAR6, VAR10 = VAR5; VAR10 > 0; VAR10--) {


 		VAR9 = *VAR7++;
 		if (VAR9 == 0x7d) {

			if (VAR10 > 1) {

				VAR10--;

				VAR9 = *VAR7++ ^ 0x20;

			} else

				continue;








 		}
 		*VAR8++ = VAR9;
 	}

	VAR12 = VAR2->VAR14;
	VAR2->VAR14 = VAR8;
	VAR5 = VAR8 - VAR6;

        
        if (VAR5 < 1)
                goto VAR15;
        VAR11 = *VAR6; 

        switch (VAR11) {
        case VAR16:
		FUN2(VAR2, VAR6 + 1, VAR5 - 1);
		goto VAR17;
        case VAR18:
		FUN3(VAR2, VAR6 + 1, VAR5 - 1);
		goto VAR17;
        default: 
		break;
        }

        if (VAR5 < 2)
                goto VAR15;
        VAR11 = FUN4(VAR6); 

        switch (VAR11) {
        case (VAR19 << 8 | VAR20): 
            if (VAR5 < 4)
                goto VAR15;
            VAR11 = FUN4(VAR6+2); 
            FUN5(VAR2, VAR11, VAR6 + 4, VAR5 - 4);
            break;
        default: 
            FUN5(VAR2, VAR11, VAR6 + 2, VAR5 - 2);
            break;
        }

VAR17:
	VAR2->VAR14 = VAR12;
	free(VAR6);
        return;

VAR15:
	VAR2->VAR14 = VAR12;
	free(VAR6);
	FUN6((VAR2, ""));
}