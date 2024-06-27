int FUN1(VAR1 **VAR2, char *VAR3, int VAR4, char *VAR5, int VAR6, char *VAR7, char VAR8, char **VAR9, int security VAR10) 
{
	VAR11 *VAR12;
	VAR13 *VAR14;
	int VAR15  = VAR7[0] != '' || VAR7[1] == '';
	int VAR16 = VAR7[0] == '';
	int VAR17 = VAR7[0] != '';
	int VAR18  = VAR7[0] == '';

	if (!VAR2) {
		return VAR19;
	}

	*VAR2 = NULL;

	if (VAR9) {
		*VAR9 = NULL;
	}

	if (VAR19 == FUN2(&VAR12, VAR3, VAR4, NULL, 0, error VAR20)) {
		return VAR19;
	}

	if (VAR15 && FUN3(VAR21) && !VAR12->VAR22) {
		if (VAR9) {
			FUN4(VAR9, 4096, ""%VAR23\""%VAR23\"", VAR5, VAR3);
		}
		return VAR19;
	}

	if (!VAR6) {
		if (VAR9) {
			FUN4(VAR9, 4096, ""\""%VAR23\"", VAR3);
		}
		return VAR19;
	}
VAR24:
	if (VAR8) {
		if ((VAR14 = FUN5(VAR12, VAR5, VAR6, VAR8, VAR17 && !FUN3(VAR21) && !VAR12->VAR22 ? NULL : VAR9, security VAR20)) == NULL) {
			if (VAR17 && (!FUN3(VAR21) || VAR12->VAR22)) {
				return VAR25;
			}
			return VAR19;
		}
	} else {
		if ((VAR14 = FUN6(VAR12, VAR5, VAR6, VAR17 && !FUN3(VAR21) && !VAR12->VAR22 ? NULL : VAR9, security VAR20)) == NULL) {
			if (VAR17 && (!FUN3(VAR21) || VAR12->VAR22)) {
				return VAR25;
			}
			return VAR19;
		}
	}

	if (VAR15 && VAR12->VAR26) {
		if (VAR19 == FUN7(&phar VAR20)) {
			if (VAR9) {
				FUN4(VAR9, 4096, ""%VAR23\""%VAR23\"", VAR5, VAR3);
			}
			return VAR19;
		} else {
			goto VAR24;
		}
	}

	if (VAR14->VAR27 && !VAR15) {
		if (VAR9) {
			FUN4(VAR9, 4096, ""%VAR23\""%VAR23\"", VAR5, VAR3);
		}
		return VAR19;
	}

	if (VAR14->VAR28 && VAR15) {
		if (VAR9) {
			FUN4(VAR9, 4096, ""%VAR23\""%VAR23\"", VAR5, VAR3);
		}
		return VAR19;
	}

	if (VAR14->VAR29) {
		if (!VAR17) {
			return VAR19;
		}
		VAR14->VAR29 = 0;
	}

	if (VAR14->VAR30) {
		*VAR2 = (VAR1 *) FUN8(sizeof(VAR1));
		(*VAR2)->VAR31 = 0;
		(*VAR2)->VAR32 = NULL;
		(*VAR2)->VAR12 = VAR12;
		(*VAR2)->VAR15 = VAR15;
		(*VAR2)->VAR33 = VAR14;
		(*VAR2)->VAR34 = VAR14->VAR34;
		(*VAR2)->VAR35 = VAR14->VAR35;

		if (!VAR12->VAR26) {
			++(VAR14->VAR12->VAR36);
			++(VAR14->VAR28);
		}

		return VAR25;
	}

	if (VAR14->VAR37 == VAR38) {
		if (VAR18) {
			if (VAR19 == FUN9(VAR12, VAR14, error VAR20)) {
				return VAR19;
			}
		} else if (VAR16) {
			FUN10(VAR14, 0, VAR39, 0, 0 VAR20);
		}
	} else {
		if (VAR15) {
			if (VAR14->VAR40) {
				FUN11(VAR14->VAR40);
				VAR14->VAR40 = NULL;
				VAR14->VAR41 = (VAR14->VAR35 ? VAR42 : '');
			}

			if (VAR18) {
				if (VAR19 == FUN9(VAR12, VAR14, error VAR20)) {
					return VAR19;
				}
			} else {
				if (VAR19 == FUN12(VAR14, error VAR20)) {
					return VAR19;
				}
			}
		} else {
			if (VAR19 == FUN13(VAR14, VAR9, 1 VAR20)) {
				return VAR19;
			}
		}
	}

	*VAR2 = (VAR1 *) FUN8(sizeof(VAR1));
	(*VAR2)->VAR31 = 0;
	(*VAR2)->VAR12 = VAR12;
	(*VAR2)->VAR15 = VAR15;
	(*VAR2)->VAR33 = VAR14;
	(*VAR2)->VAR34 = VAR14->VAR34;
        (*VAR2)->VAR35 = VAR14->VAR35;
        (*VAR2)->VAR32 = FUN14(VAR14, 1 VAR20);
        if (VAR14->VAR40) {

               (*VAR2)->VAR43 = FUN15(FUN16(entry VAR20) VAR20);










        } else {
                (*VAR2)->VAR43 = FUN15(entry VAR20);
        }
	}

	return VAR25;
}



