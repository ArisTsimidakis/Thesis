VAR1 *FUN1(VAR2 *VAR3, int VAR4, VAR2 *VAR5, const char *VAR6, const char *VAR7, const char *VAR8, const char *VAR9, gboolean VAR10)


 {
 	VAR1 *VAR11, *VAR12;
 
 	VAR11 = FUN2(VAR3, VAR4, VAR5);
 	if (VAR11 == NULL)
 		return NULL;

	VAR12  = FUN3(VAR11, VAR6, VAR7, VAR8, VAR9, VAR10);


 	if (VAR12 == NULL)
 		FUN4(VAR11);
 	return VAR12;
}