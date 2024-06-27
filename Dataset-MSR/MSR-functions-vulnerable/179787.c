FUN1(struct VAR1 *VAR2,
		   struct VAR3 *VAR4,
		   const char *VAR5)
{
	struct VAR6 *VAR7 = FUN2(VAR2,
 			struct VAR6, VAR8);
 
 	struct VAR9 *VAR10;

	unsigned long VAR11;


 	int VAR12;
 
 	if (strstr(VAR5, "") != VAR5)
 		return FUN3(-VAR13);

	if (FUN4(VAR5 + 5, 10, &VAR11) || VAR11 > VAR14)


 		return FUN3(-VAR13);
 
 	VAR10 = FUN5(sizeof(struct VAR9), VAR15);
	if (!VAR10) {
		FUN6("");
		return FUN3(-VAR16);
	}
	FUN7(&VAR10->VAR17);
	FUN8(&VAR10->VAR18);
	VAR10->VAR7 = VAR7;
	VAR10->VAR19 = VAR11;

	VAR12 = FUN9(&VAR20->VAR21, VAR2,
				&VAR10->VAR22, VAR10, VAR23);
	if (VAR12 < 0) {
		FUN10(VAR10);
		return NULL;
	}
	FUN11(&VAR24);
	FUN12(&VAR10->VAR18, &VAR25);
	FUN13(&VAR24);

	return &VAR10->VAR22;
}