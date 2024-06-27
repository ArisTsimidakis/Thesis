static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
	struct VAR5 *VAR6 = FUN2(VAR2);
	u8 VAR7 = FUN3(VAR4->VAR8);
	int VAR9;

	if (VAR7 == VAR10 || VAR7 == VAR11) {
		if (VAR7 == VAR11) {
			if (FUN4(VAR4->VAR8) != 0 ||
			    VAR4->VAR12 != VAR13 ||
			    VAR4->VAR14 != 0 || VAR4->VAR15 != 0) {
				FUN5(VAR2, "");
				return -VAR16;
			}
		} else {
			if (VAR4->VAR12 != VAR13 || VAR4->VAR14 != 0 ||
			    (VAR4->VAR15 != 16 && VAR4->VAR15 != 32 && VAR4->VAR15 != 64) ||
			    FUN6(VAR4->VAR8) == VAR17) {
				FUN5(VAR2, "");
				return -VAR16;
			}
		}

		
		VAR9 = FUN7(VAR2, VAR4->VAR18, VAR19);
		if (VAR9)
			return VAR9;

		if (FUN8(VAR2, VAR4->VAR18)) {
			FUN5(VAR2, "",
				VAR4->VAR18);
			return -VAR20;
		}

		
		VAR9 = FUN7(VAR2, VAR4->VAR18, VAR21);
		if (VAR9)
			return VAR9;

	} else if (VAR7 == VAR22) {

		if (FUN4(VAR4->VAR8) == VAR23) {
			if (VAR4->VAR15 != 0 || VAR4->VAR14 != 0) {
				FUN5(VAR2, "");
				return -VAR16;
			}

			
			VAR9 = FUN7(VAR2, VAR4->VAR12, VAR19);
			if (VAR9)
				return VAR9;
		} else {
			if (VAR4->VAR12 != VAR13 || VAR4->VAR14 != 0) {
				FUN5(VAR2, "");
				return -VAR16;
			}
		}

		
		VAR9 = FUN7(VAR2, VAR4->VAR18, VAR21);
		if (VAR9)
			return VAR9;

		if (FUN4(VAR4->VAR8) == VAR23) {
			if (FUN6(VAR4->VAR8) == VAR17) {
				
				VAR6[VAR4->VAR18] = VAR6[VAR4->VAR12];
				VAR6[VAR4->VAR18].VAR24 |= VAR25;
			} else {
				
				if (FUN8(VAR2, VAR4->VAR12)) {
					FUN5(VAR2,
						"",
						VAR4->VAR12);
					return -VAR20;
				}
				FUN9(VAR2, VAR6, VAR4->VAR18);
				
				VAR6[VAR4->VAR18].VAR26 = FUN10(
						VAR6[VAR4->VAR18].VAR26, 4);
				FUN11(&VAR6[VAR4->VAR18]);
			}
		} else {
			
 			VAR6[VAR4->VAR18].VAR27 = VAR28;

			FUN12(VAR6 + VAR4->VAR18, VAR4->VAR15);














 		}
 
 	} else if (VAR7 > VAR10) {
		FUN5(VAR2, "", VAR7);
		return -VAR16;

	} else {	

		if (FUN4(VAR4->VAR8) == VAR23) {
			if (VAR4->VAR15 != 0 || VAR4->VAR14 != 0) {
				FUN5(VAR2, "");
				return -VAR16;
			}
			
			VAR9 = FUN7(VAR2, VAR4->VAR12, VAR19);
			if (VAR9)
				return VAR9;
		} else {
			if (VAR4->VAR12 != VAR13 || VAR4->VAR14 != 0) {
				FUN5(VAR2, "");
				return -VAR16;
			}
		}

		
		VAR9 = FUN7(VAR2, VAR4->VAR18, VAR19);
		if (VAR9)
			return VAR9;

		if ((VAR7 == VAR29 || VAR7 == VAR30) &&
		    FUN4(VAR4->VAR8) == VAR31 && VAR4->VAR15 == 0) {
			FUN5(VAR2, "");
			return -VAR16;
		}

		if ((VAR7 == VAR32 || VAR7 == VAR33 ||
		     VAR7 == VAR34) && FUN4(VAR4->VAR8) == VAR31) {
			int VAR35 = FUN6(VAR4->VAR8) == VAR17 ? 64 : 32;

			if (VAR4->VAR15 < 0 || VAR4->VAR15 >= VAR35) {
				FUN5(VAR2, "", VAR4->VAR15);
				return -VAR16;
			}
		}

		
		VAR9 = FUN7(VAR2, VAR4->VAR18, VAR36);
		if (VAR9)
			return VAR9;

		return FUN13(VAR2, VAR4);
	}

	return 0;
}