int FUN1(struct VAR1 *VAR1, struct VAR2 **VAR3,


 		   unsigned char *VAR4, int VAR5)
 {

	struct VAR2 *VAR6 = FUN2(VAR5);


 
 	if (!VAR6)
 		return -VAR7;
 	if (VAR5)

		memcpy(VAR6->VAR8, VAR4, VAR5);


 	return FUN3(VAR1, VAR3, VAR6, VAR5);
 }