static int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3,
		      struct VAR4 *VAR5, unsigned int VAR6,
		      enum VAR7 *VAR8,
		      u_int8_t VAR9, unsigned int VAR10)
{
	struct dccp_hdr VAR11, *VAR12;
	unsigned int VAR13 = VAR5->VAR14 - VAR6;
 	unsigned int VAR15;
 	const char *VAR16;
 

	VAR12 = FUN2(VAR5, VAR6, sizeof(VAR11), &VAR12);


 	if (VAR12 == NULL) {
 		VAR16 = "";
 		goto VAR17;
	}

	if (VAR12->VAR18 * 4 < sizeof(struct VAR19) ||
	    VAR12->VAR18 * 4 > VAR13) {
		VAR16 = "";
		goto VAR17;
	}

	VAR15 = VAR13;
	if (VAR12->VAR20) {
		VAR15 = (VAR12->VAR20 - 1) * 4;
		if (VAR15 > VAR13) {
			VAR16 = "";
			goto VAR17;
		}
	}

	if (VAR1->VAR21.VAR22 && VAR10 == VAR23 &&
	    FUN3(VAR5, VAR10, VAR6, VAR15, VAR24,
				VAR9)) {
		VAR16 = "";
		goto VAR17;
	}

	if (VAR12->VAR25 >= VAR26) {
		VAR16 = "";
		goto VAR17;
	}

	return VAR27;

VAR17:
	if (FUN4(VAR1, VAR24))
		FUN5(VAR1, VAR9, 0, VAR5, NULL, NULL, NULL, "", VAR16);
	return -VAR27;
}