VAR1 *FUN17(char *VAR3, int VAR4, char *VAR5, int VAR6, char *VAR7, char VAR8, char **VAR9, int security VAR10) 
{
	VAR11 *VAR12;
	VAR13 *VAR14, VAR44;
	VAR1 *VAR2;
	const char *VAR45;
	char VAR30;

#ifdef VAR46
	FUN18(VAR5, VAR6);
#endif

	VAR30 = (VAR6 && VAR5[VAR6 - 1] == '') ? 1 : 0;

	if (VAR19 == FUN2(&VAR12, VAR3, VAR4, NULL, 0, error VAR20)) {
		return NULL;
	}

	if (VAR19 == FUN1(&VAR2, VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, security VAR20)) {
		return NULL;
	} else if (VAR2) {
		return VAR2;
	}

	if (FUN19(&VAR5, &VAR6, &VAR45) > VAR47) {
		if (VAR9) {
			FUN4(VAR9, 0, ""%VAR23\"", VAR5, VAR45);
		}
		return NULL;
	}

	if (VAR12->VAR26 && VAR19 == FUN7(&phar VAR20)) {
		if (VAR9) {
			FUN4(VAR9, 4096, ""%VAR23\""%VAR23\"", VAR5, VAR3);
		}
		return NULL;
	}

	
	VAR2 = (VAR1 *) FUN8(sizeof(VAR1));

	
	memset(&VAR44, 0, sizeof(VAR13));
	VAR44.VAR48 = VAR6;
	VAR44.VAR37 = VAR38;
	VAR44.VAR32 = FUN20();

	if (!VAR44.VAR32) {
		if (VAR9) {
			FUN4(VAR9, 0, "");
		}
		FUN11(VAR2);
		return NULL;
	}

	VAR44.VAR28 = 1;

	if (VAR8 == 2) {
		VAR44.VAR30 = 1;
		VAR44.VAR49 = VAR44.VAR50 = VAR51;
	} else {
		VAR44.VAR49 = VAR44.VAR50 = VAR52;
	}
	if (VAR30) {
		VAR44.VAR48--; 
		VAR6--;
	}

	FUN21(VAR12, VAR5, path_len VAR20);
	VAR44.VAR27 = 1;
	VAR44.VAR53 = FUN22(0);
	VAR44.VAR54 = 1;
	VAR44.VAR12 = VAR12;
	VAR44.VAR55 = FUN23(VAR5, VAR6);
	VAR44.VAR34 = VAR12->VAR34;

	if (VAR12->VAR35) {
		VAR44.VAR35 = VAR12->VAR35;
		VAR44.VAR41 = VAR44.VAR30 ? VAR56 : VAR42;
	}

	if (VAR19 == FUN24(&VAR12->VAR57, VAR44.VAR55, VAR6, (void*)&VAR44, sizeof(VAR13), (void **) &VAR14)) {
		FUN25(VAR44.VAR32);
		if (VAR9) {
			FUN4(VAR9, 0, ""%VAR23\""%VAR23\"", VAR44.VAR55, VAR12->VAR3);
		}
		FUN11(VAR2);
		FUN11(VAR44.VAR55);
		return NULL;
	}

	if (!VAR14) {
		FUN25(VAR44.VAR32);
		FUN11(VAR44.VAR55);
		FUN11(VAR2);
		return NULL;
	}

	++(VAR12->VAR36);
	VAR2->VAR12 = VAR12;
	VAR2->VAR32 = VAR14->VAR32;
	VAR2->VAR31 = VAR2->VAR43 = 0;
	VAR2->VAR15 = 1;
	VAR2->VAR34 = VAR14->VAR34;
	VAR2->VAR35 = VAR14->VAR35;
	VAR2->VAR33 = VAR14;

	return VAR2;
}



int FUN26(VAR11 *phar VAR10) 
{
	if (FUN27(phar VAR20)) {
		return VAR25;
	}

	if (FUN28(VAR12->fname VAR20)) {
		return VAR19;
	}

	FUN29(VAR12, FUN30(VAR12->VAR3, "", VAR58|VAR59|0, NULL) VAR20);

	if (!FUN27(phar VAR20)) {
		return VAR19;
	}

	return VAR25;
}



int FUN31(VAR13 *VAR60, VAR13 *VAR61, char **error VAR10) 
{
	VAR13 *VAR40;

	if (VAR19 == FUN13(VAR60, VAR9, 1 VAR20)) {
		return VAR19;
	}

	if (VAR61->VAR40) {
		FUN11(VAR61->VAR40);
		VAR61->VAR40 = NULL;
		VAR61->VAR41 = (VAR61->VAR35 ? VAR42 : '');
	}

	VAR61->VAR37 = VAR38;
	VAR61->VAR62 = 0;
	VAR61->VAR27 = 1;
	VAR61->VAR32 = FUN20();
	if (VAR61->VAR32 == NULL) {
		FUN4(VAR9, 0, "");
		return VAR63;
	}
	FUN10(VAR60, 0, VAR64, 0, 1 VAR20);
	VAR40 = FUN16(source VAR20);

	if (!VAR40) {
		VAR40 = VAR60;
	}

	if (VAR25 != FUN32(FUN14(VAR40, 0 VAR20), VAR61->VAR32, VAR40->VAR65, NULL)) {
		FUN25(VAR61->VAR32);
		VAR61->VAR37 = VAR66;
		if (VAR9) {
			FUN4(VAR9, 4096, ""%VAR23\""%VAR23\""%VAR23\"", VAR60->VAR55, VAR61->VAR55, VAR60->VAR12->VAR3);
		}
		return VAR19;
	}

	return VAR25;
}



