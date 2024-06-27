long FUN1(struct VAR1 *VAR1, unsigned int VAR2, unsigned long VAR3)
{
	struct VAR4 *VAR5 = FUN2(VAR1);
	struct VAR4 *VAR6;
	void VAR7 *VAR8 = (void VAR7 *)VAR3;
	int VAR9;
	struct VAR10 *VAR11;

	if (FUN3(VAR5, FUN4(VAR1), ""))
		return -VAR12;

	VAR6 = FUN5(VAR5);

	
	switch (VAR2) {
	case VAR13:
	case VAR14:
	case VAR15:
	case VAR16:
	case VAR17:
		VAR9 = FUN6(VAR5);
		if (VAR9)
			return VAR9;
		if (VAR2 != VAR15) {
			FUN7(VAR5, 0);
			if (FUN8(VAR18))
				return -VAR19;
		}
		break;
	}

	
	switch (VAR2) {
	case VAR20:
		return FUN9(VAR5, VAR8);
	case VAR21:
		return FUN10(VAR6, VAR8);
	case VAR22:
		return FUN11(VAR6, VAR8);
	case VAR23:
		return VAR6 != VAR5 ? -VAR12 : FUN12(VAR1);
	case VAR24:
		return FUN13(VAR1, VAR8);
	case VAR25:
		FUN14(VAR26, &VAR5->VAR27);
		return 0;
	case VAR28:
		FUN15(VAR26, &VAR5->VAR27);
		return 0;
	case VAR29:
	{
		int VAR30 = FUN16(VAR26, &VAR5->VAR27);
		return FUN17(VAR30, (int VAR7 *)VAR8);
	}
	case VAR31:
		if (VAR18->signal->VAR5 != VAR5)
			return -VAR32;
		FUN18();
		return 0;
	case VAR33:
		return FUN19(VAR6, VAR1, VAR3);
	case VAR34:
		return FUN20(VAR5, VAR6, VAR8);
	case VAR35:
		return FUN21(VAR5, VAR6, VAR8);
 	case VAR36:
 		return FUN22(VAR5, VAR6, VAR8);
 	case VAR37:

		return FUN17(VAR5->VAR38->VAR39->VAR40, (int VAR7 *)VAR8);


 	case VAR13:
 		return FUN23(VAR5, VAR8);
 	case VAR41:
		if (!FUN24(VAR42))
			return -VAR43;
		FUN25(VAR5);
		return 0;
	case VAR44:
	{
		unsigned int VAR45 = FUN26(FUN27(VAR6));
		return FUN17(VAR45, (unsigned int VAR7 *)VAR8);
	}
	
	case VAR14:	
		if (VAR5->VAR39->VAR46)
			return VAR5->VAR39->FUN28(VAR5, -1);
		return 0;
	case VAR15:	
		if (VAR5->VAR39->VAR46)
			return VAR5->VAR39->FUN28(VAR5, 0);
		return 0;
	case VAR16:   
		
		if (!VAR3)
			return FUN29(VAR5, 250);
		return 0;
	case VAR17:	
		return FUN29(VAR5, VAR3 ? VAR3*100 : 250);

	case VAR47:
		return FUN30(VAR5, VAR8);
	case VAR48:
	case VAR49:
	case VAR50:
		return FUN31(VAR5, VAR2, VAR8);
	case VAR51:
		VAR9 = FUN32(VAR5, VAR8);
		
        	if (VAR9 != -VAR12)
			return VAR9;
		break;
	case VAR52:
		switch (VAR3) {
		case VAR53:
		case VAR54:
		
			FUN33(VAR5, NULL);
			break;
		}
		break;
	case VAR55:
		FUN34(VAR8);
		break;
	}
	if (VAR5->VAR39->VAR56) {
		VAR9 = VAR5->VAR39->FUN35(VAR5, VAR2, VAR3);
		if (VAR9 != -VAR57)
			return VAR9;
	}
	VAR11 = FUN36(VAR5);
	VAR9 = -VAR12;
	if (VAR11->VAR39->VAR56) {
		VAR9 = VAR11->VAR39->FUN35(VAR5, VAR1, VAR2, VAR3);
		if (VAR9 == -VAR57)
			VAR9 = -VAR32;
	}
	FUN37(VAR11);
	return VAR9;
}