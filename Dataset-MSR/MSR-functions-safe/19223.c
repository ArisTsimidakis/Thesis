static int FUN1(struct socket *VAR1, struct VAR2 *VAR3,
			   int VAR4, int VAR5)
{
	int VAR6 = 0;
	struct VAR1 *VAR7 = VAR1->VAR7;
	struct VAR8 *VAR9 = FUN2(VAR7);
	struct VAR10 *VAR11 = (struct VAR10 *)VAR3;

	if (VAR4 < sizeof(VAR3->VAR12))
		return -VAR13;

	if (VAR3->VAR12 == VAR14) {
		VAR7->VAR15	= VAR16;
		VAR9->VAR17	= 0;
		VAR9->VAR18  = 0;
		return 0;
	}
	if (VAR3->VAR12 != VAR19)
		return -VAR13;

	
	if (VAR11->VAR20 && !FUN3(VAR1, VAR21))
		return -VAR22;

	if (!VAR9->VAR23)
		VAR6 = FUN4(VAR1);

	if (VAR6 == 0) {
		VAR7->VAR15	= VAR24;
		VAR9->VAR17 	= VAR11->VAR25;
		VAR9->VAR18  = FUN5(VAR11->VAR20);
	}

	return VAR6;
}