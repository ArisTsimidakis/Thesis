FUN1(VAR1)
{
	VAR2 *VAR3, *VAR4;
	gdImagePtr VAR5;
	int * VAR6;
	int VAR7;
	HashPosition VAR8;

	if (FUN2(FUN3() VAR9, "", &VAR3, &VAR4) == VAR10)  {
		return;
	}

	FUN4(VAR5, VAR11, &VAR3, -1, "", VAR12);

	
	VAR6 = FUN5(sizeof(int), FUN6(FUN7(VAR4)), 0);

	FUN8(FUN7(VAR4), &VAR8);

	for (VAR7 = 0;; FUN9(FUN7(VAR4), &VAR8))	{
		VAR2 ** VAR13;

		if (FUN10(FUN7(VAR4), (void **) &VAR13, &VAR8) == VAR10) {
 			break;
 		}
 

		FUN11(VAR13);



		VAR6[VAR7++] = FUN12(VAR13);


















 	}
 
 	FUN13(VAR5, VAR6, VAR7);

	FUN14(VAR6);

	VAR14;
}