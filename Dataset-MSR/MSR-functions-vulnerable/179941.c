FUN1(struct VAR1 *VAR2, int VAR3, int VAR4, int VAR5, off_t VAR6, int VAR7,
    size_t VAR8, off_t VAR9, int *VAR10, int VAR11, int VAR12)
{
	Elf32_Shdr VAR13;
	Elf64_Shdr VAR14;
	int VAR15 = 1;
	size_t VAR16 = 0;
	void *VAR17;
	off_t VAR18, VAR19, VAR20;
 	uint64_t VAR21 = 0;	
 	uint64_t VAR22 = 0;	
 	char VAR23[50];


 
 	if (VAR8 != VAR24) {
 		if (FUN2(VAR2, "") == -1)
			return -1;
		return 0;
 	}
 
 	

	if (pread(VAR5, VAR25, VAR24, VAR6 + VAR8 * VAR12) == -1) {


 		FUN3(VAR2);
 		return -1;
 	}
 	VAR20 = VAR26;
 
 	for ( ; VAR7; VAR7--) {
 		

		if (pread(VAR5, VAR23, sizeof(VAR23), VAR20 + VAR27) == -1) {


 			FUN3(VAR2);
 			return -1;
 		}

		VAR23[sizeof(VAR23) - 1] = '';


 		if (strcmp(VAR23, "") == 0)
 			VAR15 = 0;
 

		if (pread(VAR5, VAR25, VAR24, VAR6) == -1) {


 			FUN3(VAR2);
 			return -1;
 		}
		VAR6 += VAR8;

		
		switch (VAR28) {
		case VAR29:
#if 0
		case VAR30:
#endif
			VAR15 = 0;
			break;
		default:
			if (VAR9 != VAR31 && VAR26 > VAR9) {
				
				continue;
			}
			break;
		}

		
		switch (VAR28) {
		case VAR32:
			if ((VAR17 = malloc(VAR33)) == NULL) {
				FUN4(VAR2, VAR34, ""
 				    "");
 				return -1;
 			}

			if (pread(VAR5, VAR17, VAR33, VAR26) == -1) {


 				FUN3(VAR2);
 				free(VAR17);
 				return -1;
			}

			VAR18 = 0;
			for (;;) {
				if (VAR18 >= (VAR35)VAR33)
					break;
				VAR18 = FUN5(VAR2, VAR17, (VAR36)VAR18,
				    VAR33, VAR3, VAR4, 4, VAR10);
				if (VAR18 == 0)
					break;
			}
			free(VAR17);
			break;
		case VAR37:
			switch (VAR11) {
			case VAR38:
			case VAR39:
			case VAR40:
			case VAR41:
			case VAR42:
				break;
			default:
				goto VAR43;
			}

			if (VAR16 > 5)
				break;
			if (FUN6(VAR5, VAR26, VAR44) == (VAR35)-1) {
				FUN7(VAR2);
				return -1;
			}
			VAR19 = 0;
			for (;;) {
				Elf32_Cap VAR45;
				Elf64_Cap VAR46;
				char VAR47[
				    FUN8(sizeof VAR45, sizeof VAR46)];
				if ((VAR19 += VAR48) > (VAR35)VAR33)
					break;
				if (read(VAR5, VAR47, (VAR36)VAR48) !=
				    (VAR49)VAR48) {
					FUN3(VAR2);
					return -1;
				}
				if (VAR47[0] == '') {
#ifdef VAR50
					char *VAR51 = VAR47 + 1;
					uint32_t VAR52, VAR53;
					memcpy(&VAR52, VAR51, sizeof(VAR52));
					VAR51 += 4;
					VAR52 = FUN9(VAR4, VAR52);
					if (memcmp("", VAR51, 3) != 0) {
					    if (FUN2(VAR2,
						"", VAR51)
						== -1)
						return -1;
					    break;
					}
					VAR51 += strlen(VAR51) + 1;
					VAR53 = *VAR51++;
					memcpy(&VAR52, VAR51, sizeof(VAR52));
					VAR51 += 4;
					VAR52 = FUN9(VAR4, VAR52);
					if (VAR53 != 1) {
					    if (FUN2(VAR2, ""
						"", VAR53)
						== -1)
						return -1;
					    break;
					}
					
#endif
					break;
				}
				(void)memcpy(VAR54, VAR47, VAR48);
				switch (VAR55) {
				case VAR56:
					break;
				case VAR57:
					VAR21 |= VAR58;
					break;
				case VAR59:
					VAR22 |= VAR58;
					break;
				default:
					if (FUN2(VAR2,
					    ""
					    "" VAR60 ""
					    VAR60 "",
					    (unsigned long long)VAR55,
					    (unsigned long long)VAR58) == -1)
						return -1;
					if (VAR16++ > 2)
						VAR19 = VAR33;
					break;
				}
			}
			
		VAR43:
		default:
			break;
		}
	}

	if (FUN2(VAR2, "", VAR15 ? "" : "") == -1)
		return -1;
	if (VAR21) {
		const VAR61 *VAR62;
		switch (VAR11) {
		case VAR38:
		case VAR63:
		case VAR39:
			VAR62 = VAR64;
			break;
		case VAR41:
		case VAR40:
		case VAR42:
			VAR62 = VAR65;
			break;
		default:
			VAR62 = NULL;
			break;
		}
		if (FUN2(VAR2, "") == -1)
			return -1;
		if (VAR62) {
			while (VAR62->VAR66) {
				if (VAR21 & VAR62->VAR67) {
					if (FUN2(VAR2,
					    "", VAR62->VAR66) == -1)
						return -1;
					VAR21 &= ~VAR62->VAR67;
				}
				++VAR62;
			}
			if (VAR21)
				if (FUN2(VAR2,
				    ""
				    VAR60 "",
				    (unsigned long long)VAR21) == -1)
					return -1;
		} else {
			if (FUN2(VAR2,
			    "" VAR60 "",
			    (unsigned long long)VAR21) == -1)
				return -1;
		}
	}
	if (VAR22) {
		if (VAR22 & VAR68) {
			if (FUN2(VAR2,
			    (VAR22 & VAR69)
			    ? ""
			    : "") == -1)
				return -1;
		}
		VAR22 &= ~VAR70;
		if (VAR22)
			if (FUN2(VAR2,
			    ""
			    VAR60 "",
			    (unsigned long long)VAR22) == -1)
				return -1;
	}
	return 0;
}