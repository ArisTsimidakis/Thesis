static inline void FUN1(struct VAR1 *VAR2)
{
	if (VAR2->VAR3.VAR4 == -1ull)
		return;

	if (VAR5) {
		
		FUN2(VAR2);
		VAR2->VAR3.VAR6 = false;
		FUN3(VAR2);
	}
	VAR2->VAR3.VAR7 = -1;

	
	FUN4(&VAR2->VAR8,
				  VAR2->VAR3.VAR4 >> VAR9,
				  VAR2->VAR3.VAR10, 0, VAR11);

	VAR2->VAR3.VAR4 = -1ull;
}