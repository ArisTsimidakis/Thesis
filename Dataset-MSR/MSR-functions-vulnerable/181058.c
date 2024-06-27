FUN1(VAR1 *VAR2,
               const VAR3 *VAR4, const VAR3 *bp2 VAR5)
{
	const struct VAR6 *VAR7;
	const VAR3 *VAR8;
	unsigned VAR9, VAR10;
	uint8_t VAR11;

	VAR7 = (const struct VAR6 *)VAR4;

	
	VAR8 = VAR2->VAR12;

	if (!FUN2(VAR7->VAR13)) {
		
		VAR9 = VAR8 - VAR4;
		goto VAR14;
	}
	VAR9 = (VAR7->VAR13 + 1) << 3;

	

	FUN3(VAR7->VAR15);
	VAR11 = VAR7->VAR15;
	if (VAR11 <= VAR16 && VAR9 < VAR17[VAR11]) {
		FUN4((VAR2, "", VAR9, VAR11));
		goto VAR14;
	}
	FUN4((VAR2, "", FUN5(VAR18, "", VAR11)));
	switch (VAR11) {
	case VAR19:
		VAR10 = VAR20;
		break;
	case VAR21:
 	case VAR22:
 		VAR10 = VAR20;
 		if (VAR2->VAR23) {

			FUN6(*VAR7, VAR10 + 8);


 			FUN4((VAR2, "",
 			       VAR11 == VAR21 ? "" : "",
 			       FUN7(&VAR4[VAR10]),
			       FUN7(&VAR4[VAR10 + 4])));
		}
		VAR10 += 8;
		break;
	case VAR24:
	case VAR25:
		FUN3(VAR7->VAR26[0]);
 		FUN4((VAR2, "", FUN8(&VAR7->VAR26[0])));
 		VAR10 = VAR20;
 		if (VAR2->VAR23) {

			FUN6(*VAR7, VAR10 + 8);


 			FUN4((VAR2, "",
 			       VAR11 == VAR24 ? "" : "",
 			       FUN7(&VAR4[VAR10]),
 			       FUN7(&VAR4[VAR10 + 4])));
 		}
 		VAR10 += 8;
 		if (VAR2->VAR23) {

			FUN6(*VAR7, VAR10 + 8);


 			FUN4((VAR2, "",
 			       VAR11 == VAR24 ? "" : "",
 			       FUN7(&VAR4[VAR10]),
			       FUN7(&VAR4[VAR10 + 4])));
		}
		VAR10 += 8;
		break;
	case VAR27:
 		FUN3(VAR7->VAR26[0]);
 		FUN4((VAR2, "", FUN8(&VAR7->VAR26[0])));
 		VAR10 = VAR20;

		FUN6(*VAR7, VAR10 + 1);

		if (VAR4[VAR10] & 0xf0)




 			FUN4((VAR2, ""));

		if (VAR4[VAR10] & 0x80)

			FUN4((VAR2, ""));

		if (VAR4[VAR10] & 0x40)

			FUN4((VAR2, ""));

		if (VAR4[VAR10] & 0x20)

			FUN4((VAR2, ""));

		if (VAR4[VAR10] & 0x10)

			FUN4((VAR2, ""));


















 		
 		VAR10 += 1;
 		
 		VAR10 += 1;

		FUN6(*VAR7, VAR10 + 2);


 		
 		FUN4((VAR2, "", FUN8(&VAR4[VAR10]) << 2));
 		VAR10 += 2;
 		break;
 	case VAR28:
 		FUN3(VAR7->VAR29[0]);
 		FUN4((VAR2, "", VAR7->VAR29[0]));


 		if (VAR7->VAR29[1] & 0x80)
 			FUN4((VAR2, ""));
 		
 		VAR10 = VAR20;

		FUN6(*VAR7, VAR10 + 2);


 		FUN4((VAR2, "", FUN8(&VAR4[VAR10])));
 		VAR10 += 2;

		FUN6(*VAR7, VAR10 + 2);


 		
 		FUN4((VAR2, "", FUN8(&VAR4[VAR10]) << 2));
 		VAR10 += 2;
		break;
	case VAR30:
		FUN3(VAR7->VAR29[0]);
 		FUN4((VAR2, "", VAR7->VAR29[0]));
 		
 		VAR10 = VAR20;

		FUN6(*VAR7, VAR10 + 16);


 		FUN4((VAR2, "", FUN9(VAR2, &VAR4[VAR10])));
 		VAR10 += 16;
 		break;
	default:
		FUN4((VAR2, "", VAR7->VAR13));
		return(VAR9);
		break;
	}
	if (VAR2->VAR23)
		if (FUN10(VAR2, &VAR4[VAR10], VAR9 - VAR10))
			goto VAR14;

	return(VAR9);

 VAR14:
	FUN4((VAR2, "", VAR31));
	return(-1);
}