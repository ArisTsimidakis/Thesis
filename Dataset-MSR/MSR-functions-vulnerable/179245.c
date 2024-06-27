static int FUN1(const struct VAR1 *VAR2)
{
	struct VAR3 *VAR4;
	struct VAR5 *VAR6;

	VAR4 = FUN2(sizeof(struct VAR5) + 16, VAR7);
	if (!VAR4)
		return -VAR8;
	VAR6 = (struct VAR5 *) FUN3(VAR4, sizeof(struct VAR5));
	VAR6->VAR9 = VAR10;
	VAR6->VAR11 = VAR2->VAR12;
 	VAR6->VAR13 = VAR2->VAR14;
 	VAR6->VAR15 = VAR16;
 	VAR6->VAR17 = (VAR18) 0;


 	VAR6->VAR19 = (sizeof(struct VAR5) / sizeof(VAR20));
 	FUN4(VAR4, VAR7, VAR21, NULL, VAR2->VAR22);
 	return 0;

}