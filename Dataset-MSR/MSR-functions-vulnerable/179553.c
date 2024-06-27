static int FUN1(u32 VAR1 *VAR2, unsigned int VAR3,
			 u32 VAR1 *VAR4, int VAR5, int VAR6,
			 VAR7 *VAR8, int VAR9)
{
	union futex_key VAR10 = VAR11, VAR12 = VAR11;
	int VAR13 = 0, VAR14 = 0, VAR15;
	struct VAR16 *VAR17 = NULL;
	struct VAR18 *VAR19, *VAR20;
 	struct VAR21 *this, *VAR22;
 
 	if (VAR9) {














 		
		if (FUN2())
			return -VAR23;
		
		if (VAR5 != 1)
			return -VAR24;
	}

VAR25:
	if (VAR17 != NULL) {
		
		FUN3(VAR17);
		VAR17 = NULL;
	}

	VAR15 = FUN4(VAR2, VAR3 & VAR26, &VAR10, VAR27);
	if (FUN5(VAR15 != 0))
		goto VAR28;
	VAR15 = FUN4(VAR4, VAR3 & VAR26, &VAR12,
			    VAR9 ? VAR29 : VAR27);
 	if (FUN5(VAR15 != 0))
 		goto VAR30;
 


















 	VAR19 = FUN6(&VAR10);
 	VAR20 = FUN6(&VAR12);
 
VAR31:
	FUN7(VAR20);
	FUN8(VAR19, VAR20);

	if (FUN9(VAR8 != NULL)) {
		u32 VAR32;

		VAR15 = FUN10(&VAR32, VAR2);

		if (FUN5(VAR15)) {
			FUN11(VAR19, VAR20);
			FUN12(VAR20);

			VAR15 = FUN13(VAR32, VAR2);
			if (VAR15)
				goto VAR33;

			if (!(VAR3 & VAR26))
				goto VAR31;

			FUN14(&VAR12);
			FUN14(&VAR10);
			goto VAR25;
		}
		if (VAR32 != *VAR8) {
			VAR15 = -VAR34;
			goto VAR35;
		}
	}

	if (VAR9 && (VAR14 - VAR5 < VAR6)) {
		
		VAR15 = FUN15(VAR4, VAR19, VAR20, &VAR10,
						 &VAR12, &VAR17, VAR6);

		
		if (VAR15 > 0) {
			FUN16(VAR17);
			VAR13++;
			VAR14++;
			
			VAR15 = FUN17(VAR15, VAR20, &VAR12, &VAR17, NULL);
		}

		switch (VAR15) {
		case 0:
			break;
		case -VAR36:
			FUN11(VAR19, VAR20);
			FUN12(VAR20);
			FUN14(&VAR12);
			FUN14(&VAR10);
			VAR15 = FUN18(VAR4);
			if (!VAR15)
				goto VAR25;
			goto VAR28;
		case -VAR34:
			
			FUN11(VAR19, VAR20);
			FUN12(VAR20);
			FUN14(&VAR12);
			FUN14(&VAR10);
			FUN19();
			goto VAR25;
		default:
			goto VAR35;
		}
	}

	FUN20(this, VAR22, &VAR19->VAR37, VAR38) {
		if (VAR14 - VAR5 >= VAR6)
			break;

		if (!FUN21(&this->VAR39, &VAR10))
			continue;

		
		if ((VAR9 && !this->VAR40) ||
		    (!VAR9 && this->VAR40) ||
		    this->VAR17) {
			VAR15 = -VAR24;
			break;
		}

		
		if (++VAR14 <= VAR5 && !VAR9) {
			FUN22(this);
			continue;
		}

		
		if (VAR9 && !FUN21(this->VAR41, &VAR12)) {
			VAR15 = -VAR24;
			break;
		}

		
		if (VAR9) {
			
			FUN23(&VAR17->VAR42);
			this->VAR17 = VAR17;
			VAR15 = FUN24(&VAR17->VAR43,
							this->VAR40,
							this->VAR44, 1);
			if (VAR15 == 1) {
				
				FUN25(this, &VAR12, VAR20);
				VAR13++;
				continue;
			} else if (VAR15) {
				
				this->VAR17 = NULL;
				FUN3(VAR17);
				goto VAR35;
			}
		}
		FUN26(this, VAR19, VAR20, &VAR12);
		VAR13++;
	}

VAR35:
	FUN11(VAR19, VAR20);
	FUN12(VAR20);

	
	while (--VAR13 >= 0)
		FUN27(&VAR10);

VAR33:
	FUN14(&VAR12);
VAR30:
	FUN14(&VAR10);
VAR28:
	if (VAR17 != NULL)
		FUN3(VAR17);
	return VAR15 ? VAR15 : VAR14;
}