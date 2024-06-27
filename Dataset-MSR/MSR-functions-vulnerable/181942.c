static int FUN1(void* VAR1)
 {
 	struct VAR2* VAR3 = (struct VAR2*)VAR1;
 	int VAR4 = VAR3->VAR4;

	int VAR5 = VAR3->VAR5;
 	VAR6* VAR7 = VAR3->VAR7;
 	struct VAR8* VAR9 = VAR3->VAR9;
 #if VAR10
	long VAR11;
#endif
	int VAR12;
	int VAR13;
 	int VAR14;
 	long VAR15;
 	int VAR16;


 	uid_t VAR17;
 	gid_t VAR18;
 
	
	VAR14 = 0;
 	VAR13 = -1;
 	VAR12 = FUN2(VAR4, &VAR13, sizeof(VAR13), &VAR14);
 	if (VAR12 <= 0) {

		FUN3("");


 		FUN4(VAR4, VAR19);
 		FUN5(-1);
 	}

	
	if (!(VAR7->VAR20 & VAR21) && (VAR7->VAR22 & VAR23)) {
		VAR12 = FUN6();
		if (VAR12 < 0) {
			FUN4(VAR4, VAR19);
			FUN5(-1);
		}
	}

	
#if VAR10
	if (VAR7->VAR24 < 0)
		VAR11 = VAR9->VAR24;
	else
		VAR11 = VAR7->VAR24;

	if (VAR7->VAR22 & VAR25) {
		VAR12 = FUN7(VAR11);
		if (VAR12 < 0) {
			FUN8("");
			FUN4(VAR4, VAR19);
			FUN5(-1);
		}
	}
#endif

	if (VAR7->VAR22 & VAR26) {
		VAR12 = FUN9(VAR9);
		if (VAR12 < 0) {
			FUN3("");
			FUN4(VAR4, VAR19);
			FUN5(-1);
		}
	}

	
	VAR12 = FUN10(VAR7->VAR27, VAR7->VAR28, VAR7->VAR29);
	if (VAR12 < 0) {
		FUN3("");
		FUN4(VAR4, VAR19);
		FUN5(-1);
	}

	
	VAR17 = 0;
	VAR18 = 0;
	
	if (VAR7->VAR20 & VAR30)
		FUN11(&VAR17, &VAR18);

	if (VAR7->VAR31 != (VAR32)-1)
		VAR17 = VAR7->VAR31;
	if (VAR7->VAR33 != (VAR34)-1)
		VAR18 = VAR7->VAR33;

	
	if (VAR7->VAR35 && FUN12(VAR7->VAR35)) {
		if (FUN13() < 0) {
			FUN8("");
			FUN4(VAR4, VAR19);
			FUN5(-1);
		}

		if (FUN14(VAR7->VAR35, VAR36, (char *)NULL) < 0) {
			FUN8("");
			FUN4(VAR4, VAR19);
			FUN5(-1);
		}
	}

	
	if ((VAR18 != 0 || VAR7->VAR20 & VAR30)) {
		if (FUN15(VAR18) || setgroups(0, NULL)) {
			FUN8("");
			FUN4(VAR4, VAR19);
			FUN5(-1);
		}
	}
	if ((VAR17 != 0 || VAR7->VAR20 & VAR30) && setuid(VAR17)) {
		FUN8("");
		FUN4(VAR4, VAR19);
		FUN5(-1);
	}

	
 	VAR13 = 1;
 	VAR12 = FUN16(VAR4, &VAR13, sizeof(VAR13));
 	if (VAR12 != sizeof(VAR13)) {

		FUN3("");


 		FUN4(VAR4, VAR19);
 		FUN5(-1);
 	}

	
	VAR14 = 2;
 	VAR13 = -1;
 	VAR12 = FUN2(VAR4, &VAR13, sizeof(VAR13), &VAR14);
 	if (VAR12 <= 0) {

		FUN3("");






 		FUN4(VAR4, VAR19);
 		FUN5(-1);
 	}
 

	FUN4(VAR4, VAR19);

	close(VAR4);


 	if ((VAR9->VAR37 && VAR9->VAR37->VAR38 &&
 	     VAR9->VAR37->VAR38->VAR39) ||
 	    (VAR7->VAR22 & VAR40)) {
 		if (FUN17(VAR41, 1, 0, 0, 0) < 0) {
 			FUN8(""
 				 ""
 				 "");


 			FUN5(-1);
 		}
 		FUN18(""
 		     "");
 	}
 

	


















 	if ((VAR7->VAR20 & VAR21) && (VAR7->VAR22 & VAR42) && VAR9->VAR43) {
 		int VAR44;














 


 		VAR44 = VAR7->VAR22 & VAR45 ? 1 : 0;

		if (FUN19(VAR5, VAR44, VAR9->VAR43) < 0) {








 			FUN5(-1);
 		}


 	}


 	if (VAR9->VAR37 && VAR9->VAR37->VAR38 &&
 	    VAR9->VAR37->VAR38->VAR46 &&
 	    (FUN20(VAR9->VAR37->VAR38) != 0)) {
 		FUN3("");


 		FUN5(-1);
 	}






 	FUN21(VAR9);
 
 	

	
	if (VAR7->VAR35 >= 0 && VAR7->VAR35 != 0)
		FUN22(VAR7->VAR35, 0);
	if (VAR7->VAR47 >= 0 && VAR7->VAR47 != 1)
		FUN22(VAR7->VAR47, 1);
	if (VAR7->VAR48 >= 0 && VAR7->VAR48 != 2)
		FUN22(VAR7->VAR48, 2);

	
	if (VAR7->VAR35 > 2)
		close(VAR7->VAR35);
	if (VAR7->VAR47 > 2)
		close(VAR7->VAR47);
	if (VAR7->VAR48 > 2)
		close(VAR7->VAR48);

	
	for (VAR16 = 0; VAR16 <= 2; VAR16++) {
		VAR15 = FUN23(VAR16, VAR49);
		if (VAR15 < 0)
			continue;
		if (VAR15 & VAR50)
			if (FUN23(VAR16, VAR51, VAR15 & ~VAR50) < 0)
 				FUN8("");
 	}
 

	

	close(VAR5);


 	
 	FUN5(VAR3->FUN24(VAR3->VAR52));
 }