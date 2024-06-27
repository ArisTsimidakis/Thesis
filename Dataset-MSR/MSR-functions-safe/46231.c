int FUN1(struct VAR1 *VAR2, bool VAR3)
{
	struct VAR4 *VAR5 = FUN2(VAR2);
	int VAR6 = 0;

	if (VAR5) {
		
		FUN3(VAR5);
		VAR6 = FUN4(VAR5, VAR3);
		FUN5(VAR5);
	}
	FUN6(VAR2);
	return VAR6;
}