int FUN13(VAR13 *VAR14, char **VAR9, int follow_links VAR10) 
{
	VAR67 *VAR68;
	VAR11 *VAR12 = VAR14->VAR12;
	char *VAR69;
	off_t VAR70;
	VAR71 *VAR72;
	phar_entry_data VAR73;

	if (VAR74 && VAR14->VAR40) {
		VAR13 *VAR75 = FUN16(entry VAR20);
		if (VAR75 && VAR75 != VAR14) {
			return FUN13(VAR75, VAR9, 1 VAR20);
		}
	}

	if (VAR14->VAR27) {
		return VAR25;
	}

	if (VAR14->VAR37 == VAR76) {
		if (!VAR14->VAR32) {
			VAR14->VAR32 = FUN30(VAR14->VAR77, "", VAR59|0, NULL);
		}
		return VAR25;
	}

	if (VAR14->VAR37 != VAR66) {
		
		return VAR25;
	}

	if (!FUN27(phar VAR20)) {
		if (VAR19 == FUN26(phar VAR20)) {
			FUN4(VAR9, 4096, ""%VAR23\"", VAR12->VAR3);
			return VAR19;
		}
	}

	if ((VAR14->VAR50 && !(VAR14->VAR50 & VAR78)) || !(VAR14->VAR49 & VAR78)) {
		VAR73.VAR33 = VAR14;
		VAR73.VAR12 = VAR12;
		VAR73.VAR43 = VAR14->VAR62;
		VAR73.VAR32 = FUN27(phar VAR20);
		if (VAR19 == FUN33(&VAR73, VAR14->VAR79, VAR9, 1 VAR20)) {
			return VAR19;
		}
		return VAR25;
	}

	if (!FUN34(entry VAR20)) {
		FUN35(VAR14, FUN20() VAR20);
		if (!FUN34(entry VAR20)) {
			FUN4(VAR9, 4096, ""%VAR23\""%VAR23\"", VAR12->VAR3, VAR14->VAR55);
			return VAR19;
		}
	}

	VAR73.VAR33 = VAR14;
	VAR73.VAR12 = VAR12;
	VAR73.VAR43 = VAR14->VAR62;
	VAR73.VAR32 = FUN27(phar VAR20);
	if (VAR19 == FUN33(&VAR73, VAR14->VAR79, VAR9, 1 VAR20)) {
		return VAR19;
	}

	VAR72 = FUN34(entry VAR20);

	if ((VAR69 = FUN36(VAR14, 0)) != NULL) {
		VAR68 = FUN37(VAR69, NULL, 0 VAR20);
	} else {
		VAR68 = NULL;
	}

	if (!VAR68) {
		FUN4(VAR9, 4096, ""%VAR23\""%VAR23\"", VAR12->VAR3, FUN36(VAR14, 1), VAR14->VAR55);
		return VAR19;
	}

	
	
	FUN38(VAR72, 0, VAR39);
	VAR70 = FUN39(VAR72);
	FUN40(&VAR72->VAR80, VAR68);
	FUN38(FUN41(entry VAR20), FUN15(entry VAR20), VAR64);

	if (VAR14->VAR65) {
		if (VAR25 != FUN32(FUN41(entry VAR20), VAR72, VAR14->VAR81, NULL)) {
			FUN4(VAR9, 4096, ""%VAR23\""%VAR23\"", VAR12->VAR3, VAR14->VAR55);
			FUN42(VAR68, 1 VAR20);
			return VAR19;
		}
	}

	FUN43(VAR68, 1);
	FUN44(VAR72);
	FUN42(VAR68, 1 VAR20);

	if (FUN39(VAR72) - VAR70 != (VAR82) VAR14->VAR65) {
		FUN4(VAR9, 4096, ""%VAR23\""%VAR23\"", VAR12->VAR3, VAR14->VAR55);
		return VAR19;
	}

	VAR14->VAR50 = VAR14->VAR49;

	
	FUN45(VAR14, VAR83, loc VAR20);
	VAR73.VAR43 = VAR14->VAR62;
	VAR73.VAR32 = VAR72;
	if (VAR19 == FUN33(&VAR73, VAR14->VAR79, VAR9, 0 VAR20)) {
		return VAR19;
	}
	return VAR25;
}


int FUN9(VAR11 *VAR12, VAR13 *VAR14, char **error VAR10) 
{
	if (VAR14->VAR37 == VAR38) {
		
		FUN46(VAR14->VAR32, 0);

		VAR14->VAR50 = VAR14->VAR49;
		VAR14->VAR27 = 1;
		VAR12->VAR27 = 1;
		
		VAR14->VAR65 = 0;
		VAR14->VAR81 = 0;
		VAR14->VAR79 = 0;
		VAR14->VAR49 = VAR52;
		VAR14->VAR37 = VAR38;
		VAR14->VAR62 = 0;
		return VAR25;
	}

	if (VAR9) {
		*VAR9 = NULL;
	}

	
	if (VAR14->VAR40) {
		FUN11(VAR14->VAR40);
		VAR14->VAR40 = NULL;
		VAR14->VAR41 = (VAR14->VAR35 ? VAR42 : '');
	}

	VAR14->VAR32 = FUN20();

	if (!VAR14->VAR32) {
		if (VAR9) {
			FUN4(VAR9, 0, "");
		}
		return VAR19;
	}

	VAR14->VAR50 = VAR14->VAR49;
	VAR14->VAR27 = 1;
	VAR12->VAR27 = 1;
	
	VAR14->VAR65 = 0;
	VAR14->VAR81 = 0;
	VAR14->VAR79 = 0;
	VAR14->VAR49 = VAR52;
	VAR14->VAR37 = VAR38;
	VAR14->VAR62 = 0;
	return VAR25;
}


