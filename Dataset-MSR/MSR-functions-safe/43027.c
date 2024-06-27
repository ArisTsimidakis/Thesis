void FUN1(struct VAR1 *VAR2)
{
	unsigned long VAR3 = (unsigned long)VAR2->VAR4 & VAR5;
	struct VAR6 *VAR7 = (void *)VAR3;

	if (!VAR2->VAR8)
		goto VAR9;

	FUN2(VAR3, VAR7->VAR10);
	FUN3(VAR7);

VAR9:
	FUN4(VAR2);
}