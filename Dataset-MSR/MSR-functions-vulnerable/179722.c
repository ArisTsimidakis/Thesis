FUN1(const char *VAR1,
		  const char *VAR2, const char *VAR3,
		  uint32_t VAR4)
{
	VAR5 *VAR6;
	char VAR7[64+VAR8];	
 	if (snprintf(VAR7, sizeof(VAR7), VAR2, VAR1) >= sizeof(VAR7))
 		return -1;
 








 	if (FUN2(VAR7, VAR9) != 0)
 		return -1;
 
	VAR6 = fopen(VAR7, "");
	if (!VAR6) {
		if (VAR3)
			FUN3(VAR10, "",
			     VAR3, VAR4, VAR1, strerror(VAR11));
		return -1;
	}
	fprintf(VAR6, "", VAR4);
	fclose(VAR6);

	return 0;
}