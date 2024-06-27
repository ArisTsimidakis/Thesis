FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
    struct VAR5 *VAR6, uint64_t VAR7)
{
	uint64_t VAR8, VAR9;
	int VAR10, VAR11;

	
	if (VAR4->VAR12 >= VAR4->VAR13) {
		struct VAR5 **VAR14;
		int VAR15 = VAR4->VAR13 * 2;

		if (VAR4->VAR13 < 1024)
			VAR15 = 1024;
		
		if (VAR15 <= VAR4->VAR13) {
			FUN2(&VAR2->VAR16,
			    VAR17, "");
			return (VAR18);
		}
		VAR14 = (struct VAR5 **)
		    malloc(VAR15 * sizeof(VAR14[0]));
		if (VAR14 == NULL) {
			FUN2(&VAR2->VAR16,
			    VAR17, "");
			return (VAR18);
		}
		memcpy(VAR14, VAR4->VAR19,
		    VAR4->VAR13 * sizeof(VAR14[0]));
		if (VAR4->VAR19 != NULL)
			free(VAR4->VAR19);
		VAR4->VAR19 = VAR14;
		VAR4->VAR13 = VAR15;
	}

	VAR8 = VAR6->VAR7 = VAR7;

	
	VAR10 = VAR4->VAR12++;
	while (VAR10 > 0) {
		VAR11 = (VAR10 - 1)/2;
		VAR9 = VAR4->VAR19[VAR11]->VAR7;
		if (VAR8 >= VAR9) {
			VAR4->VAR19[VAR10] = VAR6;
			return (VAR20);
		}
		
		VAR4->VAR19[VAR10] = VAR4->VAR19[VAR11];
		VAR10 = VAR11;
	}
	VAR4->VAR19[0] = VAR6;

	return (VAR20);
}