FUN1(VAR1 *VAR2, void *VAR3, size_t VAR4, int VAR5,
    char *VAR6)
{
	size_t VAR7;

	VAR7 = fread(VAR3, 1, VAR4, VAR2);
	if (VAR7 != VAR4) {
		if (FUN2(VAR2)) {
			FUN3(VAR6, VAR8,
			    VAR9, "");
		} else {
 			if (VAR7 == 0 && !VAR5)
 				return (0);	
 			FUN4(VAR6, VAR8,

			    "" VAR10 "" VAR10,


 			    VAR4, VAR7);
 		}
 		return (-1);
	}
	return (1);
}