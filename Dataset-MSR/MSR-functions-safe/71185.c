static void FUN1(struct VAR1 *VAR2)
{
	unsigned int VAR3, VAR4, VAR5;

	VAR3 = VAR4 = VAR2->VAR6;
	VAR5 = FUN2(VAR7);
	
	if (VAR4 == 0 && VAR5)
		VAR4 = 10000;
	else
		VAR4 *= VAR5;

	if (VAR4 > VAR6)
		VAR4 = VAR6;

	VAR2->VAR6 = VAR4;
	FUN3(VAR2->VAR8, VAR4, VAR3);
}