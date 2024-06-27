static int FUN1(struct VAR1 *VAR2, const char *VAR3)
{
	u8 VAR4[16];

	if (FUN2(VAR4, VAR3) < 0) {
		FUN3("", VAR3);
		return -VAR5;
	}
	return 0;
}