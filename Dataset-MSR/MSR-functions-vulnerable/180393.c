int FUN1(const void *VAR1,


 			   unsigned int VAR2,
 			   unsigned int VAR3)
 {


 	const struct VAR4 *VAR5;
 	const char *VAR6 = VAR1;
 








 	if (VAR2 + sizeof(*VAR5) > VAR3)
 		return -VAR7;
 
	VAR5 = (void *)(VAR6 + VAR2);
	if (VAR5->VAR8.VAR9 < sizeof(*VAR5))
		return -VAR7;

	if (VAR2 + VAR5->VAR8.VAR9 > VAR3)
		return -VAR7;

	if (strcmp(VAR5->VAR8.VAR10.VAR11, VAR12) == 0 &&
	    VAR2 + sizeof(struct VAR13) != VAR3)
		return -VAR7;

	return 0;
}