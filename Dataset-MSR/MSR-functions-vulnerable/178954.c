static int FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
	struct VAR4 *VAR5 = FUN2(VAR6);

	if ((VAR3 & VAR7) == VAR8 && (VAR3 & VAR9) == VAR10) {
 		int VAR11 = (VAR3 & VAR12) >> 11;
 		int VAR13 = (VAR3 & VAR14) >> 16;
 		FUN3(VAR15,

				1, 0, VAR2, 0);


 		switch (VAR11) {
 		case 0:		
 			VAR2->VAR2[VAR13] = FUN4();
			return 0;
		case 1:		
			VAR2->VAR2[VAR13] = FUN5(VAR16.VAR17.VAR18,
					     VAR16.VAR19.VAR18);
			return 0;
		case 2:		
			VAR2->VAR2[VAR13] = FUN6();
			return 0;
		case 3:		
			switch (VAR16.VAR20) {
			case VAR21:
			case VAR22:
				VAR2->VAR2[VAR13] = 1;
				break;
			default:
				VAR2->VAR2[VAR13] = 2;
			}
			return 0;
		case 29:
			VAR2->VAR2[VAR13] = VAR5->VAR23;
			return 0;
		default:
			return -1;
		}
	}

	
	return -1;
}