int FUN12(VAR13 *VAR14, char **error VAR10) 
{
	VAR71 *VAR32;
	VAR13 *VAR40;

	if (VAR19 == FUN13(VAR14, VAR9, 1 VAR20)) {
		return VAR19;
	}

	if (VAR14->VAR37 == VAR38) {
		return VAR25;
	}

	VAR32 = FUN20();
	if (VAR32 == NULL) {
		FUN4(VAR9, 0, "");
		return VAR19;
	}
	FUN10(VAR14, 0, VAR64, 0, 1 VAR20);
	VAR40 = FUN16(entry VAR20);

	if (!VAR40) {
		VAR40 = VAR14;
	}

	if (VAR25 != FUN32(FUN14(VAR40, 0 VAR20), VAR32, VAR40->VAR65, NULL)) {
		if (VAR9) {
			FUN4(VAR9, 4096, ""%VAR23\""%VAR23\"", VAR14->VAR55, VAR14->VAR12->VAR3);
		}
		return VAR19;
	}

	if (VAR14->VAR40) {
		FUN11(VAR14->VAR40);
		VAR14->VAR40 = NULL;
		VAR14->VAR41 = (VAR14->VAR35 ? VAR42 : '');
	}

	VAR14->VAR62 = 0;
	VAR14->VAR32 = VAR32;
	VAR14->VAR37 = VAR38;
	VAR14->VAR27 = 1;
	return VAR25;
}



VAR13 * FUN47(VAR11 *VAR12, VAR13 *VAR14, char **error VAR10) 
{
	if (VAR9) {
		*VAR9 = NULL;
	}
	
	if (VAR19 == FUN13(VAR14, VAR9, 1 VAR20)) {
		return NULL;
	}
	if (-1 == FUN10(VAR14, 0, VAR64, 0, 1 VAR20)) {
		FUN4(VAR9, 4096, ""%VAR23\""%VAR23\"", VAR14->VAR55, VAR12->VAR3);
		return NULL;
	}
	return VAR14;
}


PHP_PHAR_API int FUN48(char *VAR84, int VAR85, char **VAR55, int *filename_len VAR10)  {
	VAR11 **VAR86;
	if (VAR87->VAR88.VAR89
			&& VAR25 == FUN49(&(VAR87->VAR88), VAR84, VAR85, (void**)&VAR86)) {
		*VAR55 = (*VAR86)->VAR3;
		*VAR48 = (*VAR86)->VAR4;
		return VAR25;
	}
	return VAR19;
}


int FUN50(VAR11 *VAR12, char *VAR84, int alias_len VAR10) 
{
	if (VAR12->VAR36 || VAR12->VAR26) {
		return VAR19;
	}

	
	if (FUN51(&(VAR87->VAR90), VAR12->VAR3, VAR12->VAR4) != VAR25) {
		return VAR19;
	}

	
	FUN3(VAR91) = NULL;
	FUN3(VAR92) = FUN3(VAR93) = NULL;

	return VAR25;
}



