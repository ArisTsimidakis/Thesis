unsigned int FUN1(struct VAR1 *VAR1)
{
 	unsigned int VAR2;
 	struct VAR3 *VAR3 = FUN2(VAR1);
 


 	FUN3(!FUN4(VAR1));
 
 	
	FUN5(&VAR3->VAR4);

	VAR2 = FUN6(VAR1);
	if (!FUN7(VAR1))
		goto VAR5;

	FUN8(VAR3, VAR6, -VAR2);

	if (FUN9(VAR1, true)) {
		FUN10(&VAR3->VAR4);
		FUN11(VAR1);
		goto VAR7;
	}
	FUN12(VAR1);

VAR5:
	FUN10(&VAR3->VAR4);

VAR7:
	return VAR2 - 1;
}