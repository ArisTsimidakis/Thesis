static int FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4 = FUN2(VAR2->VAR5,
                                                struct VAR3);
         ctdb_sock_addr VAR6;
        int VAR7, VAR8;

       const char *VAR9 = "";


        struct flock VAR10;
        int VAR11 = 1;
        int VAR12;
	struct VAR13 *VAR14;

	
	if (VAR2->VAR15 == 0) {
		FUN3(VAR16,(""));
		return -1;
	}

	
	VAR7 = open(VAR9, VAR17|VAR18, 0666);
	if (VAR7 == -1) {
		FUN3(VAR16,("", VAR9));
		return -1;
	}

	VAR10.VAR19 = VAR20;
	VAR10.VAR21 = VAR22;
	VAR10.VAR23 = 0;
	VAR10.VAR24 = 1;
	VAR10.VAR25 = 0;

	if (FUN4(VAR7, VAR26, &VAR10) != 0) {
		FUN3(VAR16,("", VAR9));
		close(VAR7);
		return -1;
	}

	for (VAR8=0; VAR8 < VAR2->VAR15; VAR8++) {
		if (VAR2->VAR27[VAR8]->VAR28 & VAR29) {
			continue;
		}
		FUN5(VAR6);
		if (FUN6(VAR2,
				VAR2->VAR27[VAR8]->VAR30.VAR30, 
				&VAR6) != 0) {
			continue;
		}
	
		switch (VAR6.VAR31.VAR32) {
		case VAR33:
			VAR6.VAR34.VAR35 = FUN7(VAR2->VAR27[VAR8]->VAR30.VAR36);
			VAR12 = sizeof(VAR6.VAR34);
			break;
		case VAR37:
			VAR6.VAR38.VAR39 = FUN7(VAR2->VAR27[VAR8]->VAR30.VAR36);
			VAR12 = sizeof(VAR6.VAR38);
			break;
		default:
			FUN3(VAR40, (VAR41 "",
				VAR6.VAR31.VAR32));
			continue;
		}
#ifdef VAR42
		VAR6.VAR34.VAR43 = VAR12;
#endif

		VAR4->VAR44 = socket(VAR6.VAR31.VAR32, VAR45, VAR46);
		if (VAR4->VAR44 == -1) {
			FUN8(VAR2, "");
			continue;
		}

		FUN9(VAR4->VAR44);

	        FUN10(VAR4->VAR44,VAR47,VAR48,(char *)&VAR11,sizeof(VAR11));

		if (FUN11(VAR4->VAR44, (struct VAR49 * )&VAR6, VAR12) == 0) {
			break;
		}

		if (VAR50 == VAR51) {
			FUN3(VAR52,(VAR41 "",
					strerror(VAR50), VAR50));
		} else {
			FUN3(VAR40,(VAR41 "",
					strerror(VAR50), VAR50));
		}
	}
	
	if (VAR8 == VAR2->VAR15) {
		FUN3(VAR16,(""));
		goto VAR53;
	}
	VAR2->VAR30.VAR30 = FUN12(VAR2, VAR2->VAR27[VAR8]->VAR30.VAR30);
	VAR2->VAR30.VAR36    = VAR2->VAR27[VAR8]->VAR30.VAR36;
	VAR2->VAR54 = FUN13(VAR2, "", 
				     VAR2->VAR30.VAR30, 
				     VAR2->VAR30.VAR36);
	VAR2->VAR55 = VAR2->VAR27[VAR8]->VAR55;
	FUN3(VAR56,("", 
		 VAR2->VAR30.VAR30, 
		 VAR2->VAR30.VAR36, 
		 VAR2->VAR55));
	
	if (FUN14(VAR4->VAR44, 10) == -1) {
		goto VAR53;
	}

	VAR14 = FUN15(VAR2->VAR57, VAR4, VAR4->VAR44, VAR58,
			   VAR59, VAR2);
	FUN16(VAR14);

	close(VAR7);

	return 0;
	
VAR53:
	close(VAR7);
	close(VAR4->VAR44);
	VAR4->VAR44 = -1;
	return -1;
}