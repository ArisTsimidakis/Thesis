struct VAR1 *FUN1(u32 VAR2)
{
	struct fd VAR3 = FUN2(VAR2);
	struct VAR1 *VAR4;

	VAR4 = FUN3(VAR3);
 	if (FUN4(VAR4))
 		return VAR4;
 

	FUN5(VAR4, true);


 	FUN6(VAR3);
 
 	return VAR4;
}