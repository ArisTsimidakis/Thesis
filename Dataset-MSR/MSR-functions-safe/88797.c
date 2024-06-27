static void FUN1(int VAR1)
{
	struct VAR2 *VAR3;

	FUN2(VAR3, &VAR4, VAR5) {
		if (VAR3->VAR6 != VAR1)
			continue;

		if (VAR3->VAR7)
			VAR3->FUN3(VAR1);
	}
}