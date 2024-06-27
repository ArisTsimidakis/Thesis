FUN1(VAR1 *VAR2,
                const VAR3 *VAR4, const struct VAR5 *VAR5, int VAR6)
{
	struct VAR7 *VAR8;
	const struct VAR9 *VAR10 = (const struct VAR9 *) VAR4;

	if (VAR2->VAR11 - VAR4 + 1 <= (int)(sizeof(struct VAR9) + sizeof(VAR12)))
		return;

	VAR8 = &VAR13[VAR14];

	if (++VAR14 >= VAR15)
		VAR14 = 0;

	VAR8->VAR16 = FUN2(&VAR10->VAR17);
 	FUN3(&VAR8->VAR18, &VAR5->VAR19, sizeof(VAR20));
 	FUN3(&VAR8->VAR21, &VAR5->VAR22, sizeof(VAR20));
 	VAR8->VAR6 = VAR6;

	VAR8->VAR23 = FUN2(&VAR10->VAR23);


 	VAR8->VAR24 = FUN2(VAR4 + sizeof(struct VAR9));
 }