int FUN2(VAR11 **VAR94, char *VAR3, int VAR4, char *VAR84, int VAR85, char **error VAR10) 
{
	VAR11 *VAR95, **VAR86;
	char *VAR96, *VAR97;
	int VAR98;
	ulong VAR99, VAR100 = 0;

	FUN52(VAR101);

	if (VAR9) {
		*VAR9 = NULL;
	}

	*VAR94 = NULL;

	if (FUN3(VAR91) && VAR4 == FUN3(VAR102) && !memcmp(VAR3, FUN3(VAR92), VAR4)) {
		*VAR94 = FUN3(VAR91);
		if (VAR84 && VAR85) {

			if (!FUN3(VAR91)->VAR103 && (VAR85 != FUN3(VAR91)->VAR85 || memcmp(FUN3(VAR91)->VAR84, VAR84, VAR85))) {
				if (VAR9) {
					FUN4(VAR9, 0, ""%VAR23\""%VAR23\""%VAR23\"", VAR84, FUN3(VAR91)->VAR3, VAR3);
				}
				*VAR94 = NULL;
				return VAR19;
			}

			if (FUN3(VAR91)->VAR85 && VAR25 == FUN49(&(VAR87->VAR88), FUN3(VAR91)->VAR84, FUN3(VAR91)->VAR85, (void**)&VAR86)) {
				FUN51(&(VAR87->VAR88), FUN3(VAR91)->VAR84, FUN3(VAR91)->VAR85);
			}

			FUN24(&(VAR87->VAR88), VAR84, VAR85, (void*)&(*VAR94), sizeof(VAR11*), NULL);
			FUN3(VAR93) = VAR84;
			FUN3(VAR104) = VAR85;
		}

		return VAR25;
	}

	if (VAR84 && VAR85 && FUN3(VAR91) && VAR85 == FUN3(VAR104) && !memcmp(VAR84, FUN3(VAR93), VAR85)) {
		VAR95 = FUN3(VAR91);
		VAR86 = &VAR95;
		goto VAR105;
	}

	if (VAR84 && VAR85) {
		VAR100 = FUN53(VAR84, VAR85);
		if (VAR25 == FUN54(&(VAR87->VAR88), VAR84, VAR85, VAR100, (void**)&VAR86)) {
VAR105:
			if (VAR3 && (VAR4 != (*VAR86)->VAR4 || FUN55(VAR3, (*VAR86)->VAR3, VAR4))) {
				if (VAR9) {
					FUN4(VAR9, 0, ""%VAR23\""%VAR23\""%VAR23\"", VAR84, (*VAR86)->VAR3, VAR3);
				}
				if (VAR25 == FUN50(*VAR86, VAR84, alias_len VAR20)) {
					if (VAR9) {
						FUN11(*VAR9);
						*VAR9 = NULL;
					}
				}
				return VAR19;
			}

			*VAR94 = *VAR86;
			VAR95 = *VAR86;
			FUN3(VAR91) = VAR95;
			FUN3(VAR92) = VAR95->VAR3;
			FUN3(VAR102) = VAR95->VAR4;
			FUN3(VAR93) = VAR84;
			FUN3(VAR104) = VAR85;

			return VAR25;
		}

		if (FUN3(VAR106) && VAR25 == FUN54(&VAR107, VAR84, VAR85, VAR100, (void **)&VAR86)) {
			goto VAR105;
		}
	}

	VAR99 = FUN53(VAR3, VAR4);
	VAR96 = NULL;
	VAR97 = VAR3;
	VAR98 = VAR4;

	if (VAR3 && VAR4) {
		if (VAR25 == FUN54(&(VAR87->VAR90), VAR3, VAR4, VAR99, (void**)&VAR86)) {
			*VAR94 = *VAR86;
			VAR95 = *VAR86;

			if (VAR84 && VAR85) {
				if (!VAR95->VAR103 && (VAR85 != VAR95->VAR85 || memcmp(VAR95->VAR84, VAR84, VAR85))) {
					if (VAR9) {
						FUN4(VAR9, 0, ""%VAR23\""%VAR23\""%VAR23\"", VAR84, (*VAR86)->VAR3, VAR3);
					}
					return VAR19;
				}

				if (VAR95->VAR85 && VAR25 == FUN49(&(VAR87->VAR88), VAR95->VAR84, VAR95->VAR85, (void**)&VAR86)) {
					FUN51(&(VAR87->VAR88), VAR95->VAR84, VAR95->VAR85);
				}

				FUN56(&(VAR87->VAR88), VAR84, VAR85, VAR100, (void*)&VAR95, sizeof(VAR11*), NULL);
			}

			FUN3(VAR91) = VAR95;
			FUN3(VAR92) = VAR95->VAR3;
			FUN3(VAR102) = VAR95->VAR4;
			FUN3(VAR93) = VAR95->VAR84;
			FUN3(VAR104) = VAR95->VAR85;

			return VAR25;
		}

		if (FUN3(VAR106) && VAR25 == FUN54(&VAR108, VAR3, VAR4, VAR99, (void**)&VAR86)) {
			*VAR94 = *VAR86;
			VAR95 = *VAR86;

			
			if (!VAR95->VAR103 && VAR84 && VAR85) {
				if (VAR85 != VAR95->VAR85 || memcmp(VAR95->VAR84, VAR84, VAR85)) {
					if (VAR9) {
						FUN4(VAR9, 0, ""%VAR23\""%VAR23\""%VAR23\"", VAR84, (*VAR86)->VAR3, VAR3);
					}
					return VAR19;
				}
			}

			FUN3(VAR91) = VAR95;
			FUN3(VAR92) = VAR95->VAR3;
			FUN3(VAR102) = VAR95->VAR4;
			FUN3(VAR93) = VAR95->VAR84;
			FUN3(VAR104) = VAR95->VAR85;

			return VAR25;
		}

		if (VAR25 == FUN54(&(VAR87->VAR88), VAR97, VAR98, VAR99, (void**)&VAR86)) {
			VAR95 = *VAR94 = *VAR86;

			FUN3(VAR91) = VAR95;
			FUN3(VAR92) = VAR95->VAR3;
			FUN3(VAR102) = VAR95->VAR4;
			FUN3(VAR93) = VAR95->VAR84;
			FUN3(VAR104) = VAR95->VAR85;

			return VAR25;
		}

		if (FUN3(VAR106) && VAR25 == FUN54(&VAR107, VAR97, VAR98, VAR99, (void**)&VAR86)) {
			VAR95 = *VAR94 = *VAR86;

			FUN3(VAR91) = VAR95;
			FUN3(VAR92) = VAR95->VAR3;
			FUN3(VAR102) = VAR95->VAR4;
			FUN3(VAR93) = VAR95->VAR84;
			FUN3(VAR104) = VAR95->VAR85;

			return VAR25;
		}

		
		VAR96 = FUN57(VAR3, my_realpath VAR20);

		if (VAR96) {
			VAR4 = strlen(VAR96);
			VAR3 = VAR96;
		} else {
			return VAR19;
		}
#ifdef VAR46
		FUN18(VAR3, VAR4);
#endif
		VAR99 = FUN53(VAR3, VAR4);

		if (VAR25 == FUN54(&(VAR87->VAR90), VAR3, VAR4, VAR99, (void**)&VAR86)) {
VAR109:
			*VAR94 = *VAR86;
			VAR95 = *VAR86;

			if (VAR84 && VAR85) {
				FUN56(&(VAR87->VAR88), VAR84, VAR85, VAR100, (void*)&VAR95, sizeof(VAR11*), NULL);
			}

			FUN11(VAR96);

			FUN3(VAR91) = VAR95;
			FUN3(VAR92) = VAR95->VAR3;
			FUN3(VAR102) = VAR95->VAR4;
			FUN3(VAR93) = VAR95->VAR84;
			FUN3(VAR104) = VAR95->VAR85;

			return VAR25;
		}

		if (FUN3(VAR106) && VAR25 == FUN54(&VAR108, VAR3, VAR4, VAR99, (void**)&VAR86)) {
			goto VAR109;
		}

		FUN11(VAR96);
	}

	return VAR19;
}



char * FUN58(VAR13 * VAR14, int VAR110) 
{
	switch (VAR14->VAR49 & VAR78) {
	case VAR111:
		return "";
	case VAR112:
		return "";
	default:
		return VAR110 ? "" : NULL;
	}
}



char * FUN36(VAR13 * VAR14, int VAR110) 
{
	php_uint32 VAR49;

	if (VAR14->VAR27) {
		VAR49 = VAR14->VAR50;
	} else {
		VAR49 = VAR14->VAR49;
	}

	switch (VAR49 & VAR78) {
		case VAR111:
			return "";
		case VAR112:
			return "";
		default:
			return VAR110 ? "" : NULL;
	}
}



VAR13 *FUN6(VAR11 *VAR12, char *VAR5, int VAR6, char **VAR9, int security VAR10) 
{
	return FUN5(VAR12, VAR5, VAR6, 0, VAR9, security VAR20);
}


