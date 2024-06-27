static int FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4 = VAR2->VAR5->VAR6;
	int VAR7 = VAR2->VAR5->VAR8;
	int VAR9 = 0;
	int VAR10, VAR11;

	VAR9 = FUN2(VAR2);
	if (VAR9 < 0)
		return VAR9;

	VAR12 = FUN3(VAR7, sizeof(int), VAR13);
	if (!VAR12)
		return -VAR14;

	VAR15 = FUN3(VAR7, sizeof(int), VAR13);
	if (!VAR15) {
		FUN4(VAR12);
		return -VAR14;
	}

	VAR12[0] = VAR16; 
	VAR15[0] = 0; 
	VAR17 = 1;

VAR18:
	if (VAR17 == 0)
		goto VAR19;
	VAR11 = VAR15[VAR17 - 1];

	if (FUN5(VAR4[VAR11].VAR20) == VAR21) {
		u8 VAR22 = FUN6(VAR4[VAR11].VAR20);

		if (VAR22 == VAR23) {
			goto VAR24;
		} else if (VAR22 == VAR25) {
			VAR9 = FUN7(VAR11, VAR11 + 1, VAR26, VAR2);
			if (VAR9 == 1)
				goto VAR18;
			else if (VAR9 < 0)
				goto VAR27;
			if (VAR11 + 1 < VAR7)
				VAR2->VAR28[VAR11 + 1] = VAR29;
			if (VAR4[VAR11].VAR30 == VAR31) {
				VAR2->VAR28[VAR11] = VAR29;
				VAR9 = FUN7(VAR11, VAR11 + VAR4[VAR11].VAR32 + 1, VAR33, VAR2);
				if (VAR9 == 1)
					goto VAR18;
				else if (VAR9 < 0)
					goto VAR27;
			}
		} else if (VAR22 == VAR34) {
			if (FUN8(VAR4[VAR11].VAR20) != VAR35) {
				VAR9 = -VAR36;
				goto VAR27;
			}
			
			VAR9 = FUN7(VAR11, VAR11 + VAR4[VAR11].VAR37 + 1,
					VAR26, VAR2);
			if (VAR9 == 1)
				goto VAR18;
			else if (VAR9 < 0)
				goto VAR27;
			
			if (VAR11 + 1 < VAR7)
				VAR2->VAR28[VAR11 + 1] = VAR29;
		} else {
			
			VAR2->VAR28[VAR11] = VAR29;
			VAR9 = FUN7(VAR11, VAR11 + 1, VAR26, VAR2);
			if (VAR9 == 1)
				goto VAR18;
			else if (VAR9 < 0)
				goto VAR27;

			VAR9 = FUN7(VAR11, VAR11 + VAR4[VAR11].VAR37 + 1, VAR33, VAR2);
			if (VAR9 == 1)
				goto VAR18;
			else if (VAR9 < 0)
				goto VAR27;
		}
	} else {
		
		VAR9 = FUN7(VAR11, VAR11 + 1, VAR26, VAR2);
		if (VAR9 == 1)
			goto VAR18;
		else if (VAR9 < 0)
			goto VAR27;
	}

VAR24:
	VAR12[VAR11] = VAR38;
	if (VAR17-- <= 0) {
		FUN9(VAR2, "");
		VAR9 = -VAR39;
		goto VAR27;
	}
	goto VAR18;

VAR19:
	for (VAR10 = 0; VAR10 < VAR7; VAR10++) {
		if (VAR12[VAR10] != VAR38) {
			FUN9(VAR2, "", VAR10);
			VAR9 = -VAR36;
			goto VAR27;
		}
	}
	VAR9 = 0; 

VAR27:
	FUN4(VAR12);
	FUN4(VAR15);
	return VAR9;
}