static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, int VAR5)
{
	struct VAR6 *VAR7 = FUN2(VAR2);
	struct VAR8 *VAR9 = FUN3(VAR4);
	unsigned long VAR10;

	switch (VAR5) {
	case VAR11:
		VAR9->VAR12 = 0;
		break;
	case VAR13:
		FUN4(&VAR7->VAR14, VAR10);
		if (FUN5(&VAR7->VAR15,
			VAR9->VAR16 & 0x1F, &VAR9->VAR17)) {
			FUN6(&VAR7->VAR14, VAR10);
			return -VAR18;
		}
		FUN6(&VAR7->VAR14, VAR10);
		break;
	case VAR19:
		if (VAR9->VAR16 & ~(0x1F))
			return -VAR20;
		FUN4(&VAR7->VAR14, VAR10);
		if (FUN7(&VAR7->VAR15, VAR9->VAR16,
			VAR9->VAR21)) {
			FUN6(&VAR7->VAR14, VAR10);
			return -VAR18;
		}
		FUN6(&VAR7->VAR14, VAR10);
		break;
	default:
		return -VAR22;
	}
	return 0;
}