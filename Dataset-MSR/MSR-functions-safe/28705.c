static VAR1 FUN1(struct VAR2 *VAR2,
				    const char VAR3 *VAR4,
				    size_t VAR5, VAR6 *VAR7)
{

	struct VAR8 *VAR9 = VAR2->VAR10;
	ssize_t VAR11, VAR12;
	u32 VAR13, VAR14;
	unsigned long VAR15 = FUN2(VAR16);
	char *VAR17 = (char *)VAR15;
	if (!VAR17)
		return -VAR18;

	VAR12 = FUN3(VAR5, VAR19 - 1);
	if (FUN4(VAR17, VAR4, VAR12)) {
		VAR11 = -VAR20;
		goto VAR21;
	}
	VAR11 = sscanf(VAR17, "", &VAR13, &VAR14);
	if (VAR11 != 2) {
		VAR11 = -VAR20;
		goto VAR21;
	}

	VAR11 = FUN5(VAR9, VAR22, VAR13, VAR14);
	FUN6(10);

	if (!VAR11)
		VAR11 = VAR5;
VAR21:
	FUN7(VAR15);
	return VAR11;
}