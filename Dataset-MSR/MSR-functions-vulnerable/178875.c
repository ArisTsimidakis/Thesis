static void FUN1(struct VAR1 *VAR1, mode_t VAR2)


 {
 	struct VAR3 *VAR4;
 
 	FUN2();
 	VAR4 = FUN3(FUN4(VAR1)->VAR4);

	if (VAR4 == NULL || (VAR4->VAR5 & VAR2) == VAR2) {


 		FUN5();
 		return;
 	}
	FUN5();
	FUN6(VAR1);
}