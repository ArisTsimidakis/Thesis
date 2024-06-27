int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3)
{
	int VAR4;
	struct VAR1 *VAR5;

	VAR4 = FUN2(VAR1);
 	if (VAR4)
 		goto VAR6;
 

	VAR5 = FUN3(VAR1);

	if (VAR5) {








 		FUN4(&VAR5->VAR7->VAR8);
 		VAR4 = FUN5(VAR5, VAR3, NULL);
 		FUN6(&VAR5->VAR7->VAR8);

	} else {

		VAR4 = FUN7(VAR1, VAR3, false);
 	}
 	FUN8(VAR1);
 VAR6:
	return VAR4;
}