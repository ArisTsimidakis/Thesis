int FUN1(const char* VAR1, const char* VAR2, lxc_attach_exec_t VAR3, void* VAR4, VAR5* VAR6, VAR7* VAR8)
{
	int VAR9, VAR10;
	pid_t VAR11, VAR12, VAR13, VAR14;
	struct VAR15 *VAR16;
 	char* VAR17;
 	char* VAR18;
 	int VAR19[2];

	int VAR20;
 	signed long VAR21;
 
 	if (!VAR6)
		VAR6 = &VAR22;

	VAR11 = FUN2(VAR1, VAR2);
	if (VAR11 < 0) {
		FUN3("");
		return -1;
	}

	VAR16 = FUN4(VAR11);
	if (!VAR16) {
		FUN3("", (long)VAR11);
		return -1;
	}

	VAR21 = FUN5(VAR1, VAR2);
	if (VAR16->VAR21 < 0) {
		FUN3("");
		FUN6(VAR16);
		return -1;
	}
	VAR16->VAR21 = VAR21;

	VAR16->VAR23 = FUN7(VAR1, VAR2);
	if (!VAR16->VAR23)
		return -1;

	if (!FUN8(VAR16->VAR23, VAR6))
		FUN9("");

	if (!FUN10(VAR16->VAR23, VAR6))
		FUN9("");

	VAR17 = FUN11(NULL, 0);

	
	if (VAR6->VAR24 == -1) {
		VAR6->VAR24 = FUN12(VAR1, VAR2);
		
		if (VAR6->VAR24 == -1) {
			FUN3(""
			      "");
			free(VAR17);
			FUN6(VAR16);
			return -1;
		}
	}

	
	VAR9 = FUN13(VAR25, VAR26 | VAR27, 0, VAR19);
	if (VAR9 < 0) {
		FUN14("");
		free(VAR17);
		FUN6(VAR16);
		return -1;
	}

	
	VAR12 = FUN15();

	if (VAR12 < 0) {
		FUN14("");
		free(VAR17);
		FUN6(VAR16);
		return -1;
 	}
 
 	if (VAR12) {


 		pid_t VAR28 = VAR12;
 
 		
		close(VAR19[1]);
		free(VAR17);

		
		if (VAR6->VAR29 & VAR30) {
			if (!FUN16(VAR1, VAR2, VAR12))
 				goto VAR31;
 		}
 


















 		
 		VAR10 = 0;
 		VAR9 = FUN17(VAR19[0], &VAR10, sizeof(VAR10));
		if (VAR9 <= 0) {
			FUN3("");
			goto VAR31;
		}

		
		VAR9 = FUN18(VAR19[0], &VAR13, sizeof(VAR13), NULL);
		if (VAR9 <= 0) {
			if (VAR9 != 0)
				FUN3("");
			goto VAR31;
		}

		
		if (VAR6->VAR32 == 0) {
			signal(VAR33, VAR34);
			signal(VAR35, VAR34);
		}

		
		VAR9 = FUN19(VAR12);
		if (VAR9 < 0)
			goto VAR31;

		
		VAR28 = VAR13;

		
		VAR10 = 0;
		VAR9 = FUN17(VAR19[0], &VAR10, sizeof(VAR10));
		if (VAR9 <= 0) {
			FUN3("");
			goto VAR31;
		}

		
		VAR14 = 1;
 		VAR9 = FUN18(VAR19[0], &VAR10, sizeof(VAR10), &VAR14);
 		if (VAR9 <= 0) {
 			if (VAR9 != 0)

				FUN3("");




 			goto VAR31;
 		}
 
 		
 		VAR10 = 2;
 		VAR9 = FUN17(VAR19[0], &VAR10, sizeof(VAR10));
 		if (VAR9 <= 0) {

			FUN3("");




 			goto VAR31;
 		}
 


























































 		
 		FUN20(VAR19[0], VAR36);
 		close(VAR19[0]);
		FUN6(VAR16);

		

		*VAR8 = VAR13;
		return 0;

	VAR31:
 		




 		FUN20(VAR19[0], VAR36);
 		close(VAR19[0]);
 		if (VAR28)
			(void) FUN19(VAR28);
		FUN6(VAR16);
		return -1;
	}

	
	close(VAR19[0]);

	
	VAR14 = 0;
	VAR10 = -1;
	VAR9 = FUN18(VAR19[1], &VAR10, sizeof(VAR10), &VAR14);
	if (VAR9 <= 0) {
		FUN3("");
		FUN20(VAR19[1], VAR36);
		FUN21(-1);
	}

 	if ((VAR6->VAR29 & VAR30) && FUN22())
 		VAR6->VAR24 |= VAR37;
 

	VAR20 = open("", VAR38 | VAR39);

	if (VAR20 < 0) {

		FUN14("");

		FUN20(VAR19[1], VAR36);

		FUN21(-1);

	}


 	
	VAR9 = FUN23(VAR11, VAR6->VAR24);
	if (VAR9 < 0) {
		FUN3("");
		FUN20(VAR19[1], VAR36);
		FUN21(-1);
	}

	
	if (VAR6->VAR40)
		VAR18 = VAR6->VAR40;
	else
		VAR18 = VAR17;
	VAR9 = FUN24(VAR18);
	if (VAR9 < 0)
		FUN9("", VAR18);
	free(VAR17);

	
	{
		struct attach_clone_payload VAR41 = {
			.VAR42 = VAR19[1],
			.VAR6 = VAR6,
 			.VAR16 = VAR16,
 			.VAR3 = VAR3,
 			.VAR4 = VAR4,

			.VAR20 = VAR20
 		};
 		
		VAR12 = FUN25(VAR43, &VAR41, VAR44);
	}

	
	if (VAR12 <= 0) {
		FUN14("");
		FUN20(VAR19[1], VAR36);
		FUN21(-1);
	}

	
	VAR9 = FUN17(VAR19[1], &VAR12, sizeof(VAR12));
	if (VAR9 != sizeof(VAR12)) {
		
		FUN3("");
		FUN20(VAR19[1], VAR36);
		FUN21(-1);
	}

	
	FUN21(0);
}