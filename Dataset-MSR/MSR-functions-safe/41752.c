void FUN1(void)
{
	struct VAR1 *VAR2;
	int VAR3;

	FUN2(&VAR4);
	FUN3(&VAR5);
	FUN4();

	FUN5();

	FUN6(&VAR6);

	
	FUN7(&VAR7, VAR2) {
		if (FUN8(VAR2) == NULL)
			continue;
		FUN9(VAR2, 1);
	}
	FUN9(VAR7.VAR8, 2);

	
	FUN10(&VAR9);
	for (VAR3 = 0; VAR3 < VAR10; VAR3++)
		FUN11(!FUN12(&VAR11[VAR3]));
	FUN13(&VAR9);
	FUN14(&VAR12);
	FUN15();

	FUN16(VAR13);
}