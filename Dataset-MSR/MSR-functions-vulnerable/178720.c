int FUN1(struct VAR1 *VAR2,
			 const struct VAR3 *VAR4,
			 const struct VAR5 *VAR6)
{
	int VAR7 = -VAR8;
 	unsigned char *VAR9 = NULL;
 	u32 VAR10;
 	u32 VAR11;

	struct VAR12 *VAR13 = NULL;


 	struct VAR14 *VAR15;
 
 	
	VAR10 = VAR16;
	VAR9 = FUN2(VAR10, VAR17);
	if (VAR9 == NULL) {
		VAR7 = -VAR18;
		goto VAR19;
	}

	VAR7 = FUN3(VAR9, VAR10, VAR4, VAR6);
	if (VAR7 < 0)
		goto VAR19;
	VAR10 = VAR7;

	
	VAR11 = (VAR10 + 3) & ~3;
	VAR13 = FUN4(sizeof(*VAR13) + VAR11, VAR17);
	if (VAR13 == NULL) {
 		VAR7 = -VAR18;
 		goto VAR19;
 	}

	memcpy(VAR13->VAR20, VAR9, VAR10);

	VAR13->VAR21 = VAR11;

	VAR13->VAR22 = sizeof(struct VAR23);






 	FUN5(VAR9);
 	VAR9 = NULL;
 
 	VAR15 = FUN6(VAR2);
 	VAR13 = FUN7(&VAR15->VAR13, VAR13);

	FUN5(VAR13);




 
 	return 0;
 
VAR19:
	FUN5(VAR9);
	FUN5(VAR13);
	return VAR7;
}