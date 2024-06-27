static bool FUN1(struct VAR1 *VAR2)
{
	char *VAR3, *VAR4 = NULL, *VAR5 = NULL, *VAR6, *VAR7, *VAR8, *VAR9;
	bool VAR10 = true;
	bool VAR11 = true;
	bool VAR12 = false;
	bool VAR13 = false;
	bool VAR14 = false;
	bool VAR15 = false;
	bool VAR16 = false;
	bool VAR17 = false;
	bool VAR18 = false;
	unsigned int VAR19;
	size_t VAR20 = 0;
	int VAR21;
	char *VAR22;
	bool VAR23;

	if ( ! VAR2 || VAR2->VAR24) return false;

	if (VAR2->VAR25) {
		return true;
	}

	if (VAR2->VAR26) {
		VAR22 = VAR2->VAR26;
	} else {
		VAR22 = VAR2->VAR27;
	}

	if ( ! VAR22 ) {
		return false;
	}

	VAR23 = (FUN2(VAR22, "", 10) == 0);

	
	if (VAR22[0] == '') {
		return true;
	}

	
	if (VAR2->VAR28) {
		return true;
	}

	
	FUN3(VAR2->VAR25);
	VAR2->VAR29 = 0;

	FUN3(VAR2->VAR30);
	VAR2->VAR31 = 0;

	
	
	VAR2->VAR25 = FUN4(VAR2, struct VAR32, 3);
	if ( ! VAR2->VAR25) {
		return false;
	}

	
	VAR6 = FUN5(VAR2->VAR25, char, strlen(VAR22) + 1);
	if (!VAR6) {
		return false;
	}

	VAR3 = VAR22;
	VAR9 = NULL;
	VAR7 = VAR8 = VAR6;

	while (*VAR3) {
		if (VAR11) {

			if (!VAR12 && !VAR13) {

				if (VAR3[0] == '') {
					VAR3++;
					VAR4 = VAR7;
					VAR12 = true;
					continue;
				} else if (VAR3[0] == '') {
					VAR3++;
					continue;
				} else {
					VAR11 = false;
					VAR14 = true;
					VAR8 = VAR7;

					continue;
				}
			}

			if (VAR12 && *VAR3 == '') {
				*VAR7++ = '';
				VAR3++;
				VAR5 = VAR7;
				VAR12 = false;
				VAR13 = true;
				continue;
			}

			if (VAR13 && *VAR3 == '') {
				const struct VAR33 *VAR34;
				struct ldb_val VAR35 = {
					.VAR6 = (VAR36 *)VAR5,
					.VAR37 = VAR7 - VAR5
				};

				*VAR7++ = '';
				VAR3++;
				VAR13 = false;

				

				VAR2->VAR30 = FUN6(VAR2,
								    VAR2->VAR30,
								    struct VAR38,
								    VAR2->VAR31 + 1);
				if ( ! VAR2->VAR30) {
					
					goto VAR39;
				}

				VAR34 = FUN7(VAR2->VAR40, VAR4);
				if (!VAR34) {
					
					goto VAR39;
				}

				VAR2->VAR30[VAR2->VAR31].VAR41 = FUN8(VAR2->VAR30, VAR4);
				if (!VAR2->VAR30[VAR2->VAR31].VAR41) {
					
					goto VAR39;
				}
				VAR21 = VAR34->FUN9(VAR2->VAR40, VAR2->VAR30,
							  &VAR35, &VAR2->VAR30[VAR2->VAR31].VAR42);
				if (VAR21 != VAR43) {
					FUN10(VAR2);
					goto VAR39;
				}

				VAR2->VAR31++;

				if (*VAR3 == '') {
					
					FUN11(VAR6);
					return true;

				} else if (*VAR3 == '') {
					VAR3++;
					continue;
				} else {
					FUN10(VAR2);
					goto VAR39;
				}
			}

			*VAR7++ = *VAR3++;
			continue;
		}
		if (VAR14) {
			if (VAR10) {
				if (*VAR3 == '') {
					VAR3++;
					continue;
				}

				
				VAR10 = false;

				if (!FUN12(*VAR3)) {
					
					FUN10(VAR2);
					goto VAR39;
				}

				if (FUN13(*VAR3)) {
					VAR17 = true;
				} else
				if ( ! FUN14(*VAR3)) {
					
					FUN10(VAR2);
					goto VAR39;
				}

				
				*VAR7++ = *VAR3++;
				continue;
			}

			if (*VAR3 == '') {
				VAR3++;
				
				VAR10 = true;
				continue;
			}

			if (VAR10 && (*VAR3 != '')) {
				
				FUN10(VAR2);
				goto VAR39;
			}

			if (*VAR3 == '') {
				
				VAR14 = false;
				VAR15 = true;
				VAR10 = true;
				VAR20 = 0;

				
				*VAR7++ = '';
				VAR2->VAR25[VAR2->VAR29].VAR41 = FUN8(VAR2->VAR25, VAR8);
				if ( ! VAR2->VAR25[VAR2->VAR29].VAR41) {
					
					goto VAR39;
				}

				VAR8 = VAR7;

				VAR3++;
				continue;
			}

			if (!FUN12(*VAR3)) {
				
				FUN10(VAR2);
				goto VAR39;
			}

			if (VAR17 && ( ! (FUN13(*VAR3) || (*VAR3 == '')))) {
				
				FUN10(VAR2);
				goto VAR39;
			} else
			if ( ! (FUN14(*VAR3) || FUN13(*VAR3) || (*VAR3 == ''))) {
				
				FUN10(VAR2);
				goto VAR39;
			}

			*VAR7++ = *VAR3++;
			continue;
		}

		if (VAR15) {
			if (VAR16) {
				if (*VAR3 == '') {
					if (VAR3[-1] != '') {
						VAR3++;
						VAR16 = false;
						continue;
					}
				}
				*VAR7++ = *VAR3++;
				VAR20++;
				continue;
			}

			if (VAR10) {
				if (*VAR3 == '') {
					VAR3++;
					continue;
				}

				
				VAR10 = false;

				if (*VAR3 == '') {
					VAR16 = true;
					VAR3++;
					continue;
				}
			}

			switch (*VAR3) {

			

			case '':
				if (VAR18) {
					*VAR7++ = *VAR3++;
					VAR20++;
					VAR18 = false;
					continue;
				}
				

				if ( VAR9 ) {
					
					VAR7 -= (VAR3 - VAR9);
					VAR20 -= (VAR3 - VAR9);
				}

				VAR14 = true;
				VAR15 = false;
				VAR10 = true;
 
                                VAR3++;
                                *VAR7++ = '';

                               VAR2->VAR25[VAR2->VAR29].VAR42.VAR6 = (VAR36 *)FUN8(VAR2->VAR25, VAR8);




                                VAR2->VAR25[VAR2->VAR29].VAR42.VAR37 = VAR20;
                                if ( ! VAR2->VAR25[VAR2->VAR29].VAR42.VAR6) {
                                        
                                        goto VAR39;
                                }




 
                                VAR8 = VAR7;
 
									VAR2->VAR25,
									struct VAR32,
									VAR2->VAR29 + 1);
					if ( ! VAR2->VAR25) {
						
						goto VAR39;
					}
					
					memset(&VAR2->VAR25[VAR2->VAR29], '', sizeof(struct VAR32));
				}

				continue;

			case '':
			case '':
				
				if (VAR23) {
					if ( VAR9 ) VAR9 = NULL;
					*VAR7++ = *VAR3++;
					VAR20++;
					break;
				}
				
			case '':
			case '':
			case '':
			case '':
				
				if ( ! VAR18) {
					FUN10(VAR2);
					goto VAR39;
				}
				VAR18 = false;

				*VAR7++ = *VAR3++;
				VAR20++;

				if ( VAR9 ) VAR9 = NULL;
				break;

			case '':
				if ( ! VAR18) {
					VAR18 = true;
					VAR3++;
					continue;
				}
				VAR18 = false;

				*VAR7++ = *VAR3++;
				VAR20++;

				if ( VAR9 ) VAR9 = NULL;
				break;

			default:
				if (VAR18) {
					if (FUN15(VAR3[0]) && FUN15(VAR3[1])) {
						if (sscanf(VAR3, "", &VAR19) != 1) {
							
							FUN10(VAR2);
							goto VAR39;
						}
						VAR3 += 2;
						*VAR7++ = (unsigned char)VAR19;
					} else {
						*VAR7++ = *VAR3++;
					}

					VAR18 = false;
					VAR20++;
					if ( VAR9 ) VAR9 = NULL;
					break;
				}

				if (*VAR3 == '') {
					if ( ! VAR9) VAR9 = VAR3;
				} else {
					if ( VAR9 ) VAR9 = NULL;
				}

				*VAR7++ = *VAR3++;
				VAR20++;

				break;
			}

		}
	}