static struct VAR1 *FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
	int VAR5, struct VAR6 **VAR7)
{
	struct VAR8 *VAR9 = VAR4->VAR10->VAR9;
	struct VAR11 *VAR12;
	struct VAR6 *VAR13;

	if (!VAR2)
		VAR2 = FUN2(VAR9, VAR9->VAR14);
	if (!VAR2)
		return NULL;
	VAR13 = (struct VAR6 *)FUN3(VAR2, sizeof(struct VAR6));
	VAR13->VAR15 = VAR5;
	VAR13->VAR16 = 0;
	VAR13->VAR17 = 0;
	VAR13->VAR18 = VAR4->VAR19;
	VAR12 = FUN4(VAR2);
	VAR12->VAR20 = FUN5(FUN6(VAR12->VAR20)+1);
	*VAR7 = VAR13;
	return VAR2;
}