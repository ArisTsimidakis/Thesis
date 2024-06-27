void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, struct VAR5 *VAR6,
 		   unsigned int VAR7)
 {
 	struct VAR8 *VAR9 = FUN2(VAR2);

	struct {

		struct ip_options	VAR10;

		char			VAR11[40];

	} VAR12;


 	struct ipcm_cookie VAR13;
 	__be32 VAR14;
 	struct VAR15 *VAR16 = FUN3(VAR4);
 

	if (FUN4(&VAR12.VAR10, VAR4))


 		return;
 
 	VAR14 = VAR13.VAR17 = VAR16->VAR18;
 	VAR13.VAR10 = NULL;
 	VAR13.VAR19 = 0;
 

	if (VAR12.VAR10.VAR20) {


 		VAR13.VAR10 = &VAR12.VAR10;
 

		if (VAR13.VAR10->VAR21)

			VAR14 = VAR12.VAR10.VAR22;




 	}
 
 	{
		struct flowi4 VAR23;

		FUN5(&VAR23, VAR6->VAR24, 0,
				   FUN6(FUN7(VAR4)->VAR25),
				   VAR26, VAR2->VAR27,
				   FUN8(VAR6),
				   VAR14, VAR16->VAR28,
				   FUN9(VAR4)->VAR29, FUN9(VAR4)->VAR30);
		FUN10(VAR4, FUN11(&VAR23));
		VAR16 = FUN12(FUN13(VAR2), &VAR23);
		if (FUN14(VAR16))
			return;
	}

	
	FUN15(VAR2);
	VAR9->VAR25 = FUN7(VAR4)->VAR25;
	VAR2->VAR31 = VAR4->VAR32;
	VAR2->VAR27 = FUN7(VAR4)->VAR33;
	VAR2->VAR34 = VAR6->VAR24;
	FUN16(VAR2, VAR35, VAR6->VAR36->VAR37, VAR7, 0,
		       &VAR13, &VAR16, VAR38);
	if ((VAR4 = FUN17(&VAR2->VAR39)) != NULL) {
		if (VAR6->VAR40 >= 0)
			*((VAR41 *)FUN18(VAR4) +
			  VAR6->VAR40) = FUN19(FUN20(VAR4->VAR42,
								VAR6->VAR42));
		VAR4->VAR43 = VAR44;
		FUN21(VAR2);
	}

	FUN22(VAR2);

	FUN23(VAR16);
}