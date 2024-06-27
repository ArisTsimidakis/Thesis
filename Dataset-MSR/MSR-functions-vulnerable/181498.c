FUN1(krb5_context VAR1,
		VAR2 *VAR3,
		VAR4 *VAR5,
		VAR6 *VAR7,
		VAR8 *VAR9,
		krb5_enctype VAR10,
		const VAR11 *VAR12,
		int VAR13,
		VAR14 *VAR15,
		VAR16 *VAR17,
		const char *VAR18,
		const char **VAR19,
		VAR20 **VAR21,
		const struct VAR22 *VAR23)
{
    krb5_error_code VAR24;
    krb5_principal VAR25 = NULL, VAR26 = NULL, VAR27 = NULL, VAR28 = NULL, VAR29 = NULL;
    krb5_principal VAR30 = NULL;
    char *VAR31 = NULL, *VAR32 = NULL, *VAR33 = NULL, *VAR34 = NULL, *VAR35 = NULL;
    VAR8 *VAR36 = NULL, *VAR37 = NULL, *VAR38 = NULL;
    VAR39 *VAR40, *VAR41;
    krb5_realm VAR42 = NULL;
    VAR43 *VAR44 = &VAR15->VAR15;
    krb5_principals VAR45 = NULL;
    const VAR46 *VAR47;
     krb5_keyblock VAR48;
     krb5_kvno VAR49;
     krb5_data VAR50;




     const char *VAR51 = 
         FUN2(VAR1, VAR9->VAR52.VAR53, 1);
     char **VAR54 = NULL;
    size_t VAR55 = 0;

    VAR8 *VAR56 = NULL;

    METHOD_DATA VAR57;

    VAR58 *VAR59;
    Realm VAR60;
    EncTicketPart VAR61;
    char VAR62[128];
    int VAR63 = 0;

    VAR64 *VAR65;
    VAR64 *VAR66;
    int VAR67 = VAR68;

    memset(&VAR48, 0, sizeof(VAR48));
    memset(&VAR61, 0, sizeof(VAR61));
    FUN3(&VAR50);
    memset(&VAR57, 0, sizeof(VAR57));

    VAR59 = VAR7->VAR69;
    VAR60 = VAR7->VAR70;

    
    VAR67 |= VAR71;

    if(VAR7->VAR72.VAR73){
	VAR74 *VAR75;
	VAR8 *VAR76;
	krb5_principal VAR77;
	VAR64 *VAR78;
	krb5uint32 VAR79 = 0;
	VAR80 *VAR81 = NULL;

	if(VAR7->VAR82 == NULL ||
	   VAR7->VAR82->VAR83 == 0){
	    VAR24 = VAR84; 
	    FUN4(VAR1, VAR3, 0,
		    "");
	    goto VAR85;
	}
	VAR75 = &VAR7->VAR82->VAR86[0];
	if(!FUN5(&VAR75->VAR69)){
	    FUN4(VAR1, VAR3, 0,
		    "");
	    VAR24 = VAR87;
	    goto VAR85;
	}
	FUN6(VAR1, &VAR77, VAR75->VAR69, VAR75->VAR70);
	if(VAR75->VAR88.VAR49){
	    VAR79 = *VAR75->VAR88.VAR49;
	    VAR81 = &VAR79;
	}
	VAR24 = FUN7(VAR1, VAR3, VAR77,
			    VAR89, VAR81,
			    NULL, &VAR76);
	FUN8(VAR1, VAR77);
	if(VAR24){
	    if (VAR24 == VAR90)
		VAR24 = VAR91;
	    goto VAR85;
	}
	VAR24 = FUN9(VAR1, &VAR76->VAR52, NULL,
			      VAR75->VAR88.VAR92, &VAR78);
	if(VAR24){
	    FUN10(VAR1, VAR76);
	    VAR24 = VAR93; 
	    goto VAR85;
	}
	VAR24 = FUN11(VAR1, VAR75, &VAR78->VAR94, &VAR61, 0);
	FUN10(VAR1, VAR76);
	if(VAR24)
	    goto VAR85;

	VAR24 = FUN12(VAR1, VAR3, &VAR61, VAR31);
	if (VAR24)
	    goto VAR85;

	VAR59 = &VAR61.VAR95;
	VAR60 = VAR61.VAR96;
    }

    FUN6(VAR1, &VAR26, *VAR59, VAR60);
    VAR24 = FUN13(VAR1, VAR26, &VAR31);
    if (VAR24)
	goto VAR85;
    FUN6(VAR1, &VAR25, VAR44->VAR95, VAR44->VAR96);
    VAR24 = FUN13(VAR1, VAR25, &VAR32);
    if (VAR24)
	goto VAR85;
    FUN14 (FUN15(VAR7->VAR72),
		   FUN16(),
		   VAR62, sizeof(VAR62));
    if(*VAR62)
	FUN4(VAR1, VAR3, 0,
		"",
		VAR32, VAR18, VAR31, VAR62);
    else
	FUN4(VAR1, VAR3, 0,
		"", VAR32, VAR18, VAR31);

    

VAR97:
    VAR24 = FUN7(VAR1, VAR3, VAR26, VAR98 | VAR67,
			NULL, NULL, &VAR36);

    if (VAR24 == VAR99) {
	FUN4(VAR1, VAR3, 5, "", VAR26);
	goto VAR85;
    } else if (VAR24 == VAR100) {
        free(VAR42);
	VAR42 = strdup(VAR36->VAR52.VAR53->VAR70);
	if (VAR42 == NULL) {
            VAR24 = FUN17(VAR1);
	    goto VAR85;
	}

	FUN4(VAR1, VAR3, 5,
		""
		"",
		VAR42, VAR31);
	FUN8(VAR1, VAR26);
	VAR26 = NULL;
	VAR24 = FUN18(VAR1, &VAR26, VAR60, VAR101,
				  VAR42, NULL);
	if (VAR24)
	    goto VAR85;
	free(VAR31);
        VAR31 = NULL;
	VAR24 = FUN13(VAR1, VAR26, &VAR31);
	if (VAR24)
	    goto VAR85;

	goto VAR97;
    } else if (VAR24) {
	const char *VAR102, *VAR103;
	Realm VAR104;
	VAR105 *VAR106;

	if ((VAR104 = FUN5(&VAR26->VAR107)) != NULL) {
            if (VAR54 == NULL) {
                
                VAR24 = FUN19(VAR1, VAR44->VAR96, VAR51,
                                        VAR104, VAR108, &VAR54, &VAR55);
                if (VAR24)
                    goto VAR85;
            }
            VAR102 = VAR55 > 0 ? VAR54[--VAR55] : NULL;
            if (VAR102) {
                FUN4(VAR1, VAR3, 5, ""
                        "", VAR44->VAR96,
                        VAR51, VAR104, VAR102);

                free(VAR42);
                VAR42 = strdup(VAR102);
                if (VAR42 == NULL) {
                    VAR24 = FUN17(VAR1);
                    goto VAR85;
                }

                FUN8(VAR1, VAR26);
                VAR26 = NULL;
                FUN18(VAR1, &VAR26, VAR60,
                                    VAR101, VAR42, NULL);
                free(VAR31);
                VAR31 = NULL;
                VAR24 = FUN13(VAR1, VAR26, &VAR31);
                if (VAR24)
                    goto VAR85;
                goto VAR97;
            }
	} else if (FUN20(VAR1, VAR3, &VAR7->VAR72, VAR26, &VAR106)) {
	    if (strcmp(VAR106[0], VAR26->VAR70) != 0) {
		FUN4(VAR1, VAR3, 5,
			""
			"",
			VAR106[0], VAR31);
		FUN8(VAR1, VAR26);
                VAR26 = NULL;
		FUN18(VAR1, &VAR26, VAR60, VAR101,
				    VAR106[0], NULL);
		free(VAR31);
                VAR31 = NULL;
		VAR24 = FUN13(VAR1, VAR26, &VAR31);
		if (VAR24) {
		    FUN21(VAR1, VAR106);
		    goto VAR85;
		}

                free(VAR42);
		VAR42 = strdup(VAR106[0]);

		FUN21(VAR1, VAR106);
		goto VAR97;
	    }
	    FUN21(VAR1, VAR106);
	}
	VAR103 = FUN22(VAR1, VAR24);
	FUN4(VAR1, VAR3, 0,
		"", VAR31, VAR103);
	FUN23(VAR1, VAR103);
	if (VAR24 == VAR90)
	    VAR24 = VAR91;
	goto VAR85;
    }

    

    if (VAR7->VAR72.VAR109)
	VAR27 = VAR36->VAR52.VAR53;
    else
	VAR27 = VAR26;


    

    {
	krb5_enctype VAR92;

	if(VAR7->VAR72.VAR73) {
	    size_t VAR110;
	    VAR47 = &VAR61.VAR94;
	    for(VAR110 = 0; VAR110 < VAR7->VAR92.VAR83; VAR110++)
		if (VAR7->VAR92.VAR86[VAR110] == VAR61.VAR94.VAR111)
		    break;
	    if(VAR110 == VAR7->VAR92.VAR83) {
		FUN4(VAR1, VAR3, 0,
			"");
		FUN24(VAR1);
		VAR24 = VAR93;
		goto VAR85;
	    }
	    VAR92 = VAR7->VAR92.VAR86[VAR110];
	    VAR49 = 0;
	} else {
	    VAR64 *VAR112;

	    VAR24 = FUN25(VAR1,
				  FUN26(VAR1, VAR26) ?
				  VAR3->VAR113 :
				  VAR3->VAR114, VAR115,
				  VAR36, VAR7->VAR92.VAR86, VAR7->VAR92.VAR83, &VAR92,
				  NULL);
	    if(VAR24) {
		FUN4(VAR1, VAR3, 0,
			"", VAR31);
		goto VAR85;
	    }
	    VAR24 = FUN27(VAR1, VAR3, VAR36, VAR31,
					 NULL, &VAR112);
	    if(VAR24) {
		FUN4(VAR1, VAR3, 0,
			"", VAR31);
		goto VAR85;
	    }
	    VAR47 = &VAR112->VAR94;
	    VAR49 = VAR36->VAR52.VAR49;
	}

	VAR24 = FUN28(VAR1, VAR92, &VAR48);
	if (VAR24)
	    goto VAR85;
    }

    

    

    VAR24 = FUN9(VAR1, &VAR9->VAR52, NULL, 
			  VAR10, &VAR65);
    if(VAR24) {
	FUN4(VAR1, VAR3, 0,
		    "");
	goto VAR85;
    }

    
    
    VAR24 = FUN18(VAR1,
                              &VAR30,
                              VAR51,
                              VAR101,
                              VAR51,
                              NULL);
    if (VAR24) {
        FUN4(VAR1, VAR3, 0,
                ""
                "");
        goto VAR85;
    }
    VAR24 = FUN13(VAR1, VAR30, &VAR35);
    if (VAR24) {
        FUN4(VAR1, VAR3, 0,
                ""
                "");
        goto VAR85;
    }

    VAR24 = FUN7(VAR1, VAR3, VAR30,
			VAR89, NULL, NULL, &VAR56);
    if (VAR24) {
	char *VAR116 = NULL;
	VAR24 = FUN13(VAR1, VAR9->VAR52.VAR53, &VAR116);
	FUN4(VAR1, VAR3, 0,
		""
		"",
		VAR35, VAR31, (VAR24 == 0) ? VAR116 : "");
	free(VAR116);
	VAR24 = VAR117;
	goto VAR85;
    }

    
    if (strcmp(FUN29(VAR1, VAR36->VAR52.VAR53),
	       FUN29(VAR1, VAR56->VAR52.VAR53)) != 0) {
	char *VAR116;
	VAR24 = FUN13(VAR1, VAR56->VAR52.VAR53, &VAR116);
	FUN4(VAR1, VAR3, 0,
		"",
		(VAR24 == 0) ? VAR116 : "");
	if(VAR24 == 0)
	    free(VAR116);
	VAR24 = VAR117;
	goto VAR85;
    }

    VAR24 = FUN27(VAR1, VAR3, VAR56, VAR35,
				 NULL, &VAR66);
    if (VAR24) {
	FUN4(VAR1, VAR3, 0,
		    "");
	goto VAR85;
    }
    VAR24 = FUN9(VAR1, &VAR56->VAR52, NULL,
			  VAR66->VAR94.VAR111, &VAR66);
    if(VAR24) {
	FUN4(VAR1, VAR3, 0,
		    "");
	goto VAR85;
    }

    VAR24 = FUN7(VAR1, VAR3, VAR25, VAR118 | VAR67,
			NULL, &VAR40, &VAR37);
    if(VAR24 == VAR99) {
	
    } else if(VAR24){
	const char *VAR119, *VAR103;

	

	VAR119 = FUN29(VAR1, VAR56->VAR52.VAR53);

	if(strcmp(FUN29(VAR1, VAR25), VAR119) == 0) {
	    if (VAR24 == VAR90)
		VAR24 = VAR120;
	    FUN4(VAR1, VAR3, 1, "",
		    VAR32);
	    goto VAR85;
	}

	VAR103 = FUN22(VAR1, VAR24);
	FUN4(VAR1, VAR3, 1, "", VAR103);
	FUN23(VAR1, VAR103);
    }

    VAR24 = FUN30(VAR1, VAR3, VAR25, NULL,
		    VAR37, VAR36, VAR9,
		    &VAR65->VAR94,
		    VAR47, &VAR66->VAR94,
		    VAR44, &VAR50, &VAR63);
    if (VAR24) {
	const char *VAR103 = FUN22(VAR1, VAR24);
	FUN4(VAR1, VAR3, 0,
		"",
		VAR31, VAR32, VAR18, VAR103);
	FUN23(VAR1, VAR103);
	goto VAR85;
    }

    
    VAR24 = FUN31(VAR1,
			       VAR3,
			       VAR9,
			       VAR25,
			       VAR44,
			       &VAR45,
			       &VAR63);
    if (VAR24) {
	const char *VAR103 = FUN22(VAR1, VAR24);
	FUN4(VAR1, VAR3, 0,
		"",
		VAR31, VAR32, VAR18, VAR103);
	FUN23(VAR1, VAR103);
	goto VAR85;
    }

    

    
    VAR28 = VAR25;
    VAR33 = VAR32;

    if (VAR37) {
	const VAR121 *VAR122;
	int VAR110 = 0;

	VAR122 = FUN32(VAR5, &VAR110, VAR123);
	if (VAR122) {
	    krb5_crypto VAR124;
	    krb5_data VAR125;
	    PA_S4U2Self VAR126;
	    const char *VAR127;

	    VAR24 = FUN33(VAR122->VAR128.VAR129,
				     VAR122->VAR128.VAR130,
				     &VAR126, NULL);
	    if (VAR24) {
		FUN4(VAR1, VAR3, 0, "");
		goto VAR85;
	    }

	    VAR24 = FUN34(VAR1, &VAR126, &VAR125);
	    if (VAR24)
		goto VAR85;

	    VAR24 = FUN35(VAR1, &VAR44->VAR94, 0, &VAR124);
	    if (VAR24) {
		const char *VAR103 = FUN22(VAR1, VAR24);
		FUN36(&VAR126);
		FUN37(&VAR125);
		FUN4(VAR1, VAR3, 0, "", VAR103);
		FUN23(VAR1, VAR103);
		goto VAR85;
	    }

	    VAR24 = FUN38(VAR1,
				       VAR124,
				       VAR131,
				       VAR125.VAR129,
				       VAR125.VAR130,
				       &VAR126.VAR132);
	    FUN37(&VAR125);
	    FUN39(VAR1, VAR124);
	    if (VAR24) {
		const char *VAR103 = FUN22(VAR1, VAR24);
		FUN36(&VAR126);
		FUN4(VAR1, VAR3, 0,
			"", VAR103);
		FUN23(VAR1, VAR103);
		goto VAR85;
	    }

	    VAR24 = FUN6(VAR1,
						     &VAR28,
						     VAR126.VAR107,
						     VAR126.VAR70);
	    FUN36(&VAR126);
	    if (VAR24)
		goto VAR85;

	    VAR24 = FUN13(VAR1, VAR28, &VAR33);
	    if (VAR24)
		goto VAR85;

	    
	    if(VAR50.VAR129) {
		krb5_pac VAR77 = NULL;
		FUN37(&VAR50);
		VAR24 = FUN7(VAR1, VAR3, VAR28, VAR118 | VAR67,
				    NULL, &VAR41, &VAR38);
		if (VAR24) {
		    const char *VAR103;

		    

		    if (VAR24 == VAR90)
			VAR24 = VAR120;
		    VAR103 = FUN22(VAR1, VAR24);
		    FUN4(VAR1, VAR3, 1,
			    "",
			    VAR33, VAR103);
		    FUN23(VAR1, VAR103);
		    goto VAR85;
		}
		VAR24 = FUN40(VAR1, VAR38, &VAR77);
		if (VAR24) {
		    FUN4(VAR1, VAR3, 0, "",
			    VAR33);
		    goto VAR85;
		}
		if (VAR77 != NULL) {
		    VAR24 = FUN41(VAR1, VAR77, VAR15->VAR15.VAR133,
					 VAR38->VAR52.VAR53,
					 VAR47, &VAR66->VAR94,
					 &VAR50);
		    FUN42(VAR1, VAR77);
		    if (VAR24) {
			FUN4(VAR1, VAR3, 0, "",
				VAR33);
			goto VAR85;
		    }
		}
	    }

	    
	    VAR24 = FUN43(VAR1, VAR3, VAR40, VAR37, VAR26);
	    if (VAR24) {
		FUN4(VAR1, VAR3, 0, ""
			""
			"",
			VAR32, VAR33, VAR31);
		goto VAR85;
	    }

	    

	    if (VAR37->VAR52.VAR67.VAR134) {
		VAR127 = "";
	    } else {
		VAR7->VAR72.VAR135 = 0;
		VAR127 = "";
	    }
	    FUN4(VAR1, VAR3, 0, ""
		    "", VAR32, VAR33, VAR31, VAR127);
	}
    }

    

    if (VAR37 != NULL
	&& VAR7->VAR82 != NULL
	&& VAR7->VAR82->VAR83 != 0
	&& VAR7->VAR72.VAR73 == 0)
    {
	int VAR136 = 0;
	VAR64 *VAR137;
	VAR74 *VAR75;

	
	if (!VAR63) {
	    VAR24 = VAR84;
	    FUN4(VAR1, VAR3, 0,
		    "",
		    VAR32, VAR31);
	    goto VAR85;
	}

	VAR75 = &VAR7->VAR82->VAR86[0];

	VAR24 = FUN9(VAR1, &VAR37->VAR52,
			      FUN44(VAR1, &VAR37->VAR52,
					    VAR75->VAR88.VAR49 ? * VAR75->VAR88.VAR49 : 0),
			      VAR75->VAR88.VAR92, &VAR137);
	if(VAR24){
	    VAR24 = VAR93; 
	    goto VAR85;
	}

	VAR24 = FUN11(VAR1, VAR75, &VAR137->VAR94, &VAR61, 0);
	if (VAR24) {
	    FUN4(VAR1, VAR3, 0,
		    ""
		    "", VAR32, VAR31);
	    goto VAR85;
	}

	VAR24 = FUN6(VAR1,
						 &VAR28,
						 VAR61.VAR95,
						 VAR61.VAR96);
	if (VAR24)
	    goto VAR85;

	VAR24 = FUN13(VAR1, VAR28, &VAR33);
	if (VAR24)
	    goto VAR85;

	VAR24 = FUN6(VAR1,
						 &VAR29,
						 VAR75->VAR69,
						 VAR75->VAR70);
	if (VAR24)
	    goto VAR85;

	VAR24 = FUN13(VAR1, VAR29, &VAR34);
	if (VAR24)
	    goto VAR85;

	
	if (VAR61.VAR67.VAR135 == 0) {
	    FUN4(VAR1, VAR3, 0,
		    ""
		    "",
		    VAR32, VAR34, VAR33, VAR31);
	    VAR24 = VAR84;
	    goto VAR85;
	}

	VAR24 = FUN45(VAR1, VAR3, VAR40,
					   VAR37, VAR36, VAR26);
	if (VAR24) {
	    FUN4(VAR1, VAR3, 0,
		    "",
		    VAR32, VAR34, VAR33, VAR31);
	    goto VAR85;
	}

	VAR24 = FUN12(VAR1, VAR3, &VAR61, VAR33);
	if (VAR24) {
	    goto VAR85;
	}

	FUN37(&VAR50);

	
	VAR24 = FUN30(VAR1, VAR3, VAR28, VAR29,
			VAR37, VAR36, VAR9,
			&VAR137->VAR94,
			VAR47, &VAR66->VAR94,
			&VAR61, &VAR50, &VAR136);
	if (VAR24) {
	    const char *VAR103 = FUN22(VAR1, VAR24);
	    FUN4(VAR1, VAR3, 0,
		    ""
		    "",
		    VAR31, VAR32, VAR34, VAR33, VAR18, VAR103);
	    FUN23(VAR1, VAR103);
	    goto VAR85;
	}

	
	VAR24 = FUN31(VAR1,
				   VAR3,
				   VAR9,
				   VAR25,
				   &VAR61,
				   NULL,
				   &VAR136);
	if (VAR24) {
	    const char *VAR103 = FUN22(VAR1, VAR24);
	    FUN4(VAR1, VAR3, 0,
		    ""
		    ""
		    "",
		    VAR31, VAR33, VAR34, VAR32, VAR18, VAR103);
	    FUN23(VAR1, VAR103);
	    goto VAR85;
	}

	if (!VAR136) {
	    VAR24 = VAR84;
	    FUN4(VAR1, VAR3, 0,
		    ""
		    ""
		    "",
		    VAR31, VAR33, VAR34, VAR32, VAR18);
	    goto VAR85;
	}

	FUN4(VAR1, VAR3, 0, ""
		"", VAR33, VAR32, VAR34, VAR31);
    }

    

    VAR24 = FUN46(VAR1, VAR3,
			  VAR37, VAR32,
			  VAR36, VAR31,
			  VAR115);
    if(VAR24)
	goto VAR85;

    if((VAR7->VAR72.VAR138 || VAR7->VAR72.VAR139) &&
       !FUN47(VAR1,
			       VAR9->VAR52.VAR53,
			       VAR36->VAR52.VAR53)){
	FUN4(VAR1, VAR3, 0, "");
	VAR24 = VAR140;
	goto VAR85;
    }

    
    if(!FUN48(VAR1, VAR3, VAR44->VAR141, VAR23)) {
	VAR24 = VAR142;
	FUN4(VAR1, VAR3, 0, "");
	goto VAR85;
    }

    
    if (VAR42) {
	PA_DATA VAR143;
	krb5_crypto VAR124;

	FUN4(VAR1, VAR3, 0,
		"", VAR42);

	VAR24 = FUN35(VAR1, &VAR48, 0, &VAR124);
	if (VAR24)
	    goto VAR85;

	VAR24 = FUN49(VAR1, VAR3, VAR124, VAR42,
				    NULL, VAR59, &VAR143.VAR128);
	FUN39(VAR1, VAR124);
	if (VAR24) {
	    FUN4(VAR1, VAR3, 0,
		    "");
	    goto VAR85;
	}
	VAR143.VAR144 = VAR145;

	VAR24 = FUN50(&VAR57, &VAR143);
	FUN37(&VAR143.VAR128);
	if (VAR24) {
	    FUN4(VAR1, VAR3, 0,
		    "");
	    goto VAR85;
	}
    }

    

    VAR24 = FUN51(VAR1,
			 VAR3,
			 VAR7,
			 VAR28,
			 VAR44,
			 VAR12,
			 VAR13,
			 VAR47,
			 &VAR48,
			 VAR49,
			 *VAR21,
			 VAR36,
			 VAR27,
 			 VAR31,
 			 VAR37,
 			 VAR25,


 			 VAR56,
 			 VAR66->VAR94.VAR111,
 			 VAR45,
			 &VAR50,
			 &VAR57,
			 VAR19,
			 VAR17);

VAR85:
    if (VAR33 != VAR32)
	    free(VAR33);
    free(VAR31);
    free(VAR32);
    free(VAR34);
    free(VAR35);
    FUN52(VAR1, VAR54);

    FUN37(&VAR50);
    FUN53(VAR1, &VAR48);
    if(VAR56)
	FUN10(VAR1, VAR56);
    if(VAR36)
	FUN10(VAR1, VAR36);
    if(VAR37)
	FUN10(VAR1, VAR37);
    if(VAR38)
	FUN10(VAR1, VAR38);

    if (VAR28 && VAR28 != VAR25)
	FUN8(VAR1, VAR28);
    FUN8(VAR1, VAR25);
    FUN8(VAR1, VAR29);
    FUN8(VAR1, VAR26);
    FUN8(VAR1, VAR30);
    free(VAR42);
    FUN54(&VAR57);

    FUN55(&VAR61);

    return VAR24;
}