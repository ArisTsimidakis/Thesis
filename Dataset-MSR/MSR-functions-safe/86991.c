static VAR1 FUN1(const struct VAR2 *VAR3,
				 uint32_t VAR4,
				 struct VAR5 *VAR6,
				 VAR7 *VAR8)
{
	TEE_Result VAR9;
	size_t VAR10;
	uint8_t VAR11[VAR12] = { 0 };

	if (VAR4 > VAR12)
		return VAR13;

	memset(VAR6, 0, sizeof(*VAR6));

	for (VAR10 = 0; VAR10 < VAR4; VAR10++) {
		uint32_t VAR14;

		VAR8[VAR10] = FUN2(VAR3[VAR10].VAR14);

		if (VAR8[VAR10] & VAR15)
			return VAR13;

		VAR14 = VAR8[VAR10] & VAR16;
		switch (VAR14) {
		case VAR17:
			VAR11[VAR10] = VAR18;
			break;
		case VAR19:
		case VAR20:
		case VAR21:
			VAR11[VAR10] = VAR22 + VAR14 -
				VAR19;
			VAR6->VAR23[VAR10].VAR24.VAR25 = FUN2(VAR3[VAR10].VAR23.VAR26.VAR25);
			VAR6->VAR23[VAR10].VAR24.VAR27 = FUN2(VAR3[VAR10].VAR23.VAR26.VAR27);
			break;
		case VAR28:
		case VAR29:
		case VAR30:
			VAR9 = FUN3(&VAR3[VAR10].VAR23.VAR31, VAR8[VAR10],
					     &VAR6->VAR23[VAR10].VAR32);
			if (VAR9)
				return VAR9;
			VAR11[VAR10] = VAR33 + VAR14 -
				VAR28;
			break;
		case VAR34:
		case VAR35:
		case VAR36:
			VAR9 = FUN4(&VAR3[VAR10].VAR23.VAR37,
					     &VAR6->VAR23[VAR10].VAR32);
			if (VAR9)
				return VAR9;
			VAR11[VAR10] = VAR33 + VAR14 -
				VAR34;
			break;
		default:
			return VAR13;
		}
	}

	VAR6->VAR38 = FUN5(VAR11[0], VAR11[1], VAR11[2], VAR11[3]);

	return VAR39;
}