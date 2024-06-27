static enum VAR1 FUN1(struct VAR2 *VAR3)
{
	struct VAR4 *VAR5 = FUN2(VAR3, struct VAR4, VAR6);
	struct VAR7 *VAR8 = VAR5->VAR9->VAR10.VAR11;

	if (VAR5->VAR12 || !FUN3(&VAR5->VAR13)) {
		FUN4(&VAR5->VAR13);
		FUN5(&VAR8->VAR14, &VAR8->VAR15);
	}

	if (VAR5->VAR16) {
		FUN6(&VAR5->VAR6, VAR5->VAR17);
		return VAR18;
	} else
		return VAR19;
}