void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
				    struct VAR5 *VAR6)
{
	struct VAR7 *VAR8 = FUN2(VAR2);
	struct VAR9 *VAR10 = FUN3(VAR6);
	unsigned char *VAR11 = FUN4(VAR6);

	if (VAR8->VAR12.VAR13.VAR14) {
		int VAR15 = FUN5(VAR6)->VAR16;
		FUN6(VAR4, VAR17, VAR18, sizeof(VAR15), &VAR15);
	}

	if (VAR8->VAR12.VAR13.VAR19) {
		int VAR20 = FUN7(FUN5(VAR6));
		FUN6(VAR4, VAR17, VAR21, sizeof(VAR20), &VAR20);
	}

	if (VAR8->VAR12.VAR13.VAR22) {
		__be32 VAR23 = FUN8((struct VAR24 *)VAR11);
		if (VAR23)
			FUN6(VAR4, VAR17, VAR25, sizeof(VAR23), &VAR23);
	}

	
	if (VAR8->VAR12.VAR13.VAR26 && (VAR10->VAR27 & VAR28)) {
		VAR29 *VAR30 = VAR11 + sizeof(struct VAR24);
		FUN6(VAR4, VAR17, VAR31, (VAR30[1]+1)<<3, VAR30);
	}

	if (VAR10->VAR32 &&
	    (VAR8->VAR12.VAR13.VAR33 || VAR8->VAR12.VAR13.VAR34)) {
		
		unsigned int VAR35 = sizeof(struct VAR24);
		u8 VAR36 = FUN5(VAR6)->VAR36;

		while (VAR35 <= VAR10->VAR32) {
			unsigned int VAR37;
			VAR29 *VAR30 = VAR11 + VAR35;

			switch (VAR36) {
			case VAR38:
				VAR36 = VAR30[0];
				VAR37 = (VAR30[1] + 1) << 3;
				if (VAR8->VAR12.VAR13.VAR33)
					FUN6(VAR4, VAR17, VAR39, VAR37, VAR30);
				break;
			case VAR40:
				VAR36 = VAR30[0];
				VAR37 = (VAR30[1] + 1) << 3;
				if (VAR8->VAR12.VAR13.VAR34)
					FUN6(VAR4, VAR17, VAR41, VAR37, VAR30);
				break;
			case VAR42:
				VAR36 = VAR30[0];
				VAR37 = (VAR30[1] + 2) << 2;
				break;
			default:
				VAR36 = VAR30[0];
				VAR37 = (VAR30[1] + 1) << 3;
				break;
			}

			VAR35 += VAR37;
		}
	}

	
	if (VAR8->VAR12.VAR13.VAR43) {
		struct in6_pktinfo VAR44;

		VAR44.VAR45 = VAR10->VAR46;
		VAR44.VAR47 = FUN5(VAR6)->VAR48;
		FUN6(VAR4, VAR17, VAR49, sizeof(VAR44), &VAR44);
	}
	if (VAR8->VAR12.VAR13.VAR50) {
		int VAR15 = FUN5(VAR6)->VAR16;
		FUN6(VAR4, VAR17, VAR51, sizeof(VAR15), &VAR15);
	}
	if (VAR8->VAR12.VAR13.VAR52 && (VAR10->VAR27 & VAR28)) {
		VAR29 *VAR30 = VAR11 + sizeof(struct VAR24);
		FUN6(VAR4, VAR17, VAR53, (VAR30[1]+1)<<3, VAR30);
	}
	if (VAR8->VAR12.VAR13.VAR54 && VAR10->VAR55) {
		VAR29 *VAR30 = VAR11 + VAR10->VAR55;
		FUN6(VAR4, VAR17, VAR56, (VAR30[1]+1)<<3, VAR30);
	}
	if (VAR8->VAR12.VAR13.VAR57 && VAR10->VAR34) {
		struct VAR58 *VAR59 = (struct VAR58 *)(VAR11 + VAR10->VAR34);
		FUN6(VAR4, VAR17, VAR60, (VAR59->VAR61+1) << 3, VAR59);
	}
	if (VAR8->VAR12.VAR13.VAR54 && VAR10->VAR62) {
		VAR29 *VAR30 = VAR11 + VAR10->VAR62;
		FUN6(VAR4, VAR17, VAR56, (VAR30[1]+1)<<3, VAR30);
	}
	if (VAR8->VAR12.VAR13.VAR63) {
		struct sockaddr_in6 VAR64;
		VAR65 *VAR66 = (VAR65 *) FUN9(VAR6);

		if (FUN10(VAR6) + 4 <= VAR6->VAR37) {
			

			VAR64.VAR67 = VAR68;
			VAR64.VAR69 = FUN5(VAR6)->VAR48;
			VAR64.VAR70 = VAR66[1];
			VAR64.VAR71 = 0;
			VAR64.VAR72 =
				FUN11(&FUN5(VAR6)->VAR48,
						    VAR10->VAR46);

			FUN6(VAR4, VAR17, VAR73, sizeof(VAR64), &VAR64);
		}
	}
}