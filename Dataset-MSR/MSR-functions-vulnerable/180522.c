static int FUN1(struct VAR1 *VAR1)
{
	struct VAR2 *VAR3;
	enum ndp_msg_type VAR4;
	size_t VAR5;
	int VAR6;

	VAR3 = FUN2();
	if (!VAR3)
		return -VAR7;
 
 	VAR5 = FUN3(VAR3);
 	VAR6 = FUN4(VAR1->VAR8, VAR3->VAR9, &VAR5, 0,

			  &VAR3->VAR10, &VAR3->VAR11);


 	if (VAR6) {
 		FUN5(VAR1, "");
 		goto VAR12;
 	}

	FUN6(VAR1, "",

		 FUN7(&VAR3->VAR10), VAR3->VAR11);
















 
 	if (VAR5 < sizeof(*VAR3->VAR13)) {
 		FUN8(VAR1, "", VAR5);
		VAR6 = 0;
		goto VAR12;
	}
	VAR6 = FUN9(&VAR4, VAR3->VAR13->VAR14);
	if (VAR6) {
		VAR6 = 0;
		goto VAR12;
	}
	FUN10(VAR3, VAR4);
	FUN11(VAR3, VAR5);

	if (!FUN12(VAR3)) {
		FUN8(VAR1, "");
		VAR6 = 0;
		goto VAR12;
	}

	FUN6(VAR1, "",
		 FUN13(VAR4)->VAR15, VAR5);

	if (!FUN14(VAR3)) {
		VAR6 = 0;
		goto VAR12;
	}

	VAR6 = FUN15(VAR1, VAR3);;

VAR12:
	FUN16(VAR3);
	return VAR6;
}