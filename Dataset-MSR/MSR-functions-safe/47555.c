static int FUN1(struct VAR1 *VAR2)
{
	int VAR3, VAR4;

	VAR4 = FUN2(VAR2);
	if (VAR4)
		goto VAR5;

	VAR4 = FUN3(VAR2);
	VAR3 = FUN4(VAR2);

VAR5:
	return VAR4 ? VAR4 : VAR3;
}