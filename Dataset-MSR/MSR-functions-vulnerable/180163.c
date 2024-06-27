static long FUN1(struct VAR1 *VAR1, unsigned int VAR2, unsigned long VAR3)


 {

	struct VAR4 *VAR5 = VAR1->VAR6;
 	void (*VAR7)(struct VAR4 *);
 	u32 VAR8 = VAR3;
 
 	switch (VAR2) {
 	case VAR9:

		VAR7 = VAR10;


 		break;
 	case VAR11:

		VAR7 = VAR12;


 		break;
 	case VAR13:

		VAR7 = VAR14;


 		break;
 
 	case VAR15:

		return FUN2(VAR5, VAR3);


 
 	case VAR16:
 		return FUN3(VAR5, (u64 VAR17 *)VAR3);

	case VAR18:
	{
		u64 VAR19 = FUN4(VAR5);

		if (FUN5((void VAR17 *)VAR3, &VAR19, sizeof(VAR19)))
			return -VAR20;
		return 0;
	}

	case VAR21:
	{
		int VAR22;
		if (VAR3 != -1) {
			struct VAR4 *VAR23;
			struct fd VAR24;
			VAR22 = FUN6(VAR3, &VAR24);
			if (VAR22)
				return VAR22;
			VAR23 = VAR24.VAR1->VAR6;
			VAR22 = FUN7(VAR5, VAR23);
			FUN8(VAR24);
		} else {
			VAR22 = FUN7(VAR5, NULL);
		}
		return VAR22;
	}

	case VAR25:
		return FUN9(VAR5, (void VAR17 *)VAR3);

	default:
		return -VAR26;
	}

	if (VAR8 & VAR27)
		FUN10(VAR5, VAR7);
	else
		FUN11(VAR5, VAR7);

 	return 0;
 }