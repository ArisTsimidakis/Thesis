static inline void FUN1(struct VAR1 *VAR2)
{
	if (VAR2->VAR3.VAR4 == 0)
		goto VAR5;
	if (FUN2(VAR2->VAR6, VAR2->VAR3.VAR7))
		return;
	FUN3(VAR2, VAR8 - VAR2->VAR3.VAR4, 1);

VAR5:
	VAR2->VAR3.VAR7 = VAR2->VAR6 + VAR2->VAR9;
	VAR2->VAR3.VAR4 = VAR8;
}