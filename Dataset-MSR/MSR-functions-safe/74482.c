int FUN1(int VAR1,
			   struct VAR2 *VAR3)
{
	int VAR4;
	int VAR5;

	for (VAR4 = 0; VAR4 < VAR1; VAR4++)
		VAR3[VAR4].VAR5 =
			    FUN2(VAR3[VAR4].VAR6);

	for (VAR4 = 0; VAR4 < VAR1; VAR4++) {
		if (VAR3[VAR4].VAR5 != 0) {
			VAR5 = VAR3[VAR4].VAR5;
			goto VAR7;
		}
	}

	return 0;
VAR7:
	return VAR5;
}