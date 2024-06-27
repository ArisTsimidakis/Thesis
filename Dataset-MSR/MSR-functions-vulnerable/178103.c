static void FUN1(Ssh VAR1, int VAR2, int VAR3)
{
    int VAR4;
    struct VAR5 *VAR6;

    if (VAR2 == VAR1->VAR7)
	return;
    VAR1->VAR7 = VAR2;
    VAR1->VAR8 = VAR3;
    if (!VAR1->VAR9)
	return;
    for (VAR4 = 0; NULL != (VAR6 = FUN2(VAR1->VAR9, VAR4)); VAR4++) {
	switch (VAR6->VAR10) {
	  case VAR11:
	    
	    break;
            FUN3(VAR6->VAR12.VAR13.VAR14, VAR2);
            break;
          case VAR15:

           












            break;
          case VAR16:
            FUN4(VAR6->VAR12.VAR17.VAR18, VAR2);

static void FUN5(void *VAR19, void *VAR20, int VAR21)
{
    Ssh VAR1 = (VAR22) VAR19;

    VAR1->VAR23 = NULL;

    VAR1->VAR24 = VAR20;
    VAR1->VAR25 = VAR21;

    if (VAR1->VAR26 == 1)
	FUN6(VAR1, NULL, -1, NULL);
    else
	FUN7(VAR1, NULL, -1, NULL);
}

static void FUN8(void *VAR19, int VAR27)
{
    Ssh VAR1 = (VAR22) VAR19;

    VAR1->VAR28 = VAR27;

    if (VAR1->VAR26 == 1)
	FUN6(VAR1, NULL, -1, NULL);
    else
	FUN9(VAR1, NULL, -1, NULL);

    
    FUN10(VAR1);
}

static void FUN11(void *VAR29, void *VAR20, int VAR21)
     FUN10(VAR1);
 }
 

static void FUN11(void *VAR29, void *VAR20, int VAR21)




 {

    struct VAR5 *VAR6 = (struct VAR5 *)VAR29;

    const void *VAR30 = VAR20;


     VAR6->VAR12.VAR31.VAR32 = NULL;

    VAR6->VAR12.VAR31.VAR33--;

    if (!VAR30) {

       

       VAR30 = "";










        VAR21 = 5;
     }

    FUN12(VAR6, VAR30, VAR21);

    if (VAR20)

       FUN13(VAR20);




























     

    if (VAR6->VAR12.VAR31.VAR33 == 0 && (VAR6->VAR34 & VAR35))


























































































































         FUN14(VAR6);
 }
 




























 
    {
	char VAR36[80];
	FUN15("");
	strcpy(VAR36, "");
	VAR37->VAR38.VAR39 = NULL;
	FUN16(VAR36 + strlen(VAR36),
			sizeof(VAR36) - strlen(VAR36), &VAR37->VAR38);
	FUN15(VAR36);
    }

    VAR1->VAR40 = FUN17(VAR41);
    VAR37->VAR42 = FUN17(VAR41);
    VAR37->VAR43 = FUN17(VAR41);
    if ((VAR1->VAR44 & VAR45))
	VAR37->VAR43 &= ~(1 << VAR46);

    VAR1->VAR47 =
	VAR1->VAR40 & VAR48;
    VAR1->VAR47 |= VAR49;

    FUN18(&VAR50);
    FUN19(&VAR50, VAR37->VAR51, VAR37->VAR38.VAR52);
    FUN19(&VAR50, VAR37->VAR53, VAR37->VAR54.VAR52);
    FUN19(&VAR50, VAR55, 8);
    FUN20(VAR37->VAR56, &VAR50);

    for (VAR4 = 0; VAR4 < 32; VAR4++)
	VAR1->VAR57[VAR4] = FUN21();

    
    if (VAR37->VAR38.VAR58 > VAR37->VAR38.VAR52 * 8 ||
	VAR37->VAR54.VAR58 > VAR37->VAR54.VAR52 * 8) {
	FUN22((""));
	FUN23(0);
    }

    VAR37->VAR59 = (VAR37->VAR38.VAR52 > VAR37->VAR54.VAR52 ?
              VAR37->VAR38.VAR52 : VAR37->VAR54.VAR52);

    VAR37->VAR60 = FUN24(VAR37->VAR59, unsigned char);

    
    {
	
	int VAR59 = FUN25(&VAR37->VAR38);
	char VAR61[100];
	char *VAR62 = FUN24(VAR59, char);
	FUN26(VAR62, &VAR37->VAR38);
	FUN16(VAR61, sizeof(VAR61), &VAR37->VAR38);

        
        VAR37->VAR63 = FUN27(VAR1, VAR61, NULL, NULL);
        if (VAR37->VAR63 == 0) {          
            FUN22((""));
            FUN13(VAR62);
            FUN23(0);
        } else if (VAR37->VAR63 < 0) { 
            FUN28(VAR1, 1);
            VAR37->VAR63 = FUN29(VAR1->VAR64,
                                            VAR1->VAR65, VAR1->VAR66,
                                            "", VAR62, VAR61,
                                            VAR67, VAR1);
            FUN13(VAR62);
#ifdef VAR68
	    VAR37->VAR63 = 1;
#endif
            if (VAR37->VAR63 < 0) {
                do {
                    FUN30(0);
                    if (VAR41) {
                        FUN22((""
                                 ""));
                        FUN23(0);
                    }
                } while (VAR41 || VAR69 > 0);
                VAR37->VAR63 = VAR1->VAR28;
            }
            FUN28(VAR1, 0);

            if (VAR37->VAR63 == 0) {
                FUN31(VAR1, "",
                               NULL, 0, VAR70);
                FUN23(0);
            }
        } else {
            FUN13(VAR62);
        }
    }

    for (VAR4 = 0; VAR4 < 32; VAR4++) {
	VAR37->VAR60[VAR4] = VAR1->VAR57[VAR4];
	if (VAR4 < 16)
	    VAR37->VAR60[VAR4] ^= VAR37->VAR56[VAR4];
    }

    if (VAR37->VAR38.VAR52 > VAR37->VAR54.VAR52) {
	VAR27 = FUN32(VAR37->VAR60, 32, &VAR37->VAR54);
	if (VAR27)
	    VAR27 = FUN32(VAR37->VAR60, VAR37->VAR54.VAR52, &VAR37->VAR38);
    } else {
	VAR27 = FUN32(VAR37->VAR60, 32, &VAR37->VAR38);
	if (VAR27)
	    VAR27 = FUN32(VAR37->VAR60, VAR37->VAR38.VAR52, &VAR37->VAR54);
    }
    if (!VAR27) {
	FUN22((""));
	FUN23(0);	
    }

    FUN15("");

    {
	int VAR71 = 0, VAR72 = 0;
	const char *VAR73 = NULL;
	int VAR4;
	for (VAR4 = 0; !VAR71 && VAR4 < VAR74; VAR4++) {
	    int VAR75 = FUN33(VAR1->VAR76,
					       VAR77, VAR4);
	    if (VAR75 == VAR78) {
		
		VAR72 = 1;
	    } else if (VAR75 == VAR79) {
		
		FUN15("");
	    } else {
		switch (VAR75) {
		  case VAR80:     VAR37->VAR81 = VAR82;
					VAR73 = ""; break;
		  case VAR83: VAR37->VAR81 = VAR84;
					VAR73 = ""; break;
		  case VAR85:	VAR37->VAR81 = VAR86;
					VAR73 = ""; break;
		}
		if (VAR37->VAR42 & (1 << VAR37->VAR81))
		    VAR71 = 1;
	    }
	}
	if (!VAR71) {
	    if ((VAR37->VAR42 & (1 << VAR82)) == 0)
		FUN22((""
			 ""));
	    else
		
		FUN22((""));
	    FUN23(0);
	}

	
	if (VAR72) {
            FUN28(VAR1, 1);
	    VAR37->VAR63 = FUN34(VAR1->VAR64, "", VAR73,
			       VAR67, VAR1);
	    if (VAR37->VAR63 < 0) {
		do {
		    FUN30(0);
		    if (VAR41) {
			FUN22((""
				 ""));
			FUN23(0);
		    }
		} while (VAR41 || VAR69 > 0);
		VAR37->VAR63 = VAR1->VAR28;
	    }
            FUN28(VAR1, 0);
	    if (VAR37->VAR63 == 0) {
		FUN31(VAR1, "", NULL,
			       0, VAR70);
		FUN23(0);
	    }
        }
    }

    switch (VAR37->VAR81) {
      case VAR82:
	FUN15("");
	break;
      case VAR86:
	FUN15("");
	break;
      case VAR84:
	FUN15("");
	break;
    }

    FUN35(VAR1, VAR87,
		VAR88, VAR37->VAR81,
		VAR89, VAR55, 8,
		VAR88, (VAR37->VAR59 * 8) >> 8, VAR88, (VAR37->VAR59 * 8) & 0xFF,
		VAR89, VAR37->VAR60, VAR37->VAR59,
		VAR90, VAR1->VAR47, VAR91);

    FUN15("");

    FUN13(VAR37->VAR60);

    VAR1->VAR92 = (VAR37->VAR81 == VAR84 ? &VAR93 :
		   VAR37->VAR81 == VAR86 ? &VAR94 :
		   &VAR95);
    VAR1->VAR96 = VAR1->VAR92->FUN36();
    VAR1->VAR92->FUN37(VAR1->VAR96, VAR1->VAR57);
    FUN38(VAR1, "", VAR1->VAR92->VAR97);

    VAR1->VAR98 = FUN39();
    FUN15("");

    if (VAR37->VAR54.VAR99) {
	FUN13(VAR37->VAR54.VAR99);
	VAR37->VAR54.VAR99 = NULL;
    }
    if (VAR37->VAR54.VAR100) {
	FUN13(VAR37->VAR54.VAR100);
	VAR37->VAR54.VAR100 = NULL;
    }
    if (VAR37->VAR38.VAR99) {
	FUN13(VAR37->VAR38.VAR99);
	VAR37->VAR38.VAR99 = NULL;
    }
    if (VAR37->VAR38.VAR100) {
	FUN13(VAR37->VAR38.VAR100);
	VAR37->VAR38.VAR100 = NULL;
    }
    FUN40(VAR41);

    if (VAR41->VAR10 != VAR101) {
	FUN22((""));
	FUN23(0);
    }

    FUN15("");

    FUN41(VAR102); 
    {
	if ((VAR1->VAR103 = FUN42(VAR1->VAR76)) == NULL) {
	    int VAR27; 
	    VAR37->VAR104 = FUN43(VAR1->VAR64);
	    VAR37->VAR104->VAR105 = VAR70;
	    VAR37->VAR104->VAR106 = FUN44("");
	    FUN45(VAR37->VAR104, FUN44(""), VAR70);
	    VAR27 = FUN46(VAR37->VAR104, NULL, 0);
	    while (VAR27 < 0) {
		VAR1->VAR107 = 1;
		FUN40(!VAR41);
		VAR27 = FUN46(VAR37->VAR104, VAR108, VAR69);
		VAR1->VAR107 = 0;
	    }
	    if (!VAR27) {
		
		FUN47(VAR37->VAR104);
		FUN31(VAR1, "", NULL, 0, VAR70);
		FUN23(0);
	    }
	    VAR1->VAR103 = FUN44(VAR37->VAR104->VAR109[0]->VAR110);
	    FUN47(VAR37->VAR104);
	}

	FUN35(VAR1, VAR111, VAR112, VAR1->VAR103, VAR91);
	{
	    char *VAR113 = FUN48(""%VAR37\"", VAR1->VAR103);
	    FUN15(VAR113);
	    if (VAR114 & VAR115 &&
		(!((VAR114 & VAR116) && (VAR114 & VAR117)))) {
		FUN49(VAR1, VAR113);
		FUN49(VAR1, "");
	    }
	    FUN13(VAR113);
	}
    }

    FUN40(VAR41);

    if ((VAR37->VAR43 & (1 << VAR46)) == 0) {
	
	VAR37->VAR118 = VAR37->VAR119 = 1;
    } else {
	VAR37->VAR118 = VAR37->VAR119 = 0;
    }
    VAR37->VAR120 = VAR37->VAR121 = 0;
    
    VAR37->VAR122 = FUN50(VAR1->VAR76, VAR123);
    if (!FUN51(VAR37->VAR122)) {
	int VAR124;
	FUN38(VAR1, ""%.150s\"",
		  FUN52(VAR37->VAR122));
	VAR124 = FUN53(VAR37->VAR122);
	if (VAR124 == VAR125 ||
            VAR124 == VAR126) {
	    const char *VAR127;
	    if (FUN54(VAR37->VAR122,
			       &VAR37->VAR128, &VAR37->VAR129,
			       &VAR37->VAR130, &VAR127)) {
                VAR37->VAR131 = (VAR124 == VAR125);
                if (!VAR37->VAR131)
                    FUN38(VAR1, "");
		VAR37->VAR132 = FUN55(VAR37->VAR122,
                                                           NULL);
	    } else {
		char *VAR133;
		FUN38(VAR1, "", VAR127);
		VAR133 = FUN48(""
				   ""%.150s\"",
				   FUN52(VAR37->VAR122),
				   VAR127);
		FUN49(VAR1, VAR133);
		FUN13(VAR133);
		VAR37->VAR128 = NULL;
	    }
	} else {
	    char *VAR133;
	    FUN38(VAR1, "",
		      FUN56(VAR124));
	    VAR133 = FUN48(""%.150s\""
			       "",
			       FUN52(VAR37->VAR122),
			       FUN56(VAR124));
	    FUN49(VAR1, VAR133);
	    FUN13(VAR133);
	    VAR37->VAR128 = NULL;
	}
    } else
	VAR37->VAR128 = NULL;

    while (VAR41->VAR10 == VAR134) {
	VAR37->VAR135 = VAR136;

	if (FUN57(VAR1->VAR76, VAR137) && FUN58() && !VAR37->VAR119) {
	    
	    void *VAR138;

	    VAR37->VAR139 = VAR140;
	    VAR37->VAR119 = 1;
	    FUN15("");

	    
	    FUN59(VAR37->VAR141, 1);
	    VAR37->VAR141[4] = VAR142;
            VAR1->VAR23 = FUN60(
                VAR37->VAR141, 5, &VAR138, &VAR37->VAR143, VAR144, VAR1);
	    if (VAR1->VAR23) {
		do {
		    FUN30(0);
		    if (VAR41) {
			FUN22((""
				 ""));
			FUN23(0);
		    }
		} while (VAR41 || VAR69 > 0);
		VAR138 = VAR1->VAR24;
		VAR37->VAR143 = VAR1->VAR25;
	    }
	    VAR37->VAR145 = (unsigned char *) VAR138;
	    if (VAR37->VAR145 && VAR37->VAR143 >= 5 &&
		VAR37->VAR145[4] == VAR146) {
		VAR37->VAR147 = VAR37->VAR145 + 5;
		VAR37->VAR148 = FUN61(FUN62(VAR37->VAR147));
                if (VAR37->VAR148 < 0) {
                    FUN38(VAR1, "",
                              VAR37->VAR148);
                    VAR37->VAR148 = 0;
                }
		VAR37->VAR147 += 4;
		FUN38(VAR1, "", VAR37->VAR148);
		for (VAR37->VAR149 = 0; VAR37->VAR149 < VAR37->VAR148; VAR37->VAR149++) {
		    unsigned char *VAR150 = VAR37->VAR147;
		    VAR37->VAR147 += 4;
		    {
			int VAR151, VAR152 = VAR140;
			do {	       
			    VAR151 = VAR153
				(VAR37->VAR147, FUN61(VAR37->VAR143-(VAR37->VAR147-VAR37->VAR145)),
				 &VAR37->VAR154.VAR100);
			    if (VAR151 < 0)
				break;
			    VAR37->VAR147 += VAR151;
			    VAR151 = VAR153
				(VAR37->VAR147, FUN61(VAR37->VAR143-(VAR37->VAR147-VAR37->VAR145)),
				 &VAR37->VAR154.VAR99);
			    if (VAR151 < 0)
                                break;
			    VAR37->VAR147 += VAR151;
			    if (VAR37->VAR143 - (VAR37->VAR147-VAR37->VAR145) < 4)
				break;
			    VAR37->VAR155 = FUN61(FUN62(VAR37->VAR147));
			    VAR37->VAR147 += 4;
			    if (VAR37->VAR155 < 0 ||
                                FUN61(VAR37->VAR143 - (VAR37->VAR147-VAR37->VAR145)) <
				VAR37->VAR155)
				break;
			    VAR37->VAR156 = (char *)VAR37->VAR147;
			    VAR37->VAR147 += VAR37->VAR155;
			    VAR152 = VAR70;
			} while (0);
			if (!VAR152) {
			    FUN15("");
			    break;
			}
		    }
		    if (VAR37->VAR128) {
			if (!memcmp(VAR150, VAR37->VAR128,
				    VAR37->VAR129)) {
			    FUN38(VAR1, ""
				      "", VAR37->VAR149);
			    VAR37->VAR118 = 1;
			} else
			    
			    continue;
		    }
		    FUN38(VAR1, "", VAR37->VAR149);
		    FUN35(VAR1, VAR157,
				VAR158, VAR37->VAR154.VAR99, VAR91);
		    FUN40(VAR41);
		    if (VAR41->VAR10 != VAR159) {
			FUN15("");
			continue;
		    }
		    FUN15("");
		    if ((VAR37->VAR160 = FUN63(VAR41)) == NULL) {
			FUN22((""));
			FUN23(0);
		    }

		    {
			char *VAR161, *VAR162, *VAR27;
			void *VAR163;
			int VAR59, VAR164;
			VAR59 = 1 + 4;   
			VAR59 += FUN64(VAR37->VAR154.VAR100);
			VAR59 += FUN64(VAR37->VAR154.VAR99);
			VAR59 += FUN64(VAR37->VAR160);
			VAR59 += 16;     
			VAR59 += 4;      
			VAR161 = FUN24(4 + VAR59, char);
			FUN59(VAR161, VAR59);
			VAR162 = VAR161 + 4;
			*VAR162++ = VAR165;
			FUN59(VAR162, FUN65(VAR37->VAR154.VAR99));
			VAR162 += 4;
			VAR162 += FUN66(VAR162, VAR37->VAR154.VAR100);
			VAR162 += FUN66(VAR162, VAR37->VAR154.VAR99);
			VAR162 += FUN66(VAR162, VAR37->VAR160);
			memcpy(VAR162, VAR37->VAR56, 16);
			VAR162 += 16;
			FUN59(VAR162, 1);	
                        VAR1->VAR23 = FUN60(
                            VAR161, VAR59 + 4, &VAR163, &VAR164,
                            VAR144, VAR1);
			if (VAR1->VAR23) {
			    FUN13(VAR161);
			    do {
				FUN30(0);
				if (VAR41) {
				    FUN22((""
					     ""
					     ""));
				    FUN23(0);
				}
			    } while (VAR41 || VAR69 > 0);
			    VAR163 = VAR1->VAR24;
			    VAR164 = VAR1->VAR25;
			} else
			    FUN13(VAR161);
			VAR27 = VAR163;
			if (VAR27) {
			    if (VAR27[4] == VAR166) {
				FUN15("");
				FUN35(VAR1, VAR167,
					    VAR89, VAR27 + 5, 16,
					    VAR91);
				FUN13(VAR27);
				FUN40(VAR41);
				if (VAR41->VAR10 == VAR101) {
				    VAR168
					("");
				    if (VAR114 & VAR117) {
					FUN49(VAR1, ""
						    """);
					FUN67(VAR1, VAR37->VAR156,
						VAR37->VAR155);
					FUN49(VAR1, "" from VAR169\VAR138\VAR151");
				    }
				    VAR37->VAR139 = VAR70;
				} else
				    VAR168
					("");
			    } else {
				VAR168
				    ("");
				FUN13(VAR27);
			    }
			} else {
			    FUN15("");
			}
		    }
		    FUN68(VAR37->VAR154.VAR100);
		    FUN68(VAR37->VAR154.VAR99);
		    FUN68(VAR37->VAR160);
		    if (VAR37->VAR139)
			break;
		}
		FUN13(VAR37->VAR145);
		if (VAR37->VAR128 && !VAR37->VAR118)
		    FUN15("");
	    } else {
                FUN15("");
            }
	    if (VAR37->VAR139)
		break;
	}
	if (VAR37->VAR128 && VAR37->VAR131 &&
            !VAR37->VAR118) {
	    
	    int VAR170; 
	    if (VAR114 & VAR117)
		FUN49(VAR1, "");
	    VAR37->VAR122 = FUN50(VAR1->VAR76, VAR123);
	    FUN38(VAR1, ""%VAR37\"",
		      FUN52(VAR37->VAR122));
	    VAR37->VAR118 = 1;
	    VAR170 = VAR140;
	    while (!VAR170) {
		
		char *VAR171 = NULL;    
		const char *VAR127;
		if (!VAR37->VAR132) {
		    if (VAR114 & VAR117)
			FUN49(VAR1, "");
		    VAR171 = NULL;
		} else {
		    int VAR27; 
		    VAR37->VAR104 = FUN43(VAR1->VAR64);
		    VAR37->VAR104->VAR105 = VAR140;
		    VAR37->VAR104->VAR106 = FUN44("");
		    FUN45(VAR37->VAR104,
			       FUN48(""%.100s\"",
					 VAR37->VAR130), VAR140);
		    VAR27 = FUN46(VAR37->VAR104, NULL, 0);
		    while (VAR27 < 0) {
			VAR1->VAR107 = 1;
			FUN40(!VAR41);
			VAR27 = FUN46(VAR37->VAR104, VAR108, VAR69);
			VAR1->VAR107 = 0;
		    }
		    if (!VAR27) {
			
			FUN47(VAR37->VAR104);
			FUN31(VAR1, NULL, "",
				       0, VAR70);
			FUN23(0);
		    }
		    VAR171 = FUN44(VAR37->VAR104->VAR109[0]->VAR110);
		    FUN47(VAR37->VAR104);
		}
		
		VAR37->VAR122 = FUN50(VAR1->VAR76, VAR123);
		VAR27 = FUN69(VAR37->VAR122, &VAR37->VAR154, VAR171,
				 &VAR127);
		if (VAR171) {
		    FUN70(VAR171, strlen(VAR171));
		    FUN13(VAR171);
		}
		if (VAR27 == 1) {
		    
		    VAR170 = VAR70;
		} else if (VAR27 == 0) {
		    FUN49(VAR1, "");
		    FUN49(VAR1, FUN52(VAR37->VAR122));
		    FUN49(VAR1, "");
		    FUN49(VAR1, VAR127);
		    FUN49(VAR1, "");
		    VAR170 = VAR140;
		    break;	       
		} else if (VAR27 == -1) {
		    FUN49(VAR1, ""); 
		    VAR170 = VAR140;
		    
		} else {
		    assert(0 && "");
		    VAR170 = VAR140;   
		}
	    }

	    if (VAR170) {

		
		FUN35(VAR1, VAR157,
			    VAR158, VAR37->VAR154.VAR99, VAR91);

		FUN40(VAR41);
		if (VAR41->VAR10 == VAR134) {
		    FUN49(VAR1, "");
		    continue;	       
		}
		if (VAR41->VAR10 != VAR159) {
		    FUN22((""));
		    FUN23(0);
		}

		{
		    int VAR4;
		    unsigned char VAR172[32];
		    Bignum VAR160, VAR145;

		    if ((VAR160 = FUN63(VAR41)) == NULL) {
			FUN22((""));
			FUN23(0);
		    }
		    VAR145 = FUN71(VAR160, &VAR37->VAR154);
		    FUN68(VAR37->VAR154.VAR173);

		    for (VAR4 = 0; VAR4 < 32; VAR4++) {
			VAR172[VAR4] = FUN72(VAR145, 31 - VAR4);
		    }

		    FUN18(&VAR50);
		    FUN19(&VAR50, VAR172, 32);
		    FUN19(&VAR50, VAR37->VAR56, 16);
		    FUN20(VAR172, &VAR50);

		    FUN35(VAR1, VAR167,
				VAR89, VAR172, 16, VAR91);

		    FUN68(VAR160);
		    FUN68(VAR145);
		}

		FUN40(VAR41);
		if (VAR41->VAR10 == VAR134) {
		    if (VAR114 & VAR117)
			FUN49(VAR1, ""
				    "");
		    continue;	       
		} else if (VAR41->VAR10 != VAR101) {
		    FUN22((""));
		    FUN23(0);
		}

		break;		       
	    }

	}

	
	VAR37->VAR104 = FUN43(VAR1->VAR64);

	if (FUN57(VAR1->VAR76, VAR174) &&
	    (VAR37->VAR43 & (1 << VAR175)) &&
	    !VAR37->VAR120) {
	    VAR37->VAR135 = VAR176;
	    FUN15("");
	    FUN35(VAR1, VAR177, VAR91);
	    FUN40(VAR41);
	    if (VAR41->VAR10 != VAR178) {
		FUN15("");
		if (VAR114 & VAR115)
		    FUN49(VAR1, "");
		VAR37->VAR120 = 1;
		continue;
	    } else {
		char *VAR160;
		int VAR179;
		char *VAR180, *VAR181;

		FUN73(VAR41, &VAR160, &VAR179);
		if (!VAR160) {
		    FUN22((""));
		    FUN23(0);
		}
		FUN15("");
		VAR37->VAR104->VAR105 = VAR70;
		VAR37->VAR104->VAR106 = FUN44("");
		
		if (memchr(VAR160, '', VAR179)) {
		    VAR180 = FUN44("");
		    VAR181 = FUN48("", VAR179, VAR160);
		} else {
		    VAR180 = FUN48("", VAR179, VAR160);
		    VAR181 = FUN44("");
		}
		VAR37->VAR104->VAR182 =
		    FUN48("",
			      (*VAR180) ? "" : "",
			      VAR180);
		VAR37->VAR104->VAR183 = VAR70;
		FUN45(VAR37->VAR104, VAR181, VAR140);
		FUN13(VAR180);
	    }
	}
	if (FUN57(VAR1->VAR76, VAR174) &&
	    (VAR37->VAR43 & (1 << VAR184)) &&
	    !VAR37->VAR121) {
	    VAR37->VAR135 = VAR185;
	    FUN15("");
	    FUN35(VAR1, VAR186, VAR91);
	    FUN40(VAR41);
	    if (VAR41->VAR10 != VAR187) {
		FUN15("");
		FUN49(VAR1, "");
		VAR37->VAR121 = 1;
		continue;
	    } else {
		char *VAR160;
		int VAR179;
		char *VAR180, *VAR181;

		FUN73(VAR41, &VAR160, &VAR179);
		if (!VAR160) {
		    FUN22((""));
		    FUN23(0);
		}
		FUN15("");
		VAR37->VAR104->VAR105 = VAR70;
		VAR37->VAR104->VAR106 = FUN44("");
		VAR37->VAR104->VAR188 = VAR140;
		
		if (memchr(VAR160, '', VAR179)) {
		    VAR180 = FUN44("");
		    VAR181 = FUN48("", VAR179, VAR160);
		} else {
		    VAR180 = FUN48("", VAR179, VAR160);
		    VAR181 = FUN44("");
		}
		VAR37->VAR104->VAR182 =
		    FUN48("",
			      (*VAR180) ? "" : "",
			      VAR180);
		VAR37->VAR104->VAR183 = VAR70;
		FUN45(VAR37->VAR104, VAR181, VAR140);
		FUN13(VAR180);
	    }
	}
	if (VAR37->VAR135 == VAR136) {
	    if ((VAR37->VAR43 & (1 << VAR189)) == 0) {
		FUN22((""));
		FUN23(0);
	    }
	    VAR37->VAR104->VAR105 = VAR70;
	    VAR37->VAR104->VAR106 = FUN44("");
	    FUN45(VAR37->VAR104, FUN48("",
						VAR1->VAR103, VAR1->VAR65),
		       VAR140);
	}

	
	{
	    int VAR27; 
	    VAR27 = FUN46(VAR37->VAR104, NULL, 0);
	    while (VAR27 < 0) {
		VAR1->VAR107 = 1;
		FUN40(!VAR41);
		VAR27 = FUN46(VAR37->VAR104, VAR108, VAR69);
		VAR1->VAR107 = 0;
	    }
	    if (!VAR27) {
		
		FUN47(VAR37->VAR104);
		FUN31(VAR1, NULL, "", 0, VAR70);
		FUN23(0);
	    }
	}

	if (VAR37->VAR135 == VAR136) {
	    
	    if (!(VAR1->VAR44 & VAR190) &&
	        !(VAR1->VAR44 & VAR191)) {
		
		int VAR192, VAR193, VAR194, VAR4;
		char *VAR195;

		VAR194 = strlen(VAR37->VAR104->VAR109[0]->VAR110);
		if (VAR194 < 16) {
		    VAR192 = 0;    
		    VAR193 = 15;
		} else {
		    VAR192 = VAR194 & ~7;
		    VAR193 = VAR192 + 7;
		}

		assert(VAR194 >= VAR192 && VAR194 <= VAR193);

		VAR195 = FUN24(VAR193 + 1, char);

		for (VAR4 = VAR192; VAR4 <= VAR193; VAR4++) {
		    if (VAR4 == VAR194) {
			FUN74(VAR1, VAR37->VAR135,
                                     VAR112,VAR37->VAR104->VAR109[0]->VAR110,
				     VAR91);
		    } else {
			for (VAR196 = 0; VAR196 < VAR4; VAR196++) {
			    do {
				VAR195[VAR196] = FUN21();
			    } while (VAR195[VAR196] == '');
			}
			VAR195[VAR4] = '';
			FUN74(VAR1, VAR197,
				     VAR112, VAR195, VAR91);
		    }
		}
		FUN15("");
		FUN75(VAR1);
		FUN13(VAR195);
	    } 
	    else if (!(VAR1->VAR44 & VAR191)) {
		
		char VAR198[64];
		char *VAR199;
		int VAR59;

		VAR59 = strlen(VAR37->VAR104->VAR109[0]->VAR110);
		if (VAR59 < sizeof(VAR198)) {
		    VAR199 = VAR198;
		    strcpy(VAR198, VAR37->VAR104->VAR109[0]->VAR110);
		    VAR59++;	       
		    while (VAR59 < sizeof(VAR198)) {
			VAR198[VAR59++] = (char) FUN21();
		    }
		} else {
		    VAR199 = VAR37->VAR104->VAR109[0]->VAR110;
		}
		FUN15("");
		FUN35(VAR1, VAR37->VAR135,
			    VAR90, VAR59, VAR89, VAR199, VAR59,
			    VAR91);
	    } else {
		
		int VAR59;
		VAR59 = strlen(VAR37->VAR104->VAR109[0]->VAR110);
		FUN15("");
		FUN35(VAR1, VAR37->VAR135,
                            VAR90, VAR59,
			    VAR89, VAR37->VAR104->VAR109[0]->VAR110, VAR59,
			    VAR91);
	    }
	} else {
	    FUN35(VAR1, VAR37->VAR135,
			VAR112, VAR37->VAR104->VAR109[0]->VAR110,
			VAR91);
	}
	FUN15("");
	FUN47(VAR37->VAR104);
	FUN40(VAR41);
	if (VAR41->VAR10 == VAR134) {
	    if (VAR114 & VAR117)
		FUN49(VAR1, "");
	    FUN15("");
	} else if (VAR41->VAR10 != VAR101) {
	    FUN22(("", VAR41->VAR10));
	    FUN23(0);
	}
    }

    
    if (VAR37->VAR128) {
	FUN13(VAR37->VAR128);
	FUN13(VAR37->VAR130);
    }

    FUN15("");

    FUN76(1);
}

static void FUN77(struct VAR5 *VAR6)
{
    Ssh VAR1 = VAR6->VAR1;
    assert(VAR6->VAR200);          
    if (VAR6->VAR201)
        return;                 
    if (VAR1->VAR26 == 2 && FUN78(&VAR6->VAR202.VAR203.VAR204) > 0)
        return;              

    VAR6->VAR200 = VAR140;            
    if (VAR1->VAR26 == 1) {
        FUN35(VAR1, VAR205, VAR90, VAR6->VAR206,
                    VAR91);
        VAR6->VAR34 |= VAR207;
    } else {
        struct VAR208 *VAR209;
        VAR209 = FUN79(VAR210);
        FUN80(VAR209, VAR6->VAR206);
        FUN81(VAR1, VAR209);
        VAR6->VAR34 |= VAR207;
	FUN82(VAR6);
    }
}

VAR211 *FUN83(struct VAR5 *VAR6)
{
    Ssh VAR1 = VAR6->VAR1;
    return VAR1->VAR76;
}

void FUN14(struct VAR5 *VAR6)
{
    Ssh VAR1 = VAR6->VAR1;

    if (VAR1->VAR212 == VAR213)
	return;

    if (VAR6->VAR34 & VAR207)
        return;

    VAR6->VAR200 = VAR70;
    FUN77(VAR6);
}

void FUN84(struct VAR5 *VAR6, const char *VAR214)
{
    Ssh VAR1 = VAR6->VAR1;
    char *VAR215;

    if (VAR1->VAR212 == VAR213)
	return;

    VAR215 = FUN48("", VAR214);
    FUN85(VAR6, VAR215);
    FUN13(VAR215);
    VAR6->VAR200 = VAR140;   

    FUN82(VAR6);
}

int FUN86(struct VAR5 *VAR6, char *VAR216, int VAR59)
{
    Ssh VAR1 = VAR6->VAR1;

    if (VAR1->VAR212 == VAR213)
	return 0;

    return FUN12(VAR6, VAR216, VAR59);
}

void FUN87(struct VAR5 *VAR6, int VAR3)
{
    Ssh VAR1 = VAR6->VAR1;

    if (VAR1->VAR212 == VAR213)
	return;

    FUN88(VAR6, VAR3);
}

static void FUN89(Ssh VAR1, struct VAR208 *VAR41)
{
    struct VAR217 *VAR218 = VAR1->VAR219;

    assert(VAR218 != NULL);

    assert(VAR41->VAR10 == VAR218->VAR220 || VAR41->VAR10 == VAR218->VAR221);

    if (VAR218->VAR220 > 0) {
	assert(VAR1->VAR222[VAR218->VAR220] == VAR223);
	VAR1->VAR222[VAR218->VAR220] = VAR1->VAR224;
    }
    if (VAR218->VAR221 > 0) {
	assert(VAR1->VAR222[VAR218->VAR221] == VAR223);
	VAR1->VAR222[VAR218->VAR221] = VAR1->VAR225;
    }

    if (VAR218->VAR226) {
	VAR1->VAR219 = VAR218->VAR226;

	if (VAR1->VAR219->VAR220 > 0) {
	    VAR1->VAR224 = VAR1->VAR222[VAR1->VAR219->VAR220];
	    VAR1->VAR222[VAR1->VAR219->VAR220] = VAR223;
	}
	if (VAR1->VAR219->VAR221 > 0) {
	    VAR1->VAR225 = VAR1->VAR222[VAR1->VAR219->VAR221];
	    VAR1->VAR222[VAR1->VAR219->VAR221] = VAR223;
	}
    } else {
	VAR1->VAR219 = VAR1->VAR227 = NULL;
    }

    VAR218->FUN90(VAR1, VAR41, VAR218->VAR228);

    FUN13(VAR218);
}

static void FUN91(Ssh VAR1, int VAR220, int VAR221,
			      chandler_fn_t VAR229, void *VAR228)
{
    struct VAR217 *VAR218;

    VAR218 = FUN92(struct VAR217);
    VAR218->VAR220 = VAR220;
    VAR218->VAR221 = VAR221;
    VAR218->VAR229 = VAR229;
    VAR218->VAR228 = VAR228;
    VAR218->VAR226 = NULL;

    if (VAR1->VAR227 == NULL) {
	VAR1->VAR219 = VAR218;

	if (VAR218->VAR220 > 0) {
	    VAR1->VAR224 = VAR1->VAR222[VAR1->VAR219->VAR220];
	    VAR1->VAR222[VAR218->VAR220] = VAR223;
	}
	if (VAR218->VAR221 > 0) {
	    VAR1->VAR225 = VAR1->VAR222[VAR1->VAR219->VAR221];
	    VAR1->VAR222[VAR218->VAR221] = VAR223;
	}
    } else {
	VAR1->VAR227->VAR226 = VAR218;
    }
    VAR1->VAR227 = VAR218;
}

static void FUN93(Ssh VAR1, struct VAR208 *VAR41, void *VAR228)
{
    struct VAR230 *VAR231, *VAR18 = (struct VAR230 *)VAR228;

    if (VAR41->VAR10 == (VAR1->VAR26 == 1 ? VAR101 :
			VAR232)) {
	FUN38(VAR1, "",
		  VAR18->VAR233);
    } else {
	FUN38(VAR1, "",
		  VAR18->VAR233);

	VAR231 = FUN94(VAR1->VAR234, VAR18);
	assert(VAR231 == VAR18);
	VAR18->VAR235->VAR236 = NULL;
	FUN95(VAR18);
    }
}

int FUN96(Ssh VAR1, const char *VAR237, int VAR238,
                               void *VAR239)
{
    struct VAR230 *VAR18 = FUN92(struct VAR230);
    VAR18->VAR240 = NULL;
    VAR18->VAR241 = 0;
    VAR18->VAR239 = VAR239;
    VAR18->VAR237 = FUN44(VAR237);
    VAR18->VAR238 = VAR238;
    VAR18->VAR233 = NULL;
    if (!VAR1->VAR234) {
        assert(VAR1->VAR26 == 2);
        VAR1->VAR234 = FUN97(VAR242);
    }
    if (FUN98(VAR1->VAR234, VAR18) != VAR18) {
        FUN13(VAR18->VAR237);
        FUN13(VAR18);
        return VAR140;
    }
    return VAR70;
}

static void FUN99(Ssh VAR1, struct VAR208 *VAR41,
                                                void *VAR228)
{
    FUN100(VAR228, VAR41->VAR10,
                              VAR41->VAR243, VAR41->VAR244);
}

void FUN101(Ssh VAR1, void *VAR239)
{
    FUN91(VAR1, VAR232, VAR245,
                      VAR246, VAR239);
}

static void FUN102(Ssh VAR1, VAR211 *VAR76)
{
    struct VAR247 *VAR248;
    int VAR4;
    char *VAR154, *VAR249;

    if (!VAR1->VAR250) {
	VAR1->VAR250 = FUN97(VAR251);
    } else {
	
	struct VAR247 *VAR248;
	int VAR4;
	for (VAR4 = 0; (VAR248 = FUN2(VAR1->VAR250, VAR4)) != NULL; VAR4++)
	    VAR248->VAR252 = VAR253;
    }

    for (VAR249 = FUN103(VAR76, VAR254, NULL, &VAR154);
	 VAR249 != NULL;
	 VAR249 = FUN103(VAR76, VAR254, VAR154, &VAR154)) {
	char *VAR255, *VAR256, *VAR257, *VAR258;
	char VAR259, VAR10;
	int VAR238,VAR241,VAR260,VAR261;
	char *VAR262, *VAR263, *VAR264, *VAR265;

	VAR255 = VAR154;

	VAR259 = '';
	VAR10 = '';
	if (*VAR255 == '' || *VAR255 == '' || *VAR255 == '')
	    VAR259 = *VAR255++;
	if (*VAR255 == '' || *VAR255 == '')
	    VAR10 = *VAR255++;

	if ((VAR256 = FUN104(VAR255, '')) != NULL) {
	    
	    char *VAR266 = FUN48("", (int)(VAR256 - VAR255), VAR255);
            VAR264 = FUN105(VAR266);
            FUN13(VAR266);
	    VAR262 = VAR256+1;
	} else {
	    VAR264 = NULL;
	    VAR262 = VAR255;
	}
	VAR238 = FUN106(VAR262);
	VAR260 = 0;
	if (VAR238 == 0) {
	    VAR260 = 1;
	    VAR238 = FUN107(VAR262);
	    if (!VAR238) {
		FUN38(VAR1, ""
			  ""%VAR37\"", VAR262);
	    }
	}

	if (VAR10 == '' && !strcmp(VAR249, "")) {
            
	    VAR265 = NULL;
	    VAR263 = NULL;
	    VAR241 = -1;
	    VAR261 = 0;
            VAR10 = '';
        } else {
            
	    VAR257 = VAR249;
	    VAR258 = VAR257 + FUN108(VAR257, "");
	    VAR265 = FUN48("", (int)(VAR258 - VAR257), VAR257);
	    if (*VAR258)
		VAR258++;
	    VAR263 = VAR258;
	    VAR241 = FUN106(VAR263);
	    VAR261 = 0;
	    if (VAR241 == 0) {
		VAR261 = 1;
		VAR241 = FUN107(VAR263);
		if (!VAR241) {
		    FUN38(VAR1, ""
			      ""%VAR37\"", VAR263);
		}
	    }
	}

	if (VAR238 && VAR241) {
	    
	    struct VAR247 *VAR235, *VAR267;

	    VAR235 = FUN92(struct VAR247);
	    VAR235->VAR10 = VAR10;
	    VAR235->VAR264 = VAR264;
	    VAR235->VAR260 = VAR260 ? FUN44(VAR262) : NULL;
	    VAR235->VAR238 = VAR238;
	    VAR235->VAR268 = VAR265;
	    VAR235->VAR261 = VAR261 ? FUN44(VAR263) : NULL;
	    VAR235->VAR241 = VAR241;
	    VAR235->VAR269 = NULL;
	    VAR235->VAR236 = NULL;
	    VAR235->VAR270 = (VAR259 == '' ? VAR271 :
				    VAR259 == '' ? VAR272 :
				    VAR273);

	    VAR267 = FUN98(VAR1->VAR250, VAR235);
	    if (VAR267 != VAR235) {
		if (VAR267->VAR252 == VAR253) {
		    
		    VAR267->VAR252 = VAR274;
		}
		
		FUN109(VAR235);
	    } else {
		VAR235->VAR252 = VAR275;
	    }
	} else {
	    FUN13(VAR264);
	    FUN13(VAR265);
	}
    }

    
    for (VAR4 = 0; (VAR248 = FUN2(VAR1->VAR250, VAR4)) != NULL; VAR4++)
	if (VAR248->VAR252 == VAR253) {
	    char *VAR276;

	    VAR276 = FUN48("",
				VAR248->VAR10 == '' ? "" :
				VAR248->VAR10 == '' ? "" : "",
				VAR248->VAR264 ? VAR248->VAR264 : "",
				VAR248->VAR264 ? "" : "",
				VAR248->VAR238);

	    if (VAR248->VAR10 != '') {
		char *VAR221 = FUN48("", VAR276,
				       VAR248->VAR268, VAR248->VAR241);
		FUN13(VAR276);
		VAR276 = VAR221;
	    }

	    FUN38(VAR1, "", VAR276);
	    FUN13(VAR276);

	    
	    if (VAR248->VAR236) {
		struct VAR230 *VAR231 = VAR248->VAR236;
		struct VAR208 *VAR209;

		
		if (VAR1->VAR26 == 1) {
		    
		} else {
		    VAR209 = FUN79(VAR277);
		    FUN110(VAR209, "");
		    FUN111(VAR209, 0);
		    if (VAR248->VAR264) {
			FUN110(VAR209, VAR248->VAR264);
		    } else if (FUN57(VAR76, VAR278)) {
			
			FUN110(VAR209, "");
		    } else {
			FUN110(VAR209, "");
		    }
		    FUN80(VAR209, VAR248->VAR238);
		    FUN81(VAR1, VAR209);
		}

		FUN94(VAR1->VAR234, VAR231);
		FUN95(VAR231);
	    } else if (VAR248->VAR269) {
		FUN112(VAR248->VAR269);
	    }

	    FUN113(VAR1->VAR250, VAR4);
	    FUN109(VAR248);
	    VAR4--;		       
	}

    
    for (VAR4 = 0; (VAR248 = FUN2(VAR1->VAR250, VAR4)) != NULL; VAR4++)
	if (VAR248->VAR252 == VAR275) {
	    char *VAR233, *VAR279;
	    VAR233 = FUN48("",
				  VAR248->VAR264 ? VAR248->VAR264 : "",
				  VAR248->VAR264 ? "" : "",
				  VAR248->VAR260 ? VAR248->VAR260 : "",
				  VAR248->VAR260 ? "" : "",
				  VAR248->VAR238,
				  VAR248->VAR260 ? "" : "");
	    if (VAR248->VAR10 == '') {
		VAR279 = NULL;
	    } else {
		VAR279 = FUN48("",
				      VAR248->VAR268,
				      VAR248->VAR261 ? VAR248->VAR261 : "",
				      VAR248->VAR261 ? "" : "",
				      VAR248->VAR241,
				      VAR248->VAR261 ? "" : "");
	    }

	    if (VAR248->VAR10 == '') {
                char *VAR214 = FUN114(VAR248->VAR268, VAR248->VAR241,
                                       VAR248->VAR264, VAR248->VAR238,
                                       VAR1, VAR76, &VAR248->VAR269,
                                       VAR248->VAR270);

		FUN38(VAR1, "",
			  VAR248->VAR270 == VAR271 ? "" :
			  VAR248->VAR270 == VAR272 ? "" : "",
			  VAR233, VAR279,
			  VAR214 ? "" : "", VAR214 ? VAR214 : "");
                if (VAR214)
                    FUN13(VAR214);
	    } else if (VAR248->VAR10 == '') {
		char *VAR214 = FUN114(NULL, -1, VAR248->VAR264, VAR248->VAR238,
                                       VAR1, VAR76, &VAR248->VAR269,
                                       VAR248->VAR270);

		FUN38(VAR1, "",
			  VAR248->VAR270 == VAR271 ? "" :
			  VAR248->VAR270 == VAR272 ? "" : "",
			  VAR233,
			  VAR214 ? "" : "", VAR214 ? VAR214 : "");

                if (VAR214)
                    FUN13(VAR214);
	    } else {
		struct VAR230 *VAR18;

		
		if (!VAR1->VAR234) {
		    if (VAR1->VAR26 == 1)
			VAR1->VAR234 = FUN97(VAR280);
		    else
			VAR1->VAR234 = FUN97(VAR242);
		}

		VAR18 = FUN92(struct VAR230);
                VAR18->VAR239 = NULL;
                VAR18->VAR240 = FUN44(VAR248->VAR268);
		VAR18->VAR241 = VAR248->VAR241;
                if (VAR248->VAR264) {
                    VAR18->VAR237 = FUN44(VAR248->VAR264);
                } else if (FUN57(VAR76, VAR278)) {
                    VAR18->VAR237 = FUN44("");
                } else {
                    VAR18->VAR237 = FUN44("");
                }
		VAR18->VAR238 = VAR248->VAR238;
		if (FUN98(VAR1->VAR234, VAR18) != VAR18) {
		    FUN38(VAR1, "",
			      VAR248->VAR268, VAR248->VAR241);
		    FUN13(VAR18);
		} else {
		    FUN38(VAR1, ""
			      "", VAR233, VAR279);

		    VAR18->VAR233 = VAR233;
		    VAR233 = NULL;
		    VAR248->VAR236 = VAR18;
		    VAR18->VAR235 = VAR248;

		    if (VAR1->VAR26 == 1) {
			FUN35(VAR1, VAR281,
				    VAR90, VAR248->VAR238,
				    VAR112, VAR248->VAR268,
				    VAR90, VAR248->VAR241,
				    VAR91);
			FUN91(VAR1, VAR101,
					  VAR134,
					  VAR282, VAR18);
		    } else {
			struct VAR208 *VAR209;
			VAR209 = FUN79(VAR277);
			FUN110(VAR209, "");
			FUN111(VAR209, 1);
			FUN110(VAR209, VAR18->VAR237);
			FUN80(VAR209, VAR18->VAR238);
			FUN81(VAR1, VAR209);

			FUN91(VAR1, VAR232,
					  VAR245,
					  VAR282, VAR18);
		    }
		}
	    }
	    FUN13(VAR233);
	    FUN13(VAR279);
	}
}

static void FUN115(Ssh VAR1, struct VAR208 *VAR41)
{
    char *VAR198;
    int VAR283, VAR3;

    FUN73(VAR41, &VAR198, &VAR283);
    if (VAR198 == NULL) {
	FUN22((""));
	return;
    }

    VAR3 = FUN116(VAR1->VAR64, VAR41->VAR10 == VAR284,
			   VAR198, VAR283);
    if (!VAR1->VAR285 && VAR3 > VAR286) {
	VAR1->VAR285 = 1;
	FUN117(VAR1, +1);
    }
}

static void FUN118(Ssh VAR1, struct VAR208 *VAR41)
{
    
    struct VAR5 *VAR6;
    int VAR206 = FUN17(VAR41);

    FUN15("");
    
    if (!VAR1->VAR287) {
	FUN35(VAR1, VAR288,
		    VAR90, VAR206, VAR91);
	FUN15("");
    } else {
	VAR6 = FUN92(struct VAR5);
	VAR6->VAR1 = VAR1;

	FUN119(VAR6);
	VAR6->VAR12.VAR13.VAR14 = FUN120(VAR1->VAR289, VAR6, NULL, -1);
        VAR6->VAR206 = VAR206;
        VAR6->VAR201 = VAR140;
        VAR6->VAR10 = VAR290;	
        FUN35(VAR1, VAR291,
                    VAR90, VAR6->VAR206, VAR90,
                    VAR6->VAR292, VAR91);
        FUN15("");
    }
}

static void FUN121(Ssh VAR1, struct VAR208 *VAR41)
{
    
    struct VAR5 *VAR6;
    int VAR206 = FUN17(VAR41);

    
    if (!VAR1->VAR293) {
	FUN35(VAR1, VAR288,
		    VAR90, VAR206, VAR91);
    } else {
	VAR6 = FUN92(struct VAR5);
	VAR6->VAR1 = VAR1;
	FUN119(VAR6);
	VAR6->VAR206 = VAR206;
	VAR6->VAR201 = VAR140;
	VAR6->VAR10 = VAR15;	
	VAR6->VAR12.VAR31.VAR294 = 0;
	VAR6->VAR12.VAR31.VAR276 = NULL;
	VAR6->VAR12.VAR31.VAR32 = NULL;
	VAR6->VAR12.VAR31.VAR33 = 0;
	FUN35(VAR1, VAR291,
		    VAR90, VAR6->VAR206, VAR90, VAR6->VAR292,
		    VAR91);
    }
}

static void FUN122(Ssh VAR1, struct VAR208 *VAR41)
{
    
    struct ssh_rportfwd VAR18, *VAR295;
    int VAR206;
    int VAR296, VAR297;
    char *VAR265;
    char *VAR214;

    VAR206 = FUN17(VAR41);
    FUN73(VAR41, &VAR265, &VAR296);
    VAR297 = FUN17(VAR41);

    VAR18.VAR240 = FUN48("", VAR296, FUN123(VAR265));
    VAR18.VAR241 = VAR297;
    VAR295 = FUN124(VAR1->VAR234, &VAR18, NULL);

    if (VAR295 == NULL) {
	FUN38(VAR1, "",
		  VAR18.VAR240, VAR297);
	FUN35(VAR1, VAR288,
		    VAR90, VAR206, VAR91);
    } else {
        struct VAR5 *VAR6 = FUN92(struct VAR5);
        VAR6->VAR1 = VAR1;

	FUN38(VAR1, "",
		  VAR18.VAR240, VAR297);
	VAR214 = FUN125(&VAR6->VAR12.VAR17.VAR18, VAR18.VAR240, VAR297,
                          VAR6, VAR1->VAR76, VAR295->VAR235->VAR270);
	if (VAR214 != NULL) {
	    FUN38(VAR1, "", VAR214);
            FUN13(VAR214);
	    FUN13(VAR6);
	    FUN35(VAR1, VAR288,
			VAR90, VAR206, VAR91);
	} else {
	    FUN119(VAR6);
	    VAR6->VAR206 = VAR206;
	    VAR6->VAR201 = VAR140;
	    VAR6->VAR10 = VAR16;	
	    FUN35(VAR1, VAR291,
			VAR90, VAR6->VAR206, VAR90,
			VAR6->VAR292, VAR91);
	    FUN15("");
	}
    }

    FUN13(VAR18.VAR240);
}

static void FUN126(Ssh VAR1, struct VAR208 *VAR41)
{
    struct VAR5 *VAR6;

    VAR6 = FUN127(VAR1, VAR41);
    if (VAR6 && VAR6->VAR10 == VAR16) {
	VAR6->VAR206 = FUN17(VAR41);
	VAR6->VAR201 = VAR140;
	VAR6->VAR298 = 0;
	FUN128(VAR6->VAR12.VAR17.VAR18);
    }

    if (VAR6 && VAR6->VAR200) {
	
        FUN77(VAR6);
    }
}

        VAR6->VAR206 = VAR206;
        VAR6->VAR201 = VAR140;
        VAR6->VAR10 = VAR15;   

       VAR6->VAR12.VAR31.VAR294 = 0;

       VAR6->VAR12.VAR31.VAR276 = NULL;
        VAR6->VAR12.VAR31.VAR32 = NULL;

       VAR6->VAR12.VAR31.VAR33 = 0;


        FUN35(VAR1, VAR291,
                    VAR90, VAR6->VAR206, VAR90, VAR6->VAR292,
                    VAR91);
	FUN94(VAR1->VAR9, VAR6);
	FUN13(VAR6);
    }
}