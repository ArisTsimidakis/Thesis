static int FUN1(const struct VAR1 *VAR1, const struct VAR2 *VAR2,
		struct VAR3 *VAR4)
{
	struct VAR5 *VAR6 = FUN2(VAR1->VAR7)->VAR8;
	unsigned long VAR9;
	int VAR10;

	VAR9 = FUN3();
	for (VAR10 = 0; VAR10 < VAR4->VAR11; VAR10++)
		VAR9 = FUN4(FUN5(VAR6, VAR4->VAR12[VAR10]),
					 VAR9);
	VAR4->VAR9 = FUN6(VAR9);

	return 0;
}