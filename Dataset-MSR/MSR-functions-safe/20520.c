static int FUN1(struct VAR1 *VAR2, int *VAR3, char *VAR4)
{
	struct VAR5 *VAR6;
	struct VAR7 *VAR8 = FUN2(VAR2);
	ext4_fsblk_t VAR9 = 0;
	unsigned long VAR10;
	struct ext4_mount_options VAR11;
	int VAR12 = 0;
	ext4_group_t VAR13;
	unsigned int VAR14 = VAR15;
	int VAR16 = 0;
#ifdef VAR17
	int VAR18;
#endif
	char *VAR19 = FUN3(VAR4, VAR20);

	
	FUN4(VAR2);
	VAR10 = VAR2->VAR21;
	VAR11.VAR22 = VAR8->VAR22;
	VAR11.VAR23 = VAR8->VAR23;
	VAR11.VAR24 = VAR8->VAR24;
	VAR11.VAR25 = VAR8->VAR25;
	VAR11.VAR26 = VAR8->VAR26;
	VAR11.VAR27 = VAR8->VAR27;
	VAR11.VAR28 = VAR8->VAR28;
#ifdef VAR17
	VAR11.VAR29 = VAR8->VAR29;
	for (VAR18 = 0; VAR18 < VAR30; VAR18++)
		VAR11.VAR31[VAR18] = VAR8->VAR31[VAR18];
#endif
	if (VAR8->VAR32 && VAR8->VAR32->VAR33->VAR34)
		VAR14 = VAR8->VAR32->VAR33->VAR34->VAR35;

	
	if (!FUN5(VAR4, VAR2, NULL, &VAR14,
			   &VAR9, 1)) {
		VAR16 = -VAR36;
		goto VAR37;
	}

	if (VAR8->VAR38 & VAR39)
		FUN6(VAR2, "");

	VAR2->VAR21 = (VAR2->VAR21 & ~VAR40) |
		(FUN7(VAR2, VAR41) ? VAR40 : 0);

	VAR6 = VAR8->VAR42;

	if (VAR8->VAR32) {
		FUN8(VAR2, VAR8->VAR32);
		FUN9(VAR8->VAR32->VAR33, VAR14);
	}

	if ((*VAR3 & VAR43) != (VAR2->VAR21 & VAR43) ||
		VAR9 > FUN10(VAR6)) {
		if (VAR8->VAR38 & VAR39) {
			VAR16 = -VAR44;
			goto VAR37;
		}

		if (*VAR3 & VAR43) {
			VAR16 = FUN11(VAR2, -1);
			if (VAR16 < 0)
				goto VAR37;

			
			VAR2->VAR21 |= VAR43;

			
			if (!(VAR6->VAR45 & FUN12(VAR46)) &&
			    (VAR8->VAR47 & VAR46))
				VAR6->VAR45 = FUN12(VAR8->VAR47);

			if (VAR8->VAR32)
				FUN13(VAR2, VAR6);
		} else {
			
			if (!FUN14(VAR2, 0)) {
				VAR16 = -VAR44;
				goto VAR37;
			}
			
			for (VAR13 = 0; VAR13 < VAR8->VAR48; VAR13++) {
				struct VAR49 *VAR50 =
					FUN15(VAR2, VAR13, NULL);

				if (!FUN16(VAR8, VAR13, VAR50)) {
					FUN17(VAR2, VAR51,
	       "",
		VAR13, FUN18(FUN19(VAR8, VAR13, VAR50)),
					       FUN18(VAR50->VAR52));
					VAR16 = -VAR36;
					goto VAR37;
				}
			}

			
			if (VAR6->VAR53) {
				FUN17(VAR2, VAR54, ""
				       ""
				       ""
				       "");
				VAR16 = -VAR36;
				goto VAR37;
			}

			
			if (VAR8->VAR32)
				FUN20(VAR2, VAR6);
			VAR8->VAR47 = FUN18(VAR6->VAR45);
			if ((VAR16 = FUN21(VAR2, VAR6, VAR9)))
				goto VAR37;
			if (!FUN22(VAR2, VAR6, 0))
				VAR2->VAR21 &= ~VAR43;
			if (FUN23(VAR2,
						     VAR55))
				if (FUN24(VAR2,
						FUN25(VAR6->VAR56))) {
					VAR16 = -VAR44;
					goto VAR37;
				}
			VAR12 = 1;
		}
	}

	
	if ((VAR2->VAR21 & VAR43) || !FUN7(VAR2, VAR57))
		FUN26(VAR2);
	else {
		ext4_group_t VAR58;
		VAR58 = FUN27(VAR2);
		FUN28(VAR2, VAR58);
	}

	FUN29(VAR2);
	if (VAR8->VAR32 == NULL)
		FUN30(VAR2, 1);

#ifdef VAR17
	
	for (VAR18 = 0; VAR18 < VAR30; VAR18++)
		if (VAR11.VAR31[VAR18] &&
		    VAR11.VAR31[VAR18] != VAR8->VAR31[VAR18])
			FUN31(VAR11.VAR31[VAR18]);
#endif
	FUN32(VAR2);
	if (VAR12)
		FUN33(VAR2, -1);

	FUN17(VAR2, VAR59, "", VAR19);
	FUN31(VAR19);
	return 0;

VAR37:
	VAR2->VAR21 = VAR10;
	VAR8->VAR22 = VAR11.VAR22;
	VAR8->VAR23 = VAR11.VAR23;
	VAR8->VAR24 = VAR11.VAR24;
	VAR8->VAR25 = VAR11.VAR25;
	VAR8->VAR26 = VAR11.VAR26;
	VAR8->VAR27 = VAR11.VAR27;
	VAR8->VAR28 = VAR11.VAR28;
#ifdef VAR17
	VAR8->VAR29 = VAR11.VAR29;
	for (VAR18 = 0; VAR18 < VAR30; VAR18++) {
		if (VAR8->VAR31[VAR18] &&
		    VAR11.VAR31[VAR18] != VAR8->VAR31[VAR18])
			FUN31(VAR8->VAR31[VAR18]);
		VAR8->VAR31[VAR18] = VAR11.VAR31[VAR18];
	}
#endif
	FUN32(VAR2);
	FUN31(VAR19);
	return VAR16;
}