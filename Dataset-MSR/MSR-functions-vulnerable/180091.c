static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
				u_int16_t VAR5)
{
	struct VAR1 *VAR6 = VAR2;
	struct VAR7 *VAR7 = FUN2(VAR2->VAR8);
	const struct VAR9 *VAR10;
	const struct VAR11 *VAR12;
	static FUN3(VAR13);
	u32 VAR14;
	int VAR15;

	if (VAR5 >= VAR16)
		return FUN4(VAR2, VAR4, -VAR17);
VAR18:
	VAR14 = 0;

	VAR2 = FUN5(VAR6, VAR19);
	if (!VAR2)
		return FUN4(VAR6, VAR4, -VAR20);

	FUN6(VAR5);
	VAR10 = FUN7(VAR5);
	if (!VAR10) {
#ifdef VAR21
		FUN8(VAR5);
		FUN9("", VAR5);
		FUN6(VAR5);
		VAR10 = FUN7(VAR5);
		if (!VAR10)
#endif
		{
			FUN8(VAR5);
			FUN4(VAR6, VAR4, -VAR22);
			return FUN10(VAR2);
		}
	}

	if (!VAR10->VAR23 || !VAR10->VAR24) {
		FUN8(VAR5);
		FUN4(VAR6, VAR4, -VAR22);
		return FUN10(VAR2);
	}

	while (VAR2->VAR25 >= FUN11(0)) {
		int VAR26, VAR27;

 		VAR4 = FUN12(VAR2);
 		VAR15 = 0;
 

		if (FUN13(VAR4) < sizeof(struct VAR28) ||

		    VAR2->VAR25 < VAR4->VAR29) {

			VAR15 = -VAR17;

			goto VAR30;












 		}
 
 		
		if (!(VAR4->VAR31 & VAR32)) {
			VAR15 = -VAR17;
			goto VAR30;
		}

		VAR27 = VAR4->VAR33;
		if (VAR27 == VAR34) {
			
			FUN14(&VAR13);
			VAR14 |= VAR35;
			goto VAR36;
		} else if (VAR27 == VAR37) {
			VAR14 |= VAR38;
			goto VAR36;
		} else if (VAR27 < VAR39) {
			VAR15 = -VAR17;
			goto VAR30;
		}

		
		if (FUN15(VAR27) != VAR5) {
			VAR15 = -VAR17;
			goto VAR30;
		}

		VAR12 = FUN16(VAR27, VAR10);
		if (!VAR12) {
			VAR15 = -VAR17;
			goto VAR30;
		}

		{
			int VAR40 = FUN11(sizeof(struct VAR28));
			u_int8_t VAR41 = FUN17(VAR4->VAR33);
			struct VAR42 *VAR43[VAR10->VAR44[VAR41].VAR45 + 1];
			struct VAR42 *VAR46 = (void *)VAR4 + VAR40;
			int VAR47 = VAR4->VAR29 - VAR40;

			VAR15 = FUN18(VAR43, VAR10->VAR44[VAR41].VAR45,
					VAR46, VAR47, VAR10->VAR44[VAR41].VAR48);
			if (VAR15 < 0)
				goto VAR30;

			if (VAR12->VAR49) {
				VAR15 = VAR12->FUN19(VAR7, VAR7->VAR50, VAR2, VAR4,
						     (const struct VAR42 **)VAR43);
			}

			
			if (VAR15 == -VAR51) {
				VAR14 |= VAR52;
				goto VAR53;
			}
		}
VAR30:
		if (VAR4->VAR31 & VAR54 || VAR15) {
			
			if (FUN20(&VAR13, VAR4, VAR15) < 0) {
				
				FUN14(&VAR13);
				FUN4(VAR6, FUN12(VAR6), -VAR20);
				VAR14 |= VAR35;
				goto VAR36;
			}
			
			if (VAR15)
				VAR14 |= VAR35;
		}
VAR53:
		VAR26 = FUN21(VAR4->VAR29);
		if (VAR26 > VAR2->VAR25)
			VAR26 = VAR2->VAR25;
		FUN22(VAR2, VAR26);
	}
VAR36:
	if (VAR14 & VAR52) {
		VAR10->FUN23(VAR7, VAR6);
		FUN14(&VAR13);
		FUN8(VAR5);
		FUN10(VAR2);
		goto VAR18;
	} else if (VAR14 == VAR38) {
		VAR10->FUN24(VAR7, VAR6);
	} else {
		VAR10->FUN23(VAR7, VAR6);
	}

	FUN25(&VAR13, VAR6);
	FUN8(VAR5);
	FUN10(VAR2);
}