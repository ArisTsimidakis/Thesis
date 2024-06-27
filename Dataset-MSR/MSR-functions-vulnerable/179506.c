int FUN1(const struct VAR1 *VAR2,

		       struct VAR3 *VAR4, void *VAR5,

		       struct VAR3 **VAR6) {

	VAR7 *VAR8;












 	union sctp_params VAR9;

	int VAR10, VAR11;



	VAR9.VAR12 = (VAR13 *) VAR4;

	while (VAR9.VAR12 <= VAR5 - sizeof(VAR13)) {

		VAR10 = FUN2(VAR9.VAR14->VAR10);

		*VAR6 = VAR9.VAR14;


 

		if (VAR9.VAR12 > VAR5 - VAR10 ||

		    VAR10 < sizeof(VAR13))

			return 0;




 


 		switch (VAR9.VAR14->VAR15) {
























 		case VAR16:
 		case VAR17:
 		case VAR18:

			VAR8 = (VAR7 *)VAR9.VAR12;

			VAR11 = FUN2(VAR8->VAR4.VAR10);

			if (VAR11 < sizeof(VAR7) +

			    sizeof(VAR13))

				return 0;














 			break;
 		case VAR19:
 		case VAR20:
 			if (VAR10 != sizeof(VAR7))

				return 0;




 			break;
 		default:

			break;




 		}



		VAR9.VAR12 += FUN3(VAR10);
 	}
 

	if (VAR9.VAR12 != VAR5)

		return 0;














 

	return 1;


 }