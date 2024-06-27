struct VAR1* FUN1(const VAR2* VAR3, ut64 VAR4) {

	struct VAR1 *VAR5;

	if (!(VAR5 = malloc (sizeof (struct VAR1)))) {




 		return NULL;
 	}

	memset (VAR5, 0, sizeof (struct VAR1));
 	if (!VAR3) {
 		return FUN2 (VAR5);
 	}

	VAR5->VAR6 = FUN3();

	if (!FUN4 (VAR5->VAR6, VAR3, VAR4)) {




 		return FUN2 (VAR5);
 	}
 	if (!FUN5 (VAR5)) {
		return FUN2 (VAR5);
	}
	VAR5->VAR4 = VAR4;
	return VAR5;
}