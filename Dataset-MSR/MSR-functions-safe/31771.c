int FUN1(int VAR1, struct VAR2 *VAR3, struct VAR4 *VAR4)
{
	int VAR5 = -VAR6;
	struct VAR7 *VAR8;

	FUN2();
VAR9:
	VAR8 = FUN3(VAR4, VAR10);
	if (VAR8) {
		VAR5 = FUN4(VAR1, VAR3, VAR8);
		if (FUN5(VAR5 == -VAR6))
			
			goto VAR9;
	}
	FUN6();

	return VAR5;
}