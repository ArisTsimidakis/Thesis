int FUN1(VAR1  *VAR2,
                           char  *VAR3,
                           int    VAR4,
                           char  *VAR5,
                           char  *VAR6,
                           int    VAR7,
                           char **VAR8,
                           int   *buffer_len VAR9)
{
	char *VAR10;
	smart_str VAR11 = {0};
	smart_str VAR12 = {0};
	int VAR13, VAR14;
	VAR15 *VAR16 = NULL;
	VAR17 *VAR18;
	VAR1 **VAR19, **VAR20;
	int VAR21 = 0;
	int VAR22;
	char *VAR23, *VAR24, *VAR25, *VAR26, *VAR27;
	int VAR28, VAR29, VAR30;
	char *VAR31;
	int VAR32;
	int VAR33;
	int VAR34 = 0;
	long VAR35 = 20;
	char *VAR36;
	char *VAR37 = NULL;
	zend_bool VAR38;
	VAR39 *VAR40 = NULL;
	zend_bool VAR41 = 0;
	zend_bool VAR42 = 0;
	zend_bool VAR43 = 0;

	if (VAR2 == NULL || FUN2(VAR2) != VAR44) {
		return VAR45;
	}

  VAR10 = VAR3;
  VAR13 = VAR4;
	
	if (FUN3(FUN4(VAR2), "", sizeof(""), (void **)&VAR20) == VAR46 && FUN5(VAR20) == VAR47) {
		int VAR48 = FUN6(VAR20) & 0x0f;
		int VAR49  = FUN6(VAR20) & VAR50;

		if (VAR48 > 9) {VAR48 = 9;}
		
	  if ((FUN6(VAR20) & VAR51) != 0) {
			FUN7(&VAR12,"");
	  }
	  if (VAR48 > 0) {
			zval VAR52;
			zval VAR53;
 			zval VAR54, VAR55, VAR56;
			VAR1 *VAR57[3];
			int VAR58;

			VAR57[0] = &VAR54;
			FUN8(VAR57[0]);
			VAR57[1] = &VAR55;
			FUN8(VAR57[1]);
			VAR57[2] = &VAR56;
			FUN8(VAR57[2]);
			FUN9(VAR57[0], VAR3, VAR4, 0);
			FUN10(VAR57[1], VAR48);
	    if (VAR49 == VAR50) {
	    	VAR58 = 2;
				FUN11(&VAR52, "", 0);
				FUN7(&VAR12,"");
	    } else {
	      VAR58 = 3;
				FUN11(&VAR52, "", 0);
				FUN7(&VAR12,"");
				FUN10(VAR57[2], 0x1f);
	    }
			if (FUN12(FUN13(VAR59), (VAR1**)NULL, &VAR52, &VAR53, VAR58, params VAR60) == VAR46 &&
			    FUN14(VAR53) == VAR61) {
				VAR10 = FUN15(VAR53);
				VAR13 = FUN16(VAR53);
			} else {
				if (VAR10 != VAR3) {FUN17(VAR10);}
				FUN18(&VAR12);
				return VAR45;
			}
	  }
	}

	if (FUN3(FUN4(VAR2), "", sizeof(""), (void **)&VAR20) == VAR46) {
		FUN19(VAR18,VAR20);
		if (FUN3(FUN4(VAR2), "", sizeof(""), (void **)&VAR20) == VAR46 && FUN5(VAR20) == VAR47) {
			VAR21 = FUN6(VAR20);
		}
	} else {
		VAR18 = NULL;
	}

	if (VAR5 != NULL && VAR5[0] != '') {
		VAR16 = FUN20(VAR5);
	}

	if (VAR46 == FUN3(FUN4(VAR2),
			"", sizeof(""), (void**)&VAR20)) {
		VAR40 = FUN21(*VAR20, 0);
	}

	if (VAR40 && 
		FUN22(VAR40, "", "", &VAR20) == VAR46) {
		if (FUN5(VAR20) != VAR61 || !FUN23(FUN24(VAR20), FUN25(VAR20), &VAR35, NULL, 1)) {
			if (FUN5(VAR20) == VAR47)
				VAR35 = FUN6(VAR20);
		}
	}

VAR62:
	if (VAR16 == NULL || VAR16->VAR63 == NULL) {
	  if (VAR16 != NULL) {FUN26(VAR16);}
		if (VAR10 != VAR3) {FUN17(VAR10);}
		FUN27(VAR2, "", "", NULL, NULL VAR60);
		FUN18(&VAR12);
		return VAR45;
	}

	VAR22 = 0;
	if (VAR16->VAR64 != NULL && strcmp(VAR16->VAR64, "") == 0) {
		VAR22 = 1;
	} else if (VAR16->VAR64 == NULL || strcmp(VAR16->VAR64, "") != 0) {
		FUN26(VAR16);
		if (VAR10 != VAR3) {FUN17(VAR10);}
		FUN27(VAR2, "", "", NULL, NULL VAR60);
		FUN18(&VAR12);
		return VAR45;
	}

	VAR38 = FUN28(VAR65);
	FUN28(VAR65) = 1;
	if (VAR22 && FUN29("", NULL, STREAM_LOCATE_WRAPPERS_ONLY VAR60) == NULL) {
		FUN26(VAR16);
		if (VAR10 != VAR3) {FUN17(VAR10);}
		FUN27(VAR2, "", "", NULL, NULL VAR60);
		FUN28(VAR65) = VAR38;
		FUN18(&VAR12);
		return VAR45;
	}

	if (VAR16->VAR66 == 0) {
		VAR16->VAR66 = VAR22 ? 443 : 80;
	}

	
	if (VAR18 != NULL) {
	  VAR15 *VAR67;
		if (FUN3(FUN4(VAR2), "", sizeof(""), (void **)&VAR20) == VAR46 &&
		    (VAR67 = (VAR15 *) FUN30(tmp VAR60, -1, "", NULL, 1, VAR68)) != NULL &&
		    ((VAR21 && !VAR22) ||
		     (((VAR22 && VAR67->VAR64 != NULL && strcmp(VAR67->VAR64, "") == 0) ||
		      (!VAR22 && VAR67->VAR64 == NULL) ||
		      (!VAR22 && strcmp(VAR67->VAR64, "") != 0)) &&
		     strcmp(VAR67->VAR63, VAR16->VAR63) == 0 &&
		     VAR67->VAR66 == VAR16->VAR66))) {
    } else {
			FUN31(VAR18);
			FUN32(FUN4(VAR2), "", sizeof(""));
			FUN32(FUN4(VAR2), "", sizeof(""));
			FUN32(FUN4(VAR2), "", sizeof(""));
			VAR18 = NULL;
			VAR21 = 0;
    }
	}

	
	if (VAR18 != NULL && FUN33(VAR18)) {
		FUN31(VAR18);
		FUN32(FUN4(VAR2), "", sizeof(""));
		FUN32(FUN4(VAR2), "", sizeof(""));
		FUN32(FUN4(VAR2), "", sizeof(""));
		VAR18 = NULL;
		VAR21 = 0;
	}

	if (!VAR18) {
		VAR18 = FUN34(VAR2, VAR16, VAR22, VAR40, &use_proxy VAR60);
		if (VAR18) {
			FUN35(VAR18);
			FUN36(VAR2, "", FUN37(VAR18));
			FUN38(VAR2, "", VAR21);
		} else {
			FUN26(VAR16);
			if (VAR10 != VAR3) {FUN17(VAR10);}
			FUN27(VAR2, "", "", NULL, NULL VAR60);
			FUN28(VAR65) = VAR38;
			FUN18(&VAR12);
			return VAR45;
		}
	}
	FUN28(VAR65) = VAR38;

	if (VAR18) {
		VAR1 **VAR69, **VAR70, **VAR71;
	  int VAR72 = FUN39(VAR16, le_url VAR60);

		FUN36(VAR2, "", VAR72);
		

		if (VAR40 && 
		    FUN22(VAR40, "", "", &VAR20) == VAR46 &&
		    FUN5(VAR20) == VAR73 &&
		    FUN40(VAR20) == 1.0) {
			VAR32 = 0;
		} else {
			VAR32 = 1;
		}

		FUN7(&VAR11, "");
		if (VAR21 && !VAR22) {
			FUN41(&VAR11, VAR16->VAR64);
			FUN7(&VAR11, "");
			FUN41(&VAR11, VAR16->VAR63);
			FUN42(&VAR11, '');
			FUN43(&VAR11, VAR16->VAR66);
		}
		if (VAR16->VAR74) {
			FUN41(&VAR11, VAR16->VAR74);
		} else {
			FUN42(&VAR11, '');
		}
		if (VAR16->VAR75) {
			FUN42(&VAR11, '');
			FUN41(&VAR11, VAR16->VAR75);
		}
		if (VAR16->VAR76) {
			FUN42(&VAR11, '');
			FUN41(&VAR11, VAR16->VAR76);
		}
		if (VAR32) {
			FUN7(&VAR11, "");
		} else {
			FUN7(&VAR11, "");
		}
		FUN7(&VAR11, "");
		FUN41(&VAR11, VAR16->VAR63);
		if (VAR16->VAR66 != (VAR22?443:80)) {
			FUN42(&VAR11, '');
			FUN43(&VAR11, VAR16->VAR66);
		}
		if (!VAR32 ||
			(FUN3(FUN4(VAR2), "", sizeof(""), (void **)&VAR20) == VAR46 &&
			 FUN6(VAR20) == 0)) {
                }
                if (!VAR32 ||
                        (FUN3(FUN4(VAR2), "", sizeof(""), (void **)&VAR20) == VAR46 &&


                         FUN6(VAR20) == 0)) {
                        FUN7(&VAR11, ""
                                "");
		    FUN5(VAR20) == VAR61) {
			if (FUN25(VAR20) > 0) {
				FUN7(&VAR11, "");
				FUN44(&VAR11, FUN24(VAR20), FUN25(VAR20));
				FUN7(&VAR11, "");
			}
		} else if (VAR40 && 
		           FUN22(VAR40, "", "", &VAR20) == VAR46 &&
		           FUN5(VAR20) == VAR61) {
			if (FUN25(VAR20) > 0) {
				FUN7(&VAR11, "");
				FUN44(&VAR11, FUN24(VAR20), FUN25(VAR20));
				FUN7(&VAR11, "");
			}
		} else if (FUN45(VAR77)) {
			FUN7(&VAR11, "");
			FUN41(&VAR11, FUN45(VAR77));
			FUN7(&VAR11, "");
		} else {
			FUN7(&VAR11, ""VAR78"");
		}

		FUN46(&VAR11, &VAR12);

		if (VAR7 == VAR79) {
			FUN7(&VAR11,"");
			if (VAR6) {
				FUN7(&VAR11,""");
				FUN41(&VAR11, VAR6);
				FUN7(&VAR11,""");
			}
			FUN7(&VAR11,"");
		} else {
			FUN7(&VAR11,"");
			if (VAR6) {
				FUN7(&VAR11, """);
				FUN41(&VAR11, VAR6);
				FUN7(&VAR11, ""\VAR80\VAR58");
			}
		}
		FUN7(&VAR11,"");
		FUN47(&VAR11, VAR13);
		FUN7(&VAR11, "");

		
		if (FUN3(FUN4(VAR2), "", sizeof(""), (void **)&VAR70) == VAR46 &&
		    FUN5(VAR70) == VAR61) {
			VAR1 **VAR81;

			VAR41 = 1;
			if (FUN3(FUN4(VAR2), "", sizeof(""), (void **)&VAR81) == VAR46) {
				if (FUN5(VAR81) == VAR82) {
					char          VAR83[33], VAR84[33], VAR85[33], VAR86[33], VAR87[9];
					PHP_MD5_CTX   VAR88;
					unsigned char VAR89[16];

					FUN48(&VAR88);
					snprintf(VAR86, sizeof(VAR86), "", FUN49(VAR90));
					FUN50(&VAR88, (unsigned char*)VAR86, strlen(VAR86));
					FUN51(VAR89, &VAR88);
					FUN52(VAR86, VAR89);

					if (FUN3(FUN53(VAR81), "", sizeof(""), (void **)&VAR20) == VAR46 &&
					    FUN5(VAR20) == VAR47) {
						FUN6(VAR20)++;
						snprintf(VAR87, sizeof(VAR87), "", FUN6(VAR20));
					} else {
						FUN54(*VAR81, "", 1);
						strcpy(VAR87, "");
					}

					FUN48(&VAR88);
					FUN50(&VAR88, (unsigned char*)FUN24(VAR70), FUN25(VAR70));
					FUN50(&VAR88, (unsigned char*)"", 1);
					if (FUN3(FUN53(VAR81), "", sizeof(""), (void **)&VAR20) == VAR46 &&
					    FUN5(VAR20) == VAR61) {
						FUN50(&VAR88, (unsigned char*)FUN24(VAR20), FUN25(VAR20));
					}
					FUN50(&VAR88, (unsigned char*)"", 1);
					if (FUN3(FUN4(VAR2), "", sizeof(""), (void **)&VAR71) == VAR46 &&
					    FUN5(VAR71) == VAR61) {
						FUN50(&VAR88, (unsigned char*)FUN24(VAR71), FUN25(VAR71));
					}
					FUN51(VAR89, &VAR88);
					FUN52(VAR83, VAR89);
					if (FUN3(FUN53(VAR81), "", sizeof(""), (void **)&VAR20) == VAR46 &&
					    FUN5(VAR20) == VAR61 &&
					    FUN25(VAR20) == sizeof("")-1 &&
					    FUN55(FUN24(VAR20), "") == 0) {
						FUN48(&VAR88);
						FUN50(&VAR88, (unsigned char*)VAR83, 32);
						FUN50(&VAR88, (unsigned char*)"", 1);
						if (FUN3(FUN53(VAR81), "", sizeof(""), (void **)&VAR20) == VAR46 &&
						    FUN5(VAR20) == VAR61) {
							FUN50(&VAR88, (unsigned char*)FUN24(VAR20), FUN25(VAR20));
						}
						FUN50(&VAR88, (unsigned char*)"", 1);
						FUN50(&VAR88, (unsigned char*)VAR86, 8);
						FUN51(VAR89, &VAR88);
						FUN52(VAR83, VAR89);
					}

					FUN48(&VAR88);
					FUN50(&VAR88, (unsigned char*)"", sizeof("")-1);
					if (VAR16->VAR74) {
						FUN50(&VAR88, (unsigned char*)VAR16->VAR74, strlen(VAR16->VAR74));
					} else {
						FUN50(&VAR88, (unsigned char*)"", 1);
					}
					if (VAR16->VAR75) {
						FUN50(&VAR88, (unsigned char*)"", 1);
						FUN50(&VAR88, (unsigned char*)VAR16->VAR75, strlen(VAR16->VAR75));
					}

					

					FUN51(VAR89, &VAR88);
					FUN52(VAR84, VAR89);

					FUN48(&VAR88);
					FUN50(&VAR88, (unsigned char*)VAR83, 32);
					FUN50(&VAR88, (unsigned char*)"", 1);
					if (FUN3(FUN53(VAR81), "", sizeof(""), (void **)&VAR20) == VAR46 &&
					    FUN5(VAR20) == VAR61) {
						FUN50(&VAR88, (unsigned char*)FUN24(VAR20), FUN25(VAR20));
					}
					FUN50(&VAR88, (unsigned char*)"", 1);
					if (FUN3(FUN53(VAR81), "", sizeof(""), (void **)&VAR20) == VAR46 &&
					    FUN5(VAR20) == VAR61) {
						FUN50(&VAR88, (unsigned char*)VAR87, 8);
						FUN50(&VAR88, (unsigned char*)"", 1);
						FUN50(&VAR88, (unsigned char*)VAR86, 8);
						FUN50(&VAR88, (unsigned char*)"", 1);
						
						FUN50(&VAR88, (unsigned char*)"", sizeof("")-1);
						FUN50(&VAR88, (unsigned char*)"", 1);
					}
					FUN50(&VAR88, (unsigned char*)VAR84, 32);
					FUN51(VAR89, &VAR88);
					FUN52(VAR85, VAR89);
	
					FUN7(&VAR11, """);
					FUN44(&VAR11, FUN24(VAR70), FUN25(VAR70));
					if (FUN3(FUN53(VAR81), "", sizeof(""), (void **)&VAR20) == VAR46 &&
					    FUN5(VAR20) == VAR61) {
						FUN7(&VAR11, "", VAR91=\"");
						FUN44(&VAR11, FUN24(VAR20), FUN25(VAR20));
					}
					if (FUN3(FUN53(VAR81), "", sizeof(""), (void **)&VAR20) == VAR46 &&
					    FUN5(VAR20) == VAR61) {
						FUN7(&VAR11, "", VAR92=\"");
						FUN44(&VAR11, FUN24(VAR20), FUN25(VAR20));
					}
					FUN7(&VAR11, "", VAR93=\"");
					if (VAR16->VAR74) {
						FUN41(&VAR11, VAR16->VAR74);
					} else {
						FUN42(&VAR11, '');
					} 
					if (VAR16->VAR75) {
						FUN42(&VAR11, '');
						FUN41(&VAR11, VAR16->VAR75);
					}
					if (VAR16->VAR76) {
						FUN42(&VAR11, '');
						FUN41(&VAR11, VAR16->VAR76);
					}
					if (FUN3(FUN53(VAR81), "", sizeof(""), (void **)&VAR20) == VAR46 &&
					    FUN5(VAR20) == VAR61) {
					
						FUN7(&VAR11, "", VAR94=\"");
						FUN7(&VAR11, "", VAR87=\"");
						FUN44(&VAR11, VAR87, 8);
						FUN7(&VAR11, "", VAR86=\"");
						FUN44(&VAR11, VAR86, 8);
					}
					FUN7(&VAR11, "", VAR85=\"");
					FUN44(&VAR11, VAR85, 32);
					if (FUN3(FUN53(VAR81), "", sizeof(""), (void **)&VAR20) == VAR46 &&
					    FUN5(VAR20) == VAR61) {
						FUN7(&VAR11, "", VAR95=\"");
						FUN44(&VAR11, FUN24(VAR20), FUN25(VAR20));
					}
					if (FUN3(FUN53(VAR81), "", sizeof(""), (void **)&VAR20) == VAR46 &&
						FUN5(VAR20) == VAR61) {
						FUN7(&VAR11, "", VAR96=\"");
						FUN44(&VAR11, FUN24(VAR20), FUN25(VAR20));
					}
					FUN7(&VAR11, ""\VAR80\VAR58");
				}
			} else {
				unsigned char* VAR3;
				int VAR97;

				smart_str VAR98 = {0};
				FUN44(&VAR98, FUN24(VAR70), FUN25(VAR70));
				FUN42(&VAR98, '');
				if (FUN3(FUN4(VAR2), "", sizeof(""), (void **)&VAR71) == VAR46 &&
				    FUN5(VAR71) == VAR61) {
					FUN44(&VAR98, FUN24(VAR71), FUN25(VAR71));
				}
				FUN56(&VAR98);
				VAR3 = FUN57((unsigned char*)VAR98.VAR99, VAR98.VAR97, &VAR97);
				FUN7(&VAR11, "");
				FUN44(&VAR11, (char*)VAR3, VAR97);
				FUN7(&VAR11, "");
				FUN17(VAR3);
				FUN18(&VAR98);
			}
		}

		
		if (VAR21 && !VAR22) {
			VAR42 = FUN58(VAR2, &soap_headers VAR60);
		}

		
		if (FUN3(FUN4(VAR2), "", sizeof(""), (void **)&VAR69) == VAR46) {
			VAR1 **VAR100;
                }
 
                

               if (FUN3(FUN4(VAR2), "", sizeof(""), (void **)&VAR69) == VAR46) {




                        VAR1 **VAR100;
                        char *VAR101;
                        int VAR102, VAR58;
				for (VAR102 = 0; VAR102 < VAR58; VAR102++) {
					FUN59(FUN53(VAR69), (void **)&VAR100);
					FUN60(FUN53(VAR69), &VAR101, NULL, VAR45);

					if (FUN5(VAR100) == VAR82) {
					  VAR1** VAR103;

						if (FUN61(FUN53(VAR100), 0, (void**)&VAR103) == VAR46 &&
						    FUN5(VAR103) == VAR61) {
						  VAR1 **VAR20;
						  if ((FUN61(FUN53(VAR100), 1, (void**)&VAR20) == VAR104 ||
						       FUN62(VAR16->VAR74?VAR16->VAR74:"",FUN24(VAR20),FUN25(VAR20)) == 0) &&
						      (FUN61(FUN53(VAR100), 2, (void**)&VAR20) == VAR104 ||
						       FUN63(VAR16->VAR63,FUN24(VAR20))) &&
						      (VAR22 || FUN61(FUN53(VAR100), 3, (void**)&VAR20) == VAR104)) {
								FUN44(&VAR11, VAR101, strlen(VAR101));
								FUN42(&VAR11, '');
								FUN44(&VAR11, FUN24(VAR103), FUN25(VAR103));
								FUN42(&VAR11, '');
							}
						}
					}
					FUN64(FUN53(VAR69));
				}
				FUN7(&VAR11, "");
			}
		}

		FUN65(VAR40, VAR41, VAR42, VAR43, &soap_headers VAR60);

		FUN7(&VAR11, "");
		FUN56(&VAR11);
		if (FUN3(FUN4(VAR2), "", sizeof(""), (void **) &VAR19) == VAR46 &&
		    FUN6(VAR19) > 0) {
			FUN66(VAR2, "", VAR11.VAR99, VAR11.VAR97, 1);
		}
                FUN7(&VAR11, "");
                FUN56(&VAR11);
                if (FUN3(FUN4(VAR2), "", sizeof(""), (void **) &VAR19) == VAR46 &&

                   FUN6(VAR19) > 0) {


                        FUN66(VAR2, "", VAR11.VAR99, VAR11.VAR97, 1);
                }
                FUN44(&VAR11, VAR10, VAR13);
			FUN32(FUN4(VAR2), "", sizeof(""));
			FUN32(FUN4(VAR2), "", sizeof(""));
			FUN32(FUN4(VAR2), "", sizeof(""));
			FUN27(VAR2, "", "", NULL, NULL VAR60);
			FUN18(&VAR12);
			return VAR45;
		}
		FUN18(&VAR11);
	} else {
		FUN27(VAR2, "", "", NULL, NULL VAR60);
		FUN18(&VAR12);
		return VAR45;
	}