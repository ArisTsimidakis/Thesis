static void FUN1(const char *VAR1)
{
	static int VAR2;
	static char VAR3[VAR4];
	if (strcmp(VAR3, VAR5->VAR6) && VAR2 < 5) {
		strcpy(VAR3,  VAR5->VAR6);
		FUN2("",
			VAR3, VAR1);
		VAR2++;
	}
}