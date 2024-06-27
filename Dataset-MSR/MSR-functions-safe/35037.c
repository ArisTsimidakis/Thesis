SCTP_STATIC int FUN1(struct VAR1 *VAR2, int VAR3, int VAR4,
				char VAR5 *VAR6, int VAR7)
{
	int VAR8 = 0;

	FUN2("",
			  VAR2, VAR4);

	
	if (VAR3 != VAR9) {
		struct VAR10 *VAR11 = FUN3(VAR2)->VAR12->VAR11;
		VAR8 = VAR11->FUN4(VAR2, VAR3, VAR4, VAR6, VAR7);
		goto VAR13;
	}

	FUN5(VAR2);

	switch (VAR4) {
	case VAR14:
		
		VAR8 = FUN6(VAR2, (struct sockaddr VAR5 *)VAR6,
					       VAR7, VAR15);
		break;

	case VAR16:
		
		VAR8 = FUN6(VAR2, (struct sockaddr VAR5 *)VAR6,
					       VAR7, VAR17);
		break;

	case VAR18:
		
		VAR8 = FUN7(VAR2, (struct sockaddr VAR5 *)VAR6,
					       VAR7);
		break;

	case VAR19:
		VAR8 = FUN8(VAR2, VAR6, VAR7);
		break;

	case VAR20:
		VAR8 = FUN9(VAR2, VAR6, VAR7);
		break;

	case VAR21:
		VAR8 = FUN10(VAR2, VAR6, VAR7);
		break;

	case VAR22:
		VAR8 = FUN11(VAR2, VAR6, VAR7);
		break;

	case VAR23:
		VAR8 = FUN12(VAR2, VAR6, VAR7);
		break;

	case VAR24:
		VAR8 = FUN13(VAR2, VAR6, VAR7);
		break;
	case VAR25:
		VAR8 = FUN14(VAR2, VAR6,
							    VAR7);
		break;
	case VAR26:
		VAR8 = FUN15(VAR2, VAR6, VAR7);
		break;
	case VAR27:
		VAR8 = FUN16(VAR2, VAR6, VAR7);
		break;
	case VAR28:
		VAR8 = FUN17(VAR2, VAR6, VAR7);
		break;
	case VAR29:
		VAR8 = FUN18(VAR2, VAR6, VAR7);
		break;
	case VAR30:
		VAR8 = FUN19(VAR2, VAR6, VAR7);
		break;
	case VAR31:
		VAR8 = FUN20(VAR2, VAR6, VAR7);
		break;
	case VAR32:
		VAR8 = FUN21(VAR2, VAR6, VAR7);
		break;
	case VAR33:
		VAR8 = FUN22(VAR2, VAR6, VAR7);
		break;
	case VAR34:
		VAR8 = FUN23(VAR2, VAR6, VAR7);
		break;

	default:
		VAR8 = -VAR35;
		break;
	};

	FUN24(VAR2);

VAR13:
	return VAR8;
}