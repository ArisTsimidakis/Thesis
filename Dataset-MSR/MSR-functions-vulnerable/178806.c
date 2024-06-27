static inline int FUN1(struct VAR1 *VAR2, VAR3 *VAR4,
		unsigned long VAR5, unsigned long VAR6,
		const VAR7 *VAR8, unsigned long VAR9,
		void *private)
{
	VAR10 *VAR11;
	unsigned long VAR12;

	VAR11 = FUN2(VAR4, VAR5);
 	do {
 		VAR12 = FUN3(VAR5, VAR6);
 		FUN4(VAR2->VAR13, VAR11);

		if (FUN5(VAR11))


 			continue;
 		if (FUN6(VAR2, VAR11, VAR5, VAR12, VAR8,
 				    VAR9, private))
			return -VAR14;
	} while (VAR11++, VAR5 = VAR12, VAR5 != VAR6);
	return 0;
}