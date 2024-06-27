int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3)
{
	struct VAR4 *VAR5, *VAR6;
	size_t VAR7 = VAR3->VAR7;
	int VAR8;

	VAR8 = -VAR9;
	if (VAR7 <= 0 || VAR7 > 32767 || !VAR3->VAR10)
		goto VAR11;

	
	VAR8 = -VAR12;
	VAR5 = FUN2(sizeof(*VAR5) + VAR7, VAR13);
	if (!VAR5)
		goto VAR11;

	VAR5->VAR7 = VAR7;
	memcpy(VAR5->VAR10, VAR3->VAR10, VAR7);

	
	VAR6 = VAR5;

	VAR8 = FUN3(VAR1, VAR7);
 
 	if (VAR8 == 0) {
 		

		VAR6 = VAR1->VAR14.VAR10[0];








 		FUN4(VAR1, VAR5);
 		VAR1->VAR15 = 0;
 	}

	if (VAR6)
		FUN5(VAR6, VAR16);

VAR11:
	return VAR8;
}