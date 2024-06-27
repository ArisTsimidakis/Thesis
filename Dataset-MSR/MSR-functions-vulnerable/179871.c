static int FUN1(struct VAR1 *VAR1,  __be32 VAR2, __be32 VAR3,
			struct VAR4 *VAR5, struct VAR6 *VAR7, u32 VAR8,
			u32 VAR9, int VAR10, int VAR11, unsigned int VAR12)
{
	struct VAR13 *VAR14 = FUN2(VAR7);
	struct VAR15 *VAR16;
	struct VAR17 *VAR18;
	unsigned long VAR19 = 0;
	u32 VAR20;
	u32 VAR21[VAR22];

	VAR18 = FUN3(VAR7, VAR8, VAR9, VAR10, sizeof(*VAR16), VAR12);
	if (VAR18 == NULL)
		return -VAR23;

	VAR16 = FUN4(VAR18);
	VAR16->VAR24	 = VAR25;
	VAR16->VAR26	= 32;
	VAR16->VAR27	= 0;
	VAR16->VAR28	= VAR5->VAR29;
	VAR16->VAR30	= VAR31;
	if (FUN5(VAR7, VAR32, VAR31))
		goto VAR33;
	VAR16->VAR34	= VAR14->VAR35;
	VAR16->VAR36	= VAR37;
	VAR16->VAR38 = VAR39;
 	VAR16->VAR40	= (VAR14->VAR41 & ~0xFFFF) | VAR42;
 	if (VAR14->VAR41 & VAR43)
 		VAR16->VAR40 |= VAR44;




 
 	if (FUN6(VAR7, VAR45, VAR2))
 		goto VAR33;
	if (VAR3) {
		VAR16->VAR27 = 32;
		if (FUN6(VAR7, VAR46, VAR3))
			goto VAR33;
	}
	if (VAR14->VAR2.VAR47 &&
	    FUN5(VAR7, VAR48, VAR14->VAR2.VAR47->VAR49))
		goto VAR33;
#ifdef VAR50
	if (VAR14->VAR2.VAR51 &&
	    FUN5(VAR7, VAR52, VAR14->VAR2.VAR51))
		goto VAR33;
#endif
	if (!FUN7(VAR14) &&
	    VAR5->VAR53 != VAR3) {
		if (FUN6(VAR7, VAR54, VAR5->VAR53))
			goto VAR33;
	}
	if (VAR14->VAR55 &&
	    FUN6(VAR7, VAR56, VAR14->VAR57))
		goto VAR33;

	VAR19 = VAR14->VAR2.VAR19;
	if (VAR19) {
		unsigned long VAR58 = VAR59;

		if (FUN8(VAR58, VAR19))
			VAR19 -= VAR58;
		else
			VAR19 = 0;
	}

	memcpy(VAR21, FUN9(&VAR14->VAR2), sizeof(VAR21));
	if (VAR14->VAR60 && VAR19)
		VAR21[VAR61 - 1] = VAR14->VAR60;
	if (FUN10(VAR7, VAR21) < 0)
		goto VAR33;

	if (VAR5->VAR62 &&
	    FUN5(VAR7, VAR63, VAR5->VAR62))
		goto VAR33;

	VAR20 = VAR14->VAR2.VAR20;

	if (FUN7(VAR14)) {
#ifdef VAR64
		if (FUN11(VAR2) && !FUN12(VAR2) &&
		    FUN13(VAR1, VAR65)) {
			int VAR66 = FUN14(VAR1, VAR7,
						 VAR5->VAR53, VAR5->VAR67,
						 VAR16, VAR11);
			if (VAR66 <= 0) {
				if (!VAR11) {
					if (VAR66 == 0)
						return 0;
					goto VAR33;
				} else {
					if (VAR66 == -VAR23)
						goto VAR33;
					VAR20 = VAR66;
				}
			}
		} else
#endif
			if (FUN5(VAR7, VAR68, VAR7->VAR47->VAR49))
				goto VAR33;
	}

	if (FUN15(VAR7, &VAR14->VAR2, 0, VAR19, VAR20) < 0)
		goto VAR33;

	return FUN16(VAR7, VAR18);

VAR33:
	FUN17(VAR7, VAR18);
	return -VAR23;
}