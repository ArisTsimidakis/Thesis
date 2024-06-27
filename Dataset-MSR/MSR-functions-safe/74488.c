static int FUN1(struct VAR1 *VAR2,
				     int *VAR3, int *VAR4)
{
	struct VAR5 *VAR5;

	FUN2(VAR5, &VAR2->VAR6, VAR7) {
		
		if (!VAR5->VAR3 && !VAR5->VAR4)
			continue;

		if (*VAR4 > VAR5->VAR4)
			*VAR4 = VAR5->VAR4;
		if (*VAR3 < VAR5->VAR3)
			*VAR3 = VAR5->VAR3;
	}

	if (*VAR3 > *VAR4) {
		FUN3(VAR2, "",
			*VAR3, *VAR4);
		return -VAR8;
	}

	return 0;
}