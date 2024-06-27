FUN1(char *VAR1,
			  PushFunction VAR2,
			  Datum VAR3,
			  bool VAR4)
{
	struct TSQueryParserStateData VAR5;
	int			VAR6;
	TSQuery		VAR7;
	int			VAR8;
	VAR9  *VAR10;
	VAR11   *VAR12;

	
	VAR5.VAR13 = VAR1;
	VAR5.VAR1 = VAR1;
	VAR5.VAR5 = (VAR4) ? VAR14 : VAR15;
	VAR5.VAR16 = 0;
	VAR5.VAR17 = VAR18;

	
	VAR5.VAR19 = FUN2(VAR5.VAR13, true, true);

	
	VAR5.VAR20 = 0;
	VAR5.VAR21 = 64;
	VAR5.VAR22 = VAR5.VAR23 = (char *) FUN3(VAR5.VAR21);
	*(VAR5.VAR22) = '';

	
	FUN4(&VAR5, VAR2, VAR3);

	FUN5(VAR5.VAR19);

	if (FUN6(VAR5.VAR17) == 0)
	{
		FUN7(VAR24,
				(FUN8(""%VAR25\"",
						VAR5.VAR13)));
		VAR7 = (VAR26) FUN3(VAR27);
		FUN9(VAR7, VAR27);
		VAR7->VAR28 = 0;
 		return VAR7;
 	}
 

	








 	VAR8 = FUN10(FUN6(VAR5.VAR17), VAR5.VAR20);




 	VAR7 = (VAR26) FUN11(VAR8);
 	FUN9(VAR7, VAR8);
 	VAR7->VAR28 = FUN6(VAR5.VAR17);
	VAR10 = FUN12(VAR7);

	
	VAR6 = 0;
	FUN13(VAR12, VAR5.VAR17)
	{
		VAR9  *VAR29 = (VAR9 *) FUN14(VAR12);

		switch (VAR29->VAR30)
		{
			case VAR31:
				memcpy(&VAR10[VAR6], VAR29, sizeof(VAR32));
				break;
			case VAR33:
				VAR10[VAR6].VAR30 = VAR33;
				break;
			case VAR34:
				memcpy(&VAR10[VAR6], VAR29, sizeof(VAR35));
				break;
			default:
				FUN15(VAR36, "", VAR29->VAR30);
		}
		VAR6++;
	}

	
	memcpy((void *) FUN16(VAR7), (void *) VAR5.VAR23, VAR5.VAR20);
	FUN17(VAR5.VAR23);

	
	FUN18(VAR10, VAR7->VAR28);

	return VAR7;
}