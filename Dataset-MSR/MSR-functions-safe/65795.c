static VAR1 FUN1(struct VAR2 *VAR3, char VAR4,
					  char *VAR5, char VAR6,
					  char VAR7)
{
	VAR1 *VAR8;
	__be32 VAR9;
	int VAR10;
	int strlen, VAR11=0;
	char *VAR12, *VAR13, *VAR14;

	FUN2("", VAR5);

	VAR10 = VAR3->VAR15->VAR16;
	VAR8 = FUN3(VAR3, 4);
	if (!VAR8)
		return VAR17;
	VAR8++; 

	VAR13 = VAR12 = VAR5;
	while (*VAR13) {
		bool VAR18 = false;

		
		if (*VAR12 == VAR6) {
			for (; *VAR13 && (*VAR13 != VAR7); VAR13++)
				;
			VAR14 = VAR13 + 1;
			if (*VAR13 && (!*VAR14 || *VAR14 == VAR4)) {
				VAR12++;
				VAR18 = true;
			}
		}

		if (!VAR18)
			for (; *VAR13 && (*VAR13 != VAR4); VAR13++)
				;

		strlen = VAR13 - VAR12;
		if (strlen) {
			VAR8 = FUN3(VAR3, strlen + 4);
			if (!VAR8)
				return VAR17;
			VAR8 = FUN4(VAR8, VAR12, strlen);
			VAR11++;
		}
		else
			VAR13++;
		if (VAR18)
			VAR13 = VAR14;

		VAR12 = VAR13;
	}
	VAR9 = FUN5(VAR11);
	FUN6(VAR3->VAR15, VAR10, &VAR9, 4);
	return 0;
}