int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3,
				  void *VAR4, unsigned int VAR5,
				  unsigned long VAR6)
{
	struct VAR7 *VAR8 = FUN2(VAR1);
	int VAR9;
	gpa_t VAR10 = VAR3->VAR10 + VAR5;

	FUN3(VAR6 + VAR5 > VAR3->VAR6);

	if (VAR8->VAR11 != VAR3->VAR11)
		FUN4(VAR8, VAR3, VAR3->VAR10, VAR3->VAR6);

	if (FUN5(!VAR3->VAR12))
		return FUN6(VAR1, VAR10, VAR4, VAR6);

	if (FUN7(VAR3->VAR13))
		return -VAR14;

	VAR9 = FUN8((void VAR15 *)VAR3->VAR13 + VAR5, VAR4, VAR6);
	if (VAR9)
		return -VAR14;
	FUN9(VAR3->VAR12, VAR10 >> VAR16);

	return 0;
}