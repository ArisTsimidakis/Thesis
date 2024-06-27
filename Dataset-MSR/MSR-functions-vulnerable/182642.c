static VAR1 FUN1(struct VAR2 *VAR3,
				     struct VAR2 *VAR4,
				     struct VAR5 *VAR6,
				     struct VAR7 *VAR8,
				     void *VAR9[VAR10],
				     struct VAR11 **VAR12)
{
	size_t VAR13;
	TEE_Result VAR14;
	size_t VAR15 = 0;
	size_t VAR16;
	VAR17 *VAR18 = 0;
	bool VAR19[VAR10];
	struct VAR20 *VAR21 = FUN2(VAR3->VAR22);
	void *VAR23;
	size_t VAR24;

	
	if (!VAR6) {
		memset(VAR8, 0, sizeof(*VAR8));
	} else {
		VAR14 = FUN3(VAR21,
			VAR25 | VAR26,
 			(VAR27)VAR6, sizeof(struct VAR5));
 		if (VAR14 != VAR28)
 			return VAR14;

		FUN4(VAR8, VAR6);






 	}
 
 	if (VAR4 && FUN5(VAR4->VAR22)) {
		
		return VAR28;
	}

	

	for (VAR13 = 0; VAR13 < VAR10; VAR13++) {

		VAR19[VAR13] = false;

		switch (FUN6(VAR8->VAR29, VAR13)) {
		case VAR30:
		case VAR31:
		case VAR32:
			VAR23 = (void *)VAR8->VAR33[VAR13].VAR34.VAR35;
			VAR16 = VAR8->VAR33[VAR13].VAR34.VAR36;
			if (!VAR23) {
				if (VAR16)
					return VAR37;
				break;
			}
			
			if (FUN7(VAR21, VAR23, VAR16)) {

				VAR16 = FUN8(VAR16, sizeof(VAR38));
				if (FUN9(VAR15, VAR16, &VAR15))
					return VAR37;
				VAR19[VAR13] = true;
				break;
			}

			VAR14 = FUN10(VAR21, VAR23, VAR16,
							&VAR8->VAR33[VAR13].VAR34.VAR11,
							&VAR8->VAR33[VAR13].VAR34.VAR35);
			if (VAR14 != VAR28)
				return VAR14;
			break;
		default:
			break;
		}
	}

	if (VAR15 == 0)
		return VAR28;

	VAR14 = FUN11(VAR15, VAR12, &VAR18);
	if (VAR14 != VAR28)
		return VAR14;
	VAR24 = 0;

	for (VAR13 = 0; VAR13 < VAR10; VAR13++) {

		if (!VAR19[VAR13])
			continue;

		VAR16 = FUN8(VAR8->VAR33[VAR13].VAR34.VAR36, sizeof(VAR38));

		switch (FUN6(VAR8->VAR29, VAR13)) {
		case VAR30:
		case VAR32:
			VAR23 = (void *)VAR8->VAR33[VAR13].VAR34.VAR35;
			if (VAR23) {
				VAR14 = FUN12(VAR18, VAR23,
						VAR8->VAR33[VAR13].VAR34.VAR36);
				if (VAR14 != VAR28)
					return VAR14;
				VAR8->VAR33[VAR13].VAR34.VAR35 = VAR24;
				VAR8->VAR33[VAR13].VAR34.VAR11 = *VAR12;
				VAR9[VAR13] = VAR18;
				VAR18 += VAR16;
				VAR24 += VAR16;
			}
			break;

		case VAR31:
			VAR23 = (void *)VAR8->VAR33[VAR13].VAR34.VAR35;
			if (VAR23) {
				VAR8->VAR33[VAR13].VAR34.VAR35 = VAR24;
				VAR8->VAR33[VAR13].VAR34.VAR11 = *VAR12;
				VAR9[VAR13] = VAR18;
				VAR18 += VAR16;
				VAR24 += VAR16;
			}
			break;

		default:
			continue;
		}
	}

	return VAR28;
}