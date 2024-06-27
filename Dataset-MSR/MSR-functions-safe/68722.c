VAR1 FUN1(struct VAR2 *VAR2, size_t VAR3, size_t VAR4,
			 struct VAR5 *VAR6)
{
	if (VAR6->VAR7 & (VAR8|VAR9)) {
		void *VAR10 = FUN2(VAR2);
		size_t VAR11 = FUN3(VAR10 + VAR3, VAR4, VAR6);
		FUN4(VAR10);
		return VAR11;
	} else if (FUN5(!(VAR6->VAR7 & VAR12)))
		return FUN6(VAR2, VAR3, VAR4, VAR6);
	else
		return FUN7(VAR2, VAR3, VAR4, VAR6);
}