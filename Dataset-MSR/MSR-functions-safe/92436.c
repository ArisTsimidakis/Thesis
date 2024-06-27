static void FUN1(struct VAR1 *VAR2)
{
	FUN2(VAR2) {
		struct VAR3 *VAR3 = FUN3(VAR2);
		if (VAR3->VAR4 != VAR2)
			break;

		VAR3->VAR4 = NULL;
	}
}