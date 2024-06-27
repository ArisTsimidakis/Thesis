static VAR1 FUN1(struct VAR2 *VAR2, void *VAR3, size_t VAR4)
{
	struct VAR5 *VAR6[VAR7] = {NULL, };
	struct nfs_getaclargs VAR8 = {
		.VAR9 = FUN2(VAR2),
		.VAR10 = VAR6,
		.VAR11 = VAR4,
	};
	struct nfs_getaclres VAR12 = {
		.VAR11 = VAR4,
	};
	struct rpc_message VAR13 = {
		.VAR14 = &VAR15[VAR16],
		.VAR17 = &VAR8,
		.VAR18 = &VAR12,
	};
	unsigned int VAR19 = FUN3(VAR4, VAR20);
	int VAR21 = -VAR22, VAR23;

	
	if (VAR19 == 0)
		VAR19 = 1;
	if (VAR19 > FUN4(VAR6))
		return -VAR24;

	for (VAR23 = 0; VAR23 < VAR19; VAR23++) {
		VAR6[VAR23] = FUN5(VAR25);
		if (!VAR6[VAR23])
			goto VAR26;
	}

	
	VAR12.VAR27 = FUN5(VAR25);
	if (!VAR12.VAR27)
		goto VAR26;

	VAR8.VAR11 = VAR19 * VAR20;
	VAR8.VAR28 = 0;

	FUN6("",
		VAR29, VAR3, VAR4, VAR19, VAR8.VAR11);
	VAR21 = FUN7(FUN8(VAR2)->VAR30, FUN8(VAR2),
			     &VAR13, &VAR8.VAR31, &VAR12.VAR32, 0);
	if (VAR21)
		goto VAR26;

	
	if (VAR12.VAR33 & VAR34) {
		
		if (VAR3 == NULL)
			goto VAR35;
		VAR21 = -VAR24;
 		goto VAR26;
 	}
 	FUN9(VAR2, VAR6, VAR12.VAR36, VAR12.VAR11);

	if (VAR3)










 		FUN10(VAR3, VAR6, VAR12.VAR36, VAR12.VAR11);


 VAR35:
 	VAR21 = VAR12.VAR11;
 VAR26:
	for (VAR23 = 0; VAR23 < VAR19; VAR23++)
		if (VAR6[VAR23])
			FUN11(VAR6[VAR23]);
	if (VAR12.VAR27)
		FUN11(VAR12.VAR27);
	return VAR21;
}