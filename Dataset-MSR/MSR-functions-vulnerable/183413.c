static int FUN1(struct VAR1 *VAR2,
			       const struct VAR1 *VAR3)
{
	struct VAR4 *VAR5;
	int VAR6, VAR7;

	
	for (VAR6 = VAR3->VAR8 + 1; VAR6 <= VAR2->VAR8; VAR6++) {
 		FUN2(VAR2->VAR9[VAR6]);
 		VAR2->VAR9[VAR6] = NULL;
 	}


 	VAR2->VAR8 = VAR3->VAR8;
 	for (VAR6 = 0; VAR6 <= VAR3->VAR8; VAR6++) {
 		VAR5 = VAR2->VAR9[VAR6];
		if (!VAR5) {
			VAR5 = FUN3(sizeof(*VAR5), VAR10);
			if (!VAR5)
				return -VAR11;
			VAR2->VAR9[VAR6] = VAR5;
		}
		VAR7 = FUN4(VAR5, VAR3->VAR9[VAR6]);
		if (VAR7)
			return VAR7;
	}
	return 0;
}