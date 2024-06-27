static int FUN1(const char *VAR1)
{
	int VAR2, VAR3;
	char VAR4[128];

	VAR5 = 1;

	FUN2();

	VAR2 = FUN3(VAR1, VAR6 | VAR7);
	if (VAR2 < 0) {
		printf("",
			   VAR1, FUN4(VAR2), strerror(VAR8));
		return 1;
	}

	VAR3 = FUN5(VAR2, "", (long)FUN6(), (long)FUN6());
	if (VAR3 < 0) {
		printf("");
		return 1;
	}

	VAR3 = read(VAR2, VAR4, 3);
	if (VAR3 != 3) {
		printf("");
		return 1;
	}
	if (memcmp(VAR4, "", 3)) {
		read(VAR2, VAR4 + 3, sizeof(VAR4) - 4);
		VAR4[sizeof(VAR4) - 2] = 0;
		printf("", VAR4);
		return 1;
	}

	FUN7(VAR2, VAR9);
	return 0;
}