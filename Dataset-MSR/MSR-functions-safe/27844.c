int FUN1(struct VAR1 *VAR1, enum ima_hooks VAR2, int VAR3)
{
	struct VAR4 *VAR5;

	FUN2(VAR5, VAR6, VAR7) {
		bool VAR8;

		VAR8 = FUN3(VAR5, VAR1, VAR2, VAR3);
		if (VAR8)
			return VAR5->VAR9;
	}
	return 0;
}