VAR13 *FUN5(VAR11 *VAR12, char *VAR5, int VAR6, char VAR113, char **VAR9, int security VAR10) 
{
	const char *VAR45;
	VAR13 *VAR14;
	int VAR30;

#ifdef VAR46
	FUN18(VAR5, VAR6);
#endif

	VAR30 = (VAR6 && (VAR5[VAR6 - 1] == '')) ? 1 : 0;

	if (VAR9) {
		*VAR9 = NULL;
	}

	if (VAR114 && VAR6 >= sizeof("")-1 && !memcmp(VAR5, "", sizeof("")-1)) {
		if (VAR9) {
			FUN4(VAR9, 4096, "".VAR12\"");
		}
		return NULL;
	}

	if (!VAR6 && !VAR113) {
		if (VAR9) {
			FUN4(VAR9, 4096, ""%VAR23\"", VAR5);
		}
		return NULL;
	}

	if (FUN19(&VAR5, &VAR6, &VAR45) > VAR47) {
		if (VAR9) {
			FUN4(VAR9, 4096, ""%VAR23\"", VAR5, VAR45);
		}
		return NULL;
	}

	if (!VAR12->VAR57.VAR89) {
		return NULL;
	}

	if (VAR30) {
		if (!VAR6 || VAR6 == 1) {
			return NULL;
		}
		VAR6--;
	}

	if (VAR25 == FUN49(&VAR12->VAR57, VAR5, VAR6, (void**)&VAR14)) {
		if (VAR14->VAR29) {
			
			return NULL;
		}
		if (VAR14->VAR30 && !VAR113) {
			if (VAR9) {
				FUN4(VAR9, 4096, ""%VAR23\"", VAR5);
			}
			return NULL;
		}
		if (!VAR14->VAR30 && VAR113 == 2) {
			
			if (VAR9) {
				FUN4(VAR9, 4096, ""%VAR23\"", VAR5);
			}
			return NULL;
		}
		return VAR14;
	}

	if (VAR113) {
		if (FUN59(&VAR12->VAR115, VAR5, VAR6)) {
			
			VAR14 = (VAR13 *) FUN60(1, sizeof(VAR13));
			
			VAR14->VAR116 = VAR14->VAR30 = 1;
			VAR14->VAR55 = (char *) FUN23(VAR5, VAR6 + 1);
			VAR14->VAR48 = VAR6;
			VAR14->VAR12 = VAR12;
			return VAR14;
		}
	}

	if (VAR12->VAR117.VAR89 && FUN61(&VAR12->VAR117)) {
		phar_zstr VAR118;
		char *VAR119;
		ulong VAR120;
		uint VAR121;

		FUN62(&VAR12->VAR117);
		while (VAR19 != FUN63(&VAR12->VAR117)) {
			if (VAR122 == FUN64(&VAR12->VAR117, &VAR118, &VAR121, &VAR120, 0, NULL)) {
				break;
			}

			FUN65(VAR118, VAR119);

			if ((int)VAR121 >= VAR6 || FUN55(VAR119, VAR5, VAR121)) {
				FUN66(VAR119);
				continue;
			} else {
				char *VAR123;
				int VAR124;
				php_stream_statbuf VAR125;

				if (VAR25 != FUN49(&VAR12->VAR57, VAR119, VAR121, (void **) &VAR14)) {
					if (VAR9) {
						FUN4(VAR9, 4096, ""%VAR23\"", VAR119);
					}
					FUN66(VAR119);
					return NULL;
				}

				if (!VAR14->VAR77 || !VAR14->VAR126) {
					if (VAR9) {
						FUN4(VAR9, 4096, ""%VAR23\"", VAR119);
					}
					FUN66(VAR119);
					return NULL;
				}
				FUN66(VAR119);

				VAR124 = FUN4(&VAR123, VAR127, "", VAR14->VAR77, VAR5 + VAR121);

				if (VAR25 != FUN67(VAR123, &VAR125)) {
					FUN11(VAR123);
					return NULL;
				}

				if (VAR125.VAR128.VAR129 & VAR130 && !VAR113) {
					FUN11(VAR123);
					if (VAR9) {
						FUN4(VAR9, 4096, ""%VAR23\"", VAR5);
					}
					return NULL;
				}

				if ((VAR125.VAR128.VAR129 & VAR130) == 0 && VAR113) {
					FUN11(VAR123);
					
					if (VAR9) {
						FUN4(VAR9, 4096, ""%VAR23\"", VAR5);
					}
					return NULL;
				}

				
				if (VAR25 != FUN68(VAR12, VAR123, VAR124, VAR5, path_len VAR20)) {
					FUN11(VAR123);
					if (VAR9) {
						FUN4(VAR9, 4096, ""%VAR23\""%VAR23\"", VAR5, VAR123);
					}
					return NULL;
				}

				FUN11(VAR123);

				if (VAR25 != FUN49(&VAR12->VAR57, VAR5, VAR6, (void**)&VAR14)) {
					if (VAR9) {
						FUN4(VAR9, 4096, ""%VAR23\""%VAR23\"", VAR5, VAR123);
					}
					return NULL;
				}
				return VAR14;
			}
		}
	}

	return NULL;
}


static const char VAR131[] = "";

static int FUN69(const char *VAR132, size_t VAR133, char **signature VAR10) 
{
	int VAR134 = -1;
	size_t VAR135 = 0;

	*VAR136 = (char*)FUN70(VAR133, 2, 1, FUN3(VAR137));

	for (; VAR135 < VAR133; ++VAR135) {
		(*VAR136)[++VAR134] = VAR131[((const unsigned char *)VAR132)[VAR135] >> 4];
		(*VAR136)[++VAR134] = VAR131[((const unsigned char *)VAR132)[VAR135] & 0x0F];
	}
	(*VAR136)[++VAR134] = '';
	return VAR134;
}


