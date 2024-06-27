FUN1(
	VAR1 *VAR2
	)
{
	VAR3 *VAR4;

	if (VAR2->VAR5 != NULL) {
		while (1) {
			FUN2(VAR4, *VAR2->VAR5, VAR6);
			if (NULL == VAR4)
				break;
			FUN3(VAR4->VAR7);
			FUN4(VAR4->VAR8);
			free(VAR4);
		}
		free(VAR2->VAR5);
		VAR2->VAR5 = NULL;
	}
}