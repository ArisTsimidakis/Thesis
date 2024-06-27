int FUN1(struct VAR1 **VAR2, union VAR3 *VAR4)
{
	struct VAR5 *VAR6;
	struct VAR7 *VAR8;
	int VAR9 = -VAR10;

	
	if (FUN2(VAR11) == 0)
		return -VAR10;

	
	VAR6 = FUN3(sizeof(struct VAR5), VAR12);
	if (!VAR6)
		return -VAR13;
	VAR8 = &VAR6->VAR8;

	VAR6->VAR14 = FUN4(sizeof(struct VAR15) *
				     (*VAR2)->VAR16);
	VAR9 = -VAR13;
	if (!VAR6->VAR14)
		goto VAR17;
	VAR6->VAR2 = *VAR2;
	VAR6->VAR18 = VAR11[VAR6->VAR2->VAR19];

	
	FUN5(&VAR20);

	if (VAR4->VAR21 || VAR4->VAR22 || VAR4->VAR23) {
		
		VAR8->VAR24 = VAR4->VAR21;
		VAR8->VAR25 = (char VAR26 *) (unsigned long) VAR4->VAR22;
		VAR8->VAR27 = VAR4->VAR23;

		VAR9 = -VAR10;
		
		if (VAR8->VAR27 < 128 || VAR8->VAR27 > VAR28 >> 8 ||
		    !VAR8->VAR24 || !VAR8->VAR25)
			goto VAR29;
	}

	VAR6->VAR30 = !!(VAR4->VAR31 & VAR32);
	if (!FUN6(VAR33))
		VAR6->VAR30 = true;

	if (VAR6->VAR2->VAR34->VAR35) {
		VAR9 = FUN7(VAR6);
		if (VAR9)
			goto VAR29;
	}

	VAR9 = FUN8(VAR6);
	if (VAR9 < 0)
		goto VAR36;

	VAR6->VAR37 = FUN9(VAR6->VAR2->VAR16,
				       sizeof(struct VAR38 *),
				       VAR39);
	VAR9 = -VAR13;
	if (!VAR6->VAR37)
		goto VAR36;

	VAR9 = FUN10(VAR6);
	if (VAR9 < 0)
		goto VAR36;

	VAR6->VAR40 = FUN11(VAR41);

	VAR9 = FUN12(VAR6);
	if (VAR6->VAR42) {
		FUN13(VAR6->VAR42, true);
		VAR6->VAR42 = NULL;
	}

VAR36:
 	while (!FUN14(VAR6, NULL, NULL));
 	FUN15(VAR6);
 






 	if (VAR9 == 0)
 		
 		VAR9 = FUN16(VAR6);

	if (VAR9 == 0)
		VAR9 = FUN17(VAR6);

	if (VAR8->VAR24 && FUN18(VAR8))
		VAR9 = -VAR43;
	if (VAR8->VAR24 && !VAR8->VAR25) {
		VAR9 = -VAR44;
		goto VAR45;
	}

	if (VAR9 == 0 && VAR6->VAR46) {
		
		VAR6->VAR2->VAR34->VAR47 = FUN19(VAR6->VAR46,
							  sizeof(VAR6->VAR47[0]),
							  VAR12);

		if (!VAR6->VAR2->VAR34->VAR47) {
			VAR9 = -VAR13;
			goto VAR45;
		}

		memcpy(VAR6->VAR2->VAR34->VAR47, VAR6->VAR47,
		       sizeof(VAR6->VAR47[0]) * VAR6->VAR46);
		VAR6->VAR2->VAR34->VAR46 = VAR6->VAR46;

		
		FUN20(VAR6);
	}

VAR45:
	if (!VAR6->VAR2->VAR34->VAR47)
		
		FUN21(VAR6);
	*VAR2 = VAR6->VAR2;
VAR29:
	FUN22(&VAR20);
	FUN23(VAR6->VAR14);
VAR17:
	FUN24(VAR6);
	return VAR9;
}