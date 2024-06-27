static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
 {
 	struct VAR5 *VAR5 = FUN2(VAR2->VAR6);

	struct VAR7 *VAR8 = (struct VAR7 *) &VAR4->VAR9[1];


 	struct xfrm_dump_info VAR10;
 

	FUN3(sizeof(struct VAR7) >

		     sizeof(VAR4->VAR9) - sizeof(VAR4->VAR9[0]));


 	VAR10.VAR11 = VAR4->VAR2;
 	VAR10.VAR12 = VAR2;
 	VAR10.VAR13 = VAR4->VAR14->VAR13;
 	VAR10.VAR15 = VAR16;
 

	if (!VAR4->VAR9[0]) {

		VAR4->VAR9[0] = 1;

		FUN4(VAR8, VAR17);

	}


 	(void) FUN5(VAR5, VAR8, VAR18, &VAR10);
 
 	return VAR2->VAR19;
}