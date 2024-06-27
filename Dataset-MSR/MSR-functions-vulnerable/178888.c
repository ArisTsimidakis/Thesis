static VAR1 FUN1(struct VAR2 *VAR2, void *VAR3, size_t VAR4)
 {

	struct VAR5 *VAR6[VAR7];


 	struct nfs_getaclargs VAR8 = {
 		.VAR9 = FUN2(VAR2),
 		.VAR10 = VAR6,
		.VAR11 = VAR4,
	};
	struct nfs_getaclres VAR12 = {
		.VAR11 = VAR4,
	};
	void *VAR13;
	struct rpc_message VAR14 = {
		.VAR15 = &VAR16[VAR17],
 		.VAR18 = &VAR8,
 		.VAR19 = &VAR12,
 	};

	struct VAR5 *VAR20 = NULL;

	int VAR21;


 

	if (VAR4 < VAR22) {

		

		VAR20 = FUN3(VAR23);

		VAR13 = FUN4(VAR20);

		if (VAR20 == NULL)

			return -VAR24;

		VAR8.VAR10[0] = VAR20;

		VAR8.VAR25 = 0;

		VAR8.VAR11 = VAR22;

	} else {

		VAR13 = VAR3;

		FUN5(VAR3, VAR4, VAR8.VAR10, &VAR8.VAR25);
































 	}

	VAR21 = FUN6(FUN7(VAR2)->VAR26, FUN7(VAR2), &VAR14, &VAR8.VAR27, &VAR12.VAR28, 0);
























 	if (VAR21)
 		goto VAR29;

	if (VAR12.VAR11 > VAR8.VAR11)

		FUN8(VAR2, NULL, VAR12.VAR11);








 	else

		FUN8(VAR2, VAR13, VAR12.VAR11);




 	if (VAR3) {
 		VAR21 = -VAR30;

		if (VAR12.VAR11 > VAR4)


 			goto VAR29;

		if (VAR20)

			memcpy(VAR3, VAR13, VAR12.VAR11);




 	}

	VAR21 = VAR12.VAR11;


 VAR29:

	if (VAR20)

		FUN9(VAR20);










 	return VAR21;
 }