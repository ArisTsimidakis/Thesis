static VAR1 FUN1(VAR2* VAR3, int VAR4,
                                       int VAR5, VAR6* VAR7)
{
 	UINT VAR8;
 	UINT32 VAR9;
 	UINT32 VAR10;








 	VAR10 = FUN2(VAR7, VAR5);
 	VAR9 = FUN2(VAR7, VAR4);
 	FUN3(VAR3->VAR11, VAR12,
	           ""VAR13""VAR13"", VAR4,
	           VAR5, VAR10, VAR9);
	VAR8 = FUN4(VAR3, VAR3->VAR14, VAR10,
	         VAR9);

	if (VAR8)
		return VAR8;

	return FUN5(VAR3, VAR3->VAR14, VAR10, VAR7);
}