void VAR1 FUN1(void)
{
	unsigned long VAR2, VAR3;

	FUN2(&VAR4, "");
	
	VAR2 = VAR5 - VAR6;
	VAR3 = FUN3(VAR2, 1UL<<(28-VAR7)) >> (20-VAR7);
	VAR3 = (VAR3 * (VAR2 >> (20-VAR7))) >> (VAR7-11);
	VAR3 = FUN4(VAR3, 128UL);
	VAR8[0] = VAR3 / 4 * 3;
	VAR8[1] = VAR3;
	VAR8[2] = VAR8[0] * 2;

	VAR9 = VAR10;
	VAR11 = VAR10;
}