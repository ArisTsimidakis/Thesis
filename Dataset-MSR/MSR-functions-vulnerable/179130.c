FUN1(struct VAR1 *VAR2, int VAR3, void VAR4 *VAR5, unsigned int VAR6)
{
	int VAR7;
	unsigned char VAR8[VAR9];
	struct VAR10 *VAR11;
	struct ip_vs_service_user_kern VAR12;
	struct VAR13 *VAR14;
	struct VAR15 *VAR16;
	struct ip_vs_dest_user_kern VAR17;

 	if (!FUN2(VAR18))
 		return -VAR19;
 








 	if (VAR6 != VAR20[FUN3(VAR3)]) {
 		FUN4("",
 		       VAR6, VAR20[FUN3(VAR3)]);
		return -VAR21;
	}

	if (FUN5(VAR8, VAR5, VAR6) != 0)
		return -VAR22;

	
	FUN6();

	if (FUN7(&VAR23)) {
		VAR7 = -VAR24;
		goto VAR25;
	}

	if (VAR3 == VAR26) {
		
		VAR7 = FUN8();
		goto VAR27;
	} else if (VAR3 == VAR28) {
		
		VAR7 = FUN9((struct VAR29 *)VAR8);
		goto VAR27;
	} else if (VAR3 == VAR30) {
		struct VAR31 *VAR32 = (struct VAR31 *)VAR8;
		VAR7 = FUN10(VAR32->VAR33, VAR32->VAR34, VAR32->VAR35);
		goto VAR27;
	} else if (VAR3 == VAR36) {
		struct VAR31 *VAR32 = (struct VAR31 *)VAR8;
		VAR7 = FUN11(VAR32->VAR33);
		goto VAR27;
	}

	VAR11 = (struct VAR10 *)VAR8;
	VAR16 = (struct VAR15 *)(VAR11 + 1);

	
	FUN12(&VAR12, VAR11);
	FUN13(&VAR17, VAR16);

	if (VAR3 == VAR37) {
		
		if (!VAR12.VAR38 && !VAR12.VAR39.VAR40 && !VAR12.VAR41) {
			VAR7 = FUN14();
			goto VAR27;
		}
	}

	
	if (VAR12.VAR42 != VAR43 && VAR12.VAR42 != VAR44) {
		FUN4("",
		       VAR12.VAR42, &VAR12.VAR39.VAR40,
		       FUN15(VAR12.VAR41), VAR12.VAR45);
		VAR7 = -VAR22;
		goto VAR27;
	}

	
	if (VAR12.VAR38 == 0)
		VAR14 = FUN16(VAR12.VAR46, VAR12.VAR42,
					  &VAR12.VAR39, VAR12.VAR41);
	else
		VAR14 = FUN17(VAR12.VAR46, VAR12.VAR38);

	if (VAR3 != VAR47
	    && (VAR14 == NULL || VAR14->VAR42 != VAR12.VAR42)) {
		VAR7 = -VAR48;
		goto VAR27;
	}

	switch (VAR3) {
	case VAR47:
		if (VAR14 != NULL)
			VAR7 = -VAR49;
		else
			VAR7 = FUN18(&VAR12, &VAR14);
		break;
	case VAR50:
		VAR7 = FUN19(VAR14, &VAR12);
		break;
	case VAR51:
		VAR7 = FUN20(VAR14);
		if (!VAR7)
			goto VAR27;
		break;
	case VAR37:
		VAR7 = FUN21(VAR14);
		break;
	case VAR52:
		VAR7 = FUN22(VAR14, &VAR17);
		break;
	case VAR53:
		VAR7 = FUN23(VAR14, &VAR17);
		break;
	case VAR54:
		VAR7 = FUN24(VAR14, &VAR17);
		break;
	default:
		VAR7 = -VAR21;
	}

	if (VAR14)
		FUN25(VAR14);

  VAR27:
	FUN26(&VAR23);
  VAR25:
	
	FUN27();

	return VAR7;
}