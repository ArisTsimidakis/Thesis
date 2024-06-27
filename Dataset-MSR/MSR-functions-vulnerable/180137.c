static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4) {
	struct mt_packet VAR5;
	unsigned char VAR6[17];
 	char VAR7[100];
 	struct VAR8 *VAR9;
 	char *VAR10;


 
 	
 	FUN2();

	if ((VAR9 = FUN3(VAR2->VAR11)) != NULL) {
		md5_state_t VAR12;
#if FUN4(VAR13) && FUN4(VAR14)
		mlock(VAR7, sizeof(VAR7));
		mlock(VAR6, sizeof(VAR6));
		if (VAR9->VAR15 != NULL) {
			mlock(VAR9->VAR15, strlen(VAR9->VAR15));
 		}
 #endif
 








 		
 		VAR7[0] = 0;

		strncpy(VAR7 + 1, VAR9->VAR15, 82);

		memcpy(VAR7 + 1 + strlen(VAR9->VAR15), VAR2->VAR16, 16);




 
 		
 		FUN5(&VAR12);

		FUN6(&VAR12, (const VAR17 *)VAR7, strlen(VAR9->VAR15) + 17);


 		FUN7(&VAR12, (VAR17 *)VAR6 + 1);
 		VAR6[0] = 0;
 
		FUN8(&VAR5, VAR18, VAR4->VAR19, VAR4->VAR20, VAR4->VAR21, VAR2->VAR22);
		VAR2->VAR22 += FUN9(&VAR5, VAR23, NULL, 0);
		FUN10(VAR2, &VAR5);

		if (VAR2->VAR12 == VAR24) {
			return;
		}
	}

	if (VAR9 == NULL || memcmp(VAR6, VAR2->VAR25, 17) != 0) {
		syslog(VAR26, FUN11(""), VAR2->VAR21, VAR2->VAR11);

		
		FUN12(VAR2, VAR4, FUN11(""));

		
		return;
	}

	
	VAR2->VAR12 = VAR24;

	
	VAR2->VAR27 = 1;

	
	VAR2->VAR28 = FUN13(VAR29);
	if (VAR2->VAR28 == -1 || FUN14(VAR2->VAR28) == -1 || FUN15(VAR2->VAR28) == -1) {
			syslog(VAR30, "", strerror(VAR31));
			
			FUN12(VAR2, VAR4, FUN11(""));
			return;
	}

	
	VAR10 = FUN16(VAR2->VAR28);
	if (VAR10 != NULL) {
		pid_t VAR32;
		struct stat VAR33;
		struct VAR34 *VAR9 = (struct VAR34 *)malloc(sizeof(struct VAR34));
		struct VAR34 *VAR35=VAR9;
		char *VAR36 = malloc(1024);

		if (VAR9 == NULL || VAR36 == NULL) {
			syslog(VAR37, FUN11(""), VAR2->VAR21);
			
			FUN12(VAR2, VAR4, FUN11(""));
			return;
		}

		if (FUN17(VAR2->VAR11, VAR9, VAR36, 1024, &VAR35) != 0) {
			syslog(VAR38, FUN11(""), VAR2->VAR21, VAR2->VAR11);
			
			FUN12(VAR2, VAR4, FUN11(""));
			free(VAR9);
			free(VAR36);
			return;
		}

		
		chown(VAR10, VAR9->VAR39, VAR9->VAR40);

		VAR2->VAR41 = open(VAR10, VAR29);
		if (VAR2->VAR41 == -1) {
			syslog(VAR30, FUN11(""), VAR10, strerror(VAR31));
			
			FUN12(VAR2, VAR4, FUN11(""));
			FUN18(VAR2);
			return;
		}

		if ((VAR32 = FUN19()) == 0) {
			struct VAR42 *VAR43;

			
			FUN20(VAR2);

			syslog(VAR44, FUN11(""), VAR2->VAR21, VAR2->VAR11);

			
			setenv("", VAR9->VAR45, 1);
			setenv("", VAR9->VAR46, 1);
			setenv("", VAR9->VAR47, 1);
			setenv("", VAR2->VAR48, 1);
			close(VAR49);
			close(VAR50);

			FUN21(VAR51, VAR43) {
				if (VAR43->VAR52 > 0) {
					close(VAR43->VAR52);
				}
			}
			FUN22();

			
			FUN23 (VAR2->VAR41, VAR53, VAR54);
			close(VAR2->VAR28);

			
			close(0);
			FUN24(VAR2->VAR41);
			close(1);
			FUN24(VAR2->VAR41);
			close(2);
			FUN24(VAR2->VAR41);

			
			FUN25(0, VAR55, 1);
			FUN26(0, FUN27());

			
			if ((FUN28(VAR9->VAR40) != 0) || (setuid(VAR9->VAR39) != 0)) {
				syslog(VAR30, FUN11(""), VAR2->VAR21, VAR2->VAR11, VAR9->VAR39, VAR9->VAR40, strerror(VAR31));
				
				FUN12(VAR2, VAR4, FUN11(""));
				FUN29(0);
			}

			
			if (FUN30(VAR56, &VAR33) == 0 && FUN31() != 0) {
				syslog(VAR26, FUN11("" VAR56 ""), VAR2->VAR21, VAR2->VAR11);
				FUN32();
				VAR2->VAR12 = VAR57;
				FUN8(&VAR5, VAR58, VAR4->VAR19, VAR4->VAR20, VAR4->VAR21, VAR2->VAR22);
				FUN10(VAR2, &VAR5);
				FUN29(0);
			}

			
			FUN33();

			FUN34(VAR9->VAR46);

			
			
			FUN35(VAR9->VAR47, VAR9->VAR47, "", (char *) 0);
			FUN29(0); 
		}
		free(VAR9);
		free(VAR36);
		close(VAR2->VAR41);
		VAR2->VAR32 = VAR32;
		FUN36(VAR2->VAR28, VAR2->VAR59, VAR2->VAR60);
	}

}