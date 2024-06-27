FUN1(VAR1 *VAR2,
            register const VAR3 *VAR4, u_int VAR5)
{
	register u_int VAR6;
	const char *VAR7 = "";

	for (; VAR5 > 0; VAR4 += VAR6, VAR5 -= VAR6) {
		u_int VAR8;

		FUN2((VAR2, "", VAR7));
		VAR7 = "";

		FUN3(*VAR4);
		VAR8 = *VAR4;

		FUN2((VAR2, "",
		          FUN4(VAR9,"",VAR8)));

		if (VAR8 == VAR10 ||
                    VAR8 == VAR11)
			VAR6 = 1;

		else {
			FUN3(VAR4[1]);
			VAR6 = VAR4[1];
			if (VAR6 < 2) {
				FUN2((VAR2, "", VAR6));
				return;
			}
		}

		if (VAR6 > VAR5) {
			FUN2((VAR2, "", VAR6));
			return;
		}

		FUN5(*VAR4, VAR6);

		switch (VAR8) {
		case VAR11:
			return;

		case VAR12:
			FUN6(VAR2, VAR4, VAR6);
			break;

 		case VAR13:       
 		case VAR14:
 		case VAR15:

			FUN7(VAR2, VAR4, VAR6);




 			break;
 
 		case VAR16:
			if (VAR6 < 4) {
				FUN2((VAR2, "", VAR6));
				break;
			}
			FUN3(VAR4[3]);
			if (FUN8(&VAR4[2]) != 0)
				FUN2((VAR2, "", FUN8(&VAR4[2])));
			break;

		case VAR10:       
		case VAR17:
		default:
			break;
		}
	}
	return;

VAR18:
	FUN2((VAR2, "", VAR19));
}