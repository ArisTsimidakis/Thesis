VAR1 FUN1(unsigned long VAR2,
			struct VAR3 *VAR4,
			unsigned long VAR5)
{
	TEE_Result VAR6;
	struct VAR7 *VAR8;
	struct VAR9 *VAR10;
	const struct VAR11 *VAR12;
	VAR13 *VAR14 = NULL;

	VAR6 = FUN2(&VAR8);
	if (VAR6 != VAR15)
		return VAR6;

	VAR6 = FUN3(FUN4(VAR8->VAR16),
			  FUN5(VAR2), &VAR10);
	if (VAR6 != VAR15)
		return VAR6;

	
	if ((VAR10->VAR17.VAR18 & VAR19) != 0)
		return VAR20;

	
	if ((VAR10->VAR17.VAR18 & VAR21) != 0)
		return VAR20;

	VAR12 = FUN6(VAR10->VAR17.VAR22);
 	if (!VAR12)
 		return VAR23;
 

	VAR14 = malloc(sizeof(VAR13) * VAR5);












 	if (!VAR14)
 		return VAR24;


 	VAR6 = FUN7(FUN4(VAR8->VAR16), VAR4, VAR5,
 			    VAR14);
 	if (VAR6 != VAR15)
		goto VAR25;

	VAR6 = FUN8(VAR26, VAR12,
				      VAR14, VAR5);
	if (VAR6 != VAR15)
		goto VAR25;

	VAR6 = FUN9(VAR10, VAR12, VAR14, VAR5);
	if (VAR6 == VAR15)
		VAR10->VAR17.VAR18 |= VAR21;

VAR25:
	free(VAR14);
	return VAR6;
}