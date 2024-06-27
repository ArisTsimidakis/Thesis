static void FUN1(void)
{
	static char VAR1[VAR2];
	int VAR3;

	for (VAR3 = 0; VAR3 < VAR4; VAR3++) {
		struct VAR5 *VAR6 = VAR7[VAR3];
		snprintf(VAR1, sizeof(VAR1), "",
			 FUN2(), FUN3(VAR6->VAR8));
		FUN4(VAR1);
	}
}