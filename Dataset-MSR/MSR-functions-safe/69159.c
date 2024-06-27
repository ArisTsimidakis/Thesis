static zend_always_inline void FUN1(VAR1 *VAR2, VAR1 *VAR3, int VAR4)
{
	VAR5 *VAR6 = VAR2->VAR7;
	VAR5 *VAR8 = VAR3->VAR7;
	VAR5 *VAR9 = VAR6 + VAR2->VAR10;

	do {
		if (!FUN2(VAR2, VAR3, 0, VAR6, VAR8, 1, 1, VAR4)) {
			if (VAR4) {
				FUN3(&VAR8->VAR11);
			}
		}
		VAR6++; VAR8++;
	} while (VAR6 != VAR9);
}