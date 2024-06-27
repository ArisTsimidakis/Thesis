int FUN1(VAR1* VAR2, char *VAR3, int VAR4, char *VAR5, int VAR6, VAR7** VAR8, int VAR9, php_uint32 VAR10, char **error VAR11) 
{
	char VAR12[512], *VAR13 = NULL, *VAR14;
	phar_entry_info VAR15 = {0};
	size_t VAR16 = 0, read, VAR17;
	VAR18 *VAR19;
	php_uint32 VAR20, VAR21, VAR22, VAR23;
	VAR7 *VAR24, **VAR25;
	int VAR26 = 0;

	if (VAR27) {
		*VAR27 = NULL;
	}

	FUN2(VAR2, 0, VAR28);
	VAR17 = FUN3(VAR2);
	FUN2(VAR2, 0, VAR29);
	read = FUN4(VAR2, VAR12, sizeof(VAR12));

	if (read != sizeof(VAR12)) {
		if (VAR27) {
			FUN5(VAR27, 4096, ""%VAR30\"", VAR3);
		}
		FUN6(VAR2);
		return VAR31;
	}

	VAR19 = (VAR18*)VAR12;
	VAR23 = (memcmp(VAR19->VAR32, "", sizeof("")-1) != 0);

	VAR24 = (VAR7 *) FUN7(1, sizeof(VAR7), FUN8(VAR33));
	VAR24->VAR34 = FUN8(VAR33);
	
	FUN9(&VAR24->VAR35, 2 + (VAR17 >> 12),
		VAR36, VAR37, (VAR38)VAR24->VAR34);
	FUN9(&VAR24->VAR39, 5,
		VAR36, NULL, (VAR38)VAR24->VAR34);
	FUN9(&VAR24->VAR40, 4 + (VAR17 >> 11),
		VAR36, NULL, (VAR38)VAR24->VAR34);
	VAR24->VAR41 = 1;
	
	VAR24->VAR42 = VAR10;

	VAR15.VAR41 = 1;
	VAR15.VAR43 = 1;
	VAR15.VAR44 = VAR24;
	VAR16 += sizeof(VAR12);

	do {
		VAR45 *VAR46;

		VAR16 = FUN3(VAR2);
		VAR19 = (VAR18*) VAR12;
		VAR20 = FUN10(VAR19->VAR47, sizeof(VAR19->VAR47));
		if (VAR20 == 0 && FUN11(VAR12, sizeof(VAR12)) == 0) {
			break;
		}
		memset(VAR19->VAR47, '', sizeof(VAR19->VAR47));
		VAR21 = FUN11(VAR12, VAR23?sizeof(VAR48):sizeof(VAR18));

		VAR22 = VAR15.VAR49 = VAR15.VAR50 =
			FUN10(VAR19->VAR22, sizeof(VAR19->VAR22));

		if (((!VAR23 && VAR19->VAR51[0] == 0) || VAR23) && strlen(VAR19->VAR52) == sizeof("")-1 && !FUN12(VAR19->VAR52, "", sizeof("")-1)) {
			off_t VAR53;

			if (VAR22 > 511) {
				if (VAR27) {
					FUN5(VAR27, 4096, ""%VAR30\"", VAR3);
				}
VAR54:
				FUN6(VAR2);
				FUN13(myphar VAR55);
				return VAR31;
			}
			VAR53 = FUN3(VAR2);
			read = FUN4(VAR2, VAR12, VAR22);
			if (read != VAR22) {
				if (VAR27) {
					FUN5(VAR27, 4096, ""%VAR30\"", VAR3);
				}
				goto VAR54;
			}
#ifdef VAR56
# VAR57 FUN14(VAR58) \
	(((((unsigned char*)(VAR58))[3]) << 24) \
		| ((((unsigned char*)(VAR58))[2]) << 16) \
		| ((((unsigned char*)(VAR58))[1]) <<  8) \
		| (((unsigned char*)(VAR58))[0]))
#else
# VAR57 FUN14(VAR58) (VAR59) *(VAR58)
#endif
			VAR24->VAR60 = FUN14(VAR12);
			if (VAR31 == FUN15(VAR2, FUN3(VAR2) - VAR22 - 512, VAR24->VAR60, VAR12 + 8, VAR22 - 8, VAR3, &VAR24->VAR61, &VAR24->VAR62, error VAR55)) {
				if (VAR27) {
					char *VAR63 = *VAR27;
					FUN5(VAR27, 4096, ""%VAR30\"", VAR3, VAR63);
					FUN16(VAR63);
				}
				goto VAR54;
			}
			FUN2(VAR2, VAR53 + 512, VAR29);
			
			if (((VAR19->VAR64 == '') || (VAR19->VAR64 == VAR65)) && VAR22 > 0) {
				
				FUN2(VAR2, 512, VAR66);
				if ((VAR67)FUN3(VAR2) > VAR17) {
					if (VAR27) {
						FUN5(VAR27, 4096, ""%VAR30\"", VAR3);
					}
					FUN6(VAR2);
					FUN13(myphar VAR55);
					return VAR31;
				}
			}

			read = FUN4(VAR2, VAR12, sizeof(VAR12));

			if (read != sizeof(VAR12)) {
				if (VAR27) {
					FUN5(VAR27, 4096, ""%VAR30\"", VAR3);
				}
				FUN6(VAR2);
				FUN13(myphar VAR55);
				return VAR31;
			}

			VAR19 = (VAR18*) VAR12;
			VAR20 = FUN10(VAR19->VAR47, sizeof(VAR19->VAR47));

			if (VAR20 == 0 && FUN11(VAR12, sizeof(VAR12)) == 0) {
				break;
			}

			if (VAR27) {
				FUN5(VAR27, 4096, ""%VAR30\"", VAR3);
			}

			goto VAR54;
		}

		if (!VAR26 && VAR19->VAR64 == '') {
			VAR26 = 1;
			
			VAR15.VAR68 = VAR15.VAR49;

			
			if (VAR15.VAR68 == VAR69) {
				if (VAR27) {
					FUN5(VAR27, 4096, ""%VAR30\"", VAR3);
				}
				FUN6(VAR2);
				FUN13(myphar VAR55);
				return VAR31;
			}
			VAR15.VAR70 = FUN17(VAR15.VAR68+1, VAR24->VAR34);

			read = FUN4(VAR2, VAR15.VAR70, VAR15.VAR68);
			if (read != VAR15.VAR68) {
				FUN16(VAR15.VAR70);
				if (VAR27) {
					FUN5(VAR27, 4096, ""%VAR30\"", VAR3);
				}
				FUN6(VAR2);
				FUN13(myphar VAR55);
				return VAR31;
			}
			VAR15.VAR70[VAR15.VAR68] = '';

			
			VAR22 = ((VAR22+511)&~511) - VAR22;

			
			FUN2(VAR2, VAR22, VAR66);
			if ((VAR67)FUN3(VAR2) > VAR17) {
				FUN16(VAR15.VAR70);
				if (VAR27) {
					FUN5(VAR27, 4096, ""%VAR30\"", VAR3);
				}
				FUN6(VAR2);
				FUN13(myphar VAR55);
				return VAR31;
                        }
 
                        read = FUN4(VAR2, VAR12, sizeof(VAR12));

       


                        if (read != sizeof(VAR12)) {
                                FUN16(VAR15.VAR70);
                                if (VAR27) {
					FUN5(VAR27, 4096, ""%VAR30\"", VAR3);
				}
				FUN6(VAR2);
				FUN13(myphar VAR55);
				return VAR31;
			}
			continue;
		} else if (!VAR26 && !VAR23 && VAR19->VAR51[0] != 0) {
			char VAR52[256];
			int VAR71, VAR72;

			for (VAR71 = 0; VAR71 < 155; VAR71++) {
				VAR52[VAR71] = VAR19->VAR51[VAR71];
				if (VAR52[VAR71] == '') {
					break;
				}
			}
			VAR52[VAR71++] = '';
			for (VAR72 = 0; VAR72 < 100; VAR72++) {
				VAR52[VAR71+VAR72] = VAR19->VAR52[VAR72];
				if (VAR52[VAR71+VAR72] == '') {
					break;
				}
			}

			VAR15.VAR68 = VAR71+VAR72;

			if (VAR52[VAR15.VAR68 - 1] == '') {
				
				VAR15.VAR68--;
			}
			VAR15.VAR70 = FUN18(VAR52, VAR15.VAR68, VAR24->VAR34);
		} else if (!VAR26) {
			int VAR71;

			
			for (VAR71 = 0; VAR71 < 100; VAR71++) {
				if (VAR19->VAR52[VAR71] == '') {
					break;
				}
			}
			VAR15.VAR68 = VAR71;
			VAR15.VAR70 = FUN18(VAR19->VAR52, VAR71, VAR24->VAR34);

			if (VAR15.VAR70[VAR15.VAR68 - 1] == '') {
				
				VAR15.VAR70[VAR15.VAR68 - 1] = '';
				VAR15.VAR68--;
			}
		}
		VAR26 = 0;

		FUN19(VAR24, VAR15.VAR70, VAR15.filename_len VAR55);

		if (VAR20 != VAR21) {
			if (VAR27) {
				FUN5(VAR27, 4096, ""%VAR30\""%VAR30\"", VAR3, VAR15.VAR70);
			}
			FUN20(VAR15.VAR70, VAR24->VAR34);
			FUN6(VAR2);
			FUN13(myphar VAR55);
			return VAR31;
		}

		VAR15.VAR73 = ((VAR23 & (VAR19->VAR64 == '')) ? VAR65 : VAR19->VAR64);
		VAR15.VAR74 = VAR15.VAR75 = VAR16; 
		VAR15.VAR76 = VAR77;
		VAR15.VAR42 = FUN10(VAR19->VAR78, sizeof(VAR19->VAR78)) & VAR79;
		VAR15.VAR80 = FUN10(VAR19->VAR81, sizeof(VAR19->VAR81));
		VAR15.VAR34 = VAR24->VAR34;
#ifndef VAR82
#VAR57 FUN21(VAR78)	(((VAR78)&VAR83) == VAR84)
#endif
		if (VAR23 && VAR15.VAR73 == VAR65 && FUN21(VAR15.VAR42)) {
			VAR15.VAR73 = VAR85;
		}

		if (VAR15.VAR73 == VAR85) {
			VAR15.VAR86 = 1;
		} else {
			VAR15.VAR86 = 0;
		}

		VAR15.VAR87 = NULL;

		if (VAR15.VAR73 == VAR88) {
			if (!FUN22(&VAR24->VAR35, VAR19->VAR89, strlen(VAR19->VAR89))) {
				if (VAR27) {
					FUN5(VAR27, 4096, ""%VAR30\""%VAR30\"", VAR3, VAR19->VAR89);
				}
				FUN20(VAR15.VAR70, VAR15.VAR34);
				FUN6(VAR2);
				FUN13(myphar VAR55);
				return VAR31;
			}
			VAR15.VAR87 = FUN23(VAR19->VAR89);
		} else if (VAR15.VAR73 == VAR90) {
			VAR15.VAR87 = FUN23(VAR19->VAR89);
		}
		FUN24(&entry VAR55);
		FUN25(&VAR24->VAR35, VAR15.VAR70, VAR15.VAR68, (void*)&VAR15, sizeof(VAR45), (void **) &VAR46);

		if (VAR15.VAR34) {
			++VAR15.VAR91;
		}

		if (VAR15.VAR68 >= sizeof("")-1 && !memcmp(VAR15.VAR70, "", sizeof("")-1)) {
			if (VAR31 == FUN26(VAR46, fp VAR55)) {
				if (VAR27) {
					FUN5(VAR27, 4096, ""%VAR30\""%VAR30\"", VAR3, VAR15.VAR70);
				}
				FUN6(VAR2);
				FUN13(myphar VAR55);
				return VAR31;
			}
		}

		if (!VAR13 && VAR15.VAR68 == sizeof("")-1 && !FUN12(VAR15.VAR70, "", sizeof("")-1)) {
			
			if (VAR22 > 511) {
				if (VAR27) {
					FUN5(VAR27, 4096, ""%VAR30\"", VAR3);
				}
				FUN6(VAR2);
				FUN13(myphar VAR55);
				return VAR31;
			}

			read = FUN4(VAR2, VAR12, VAR22);

			if (read == VAR22) {
				VAR12[VAR22] = '';
				if (!FUN27(VAR12, VAR22)) {
					if (VAR22 > 50) {
						VAR12[50] = '';
						VAR12[51] = '';
						VAR12[52] = '';
						VAR12[53] = '';
					}

					if (VAR27) {
						FUN5(VAR27, 4096, ""%VAR30\""%VAR30\"", VAR12, VAR3);
					}

					FUN6(VAR2);
					FUN13(myphar VAR55);
					return VAR31;
				}

				VAR13 = FUN18(VAR12, VAR22, VAR24->VAR34);
				VAR24->VAR5 = VAR13;
				VAR24->VAR6 = VAR22;
				FUN2(VAR2, VAR16, VAR29);
			} else {
				if (VAR27) {
					FUN5(VAR27, 4096, ""%VAR30\"", VAR3);
				}

				FUN6(VAR2);
				FUN13(myphar VAR55);
				return VAR31;
			}
		}

		VAR22 = (VAR22+511)&~511;

		if (((VAR19->VAR64 == '') || (VAR19->VAR64 == VAR65)) && VAR22 > 0) {
			
			FUN2(VAR2, VAR22, VAR66);
			if ((VAR67)FUN3(VAR2) > VAR17) {
				if (VAR27) {
					FUN5(VAR27, 4096, ""%VAR30\"", VAR3);
				}
				FUN6(VAR2);
				FUN13(myphar VAR55);
				return VAR31;
			}
		}

		read = FUN4(VAR2, VAR12, sizeof(VAR12));

		if (read != sizeof(VAR12)) {
			if (VAR27) {
				FUN5(VAR27, 4096, ""%VAR30\"", VAR3);
			}
			FUN6(VAR2);
			FUN13(myphar VAR55);
			return VAR31;
		}
	} while (read != 0);

	if (FUN22(&(VAR24->VAR35), "", sizeof("")-1)) {
		VAR24->VAR9 = 0;
	} else {
		VAR24->VAR9 = 1;
	}

	
	if (!VAR24->VAR9 && FUN8(VAR92) && !VAR24->VAR61) {
		FUN6(VAR2);
		FUN13(myphar VAR55);
		if (VAR27) {
			FUN5(VAR27, 0, ""%VAR30\"", VAR3);
		}
		return VAR31;
	}

	VAR24->VAR3 = FUN18(VAR3, VAR4, VAR24->VAR34);
#ifdef VAR93
	FUN28(VAR24->VAR3, VAR4);
#endif
	VAR24->VAR4 = VAR4;
	VAR24->VAR2 = VAR2;
	VAR14 = strrchr(VAR24->VAR3, '');

	if (VAR14) {
		VAR24->VAR94 = memchr(VAR14, '', (VAR24->VAR3 + VAR4) - VAR14);
		if (VAR24->VAR94 == VAR14) {
			VAR24->VAR94 = memchr(VAR14 + 1, '', (VAR24->VAR3 + VAR4) - VAR14 - 1);
		}
		if (VAR24->VAR94) {
			VAR24->VAR95 = (VAR24->VAR3 + VAR4) - VAR24->VAR94;
		}
	}

	FUN29(VAR96);

	if (VAR97 != FUN25(&(VAR98->VAR99), VAR24->VAR3, VAR4, (void*)&VAR24, sizeof(VAR7*), (void **)&VAR25)) {
		if (VAR27) {
			FUN5(VAR27, 4096, ""%VAR30\"", VAR3);
		}
		FUN6(VAR2);
		FUN13(myphar VAR55);
		return VAR31;
	}

	VAR24 = *VAR25;

	if (VAR13) {
		VAR7 **VAR100;

		VAR24->VAR101 = 0;

		if (VAR97 == FUN30(&(VAR98->VAR102), VAR13, VAR24->VAR6, (void **)&VAR100)) {
			if (VAR97 != FUN31(*VAR100, VAR13, VAR24->alias_len VAR55)) {
				if (VAR27) {
					FUN5(VAR27, 4096, ""%VAR30\"", VAR3);
				}
				FUN32(&(VAR98->VAR99), VAR24->VAR3, VAR4);
				return VAR31;
			}
		}

		FUN25(&(VAR98->VAR102), VAR13, VAR24->VAR6, (void*)&VAR24, sizeof(VAR7*), NULL);
	} else {
		VAR7 **VAR100;

		if (VAR6) {
			if (VAR97 == FUN30(&(VAR98->VAR102), VAR5, VAR6, (void **)&VAR100)) {
				if (VAR97 != FUN31(*VAR100, VAR5, alias_len VAR55)) {
					if (VAR27) {
						FUN5(VAR27, 4096, ""%VAR30\"", VAR3);
					}
					FUN32(&(VAR98->VAR99), VAR24->VAR3, VAR4);
					return VAR31;
				}
			}
			FUN25(&(VAR98->VAR102), VAR5, VAR6, (void*)&VAR24, sizeof(VAR7*), NULL);
			VAR24->VAR5 = FUN18(VAR5, VAR6, VAR24->VAR34);
			VAR24->VAR6 = VAR6;
		} else {
			VAR24->VAR5 = FUN18(VAR24->VAR3, VAR4, VAR24->VAR34);
			VAR24->VAR6 = VAR4;
		}

		VAR24->VAR101 = 1;
	}

	if (VAR8) {
		*VAR8 = VAR24;
	}

	return VAR97;
}