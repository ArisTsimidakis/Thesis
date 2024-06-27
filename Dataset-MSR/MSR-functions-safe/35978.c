FUN1(const unsigned int VAR1, struct VAR2 *VAR3)
{
	struct VAR4 *VAR5;
	struct VAR6 *VAR7;
	struct kvec VAR8[1];
	int VAR9 = 0;
	int VAR10;
	struct VAR11 *VAR12 = VAR3->VAR12;
	int VAR13, VAR14;
	char *VAR15;
	int VAR16 = VAR17;

	FUN2(VAR18, "");

	if (!VAR12) {
		FUN3(1, "", VAR19);
		return -VAR20;
	}

	VAR9 = FUN4(VAR21, NULL, (void **) &VAR5);
	if (VAR9)
		return VAR9;

	VAR5->VAR22.VAR23 = 0;

	VAR5->VAR24[0] = FUN5(VAR3->VAR12->VAR25->VAR26);

	VAR5->VAR27 = FUN5(1); 
	FUN6(VAR5, 2);

	
	if (VAR3->VAR28)
		VAR5->VAR29 = FUN5(VAR30);
	else if (VAR31 & VAR32)
		VAR5->VAR29 = FUN5(VAR33);
	else
		VAR5->VAR29 = 0;

	VAR5->VAR34 = FUN7(VAR3->VAR12->VAR25->VAR35);

	
	if (VAR3->VAR12->VAR25->VAR26 == VAR36)
		memset(VAR5->VAR37, 0, VAR38);
	else
		memcpy(VAR5->VAR37, VAR12->VAR39,
			VAR38);

	VAR8[0].VAR40 = (char *)VAR5;
	
	VAR8[0].VAR41 = FUN8(VAR5) + 4;

	VAR9 = FUN9(VAR1, VAR3, VAR8, 1, &VAR10, VAR16);

	VAR7 = (struct VAR6 *)VAR8[0].VAR40;
	
	if (VAR9 != 0)
		goto VAR42;

	FUN2(VAR18, "", VAR7->VAR29);

	
	if (VAR7->VAR43 == FUN5(VAR36))
		FUN2(VAR18, "");
	else if (VAR7->VAR43 == FUN5(VAR44))
		FUN2(VAR18, "");
	else if (VAR7->VAR43 == FUN5(VAR45))
		FUN2(VAR18, "");
	else if (VAR7->VAR43 == FUN5(VAR46))
		FUN2(VAR18, "");
	else {
		FUN2(VAR47, "",
			 FUN10(VAR7->VAR43));
		VAR9 = -VAR20;
		goto VAR42;
	}
	VAR12->VAR48 = FUN10(VAR7->VAR43);

	
	VAR12->VAR49 = VAR50;
	
	VAR12->VAR51 = FUN11(unsigned int, FUN12(VAR7->VAR52),
			       VAR53);
	VAR12->VAR54 = FUN12(VAR7->VAR55);
	VAR12->VAR56 = FUN12(VAR7->VAR57);
	
	VAR12->VAR58 = FUN10(VAR7->VAR29);
	VAR12->VAR59 = FUN12(VAR7->VAR34);
	
	VAR12->VAR59 |= VAR60 | VAR61;

	VAR15 = FUN13(&VAR13, &VAR14,
					       &VAR7->VAR22);
	
	if (VAR14 == 0)
		FUN2(VAR18, "");

	VAR9 = FUN14(VAR12, VAR3->VAR28);
#ifdef VAR62  
	if (VAR9)
		goto VAR42;
	if (VAR14)
		VAR9 = FUN15(VAR15, VAR14,
				   &VAR12->VAR63);
	if (VAR9 == 1)
		VAR9 = 0;
	else if (VAR9 == 0) {
		VAR9 = -VAR20;
		goto VAR42;
	}
#endif

VAR42:
	FUN16(VAR10, VAR7);
	return VAR9;
}