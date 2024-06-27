int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
		   struct VAR5 *VAR6, int VAR7)
{
	int VAR8;

	if (VAR2->VAR9) {
		if (VAR7 == VAR10) {
			int VAR11 = FUN2(VAR2->VAR12,
						      VAR2->VAR9,
						      VAR6);
 			if (VAR11 < 0)
 				return VAR11;
 		}

		VAR2->VAR12 = VAR6;




 	} else
 		VAR2->VAR12 = NULL;
 
	VAR8 = FUN3(VAR4,
					  (struct compat_iovec VAR13 *)VAR2->VAR14,
					  VAR2->VAR15);
	if (VAR8 >= 0)
		VAR2->VAR14 = VAR4;

	return VAR8;
}