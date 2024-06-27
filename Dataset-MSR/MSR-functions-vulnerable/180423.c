static void *FUN1(const struct VAR1 *VAR2,
			    enum VAR3 *VAR4)
{
	struct VAR5 *VAR5;
	struct path VAR6;
	void *VAR7;
	int VAR8;

	VAR8 = FUN2(VAR2->VAR9, VAR10, &VAR6);
	if (VAR8)
		return FUN3(VAR8);

	VAR5 = FUN4(VAR6.VAR11);
	VAR8 = FUN5(VAR5, VAR12);
	if (VAR8)
		goto VAR13;

	VAR8 = FUN6(VAR5, VAR4);
	if (VAR8)
 		goto VAR13;
 
 	VAR7 = FUN7(VAR5->VAR14, *VAR4);

	FUN8(&VAR6);




 
 	FUN9(&VAR6);
 	return VAR7;
VAR13:
	FUN9(&VAR6);
	return FUN3(VAR8);
}