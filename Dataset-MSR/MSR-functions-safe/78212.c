FUN1(struct VAR1 *VAR2,
		const struct VAR3 *VAR4, int VAR5)
{
	struct VAR6 *VAR7 = VAR2->VAR7;
	struct sc_apdu VAR8;
	unsigned char VAR9[] = {
		0x80, 0x01, VAR10,
		0x83, 0x01, VAR4->VAR11[0] & ~VAR12,
	};
	unsigned char VAR13[] = {
		0x80, 0x01, VAR10,
		0x83, 0x01, VAR4->VAR11[0] & ~VAR12,
	};
	int VAR14;

	FUN2(VAR7);
	FUN3(VAR7, "",
			VAR5, VAR4->VAR15, VAR4->VAR16, VAR4->VAR17, VAR4->VAR18, VAR4->VAR11[0]);
	switch (VAR4->VAR15)  {
	case VAR19:
		FUN4(VAR2, &VAR8, VAR20, 0x22, 0x41, VAR21);
		VAR8.VAR22 = VAR9;
		VAR8.VAR23 = sizeof(VAR9);
		VAR8.VAR24 = sizeof(VAR9);
		break;
	case VAR25:
		FUN4(VAR2, &VAR8, VAR20, 0x22, 0x41, VAR26);
		VAR8.VAR22 = VAR13;
		VAR8.VAR23 = sizeof(VAR13);
		VAR8.VAR24 = sizeof(VAR13);
		break;
	default:
		FUN5(VAR7, VAR27);
	}

	VAR14 = FUN6(VAR2, &VAR8);
	FUN7(VAR7, VAR14, "");
	VAR14 = FUN8(VAR2, VAR8.VAR28, VAR8.VAR29);
	FUN7(VAR7, VAR14, "");

	FUN5(VAR7, VAR14);
}