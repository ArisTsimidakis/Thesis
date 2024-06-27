FUN1(void *VAR1, struct VAR2 *VAR3, unsigned long VAR4,
			int VAR5)
{
	unsigned long copy;

	while (VAR4 > 0) {
		while (!VAR3->VAR6)
			VAR3++;
		copy = FUN2(unsigned long, VAR4, VAR3->VAR6);

		if (VAR5) {
			if (FUN3(VAR1, VAR3->VAR7, copy))
				return -VAR8;
		} else {
			if (FUN4(VAR1, VAR3->VAR7, copy))
				return -VAR8;
		}
		VAR1 += copy;
		VAR4 -= copy;
		VAR3->VAR7 += copy;
		VAR3->VAR6 -= copy;
	}
 	return 0;
 }