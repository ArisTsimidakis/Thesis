VAR1 FUN1(struct VAR2 **VAR3, int VAR4)
{
	struct VAR5 *VAR6 =
		FUN2(VAR3[0],
		struct VAR5);
	struct VAR5 *VAR7;
	size_t VAR8;
	size_t VAR9 = 0;
	int VAR10, VAR11;
	struct VAR12 *VAR13 = NULL;
	struct VAR12 *VAR14;
	NTSTATUS VAR15;
	ssize_t VAR16;

	if (VAR4 == 1) {
		return FUN3(VAR3[0], VAR6,
						 VAR6->VAR17.VAR13,
						 VAR6->VAR17.VAR18);
	}

	VAR11 = 0;
	for (VAR10=0; VAR10<VAR4; VAR10++) {
		if (!FUN4(VAR3[VAR10])) {
			return VAR19;
		}

		VAR7 = FUN2(VAR3[VAR10], struct VAR5);

		if (VAR7->VAR17.VAR18 < 4) {
			return VAR20;
		}

		if (VAR10 == 0) {
			
			VAR11 += 2;
		} else {
			
			VAR11 += 1;
		}

		
		VAR11 += VAR7->VAR17.VAR18 - 2;
	}

	VAR13 = FUN5(VAR6, struct VAR12, VAR11);
	if (VAR13 == NULL) {
		return VAR21;
	}

	VAR6->VAR17.VAR22 = (struct VAR2 **)FUN6(
		VAR6, VAR3, sizeof(*VAR3) * VAR4);
	if (VAR6->VAR17.VAR22 == NULL) {
		FUN7(VAR13);
		return VAR21;
	}

	VAR8 = VAR23;
	VAR14 = VAR13;

	for (VAR10=0; VAR10<VAR4; VAR10++) {
		size_t VAR24 = 0;
		VAR25 *VAR26;

		VAR7 = FUN2(VAR3[VAR10], struct VAR5);

		if (VAR10 < VAR4-1) {
			if (!FUN8(FUN9(VAR7->VAR17.VAR27, VAR28))
			    || FUN9(VAR7->VAR17.VAR27, VAR23) < 2) {
				FUN7(VAR13);
				FUN7(VAR6->VAR17.VAR22);
				return VAR20;
			}
		}

		VAR8 += FUN10(VAR7->VAR17.VAR13+2,
					      VAR7->VAR17.VAR18-2) + 1;
		if ((VAR8 % 4) != 0) {
			VAR24 = 4 - (VAR8 % 4);
		}
		VAR8 += VAR24;
		VAR26 = VAR7->VAR17.VAR26;

		if (VAR10 < VAR4-1) {
			struct VAR5 *VAR29 =
				FUN2(VAR3[VAR10+1],
				struct VAR5);
			FUN11(VAR26+0, 0, FUN9(VAR29->VAR17.VAR27, VAR28));
			FUN11(VAR26+0, 1, 0);
			FUN12(VAR26+1, 0, VAR8);
		} else if (FUN8(FUN9(VAR7->VAR17.VAR27, VAR28))) {
			
			FUN11(VAR26+0, 0, 0xff);
			FUN11(VAR26+0, 1, 0xff);
			FUN12(VAR26+1, 0, 0);
		}

		if (VAR10 == 0) {
			
			VAR14[0] = VAR7->VAR17.VAR13[0];
			VAR14[1] = VAR7->VAR17.VAR13[1];
			VAR14 += 2;
		} else {
			
			VAR14[0].VAR30 = VAR9+1;
			VAR14[0].VAR31 = (void *)&VAR7->VAR17.VAR27[
				sizeof(VAR7->VAR17.VAR27) - VAR14[0].VAR30];
			memset(VAR14[0].VAR31, 0, VAR14[0].VAR30-1);
			VAR14 += 1;
		}

		
		memcpy(VAR14, VAR7->VAR17.VAR13+2,
		       sizeof(struct VAR12) * (VAR7->VAR17.VAR18-2));
		VAR14 += VAR7->VAR17.VAR18 - 2;
		VAR9 = VAR24;
	}

	VAR16 = FUN13(&VAR13[1], VAR11-1);
	if ((VAR16 == -1) || (VAR16 > VAR6->VAR32->VAR17.VAR33)) {
		FUN7(VAR13);
		FUN7(VAR6->VAR17.VAR22);
		return VAR20;
	}

	VAR15 = FUN3(VAR3[0], VAR6, VAR13, VAR11);
	if (!FUN14(VAR15)) {
		FUN7(VAR13);
		FUN7(VAR6->VAR17.VAR22);
		return VAR15;
	}

	return VAR34;
}