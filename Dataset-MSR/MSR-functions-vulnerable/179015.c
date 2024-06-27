void FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
#ifdef VAR4
	
	FUN2(VAR2->VAR5 != VAR6 && VAR2->VAR5 != VAR7 &&
			!(FUN3(VAR2)->VAR8 & VAR9));

#ifdef VAR10
	
	FUN2(VAR11 && !(FUN4(&VAR2->VAR12) ||
				      FUN4(&FUN5(VAR2)->VAR13)));
#endif
#endif

	FUN6(VAR2, VAR3);
 
 	if (FUN7(VAR2) != VAR3) {
 		VAR2->VAR14.VAR15++;

		FUN8(VAR16, 1, 1, NULL, 0);


 	}
 
 	FUN9(VAR2, VAR3);
}