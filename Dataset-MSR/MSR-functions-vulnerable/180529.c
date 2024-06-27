static int FUN1(struct VAR1 *VAR2)
 {


 	struct VAR3 *VAR4;
 	int VAR5;




































 
 	VAR4 = FUN2(sizeof(*VAR4), VAR6);
 	if (!VAR4)
		return -VAR7;

	FUN3(&VAR4->VAR8);
	VAR4->VAR9 = VAR2->VAR10->VAR11;
	VAR4->VAR12 = VAR2->VAR13[VAR4->VAR9];

	VAR5 = FUN4(VAR4->VAR12,
						VAR4->VAR9);
	if (VAR5) {
		FUN5(VAR4);
		return VAR5;
	}

	FUN6(VAR2, VAR4);

	return 0;
}