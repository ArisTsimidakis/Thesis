static int FUN1(struct VAR1 *VAR2, u16 VAR3, char *VAR4, u16 VAR5)
{
	WepKeyRid VAR6;
	int VAR7;
	__le16 VAR8;

	VAR7 = FUN2(VAR2, &VAR6, 1, 1);
	if (VAR7 != VAR9)
		return -1;
	do {
		VAR8 = VAR6.VAR10;
		if (FUN3(VAR6.VAR10) == VAR3) {
			int VAR11 = FUN4(int, VAR5, FUN3(VAR6.VAR11));
			memcpy(VAR4, VAR6.VAR12, VAR11);
			return VAR11;
		}
		VAR7 = FUN2(VAR2, &VAR6, 0, 1);
		if (VAR7 != VAR9)
			return -1;
	} while (VAR8 != VAR6.VAR10);
	return -1;
}