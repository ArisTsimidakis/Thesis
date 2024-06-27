static int FUN1(const struct VAR1 *VAR2,
			 const struct VAR3 *VAR4)
{
	char VAR5[VAR6];
	struct stat VAR7;
	int VAR8;

	VAR8 = snprintf(VAR5, sizeof(VAR5), "", VAR2->VAR9);
	if (VAR8 >= sizeof(VAR5)) {
		FUN2("");
		return -1;
	}

	if (FUN3(VAR5, VAR10)) {
		FUN4("", VAR5);
		return 0;
	}

	if (VAR4->VAR11 < 0) {
		FUN5("");
		return 0;
	}

	if (FUN6(VAR5, &VAR7)) {
		FUN7("", VAR5);
		return -1;
	}

	if (chmod(VAR4->VAR12, VAR7.VAR13)) {
		FUN7("",
			 VAR7.VAR13, VAR4->VAR12);
 		return -1;
 	}
 

	if (FUN8(VAR4->VAR12, VAR5, "", VAR14, 0)) {


 		FUN2("", VAR4->VAR12, VAR5);
 		return -1;
 	}

	FUN5("");
	return 0;
}