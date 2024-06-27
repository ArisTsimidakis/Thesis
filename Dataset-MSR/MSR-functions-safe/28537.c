static inline int FUN1(struct VAR1 *VAR2,
		struct VAR3 *VAR4,
		struct VAR5 **VAR6, int VAR7, int *VAR8, int VAR9)
{
	struct VAR10 *VAR10 = FUN2(VAR4->VAR11);
	if (*VAR6 == NULL) {
		if (VAR2->VAR12) {
			
			*VAR6 = VAR2->VAR12;
			VAR2->VAR12 = NULL;
		} else {
			*VAR6 = FUN3(VAR13 + VAR14);
			if (!(*VAR6))
				return -VAR15;
		}

		FUN4(*VAR6, VAR14);
		if (VAR9 <= VAR13) {
			memcpy(FUN5(*VAR6, VAR9), VAR4->VAR11 + VAR7,
				VAR9);
		} else {
			FUN6(VAR10);
			memcpy(FUN5(*VAR6, VAR13),
			       VAR4->VAR11 + VAR7, VAR13);
			FUN7(*VAR6, *VAR8, VAR10,
				VAR7 + VAR13,
				VAR9 - VAR13);
			(*VAR6)->VAR9 += VAR9 - VAR13;
			(*VAR6)->VAR16      += VAR9 - VAR13;
			(*VAR6)->VAR17 += VAR9 - VAR13;
			(*VAR8)++;
		}
	} else {
		FUN6(VAR10);
		FUN7(*VAR6, *VAR8, VAR10, VAR7, VAR9);
		(*VAR6)->VAR9 += VAR9;
		(*VAR6)->VAR16      += VAR9;
		(*VAR6)->VAR17 += VAR9;
		(*VAR8)++;
	}


	return 0;
}