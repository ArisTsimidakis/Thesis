int FUN1(struct socket *VAR1, int VAR2, int VAR3,
		   char VAR4 *VAR5, int VAR4 *VAR6)
{
	struct VAR7 *VAR8;
	int VAR9;

	if (FUN2(VAR9, VAR6))
		return -VAR10;
	if (FUN3(VAR3, VAR2) && VAR9 != FUN4(VAR3))
		return -VAR11;

	VAR8 = FUN5(VAR1);
	switch (VAR3) {
	case VAR12:
		if (!FUN6(VAR13, &VAR8->VAR14))
			return -VAR11;
		return FUN7(VAR5, &VAR8->VAR15, sizeof(VAR8->VAR15))
			? -VAR10 : 0;
	case VAR16:
		return FUN8(VAR8->VAR17 & VAR18 ? 1 : 0,
				(unsigned long VAR4 *)VAR5) ? -VAR10 : 0;
	case VAR19:
	{
		struct sockaddr_atmpvc VAR20;
 
 		if (!VAR8->VAR21 || !FUN6(VAR22, &VAR8->VAR14))
 			return -VAR23;


 		VAR20.VAR24 = VAR25;
 		VAR20.VAR26.VAR27 = VAR8->VAR21->VAR28;
 		VAR20.VAR26.VAR29 = VAR8->VAR29;
		VAR20.VAR26.VAR30 = VAR8->VAR30;
		return FUN7(VAR5, &VAR20, sizeof(VAR20)) ? -VAR10 : 0;
	}
	default:
		if (VAR2 == VAR31)
			return -VAR11;
		break;
	}
	if (!VAR8->VAR21 || !VAR8->VAR21->VAR32->VAR33)
		return -VAR11;
	return VAR8->VAR21->VAR32->FUN9(VAR8, VAR2, VAR3, VAR5, VAR9);
}