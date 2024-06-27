FUN1(void *VAR1, const char *VAR2, int VAR3,
		    loff_t VAR4, u64 VAR5, unsigned int VAR6)
{
	struct VAR7 *VAR8 = VAR1;
	struct VAR9 *VAR10 = FUN2(VAR8, struct VAR9, VAR11);
	struct VAR12 *VAR13 = VAR10->VAR13;
	int VAR14 = VAR13->VAR15->VAR16;
	int VAR17;
	u32 VAR18;
	int VAR19;
	__be32 VAR20 = VAR21;
	__be64 VAR22;
	VAR23 *VAR24;

	
	if (VAR2 && FUN3(VAR2, VAR3)) {
		VAR10->VAR11.VAR25 = VAR26;
		return 0;
	}

	if (VAR10->VAR17) {
		VAR22 = FUN4(VAR4);
		FUN5(VAR13->VAR15, VAR10->VAR17,
							&VAR22, 8);
	}

	VAR24 = FUN6(VAR13, 4);
	if (!VAR24)
		goto VAR27;
	*VAR24++ = VAR28;                             
	VAR17 = VAR13->VAR15->VAR16;
	VAR24 = FUN6(VAR13, 3*4 + VAR3);
	if (!VAR24)
		goto VAR27;
	VAR24 = FUN7(VAR24, VAR29);    
	VAR24 = FUN8(VAR24, VAR2, VAR3);      

	VAR20 = FUN9(VAR13, VAR10, VAR2, VAR3);
	switch (VAR20) {
	case VAR26:
		break;
	case VAR30:
		VAR20 = VAR21;
		goto VAR27;
	case VAR31:
		FUN10(VAR13, VAR14);
		goto VAR32;
	default:
		
		if (!(VAR10->VAR33[0] & VAR34))
			goto VAR27;
		VAR24 = FUN11(VAR13, VAR20);
		if (VAR24 == NULL) {
			VAR20 = VAR21;
			goto VAR27;
		}
	}
	VAR20 = VAR21;
	VAR19 = VAR13->VAR15->VAR16 - VAR14;
	if (VAR19 > VAR10->VAR35)
		goto VAR27;
	VAR10->VAR35 -= VAR19;
	
	if (!VAR10->VAR36)
		goto VAR27;
	VAR18 = 4 + 4 * FUN12(VAR3) + 8;
	if (VAR18 > VAR10->VAR36 && VAR10->VAR17)
		goto VAR27;
	VAR10->VAR36 -= FUN13(VAR10->VAR36, VAR18);

	VAR10->VAR17 = VAR17;
VAR32:
	VAR10->VAR11.VAR25 = VAR26;
	return 0;
VAR27:
	FUN10(VAR13, VAR14);
	VAR10->VAR11.VAR25 = VAR20;
	return -VAR37;
}