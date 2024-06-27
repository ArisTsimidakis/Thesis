static int FUN1(int VAR1)
{
	if (VAR2 < 1)
		return VAR3;

	VAR1 = FUN2(VAR1, VAR4);

	if (VAR2 < VAR3)
		VAR1 *= VAR2;
	else
		VAR1 += VAR2;

	return VAR1;
}