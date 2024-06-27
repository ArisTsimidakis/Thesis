FUN1(struct VAR1 *VAR2,
		     const struct VAR3 *VAR4,
		     unsigned int VAR5)
{
	struct VAR6 *VAR7;
	enum ip_conntrack_info VAR8;
	__be32 VAR9;
	struct nf_nat_range VAR10;

	FUN2(VAR5 == VAR11 ||
		     VAR5 == VAR12);

	VAR7 = FUN3(VAR2, &VAR8);
	FUN2(VAR7 && (VAR8 == VAR13 || VAR8 == VAR14));

	
	if (VAR5 == VAR12) {
		VAR9 = FUN4(0x7F000001);
	} else {
		struct VAR15 *VAR16;
		struct VAR17 *VAR18;

		VAR9 = 0;
 
 		FUN5();
 		VAR16 = FUN6(VAR2->VAR19);

		if (VAR16 != NULL) {


 			VAR18 = VAR16->VAR20;
 			VAR9 = VAR18->VAR21;
 		}
		FUN7();

		if (!VAR9)
			return VAR22;
	}

	
	memset(&VAR10.VAR23, 0, sizeof(VAR10.VAR23));
	memset(&VAR10.VAR24, 0, sizeof(VAR10.VAR24));
	VAR10.VAR25	     = VAR4->VAR26[0].VAR25 | VAR27;
	VAR10.VAR23.VAR28 = VAR9;
	VAR10.VAR24.VAR28 = VAR9;
	VAR10.VAR29   = VAR4->VAR26[0].VAR30;
	VAR10.VAR31   = VAR4->VAR26[0].VAR32;

	
	return FUN8(VAR7, &VAR10, VAR33);
}