static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
	int VAR5;
	unsigned char VAR6 = 0;
	int VAR7 = 0;

	if (FUN2(VAR8))
		return -VAR9;

	for (VAR5 = VAR2->VAR10->VAR11 - 1; VAR5 >= 0; VAR5--) {
		struct VAR12 *VAR13 = FUN3(VAR2->VAR10->VAR10[VAR5]);

		if (VAR13) {
			VAR7++;
			VAR6 = FUN4(VAR6,
					FUN5(VAR13)->VAR14);
		}
	}
	if (FUN6(VAR6 > VAR15))
		return -VAR9;

	
	FUN7(VAR4).VAR10 = FUN8(VAR2->VAR10);
	if (!FUN7(VAR4).VAR10)
 		return -VAR16;
 
 	for (VAR5 = VAR2->VAR10->VAR11 - 1; VAR5 >= 0; VAR5--)

		FUN9(VAR2->VAR10->VAR10[VAR5]);


 	return VAR6;
 }