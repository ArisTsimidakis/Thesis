static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
			     struct VAR5 *VAR6)
{
	struct VAR7 *VAR7 = FUN2(VAR2->VAR8);
	struct VAR9 *VAR10[VAR11+1];
	const struct VAR12 *VAR13;
	int VAR14, VAR15;

#ifdef VAR16
	if (FUN3())
		return -VAR17;
#endif

	VAR14 = VAR4->VAR18;
	if (VAR14 > VAR19)
		return -VAR20;

	VAR14 -= VAR21;
	VAR13 = &VAR22[VAR14];

	
	if (!FUN4(VAR2, VAR23))
		return -VAR24;

	if ((VAR14 == (VAR25 - VAR21) ||
	     VAR14 == (VAR26 - VAR21)) &&
	    (VAR4->VAR27 & VAR28)) {
		if (VAR13->VAR29 == NULL)
			return -VAR20;
 
 		{
 			struct netlink_dump_control VAR30 = {


 				.VAR29 = VAR13->VAR29,
 				.VAR31 = VAR13->VAR31,
 			};
			return FUN5(VAR7->VAR32.VAR33, VAR2, VAR4, &VAR30);
		}
	}

	VAR15 = FUN6(VAR4, VAR34[VAR14], VAR10,
			  VAR13->VAR35 ? : VAR11,
			  VAR13->VAR36 ? : VAR37, VAR6);
	if (VAR15 < 0)
		return VAR15;

	if (VAR13->VAR38 == NULL)
		return -VAR20;

	return VAR13->FUN7(VAR2, VAR4, VAR10);
}