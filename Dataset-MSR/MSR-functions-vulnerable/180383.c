FUN1(struct VAR1 *VAR2,
				  struct VAR3 *VAR4,
				  unsigned int *VAR5,
				  const unsigned char *VAR6,
				  const unsigned char *VAR7,
				  const unsigned int *VAR8,
				  const unsigned int *VAR9,
				  const char *VAR10)
{
	struct VAR11 *VAR12;
	struct VAR13 *VAR14;
	struct VAR15 *VAR16;
	unsigned int VAR17;
	unsigned int VAR18;
	int VAR19, VAR20, VAR21;
 
 	FUN2("", VAR2);
 	if ((unsigned long)VAR2 % FUN3(struct VAR1) != 0 ||

	    (unsigned char *)VAR2 + sizeof(struct VAR1) >= VAR7) {




 		FUN2("", VAR2, VAR7);
 		return -VAR22;
 	}

	if (VAR2->VAR23 < sizeof(struct VAR1) +
			     sizeof(struct VAR24)) {
		FUN2("",
			 VAR2, VAR2->VAR23);
		return -VAR22;
	}

	
	VAR19 = FUN4((struct VAR25 *)VAR2);
	if (VAR19)
		return VAR19;

	VAR20 = sizeof(struct VAR25) - sizeof(struct VAR1);
	VAR17 = (void *)VAR2 - (void *)VAR6;
	VAR18 = 0;
	FUN5(VAR12, VAR2) {
		VAR19 = FUN6(VAR12, VAR10, &VAR2->VAR26, &VAR20);
		if (VAR19 != 0)
			goto VAR27;
		++VAR18;
	}

	VAR14 = FUN7(VAR2);
	VAR16 = FUN8(VAR28, VAR14->VAR29.VAR30.VAR10,
					VAR14->VAR29.VAR30.VAR31);
	if (FUN9(VAR16)) {
		FUN2("",
			 VAR14->VAR29.VAR30.VAR10);
		VAR19 = FUN10(VAR16);
		goto VAR27;
	}
	VAR14->VAR29.VAR32.VAR16 = VAR16;

	VAR20 += FUN11(VAR16);
	*VAR5 += VAR20;
	VAR19 = FUN12(VAR33, VAR17, VAR20);
	if (VAR19)
		goto VAR34;

	
	for (VAR21 = 0; VAR21 < VAR35; VAR21++) {
		if ((unsigned char *)VAR2 - VAR6 == VAR8[VAR21])
			VAR4->VAR36[VAR21] = VAR8[VAR21];
		if ((unsigned char *)VAR2 - VAR6 == VAR9[VAR21])
			VAR4->VAR37[VAR21] = VAR9[VAR21];
	}

	
	memset(&VAR2->VAR38, 0, sizeof(VAR2->VAR38));
	VAR2->VAR39 = 0;
	return 0;

VAR34:
	FUN13(VAR14->VAR29.VAR32.VAR16->VAR40);
VAR27:
	FUN5(VAR12, VAR2) {
		if (VAR18-- == 0)
			break;
		FUN13(VAR12->VAR29.VAR32.VAR41->VAR40);
	}
	return VAR19;
}