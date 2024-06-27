FUN1(
	VAR1 *VAR2
	)
{
	VAR3 *	VAR4;

	VAR4 = FUN2(VAR2->VAR5);
	for (; VAR4 != NULL; VAR4 = VAR4->VAR6) {
		switch (VAR4->VAR7) {

		case '':
			VAR8 |= FUN3(VAR4->VAR9.VAR10);
			break;

		case '':
			VAR8 &= ~FUN3(VAR4->VAR9.VAR10);
			break;

		case '':
			VAR8 = FUN3(VAR4->VAR9.VAR10);
			break;
		}
	}
}