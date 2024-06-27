FUN1(int VAR1, u_int32_t VAR2, void *VAR3)
{
	struct VAR4 *VAR4 = VAR3;
	struct VAR5 *VAR5 = VAR4->VAR5;
	const VAR6 *VAR7;
	u_int VAR8;
	size_t VAR9;
	int VAR10;

	FUN2("");
 	if (VAR5 == NULL)
 		return VAR11;
 


 	VAR7 = FUN3(VAR4, &VAR9);
 	if ((VAR10 = FUN4(VAR5->VAR12, VAR7, VAR9)) != 0)
 		return VAR10;

	
	for (VAR8 = 0; VAR8 < VAR13; VAR8++)
		if ((VAR10 = FUN5(VAR4, NULL)) != 0)
			return VAR10;
	for (VAR8 = 0; VAR8 < VAR14; VAR8++)
		if ((VAR10 = FUN6(VAR4, NULL, NULL)) != 0)
			return VAR10;
	
	if ((VAR10 = FUN5(VAR4, NULL)) != 0 ||	
	    (VAR10 = FUN7(VAR4, NULL)) != 0 ||	
	    (VAR10 = FUN8(VAR4)) != 0)
			return VAR10;

	if (!(VAR5->VAR15 & VAR16))
		if ((VAR10 = FUN9(VAR4)) != 0)
			return VAR10;
	if ((VAR10 = FUN10(VAR4)) != 0)
		return VAR10;

	if (VAR5->VAR17 < VAR18 && VAR5->VAR5[VAR5->VAR17] != NULL)
		return (VAR5->VAR5[VAR5->VAR17])(VAR4);

	return VAR19;
}