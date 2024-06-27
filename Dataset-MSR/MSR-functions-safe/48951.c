static void FUN1(const struct VAR1 *VAR2)
{
	static const netdev_features_t VAR3 = 0;
	struct VAR4 *VAR5 = VAR2->VAR5;
	const char *VAR6 = "";

	if (!FUN2())
		return;

	if (VAR5) {
		if (VAR5->VAR5.VAR7)
			VAR6 = FUN3(VAR5->VAR5.VAR7);
		else
			VAR6 = FUN4(VAR5);
	}
	FUN5(1, ""
	     "",
	     VAR6, VAR5 ? &VAR5->VAR8 : &VAR3,
	     VAR2->VAR9 ? &VAR2->VAR9->VAR10 : &VAR3,
	     VAR2->VAR11, VAR2->VAR12, FUN6(VAR2)->VAR13,
	     FUN6(VAR2)->VAR14, VAR2->VAR15);
}