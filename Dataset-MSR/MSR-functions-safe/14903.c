static void FUN1(void *object VAR1) 
{
	int VAR2;
	VAR3 *VAR4 = (VAR3 *)VAR5;

	FUN2(&VAR4->std VAR6);

	for (VAR2 = 0; VAR2 < VAR4->VAR7->VAR8; ++VAR2) {
		if (VAR4->VAR7->VAR9[VAR2]) {
			FUN3((VAR10 **)&VAR4->VAR7->VAR9[VAR2]);
		}
	}

	FUN4(VAR4->heap VAR6);

	FUN3(&VAR4->VAR11);

	if (VAR4->VAR12 != NULL) {
		FUN5(VAR4->VAR12);
		FUN6(VAR4->VAR12);
	}

	FUN6(VAR5);
}