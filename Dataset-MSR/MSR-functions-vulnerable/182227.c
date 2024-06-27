FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, struct VAR3 *VAR5)
{
	int VAR6;
	size_t VAR7 = 0;
	VAR8 *VAR9 = NULL;

	if (!VAR2->VAR10) 
		return VAR11;

	VAR9 = (VAR8 *)VAR2->VAR10;

	FUN2(VAR2->VAR12);

 	VAR6 = FUN3(VAR2, VAR4->VAR13, VAR4->VAR14);
 	if (VAR6 == VAR15) {
 		if (VAR9->VAR4) {

			if (0 != FUN4(VAR2, VAR4->VAR16, VAR5->VAR16, &VAR7))


 				return VAR17;
 		}
 		else {
			memcpy(VAR5->VAR16, VAR4->VAR16, VAR4->VAR18);
			VAR7 = VAR4->VAR18;
		}
	}

	VAR5->VAR18 = VAR7;
	VAR5->VAR13 = VAR4->VAR13;
	VAR5->VAR14 = VAR4->VAR14;

	FUN5(VAR2->VAR12,
	       ""VAR19"",
	       VAR5->VAR18, VAR5->VAR13, VAR5->VAR14);
	FUN6(VAR2->VAR12, VAR15);
}