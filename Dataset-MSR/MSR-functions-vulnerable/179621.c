static int FUN1(u32 VAR1 *VAR2, int VAR3,
		      u32 VAR4, VAR5 *VAR6, u32 VAR7, int VAR8)
{
	struct hrtimer_sleeper VAR9, *VAR10 = NULL;
	struct VAR11 *VAR12;
	struct VAR13 *VAR14;
	struct futex_q VAR15;
	int VAR16;

	if (!VAR7)
		return -VAR17;

	VAR15.VAR18 = NULL;
	VAR15.VAR7 = VAR7;
	VAR15.VAR19 = NULL;
	VAR15.VAR20 = NULL;

	if (VAR6) {
		VAR10 = &VAR9;

		FUN2(&VAR10->VAR21, VAR8 ? VAR22 :
				      VAR23, VAR24);
		FUN3(VAR10, VAR25);
		FUN4(&VAR10->VAR21, *VAR6,
					     VAR25->VAR26);
 	}
 
 VAR27:

	








 	VAR16 = FUN5(VAR2, VAR4, VAR3, &VAR15, &VAR14);
 	if (VAR16)
 		goto VAR28;

	
	FUN6(VAR14, &VAR15, VAR10);
 
 	
 	VAR16 = 0;


 	if (!FUN7(&VAR15))

		goto VAR29;


 	VAR16 = -VAR30;
 	if (VAR10 && !VAR10->VAR31)

		goto VAR29;


 
 	

	if (!FUN8(VAR25)) {

		FUN9(VAR3, &VAR15.VAR32);


 		goto VAR27;

	}
 
 	VAR16 = -VAR33;
 	if (!VAR6)

		goto VAR29;


 
 	VAR12 = &FUN10()->VAR11;
 	VAR12->VAR34 = VAR35;
	VAR12->VAR36.VAR2 = (VAR37 *)VAR2;
	VAR12->VAR36.VAR4 = VAR4;
	VAR12->VAR36.VAR38 = VAR6->VAR39;
	VAR12->VAR36.VAR7 = VAR7;
	VAR12->VAR36.VAR40 = VAR41;

	if (VAR3)
		VAR12->VAR36.VAR40 |= VAR42;
	if (VAR8)
		VAR12->VAR36.VAR40 |= VAR43;
 
 	VAR16 = -VAR44;
 

VAR29:

	FUN9(VAR3, &VAR15.VAR32);
 VAR28:
 	if (VAR10) {
 		FUN11(&VAR10->VAR21);
		FUN12(&VAR10->VAR21);
	}
	return VAR16;
}