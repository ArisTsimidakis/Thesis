FUN1(VAR1, enum VAR2, VAR3,
		union pl_args VAR4 *, VAR5)
{
	long VAR6;
	int VAR4 *VAR7;

	switch (VAR3) {
	case VAR8:
		if (FUN2(VAR6, &VAR5->VAR9.VAR10))
			VAR6 = -VAR11;
		break;
	case VAR12:
		if (FUN2(VAR6, &VAR5->VAR13.VAR10))
			VAR6 = -VAR11;
		break;
	case VAR14:
		VAR6 = FUN2(VAR7, &VAR5->VAR15.VAR16);
		if (VAR6)
			break;
		VAR6 = FUN3(0, VAR7);
		break;
	case VAR17:
		VAR6 = FUN2(VAR7, &VAR5->VAR18.VAR16);
		if (VAR6)
			break;
		VAR6 = FUN3(0, VAR7);
		break;
	case VAR19:
	case VAR20:
		VAR6 = 0;
		break;
	default:
		VAR6 = -VAR21;
		break;
	};
	return VAR6;
}