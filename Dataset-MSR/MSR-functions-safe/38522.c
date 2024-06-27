static struct VAR1 *FUN1(struct VAR2 *VAR3)
{
	struct VAR1 *VAR4 = NULL;
	struct VAR5 *VAR6;
	u64 VAR7, VAR8, VAR9;

	VAR6 = (struct VAR5 *) FUN2(VAR3);
	VAR8 = FUN3(VAR6->VAR10) & VAR11;
	VAR9 = FUN3(VAR6->VAR12) & VAR8;

	if ((VAR3->VAR13.VAR4 == VAR14) && (VAR9 == (VAR15 & VAR8))) {
		VAR7 = VAR15;
		VAR4 = &VAR16;
	} else if (((VAR3->VAR13.VAR4 == VAR14) || (VAR3->VAR13.VAR4 == VAR17)) &&
		   (VAR9 == (VAR18 & VAR8))) {
		VAR7 = VAR18;
		VAR4 = &VAR19;
	} else if (((VAR3->VAR13.VAR4 == VAR14) || (VAR3->VAR13.VAR4 == VAR20)) &&
		   (VAR9 == (VAR21 & VAR8))) {
		VAR7 = VAR21;
		VAR4 = &VAR22;
	}

	if (VAR4) {
		VAR6->VAR12 = FUN4(VAR7 | FUN5(FUN6((struct VAR23 *) VAR6)));
		VAR6->VAR10 = FUN4(VAR11 |
						FUN3(VAR6->VAR10));
	}
	return VAR4;
}