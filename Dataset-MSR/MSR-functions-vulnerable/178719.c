void FUN1(struct VAR1 *VAR2)
 {

	struct VAR3 *VAR4;


 	struct VAR5 *VAR6;
 
 	VAR6 = FUN2(VAR2);
 	VAR4 = VAR6->VAR4;

	if (VAR4 == NULL || VAR4->VAR7 == 0)


 		return;
 
 	FUN3(&VAR6->VAR4);
}