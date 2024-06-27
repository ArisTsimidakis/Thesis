int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
	int	VAR5 = 0;
	struct VAR6 *VAR7;

	VAR7 = (struct VAR6 *)VAR2->VAR8;
	if (FUN2(VAR7)) {
		FUN3(VAR4);
		return -VAR9;
	}
 	VAR5 = FUN4(VAR2, VAR4);
 	if (VAR5 < 0)
 		FUN3(VAR4);

	return VAR5;


 }