#ifndef VAR138
static int FUN71(int VAR139, VAR71 *VAR32, off_t VAR140, char *VAR118, int VAR141, char **VAR136, int *signature_len VAR10) 
{
	zend_fcall_info VAR142;
	zend_fcall_info_cache VAR143;
	VAR144 *VAR145, *VAR146, *VAR147, *VAR148, **VAR149[3], *VAR150;

	FUN72(VAR145);
	FUN72(VAR150);
	FUN73(VAR150, VAR139 ? "" : "", VAR139 ? sizeof("")-1 : sizeof("")-1, 1);
	FUN72(VAR146);
	FUN73(VAR146, *VAR136, *VAR151, 1);
	FUN72(VAR147);
	FUN73(VAR147, VAR118, VAR141, 1);
	VAR149[0] = &VAR145;
	VAR149[1] = &VAR146;
	VAR149[2] = &VAR147;

	FUN74(VAR32);
	FUN75(VAR145) = VAR152;
	FUN76(VAR145) = VAR140;

	if (VAR140 != (VAR82) FUN77(VAR32, &(FUN78(VAR145)), (VAR153) VAR140, 0)) {
		FUN79(VAR145);
		FUN79(VAR146);
		FUN79(VAR147);
		FUN79(VAR150);
		FUN11(VAR150);
		FUN11(VAR145);
		FUN11(VAR147);
		FUN11(VAR146);
		return VAR19;
	}

	if (VAR19 == FUN80(VAR150, 0, &VAR142, &VAR143, NULL, NULL VAR20)) {
		FUN79(VAR145);
		FUN79(VAR146);
		FUN79(VAR147);
		FUN79(VAR150);
		FUN11(VAR150);
		FUN11(VAR145);
		FUN11(VAR147);
		FUN11(VAR146);
		return VAR19;
	}

	VAR142.VAR154 = 3;
	VAR142.VAR155 = VAR149;
	FUN81(VAR145);
	if (VAR139) {
		FUN82(VAR146);
	} else {
		FUN81(VAR146);
	}
	FUN81(VAR147);

	VAR142.VAR156 = &VAR148;

	if (VAR19 == FUN83(&VAR142, &fcc VAR20)) {
		FUN79(VAR145);
		FUN79(VAR146);
		FUN79(VAR147);
		FUN79(VAR150);
		FUN11(VAR150);
		FUN11(VAR145);
		FUN11(VAR147);
		FUN11(VAR146);
		return VAR19;
	}

	FUN79(VAR150);
	FUN11(VAR150);
	FUN84(VAR145);

	if (VAR139) {
		FUN85(VAR146);
	} else {
		FUN84(VAR146);
	}
	FUN84(VAR147);

	FUN79(VAR145);
	FUN11(VAR145);
	FUN79(VAR147);
	FUN11(VAR147);

	switch (FUN75(VAR148)) {
		default:
		case VAR157:
			FUN79(VAR146);
			FUN11(VAR146);
			if (1 == FUN86(VAR148)) {
				FUN11(VAR148);
				return VAR25;
			}
			FUN11(VAR148);
			return VAR19;
		case VAR158:
			FUN11(VAR148);
			if (FUN87(VAR148)) {
				*VAR136 = FUN23(FUN78(VAR146), FUN76(VAR146));
				*VAR151 = FUN76(VAR146);
				FUN79(VAR146);
				FUN11(VAR146);
				return VAR25;
			}
			FUN79(VAR146);
			FUN11(VAR146);
			return VAR19;
	}
}

#endif 

