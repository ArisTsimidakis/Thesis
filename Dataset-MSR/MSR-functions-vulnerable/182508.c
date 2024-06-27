UNCURL_EXPORT VAR1 FUN1(struct VAR2 *VAR3, char **VAR4, int32_t VAR5)
{
	int32_t VAR6;

	
	VAR6 = FUN2(VAR3);
	if (VAR6 != VAR7) return VAR6;

	
	FUN3(VAR3, "", "");
	FUN3(VAR3, "", "");

	
	char *VAR8 = NULL;
 	VAR6 = FUN4(VAR3, "", &VAR8);
 	if (VAR6 != VAR7) return VAR6;
 


 	bool VAR9 = false;

	for (int32_t VAR10 = 0; VAR10 < VAR5; VAR10++)

		if (strstr(VAR8, VAR4[VAR10])) {VAR9 = true; break;}








 
 	if (!VAR9) return VAR11;
 
	
	char *VAR12 = NULL;
	VAR6 = FUN4(VAR3, "", &VAR12);
	if (VAR6 != VAR7) return VAR6;

	char *VAR13 = FUN5(VAR12);
	FUN3(VAR3, "", VAR13);
	free(VAR13);

	
	VAR6 = FUN6(VAR3, "", "", VAR14);
	if (VAR6 != VAR7) return VAR6;

	
	VAR3->VAR15 = 0;

	return VAR7;
}