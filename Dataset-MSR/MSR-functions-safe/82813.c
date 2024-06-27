R_API VAR1 *FUN1(VAR2 *VAR3, const char *VAR4, const VAR5 *VAR6, ut64 VAR7, ut64 VAR8, int VAR9, ut64 VAR10, ut64 VAR11, int VAR12, const char *VAR13, const char *VAR14, ut64 VAR15, bool VAR16) {
	ut8 VAR17 = false;
	VAR18 *VAR19 = NULL;
	VAR20 *VAR21 = NULL;
	VAR22 *VAR23 = NULL;
	if (VAR7 == VAR24) {
		return NULL;
	}

	if (VAR14) {
		VAR21 = FUN2 (VAR3, VAR14);
	}

	if (VAR21 && VAR21->FUN3 (VAR6, VAR7)) {
		return FUN4 (VAR3, VAR21, VAR4,
						VAR6, VAR7, VAR8, VAR10, VAR11, 0,
						VAR12, VAR9);
	}

	VAR1 *VAR25 = FUN5 (VAR3, VAR4, VAR6, VAR7, VAR8,
				       VAR9, VAR12, VAR14, VAR16);
	if (!VAR25) {
		if (!VAR16) { 
			free ((void*) VAR6);
		}
		return NULL;
	}
	VAR17 = true;

	if (VAR3->VAR26) {
		VAR19 = FUN6 (VAR3, VAR3->VAR26);
	}
	if (!VAR19) {
		if (VAR13) {
			VAR19 = FUN6 (VAR3, VAR13);
		}
		if (!VAR19) {
			VAR19 = FUN7 (VAR3, VAR6, VAR7);
			if (!VAR19) {
				VAR19 = FUN8 (VAR3);
			}
		}
	}

	VAR23 = FUN9 (VAR25, VAR19, VAR10, VAR11, 0, FUN10 (VAR25->VAR27));
	
	
	if (VAR23 && !VAR23->VAR28) {
		VAR23->VAR28 = VAR8;
	}

	if (!VAR23) {
		if (VAR25 && VAR17) {
			FUN11 (VAR3->VAR29, VAR25);
		}
		return NULL;
	}
#if 0
	
	if (strcmp (VAR19->VAR30, "")) {
		VAR25->VAR31 = 1;
	}
#endif

	
	return VAR25;
}