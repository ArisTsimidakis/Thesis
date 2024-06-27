FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
		    struct VAR5 *VAR6,
		    struct VAR7 *VAR8, bool VAR9)
{
	struct nfs41_secinfo_no_name_args VAR10 = {
		.VAR11 = VAR12,
	};
	struct nfs4_secinfo_res VAR13 = {
		.VAR8 = VAR8,
	};
	struct rpc_message VAR14 = {
		.VAR15 = &VAR16[VAR17],
		.VAR18 = &VAR10,
		.VAR19 = &VAR13,
	};
	struct VAR20 *VAR21 = VAR2->VAR22;
	struct VAR23 *VAR24 = NULL;
	int VAR25;

	if (VAR9) {
		VAR21 = VAR2->VAR26->VAR27;
		VAR24 = FUN2(VAR2->VAR26);
		VAR14.VAR23 = VAR24;
	}

	FUN3("", VAR28);
	VAR25 = FUN4(VAR21, VAR2, &VAR14, &VAR10.VAR29,
				&VAR13.VAR30, 0);
	FUN3("", VAR28, VAR25);

	if (VAR24)
		FUN5(VAR24);

	return VAR25;
}