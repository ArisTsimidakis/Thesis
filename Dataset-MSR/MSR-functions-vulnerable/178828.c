FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4;
	struct VAR5 *VAR6;
	struct VAR7 *VAR8;
 	int VAR9, VAR10;
 
 	VAR9 = FUN2(VAR2->VAR11);




 
 	VAR6 = FUN3(VAR9, VAR12);
 	if (!VAR6)
		return FUN4(-VAR13);

	for (VAR10 = 0; VAR10 < VAR9; VAR10++) {
		VAR4 = &VAR6->VAR14[VAR10];
		VAR8 = &VAR2->VAR15[VAR10];

		
		VAR4->VAR16 = FUN2(VAR8->VAR17);
		VAR4->VAR18 = FUN5(VAR8->VAR19);

		switch (VAR4->VAR16) {
		case VAR20:
		case VAR21:
			VAR4->VAR22 = FUN2(VAR8->VAR23);
			break;
		case VAR24:
		case VAR25:
		case VAR26:
		case VAR27:
			VAR4->VAR22 = VAR28;
			break;
		default:
			goto VAR29;
		}
	}
	return VAR6;

VAR29:
	FUN6(VAR6);
	return FUN4(-VAR30);
}