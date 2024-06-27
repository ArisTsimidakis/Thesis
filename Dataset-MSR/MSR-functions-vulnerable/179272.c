int FUN1(struct VAR1 *VAR1, gfn_t VAR2, void *VAR3, int VAR4,
			int VAR5)
{
	int VAR6;
	unsigned long VAR7;

 	VAR7 = FUN2(VAR1, VAR2);
 	if (FUN3(VAR7))
 		return -VAR8;

	VAR6 = FUN4(VAR3, (void VAR9 *)VAR7 + VAR4, VAR5);


 	if (VAR6)
 		return -VAR8;
 	return 0;
}