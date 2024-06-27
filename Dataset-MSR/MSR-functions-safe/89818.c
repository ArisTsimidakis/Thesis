static void FUN1(const VAR1 *VAR2,
		VAR3 *VAR4)
{
	VAR4->VAR5 = 1;
	memcpy(VAR4->VAR6, VAR2, 12);
	VAR4->VAR7 = VAR2[12];
	VAR4->VAR8 = FUN2(VAR2 + 16);
	VAR4->VAR9 = FUN2(VAR2 + 18);

	VAR4->VAR10 = (struct VAR11 *)(VAR2 + 20);
}