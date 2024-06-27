FUN1(struct VAR1 *VAR2)
{
	const void *VAR3 = VAR2->VAR4->VAR5;
	size_t VAR6 = VAR2->VAR4->VAR7;
	struct VAR8 *VAR9;

	if (!VAR3) {
		FUN2(&VAR2->VAR10, "");
		return NULL;
	}

	if (!VAR6) {
		FUN2(&VAR2->VAR10, "");
 		return NULL;
 	}
 

	while (VAR6 > 0) {


 		VAR9 = (struct VAR8 *)VAR3;
 










 		if (VAR9->VAR11 == VAR12 &&
 		    VAR9->VAR13 == VAR14) {
 			FUN3(&VAR2->VAR10, "");

			return VAR9;
















 		}
 
 		VAR6 -= VAR9->VAR15;
		VAR3 += VAR9->VAR15;
	}

	FUN2(&VAR2->VAR10, "");
	return NULL;
}