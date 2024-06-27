static int FUN1(struct VAR1 *VAR2, const struct VAR3 *VAR4,
		       unsigned int VAR5, enum ip_conntrack_info VAR6,
		       u_int8_t VAR7, unsigned int VAR8,
		       unsigned int *VAR9)
{
	struct VAR10 *VAR10 = FUN2(VAR2);
	enum ip_conntrack_dir VAR11 = FUN3(VAR6);
	struct dccp_hdr VAR12, *VAR13;
 	u_int8_t VAR14, VAR15, VAR16;
 	enum ct_dccp_roles VAR17;
 

	VAR13 = FUN4(VAR4, VAR5, sizeof(VAR12), &VAR13);


 	FUN5(VAR13 == NULL);
 	VAR14 = VAR13->VAR18;
 
	if (VAR14 == VAR19 &&
	    !FUN6(VAR20, &VAR2->VAR21)) {
		
		FUN7(VAR2, VAR6, VAR4);
		return VAR22;
	}

	FUN8(&VAR2->VAR23);

	VAR17 = VAR2->VAR24.VAR25.VAR17[VAR11];
	VAR15 = VAR2->VAR24.VAR25.VAR26;
	VAR16 = VAR27[VAR17][VAR14][VAR15];

	switch (VAR16) {
	case VAR28:
		if (VAR15 == VAR29 &&
		    VAR17 == VAR30) {
			
			VAR2->VAR24.VAR25.VAR17[VAR11] = VAR31;
			VAR2->VAR24.VAR25.VAR17[!VAR11] = VAR30;
		}
		break;
	case VAR32:
		if (VAR15 == VAR28)
			VAR2->VAR24.VAR25.VAR33 = FUN9(VAR13);
		break;
	case VAR34:
		if (VAR15 == VAR32 &&
		    VAR14 == VAR35 &&
		    FUN10(VAR13) == VAR2->VAR24.VAR25.VAR33)
			FUN11(VAR36, &VAR2->VAR21);
		break;
	case VAR37:
		
		if (VAR2->VAR24.VAR25.VAR38 == !VAR11 &&
		    VAR2->VAR24.VAR25.VAR39 == VAR40 &&
		    VAR14 == VAR41) {
			VAR2->VAR24.VAR25.VAR17[!VAR11] = VAR31;
			VAR2->VAR24.VAR25.VAR17[VAR11] = VAR30;
			VAR2->VAR24.VAR25.VAR33 = FUN9(VAR13);
			VAR16 = VAR32;
			break;
		}
		VAR2->VAR24.VAR25.VAR38 = VAR11;
		VAR2->VAR24.VAR25.VAR39 = VAR14;

		FUN12(&VAR2->VAR23);
		if (FUN13(VAR10, VAR42))
			FUN14(VAR10, VAR7, 0, VAR4, NULL, NULL, NULL,
				      "");
		return VAR22;
	case VAR43:
		FUN12(&VAR2->VAR23);
		if (FUN13(VAR10, VAR42))
			FUN14(VAR10, VAR7, 0, VAR4, NULL, NULL, NULL,
				      "");
		return -VAR22;
	}

	VAR2->VAR24.VAR25.VAR38 = VAR11;
	VAR2->VAR24.VAR25.VAR39 = VAR14;
	VAR2->VAR24.VAR25.VAR26 = VAR16;
	FUN12(&VAR2->VAR23);

	if (VAR16 != VAR15)
		FUN15(VAR44, VAR2);

	FUN16(VAR2, VAR6, VAR4, VAR9[VAR16]);

	return VAR22;
}