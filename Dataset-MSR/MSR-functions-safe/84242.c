FUN1(VAR1, u32 VAR2 *, VAR3, int, VAR4, VAR5, VAR6,
		struct timespec VAR2 *, VAR7, u32 VAR2 *, VAR8,
		VAR5, VAR9)
{
	struct timespec VAR10;
	ktime_t VAR11, *VAR12 = NULL;
	u32 VAR13 = 0;
	int VAR14 = VAR4 & VAR15;

	if (VAR7 && (VAR14 == VAR16 || VAR14 == VAR17 ||
		      VAR14 == VAR18 ||
		      VAR14 == VAR19)) {
		if (FUN2(FUN3(!(VAR4 & VAR20))))
			return -VAR21;
		if (FUN4(&VAR10, VAR7, sizeof(VAR10)) != 0)
			return -VAR21;
		if (!FUN5(&VAR10))
			return -VAR22;

		VAR11 = FUN6(VAR10);
		if (VAR14 == VAR16)
			VAR11 = FUN7(FUN8(), VAR11);
		VAR12 = &VAR11;
	}
	
	if (VAR14 == VAR23 || VAR14 == VAR24 ||
	    VAR14 == VAR25 || VAR14 == VAR26)
		VAR13 = (VAR5) (unsigned long) VAR7;

	return FUN9(VAR3, VAR4, VAR6, VAR12, VAR8, VAR13, VAR9);
}