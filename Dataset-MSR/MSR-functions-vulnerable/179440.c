struct VAR1 *FUN1(struct VAR2 *VAR3,

			 unsigned long VAR4,

			 unsigned long VAR5)








 {
 	unsigned long VAR6;
 	struct VAR1 *VAR1;
	struct isofs_iget5_callback_data VAR7;
	long VAR8;

	if (VAR5 >= 1ul << VAR3->VAR9)
		return FUN2(-VAR10);

	VAR7.VAR4 = VAR4;
	VAR7.VAR5 = VAR5;

	VAR6 = (VAR4 << VAR3->VAR9) | VAR5;

	VAR1 = FUN3(VAR3, VAR6, &VAR11,
				&VAR12, &VAR7);

	if (!VAR1)
 		return FUN2(-VAR13);
 
 	if (VAR1->VAR14 & VAR15) {

		VAR8 = FUN4(VAR1);


 		if (VAR8 < 0) {
 			FUN5(VAR1);
 			VAR1 = FUN2(VAR8);
		} else {
			FUN6(VAR1);
		}
	}

	return VAR1;
}