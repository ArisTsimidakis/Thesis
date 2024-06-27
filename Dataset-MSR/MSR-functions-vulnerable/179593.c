static bool FUN1(struct VAR1 *VAR2, const struct VAR3 *VAR4,
		     unsigned int VAR5, unsigned int *VAR6)
{
	struct VAR7 *VAR7 = FUN2(VAR2);
	struct VAR8 *VAR9;
	struct dccp_hdr VAR10, *VAR11;
 	const char *VAR12;
 	u_int8_t VAR13;
 

	VAR11 = FUN3(VAR4, VAR5, sizeof(VAR10), &VAR11);


 	FUN4(VAR11 == NULL);
 
 	VAR13 = VAR14[VAR15][VAR11->VAR16][VAR17];
	switch (VAR13) {
	default:
		VAR9 = FUN5(VAR7);
		if (VAR9->VAR18 == 0) {
			VAR12 = "";
			goto VAR19;
		}
	case VAR20:
		break;
	case VAR21:
		VAR12 = "";
		goto VAR19;
	}

	VAR2->VAR22.VAR23.VAR24[VAR25] = VAR15;
	VAR2->VAR22.VAR23.VAR24[VAR26] = VAR27;
	VAR2->VAR22.VAR23.VAR13 = VAR17;
	VAR2->VAR22.VAR23.VAR28 = VAR29;
	VAR2->VAR22.VAR23.VAR30 = VAR25;
	VAR2->VAR22.VAR23.VAR31 = 0;
	return true;

VAR19:
	if (FUN6(VAR7, VAR32))
		FUN7(VAR7, FUN8(VAR2), 0, VAR4, NULL, NULL,
			      NULL, "", VAR12);
	return false;
}