static int FUN1(struct socket *VAR1, int VAR2)
{
	struct VAR1 *VAR3 = VAR1->VAR3;
	VAR4 *VAR5 = &FUN2(VAR3)->VAR5;
	int VAR6 = 0;

	FUN3("", VAR3, VAR2);

	FUN4(VAR3);

	if (VAR3->VAR7 != VAR8) {
		VAR6 = -VAR9;
		goto VAR10;
	}

	if (VAR3->VAR11 != VAR12) {
		VAR6 = -VAR13;
		goto VAR10;
	}

	FUN5(&VAR14.VAR15);

	if (FUN6(VAR5)) {
		VAR6 = -VAR16;
		goto VAR17;
	}

	VAR3->VAR18 = VAR2;
	VAR3->VAR19 = 0;

	VAR3->VAR7 = VAR20;

VAR17:
	FUN7(&VAR14.VAR15);

VAR10:
	FUN8(VAR3);
	return VAR6;
}