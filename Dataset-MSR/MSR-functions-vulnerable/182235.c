static int FUN1(VAR1 *VAR2,
		const VAR3 *VAR4, VAR5 **VAR6)
{
	VAR5 **VAR7, *VAR8;
	int VAR9;

	assert(VAR2 && VAR2->VAR10 && VAR4);
	switch (VAR4->VAR11)
	{
	case VAR12:
	case VAR13:
	case VAR14:
		FUN2(VAR2->VAR10, VAR15, VAR16);
	}
	assert(VAR17 && VAR17->VAR18);
	VAR7 = VAR6;
	VAR9 = VAR17->FUN3(VAR2, VAR4, VAR7);
	if (VAR9 || VAR7 == NULL)
		FUN2(VAR2->VAR10, VAR19, VAR9);
	assert(VAR7);
	VAR8 = *VAR7;
	assert(VAR8);
	if (VAR8->VAR20 && VAR8->VAR21 == VAR22)
 		FUN4(VAR2, VAR8);
 	else
 		VAR9 = VAR23;

	if (VAR9)


 		FUN5(VAR8);
 	else
 	{
		assert(VAR6);
		*VAR6 = VAR8;
	}
	FUN2(VAR2->VAR10, VAR19, VAR9);
}