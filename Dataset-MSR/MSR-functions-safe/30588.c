static int FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4;
	struct VAR5 *VAR6;
	int VAR7 = 0;

#ifdef VAR8
	FUN2(VAR9 "");
#endif
	FUN3(&VAR10.VAR11);
	FUN4(VAR6, &VAR10.VAR12) {
		VAR4 = FUN5(VAR6);
		switch (VAR6->VAR13) {
		case VAR14:
		case VAR15:
		case VAR16:
			FUN6(VAR6, 0);
			break;
		case VAR17:
		case VAR18:
		case VAR19:
		case VAR20:
		default:
			break;
		}
		FUN7(&VAR4->VAR21);
		FUN7(&VAR4->VAR22);
	}
	FUN8(&VAR10.VAR11);
	return VAR7;
}