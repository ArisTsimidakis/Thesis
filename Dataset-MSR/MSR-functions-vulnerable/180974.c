FUN1(VAR1 *VAR2,
		struct VAR3 *VAR4,
		u_char VAR5, const struct VAR6 *VAR7, const VAR8 *VAR9,
		uint32_t VAR10, uint32_t VAR11, uint32_t VAR12, int VAR13)
{
	const VAR8 *VAR14;
	int VAR15;
	struct isakmp_gen VAR16;

 	VAR14 = (const VAR8 *)VAR7;
 	while (VAR5) {
 		FUN2(*VAR7);


 		FUN3(&VAR16, VAR7, sizeof(VAR16));
 
 		FUN4(*VAR7, FUN5(VAR16.VAR17));

		VAR13++;
		FUN6((VAR2,""));
		for (VAR15 = 0; VAR15 < VAR13; VAR15++)
			FUN6((VAR2,""));
		FUN6((VAR2,""));
		VAR14 = FUN7(VAR2, VAR4, VAR5,
				      VAR7, VAR9, VAR10, VAR11, VAR12, VAR13);
		FUN6((VAR2,""));
		VAR13--;

		if (VAR14 == NULL) {
			
			return NULL;
		}

		VAR5 = VAR16.VAR5;
		VAR7 = (const struct VAR6 *)VAR14;
	}
	return VAR14;
VAR18:
	FUN6((VAR2,"", FUN8(VAR5)));
	return NULL;
}