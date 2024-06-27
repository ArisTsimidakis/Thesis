static int FUN1(struct VAR1 *VAR2, const struct VAR3 *VAR4)
{
	struct VAR5 *VAR6;
	u8 VAR7[3];
	struct cp2112_smbus_config_report VAR8;
	int VAR9;

	VAR6 = FUN2(&VAR2->VAR6, sizeof(*VAR6), VAR10);
	if (!VAR6)
		return -VAR11;

	VAR6->VAR12 = FUN2(&VAR2->VAR6, VAR13,
					  VAR10);
 	if (!VAR6->VAR12)
 		return -VAR11;
 

	FUN3(&VAR6->VAR14);


 
 	VAR9 = FUN4(VAR2);
 	if (VAR9) {
		FUN5(VAR2, "");
		return VAR9;
	}

	VAR9 = FUN6(VAR2, VAR15);
	if (VAR9) {
		FUN5(VAR2, "");
		return VAR9;
	}

	VAR9 = FUN7(VAR2);
	if (VAR9) {
		FUN5(VAR2, "");
		goto VAR16;
	}

	VAR9 = FUN8(VAR2, VAR17);
	if (VAR9 < 0) {
		FUN5(VAR2, "", VAR9);
		goto VAR18;
	}

	VAR9 = FUN9(VAR2, VAR19, VAR7, sizeof(VAR7),
			     VAR20);
	if (VAR9 != sizeof(VAR7)) {
		FUN5(VAR2, "");
		if (VAR9 >= 0)
			VAR9 = -VAR21;
		goto VAR22;
	}

	FUN10(VAR2, "",
		 VAR7[1], VAR7[2]);

	VAR9 = FUN9(VAR2, VAR23, (VAR24 *)&VAR8,
			     sizeof(VAR8), VAR20);
	if (VAR9 != sizeof(VAR8)) {
		FUN5(VAR2, "");
		if (VAR9 >= 0)
			VAR9 = -VAR21;
		goto VAR22;
	}

	VAR8.VAR25 = FUN11(1);

	VAR9 = FUN12(VAR2, (VAR24 *)&VAR8, sizeof(VAR8),
				VAR20);
	if (VAR9 != sizeof(VAR8)) {
		FUN5(VAR2, "");
		if (VAR9 >= 0)
			VAR9 = -VAR21;
		goto VAR22;
	}

	FUN13(VAR2, (void *)VAR6);
	VAR6->VAR2		= VAR2;
	VAR6->VAR26.VAR27		= VAR28;
	VAR6->VAR26.class		= VAR29;
	VAR6->VAR26.VAR30		= &VAR31;
	VAR6->VAR26.VAR32	= VAR6;
	VAR6->VAR26.VAR6.VAR33	= &VAR2->VAR6;
	snprintf(VAR6->VAR26.VAR34, sizeof(VAR6->VAR26.VAR34),
		 "", VAR2->VAR35);
	VAR6->VAR36 = VAR7[2];
	FUN14(&VAR6->VAR37);

	FUN15(VAR2);
	VAR9 = FUN16(&VAR6->VAR26);
	FUN17(VAR2);

	if (VAR9) {
		FUN5(VAR2, "");
		goto VAR22;
	}

	FUN18(VAR2, "");

	VAR6->VAR38.VAR39			= "";
	VAR6->VAR38.VAR40		= VAR41;
	VAR6->VAR38.VAR42	= VAR43;
	VAR6->VAR38.VAR44			= VAR45;
	VAR6->VAR38.VAR46			= VAR47;
	VAR6->VAR38.VAR48			= -1;
	VAR6->VAR38.VAR49			= 8;
	VAR6->VAR38.VAR50		= 1;
	VAR6->VAR38.VAR33			= &VAR2->VAR6;

	VAR9 = FUN19(&VAR6->VAR38, VAR6);
	if (VAR9 < 0) {
		FUN5(VAR2, "");
		goto VAR51;
	}

	VAR9 = FUN20(&VAR2->VAR6.VAR52, &VAR53);
	if (VAR9 < 0) {
		FUN5(VAR2, "");
		goto VAR54;
	}

	FUN21(VAR2);
	FUN8(VAR2, VAR55);

	VAR9 = FUN22(&VAR6->VAR38, &VAR56, 0,
				   VAR57, VAR58);
	if (VAR9) {
		FUN23(VAR6->VAR38.VAR33, "");
		goto VAR59;
	}

	return VAR9;

VAR59:
	FUN24(&VAR2->VAR6.VAR52, &VAR53);
VAR54:
	FUN25(&VAR6->VAR38);
VAR51:
	FUN26(&VAR6->VAR26);
VAR22:
	FUN8(VAR2, VAR55);
VAR18:
	FUN27(VAR2);
VAR16:
	FUN28(VAR2);
	return VAR9;
}