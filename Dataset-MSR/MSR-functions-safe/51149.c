static int FUN1(struct VAR1 *VAR2,
				   struct VAR3 *VAR4,
				   struct VAR5 *VAR6) {
	int VAR7 = FUN2((VAR8)VAR4->VAR9);
	struct VAR10 *VAR11 = &VAR12[VAR7];
	struct VAR13 *VAR14;
	enum audit_state VAR15;

	if (FUN3(VAR11))
		return 0;

	FUN4(VAR14, VAR11, VAR11) {
		if (FUN5(&VAR14->VAR16, VAR6->VAR17) &&
		    FUN6(VAR2, &VAR14->VAR16, VAR6, VAR4, &VAR15, false)) {
			VAR6->VAR18 = VAR15;
			return 1;
		}
	}

	return 0;
}