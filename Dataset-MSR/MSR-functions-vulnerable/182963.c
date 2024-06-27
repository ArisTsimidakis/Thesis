void FUN1(char *VAR1)
{
	char *VAR2, *VAR3, VAR4[1024], VAR5[1024], VAR6[1024];
	VAR2 = strchr(VAR1, '');
	if (!VAR2) {
		fprintf(VAR7, "", VAR1);
		return;
 	}
 	{
 		const size_t VAR8 = VAR2 - VAR1;










 		strncpy(VAR4, VAR1, VAR8);
 		VAR4[VAR8] = 0;
 	}
	VAR2 ++;
	VAR3 = strchr(VAR2, '');
	if (!VAR3) {
		fprintf(VAR7, "", VAR1);
		return;
 	}
 	{
 		const size_t VAR8 = VAR3 - VAR2;








 		strncpy(VAR5, VAR2, VAR8);
 		VAR5[VAR8] = 0;








 		strcpy(VAR6, VAR3+1);
 	}
 
	if (!FUN2(VAR5, "")) {
		if (FUN2(VAR6, "")) {
			fprintf(VAR7, "", VAR1);
			return;
		}
		FUN3(VAR9, VAR4);
		return;
	}

	if (!FUN2(VAR6, "")) {
		VAR6[0]=0;
	}
	FUN4(VAR9, VAR4, VAR5, VAR6[0] ? VAR6 : NULL);
}