static VAR1 FUN1(struct VAR2 *VAR3, struct VAR4 *VAR4,
				    struct VAR5 *VAR5, loff_t VAR6,
				    size_t VAR7)
{
	size_t VAR8;
	unsigned VAR9;
	unsigned VAR10;

	for (VAR10 = 0; VAR10 < VAR3->VAR11; VAR10++)
		FUN2(VAR5, VAR3->VAR12[VAR10]->VAR13);

	VAR8 = FUN3(VAR3, VAR4, VAR6, VAR7, NULL);

	VAR9 = VAR3->VAR14;
	VAR7 = VAR8;
	for (VAR10 = 0; VAR10 < VAR3->VAR11; VAR10++) {
		struct VAR15 *VAR15 = VAR3->VAR12[VAR10];

		if (!VAR3->VAR16.VAR17.VAR18 && !VAR9 && VAR7 >= VAR19)
			FUN4(VAR15);

		if (VAR7 > VAR19 - VAR9)
			VAR7 -= VAR19 - VAR9;
		else
			VAR7 = 0;
		VAR9 = 0;

		FUN5(VAR15);
		FUN6(VAR15);
	}

	return VAR8;
}