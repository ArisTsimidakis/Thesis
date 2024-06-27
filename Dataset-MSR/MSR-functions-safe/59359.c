static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
	struct VAR5 *VAR5 = FUN2(VAR2->VAR6);
	struct VAR7 *VAR8 = (struct VAR7 *) &VAR4->VAR9[1];
	struct xfrm_dump_info VAR10;

	FUN3(sizeof(struct VAR7) >
		     sizeof(VAR4->VAR9) - sizeof(VAR4->VAR9[0]));

	VAR10.VAR11 = VAR4->VAR2;
	VAR10.VAR12 = VAR2;
	VAR10.VAR13 = VAR4->VAR14->VAR13;
	VAR10.VAR15 = VAR16;

	if (!VAR4->VAR9[0]) {
		struct VAR17 *VAR18[VAR19+1];
		struct VAR20 *VAR21 = NULL;
		u8 VAR22 = 0;
		int VAR23;

		VAR23 = FUN4(VAR4->VAR14, 0, VAR18, VAR19, VAR24,
				  NULL);
		if (VAR23 < 0)
			return VAR23;

		if (VAR18[VAR25]) {
			VAR21 = FUN5(FUN6(VAR18[VAR25]),
					 sizeof(*VAR21), VAR26);
			if (VAR21 == NULL)
				return -VAR27;
		}

		if (VAR18[VAR28])
			VAR22 = FUN7(VAR18[VAR28]);

		FUN8(VAR8, VAR22, VAR21);
		VAR4->VAR9[0] = 1;
	}

	(void) FUN9(VAR5, VAR8, VAR29, &VAR10);

	return VAR2->VAR30;
}