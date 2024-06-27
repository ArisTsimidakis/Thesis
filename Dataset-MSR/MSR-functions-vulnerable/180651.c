FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4;
	struct VAR5 *VAR6;
	uint16_t VAR7;

	FUN2(VAR2, VAR8);
	VAR4 = VAR2->VAR4;
	FUN2(VAR4, VAR9);
	VAR6 = VAR2->VAR5;
	FUN2(VAR6, VAR10);

	VAR6->VAR11 = VAR12;

	VAR7 = FUN3(VAR2->VAR13, VAR2->VAR14, VAR6, VAR4,
	    VAR15, VAR16, VAR17);
	if (VAR7 != 0) {
		FUN4(VAR2, VAR18, VAR4->VAR19);
		return (VAR7);
 	}
 	FUN5(VAR6);
 

	VAR7 = FUN6(VAR6);

	if (VAR7 != 0) {

		FUN7(VAR2, VAR20, "");

		return (VAR7);

	}


 	return (VAR7);
 }