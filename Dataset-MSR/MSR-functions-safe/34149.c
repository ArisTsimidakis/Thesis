static int FUN1(struct VAR1 *VAR2, const int VAR3, int VAR4,
				  u32 VAR5 *VAR6, int VAR5 *VAR7)
{
	const struct VAR8 *VAR9 = FUN2(VAR2);
	struct tfrc_rx_info VAR10;
	const void *VAR11;

	switch (VAR3) {
	case VAR12:
		if (VAR4 < sizeof(VAR10))
			return -VAR13;
		VAR10.VAR14 = VAR9->VAR15;
		VAR10.VAR16    = VAR9->VAR17;
		VAR10.VAR18      = FUN3(VAR9->VAR19);
		VAR4 = sizeof(VAR10);
		VAR11 = &VAR10;
		break;
	default:
		return -VAR20;
	}

	if (FUN4(VAR4, VAR7) || FUN5(VAR6, VAR11, VAR4))
		return -VAR21;

	return 0;
}