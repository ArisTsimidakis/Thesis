FUN1(struct VAR1 *VAR2)
{
	int VAR3;

	if ((VAR3 = FUN2(VAR2)) != VAR4)
		return (VAR3);

	VAR2->VAR5.VAR6 |= VAR7;
	if (FUN3(VAR2->VAR8, VAR2->VAR5.VAR6) != 0) {
		FUN4(&VAR2->VAR9, VAR10,
		    "");
		return (VAR11);
	}
	return (VAR4);
}