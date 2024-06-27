static int FUN1(struct VAR1 *VAR2, struct socket *VAR3,
			     struct VAR4 *VAR5, size_t VAR6, int VAR7)
{
	int VAR8 = VAR7 & VAR9;
	struct VAR3 *VAR10 = VAR3->VAR10;
	struct VAR11 *VAR12 = FUN2(VAR10);
	unsigned int VAR13, VAR14;
	struct VAR15 *VAR16, *VAR17, *VAR18;
 	int VAR19 = 0;
 	u32 VAR20;
 

	VAR5->VAR21 = 0;


 	if ((VAR10->VAR22 == VAR23) &&
 	    FUN3(&VAR12->VAR24) &&
 	    FUN3(&VAR10->VAR25) &&
	    FUN4(&VAR12->VAR26.VAR27))
		return 0;

	if (VAR7 & (VAR28))
		return -VAR29;

	
	VAR16 = FUN5(VAR10, VAR7, VAR8, &VAR19);
	if (!VAR16) {
		if (VAR10->VAR30 & VAR31)
			return 0;
		return VAR19;
	}

	VAR20 = FUN6(VAR16)->VAR20;
	VAR14   = VAR16->VAR6 - VAR20;		
	VAR13 = FUN7(unsigned int, VAR14, VAR6);
	if (!VAR14)
		VAR10->VAR30 = VAR10->VAR30 | VAR31;

	VAR18 = VAR16;
	if (FUN8(VAR18, VAR20, VAR5->VAR32, VAR13)) {
		if (!(VAR7 & VAR33))
			FUN9(&VAR10->VAR25, VAR16);
		return -VAR34;
	}

	
	if (VAR10->VAR35 == VAR36) {
		if (VAR13 < VAR14)
			VAR5->VAR37 |= VAR38;
		
		VAR5->VAR37 |= VAR39;
	}

	
	VAR19 = FUN10(VAR5, VAR40, VAR41,
		       sizeof(FUN6(VAR16)->class),
		       (void *)&FUN6(VAR16)->class);
	if (VAR19) {
		if (!(VAR7 & VAR33))
			FUN9(&VAR10->VAR25, VAR16);
		return VAR19;
	}

	
	if (!(VAR7 & VAR33)) {

		
		if (VAR10->VAR35 == VAR42) {
			if (VAR13 < VAR14) {
				FUN6(VAR16)->VAR20 = VAR20 + VAR13;
				goto VAR43;
			}
		}

		FUN11(VAR16);
		if (VAR12->VAR44 == VAR45) {
			FUN12(&VAR12->VAR46);
			if (FUN13(&VAR12->VAR46) > VAR12->VAR47) {
				FUN14(1);
				FUN15(VAR10);
				return -VAR34;
			}
		}

		
		FUN16(&VAR12->VAR26.VAR48);
		VAR17 = FUN17(&VAR12->VAR24);
		while (VAR17) {
			FUN6(VAR17)->VAR20 = 0;
			if (FUN18(VAR10, VAR17)) {
				FUN9(&VAR12->VAR24,
						VAR17);
				break;
			} else {
				VAR17 = FUN17(&VAR12->VAR24);
			}
		}
		if (FUN3(&VAR12->VAR24)) {
			if (!FUN4(&VAR12->VAR26.VAR27))
				FUN19(VAR10);
			if (FUN13(&VAR12->VAR46) >=
							VAR12->VAR47 / 2) {
				VAR19 = FUN20(VAR10, VAR49);
				if (VAR19) {
					VAR10->VAR22 = VAR23;
					VAR10->FUN21(VAR10);
				}
			}
		}
		FUN22(&VAR12->VAR26.VAR48);
	}

VAR43:
	
	if (VAR10->VAR35 == VAR36 && (VAR7 & VAR38))
		VAR13 = VAR14;

	return VAR13;
}