static int FUN1(struct VAR1 *VAR2, int VAR3)
{
	const struct VAR4 *VAR5;
	int VAR6;

	VAR5 = FUN2(VAR3);
	if (!VAR5)
 		return -VAR7;
 
 	VAR2->VAR8 = VAR5;

	FUN3(VAR9, &VAR2->VAR10);
 
 	VAR6 = FUN4(VAR2);
 	if (VAR6) {

		FUN5(VAR9, &VAR2->VAR10);
 		return VAR6;
 	}
 


 	return 0;
 }