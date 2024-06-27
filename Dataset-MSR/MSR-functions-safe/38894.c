FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
	LINE		VAR5;
	VAR6	   *VAR7;

	FUN2(&VAR5, &VAR2->VAR7[0], &VAR2->VAR7[1]);
	VAR7 = FUN3(&VAR5, VAR4);
#ifdef VAR8
	printf("",
		   VAR9, VAR2->VAR7[0].VAR10, VAR9, VAR2->VAR7[0].VAR11, VAR9, VAR2->VAR7[1].VAR10, VAR9, VAR2->VAR7[1].VAR11);
	printf("",
		   VAR9, VAR5.VAR12, VAR9, VAR5.VAR13, VAR9, VAR5.VAR14);
#endif
	if (FUN4(VAR7))
	{
#ifdef VAR8
		printf("", VAR9, VAR7->VAR10, VAR9, VAR7->VAR11);
#endif
		if (FUN5(VAR7, VAR2))
		{
#ifdef VAR8
			printf("");
#endif
		}
		else
			VAR7 = NULL;
	}

	return VAR7;
}