int FUN88(VAR71 *VAR32, size_t VAR159, php_uint32 VAR160, char *VAR161, int VAR162, char *VAR3, char **VAR136, int *VAR151, char **error VAR10) 
{
	int VAR163, VAR135;
	off_t VAR164;
	unsigned char VAR165[1024];

	FUN74(VAR32);

	switch (VAR160) {
		case VAR166: {
#ifdef VAR138
			VAR167 *VAR168;
			VAR169 *VAR118;
			VAR170 *VAR171 = (VAR170 *) FUN89();
			EVP_MD_CTX VAR172;
#else
			int VAR173;
#endif
			php_uint32 VAR174;
			char *VAR175 = NULL, *VAR176;
			VAR71 *VAR177;
#ifndef VAR138
			if (!FUN59(&VAR178, "", sizeof(""))) {
				if (VAR9) {
					FUN4(VAR9, 0, "");
				}
				return VAR19;
			}
#endif
			
			FUN4(&VAR176, 0, "", VAR3);
			VAR177 = FUN30(VAR176, "", 0, NULL);
			FUN11(VAR176);

#if VAR179 > 5
			if (!VAR177 || !(VAR174 = FUN77(VAR177, (void **) &VAR175, VAR180, 0)) || !VAR175) {
#else
			if (!VAR177 || !(VAR174 = FUN77(VAR177, &VAR175, VAR180, 0)) || !VAR175) {
#endif
				if (VAR177) {
					FUN25(VAR177);
				}
				if (VAR9) {
					FUN4(VAR9, 0, "");
				}
				return VAR19;
			}

			FUN25(VAR177);
#ifndef VAR138
			VAR173 = VAR162;

			if (VAR19 == FUN71(0, VAR32, VAR159, VAR175, VAR174, &VAR161, &tempsig VAR20)) {
				if (VAR175) {
					FUN11(VAR175);
				}

				if (VAR9) {
					FUN4(VAR9, 0, "");
				}

				return VAR19;
			}

			if (VAR175) {
				FUN11(VAR175);
			}

			VAR162 = VAR173;
#else
			VAR168 = FUN90(VAR175, VAR174);

			if (NULL == VAR168) {
				FUN11(VAR175);
				if (VAR9) {
					FUN4(VAR9, 0, "");
				}
				return VAR19;
			}

			VAR118 = FUN91(VAR168, NULL,NULL, NULL);
			FUN92(VAR168);
			FUN11(VAR175);

			if (NULL == VAR118) {
				if (VAR9) {
					FUN4(VAR9, 0, "");
				}
				return VAR19;
			}

			FUN93(&VAR172, VAR171);
			VAR164 = VAR159;

			if (VAR164 > sizeof(VAR165)) {
				VAR163 = sizeof(VAR165);
			} else {
				VAR163 = (int)VAR164;
			}

			FUN38(VAR32, 0, VAR64);

			while (VAR163 && (VAR135 = FUN94(VAR32, (char*)VAR165, VAR163)) > 0) {
				FUN95 (&VAR172, VAR165, VAR135);
				VAR164 -= (VAR82)VAR135;

				if (VAR164 < VAR163) {
					VAR163 = (int)VAR164;
				}
			}

			if (FUN96(&VAR172, (unsigned char *)VAR161, VAR162, VAR118) != 1) {
				
				FUN97(&VAR172);

				if (VAR9) {
					FUN4(VAR9, 0, "");
				}

				return VAR19;
			}

			FUN97(&VAR172);
#endif

			*VAR151 = FUN69((const char*)VAR161, VAR162, signature VAR20);
		}
		break;
#ifdef VAR181
		case VAR182: {
			unsigned char VAR132[64];
			PHP_SHA512_CTX VAR183;

			FUN98(&VAR183);
			VAR164 = VAR159;

			if (VAR164 > sizeof(VAR165)) {
				VAR163 = sizeof(VAR165);
			} else {
				VAR163 = (int)VAR164;
			}

			while ((VAR135 = FUN94(VAR32, (char*)VAR165, VAR163)) > 0) {
				FUN99(&VAR183, VAR165, VAR135);
				VAR164 -= (VAR82)VAR135;
				if (VAR164 < VAR163) {
					VAR163 = (int)VAR164;
				}
			}

			FUN100(VAR132, &VAR183);

			if (memcmp(VAR132, VAR161, sizeof(VAR132))) {
				if (VAR9) {
					FUN4(VAR9, 0, "");
				}
				return VAR19;
			}

			*VAR151 = FUN69((const char*)VAR132, sizeof(VAR132), signature VAR20);
			break;
		}
		case VAR184: {
			unsigned char VAR132[32];
			PHP_SHA256_CTX VAR183;

			FUN101(&VAR183);
			VAR164 = VAR159;

			if (VAR164 > sizeof(VAR165)) {
				VAR163 = sizeof(VAR165);
			} else {
				VAR163 = (int)VAR164;
			}

			while ((VAR135 = FUN94(VAR32, (char*)VAR165, VAR163)) > 0) {
				FUN102(&VAR183, VAR165, VAR135);
				VAR164 -= (VAR82)VAR135;
				if (VAR164 < VAR163) {
					VAR163 = (int)VAR164;
				}
			}

			FUN103(VAR132, &VAR183);

			if (memcmp(VAR132, VAR161, sizeof(VAR132))) {
				if (VAR9) {
					FUN4(VAR9, 0, "");
				}
				return VAR19;
			}

			*VAR151 = FUN69((const char*)VAR132, sizeof(VAR132), signature VAR20);
			break;
		}
#else
		case VAR182:
		case VAR184:
			if (VAR9) {
				FUN4(VAR9, 0, "");
			}
			return VAR19;
#endif
		case VAR185: {
			unsigned char VAR132[20];
			PHP_SHA1_CTX  VAR183;

			FUN104(&VAR183);
			VAR164 = VAR159;

			if (VAR164 > sizeof(VAR165)) {
				VAR163 = sizeof(VAR165);
			} else {
				VAR163 = (int)VAR164;
			}

			while ((VAR135 = FUN94(VAR32, (char*)VAR165, VAR163)) > 0) {
				FUN105(&VAR183, VAR165, VAR135);
				VAR164 -= (VAR82)VAR135;
				if (VAR164 < VAR163) {
					VAR163 = (int)VAR164;
				}
			}

			FUN106(VAR132, &VAR183);

			if (memcmp(VAR132, VAR161, sizeof(VAR132))) {
				if (VAR9) {
					FUN4(VAR9, 0, "");
				}
				return VAR19;
			}

			*VAR151 = FUN69((const char*)VAR132, sizeof(VAR132), signature VAR20);
			break;
		}
		case VAR186: {
			unsigned char VAR132[16];
			PHP_MD5_CTX   VAR183;

			FUN107(&VAR183);
			VAR164 = VAR159;

			if (VAR164 > sizeof(VAR165)) {
				VAR163 = sizeof(VAR165);
			} else {
				VAR163 = (int)VAR164;
			}

			while ((VAR135 = FUN94(VAR32, (char*)VAR165, VAR163)) > 0) {
				FUN108(&VAR183, VAR165, VAR135);
				VAR164 -= (VAR82)VAR135;
				if (VAR164 < VAR163) {
					VAR163 = (int)VAR164;
				}
			}

			FUN109(VAR132, &VAR183);

			if (memcmp(VAR132, VAR161, sizeof(VAR132))) {
				if (VAR9) {
					FUN4(VAR9, 0, "");
				}
				return VAR19;
			}

			*VAR151 = FUN69((const char*)VAR132, sizeof(VAR132), signature VAR20);
			break;
		}
		default:
			if (VAR9) {
				FUN4(VAR9, 0, "");
			}
			return VAR19;
	}
	return VAR25;
}