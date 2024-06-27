static char *FUN1(char *VAR1, size_t VAR2, VAR3 *VAR4, const char *VAR5)
 {
{
	size_t VAR6;
	const char *VAR7;
	char VAR8;
	int VAR9 = 1;

	for (VAR7 = VAR5; (VAR8 = *VAR7); VAR7++) {
		
		if (!((VAR8 >= '' && VAR8 <= '')
				|| (VAR8 >= '' && VAR8 <= '')
				|| (VAR8 >= '' && VAR8 <= '')
				|| VAR8 == ''
				|| VAR8 == '')) {
			VAR9 = 0;
			break;
		}
	}

	VAR6 = VAR7 - VAR5;

	
	if (VAR6 == 0 || VAR6 > 128) {
		VAR9 = 0;
	}

	return VAR9;
}

static char *FUN1(char *VAR1, size_t VAR2, VAR3 *VAR4, const char *VAR5)
{
	size_t VAR10;
	const char *VAR7;
	int VAR11;
	int VAR12;

	VAR10 = strlen(VAR5);
	if (VAR10 <= VAR4->VAR13 ||
		VAR2 < (strlen(VAR4->VAR14) + 2 * VAR4->VAR13 + VAR10 + 5 + sizeof(VAR15))) {
		return NULL;
	}

	VAR7 = VAR5;
	memcpy(VAR1, VAR4->VAR14, VAR4->VAR16);
	VAR12 = VAR4->VAR16;
	VAR1[VAR12++] = VAR17;
	for (VAR11 = 0; VAR11 < (int)VAR4->VAR13; VAR11++) {
		VAR1[VAR12++] = *VAR7++;
		VAR1[VAR12++] = VAR17;
	}
	memcpy(VAR1 + VAR12, VAR15, sizeof(VAR15) - 1);
	VAR12 += sizeof(VAR15) - 1;
	memcpy(VAR1 + VAR12, VAR5, VAR10);
	VAR12 += VAR10;
 
                FUN2(VAR4);
 

               if (!FUN3(VAR5)) {


                        FUN4(NULL VAR18, VAR19, "");

                       FUN5(VAR20) = 1;
                        return;
                }


                if (!FUN1(VAR1, sizeof(VAR1), VAR4, VAR5)) {
                        return;
                }
	if (VAR4->VAR21 != -1) {
#ifdef VAR22
		
		flock(VAR4->VAR21, VAR23);
#endif
		close(VAR4->VAR21);
		VAR4->VAR21 = -1;
	}
}

static void FUN6(VAR3 *VAR4, const char *key VAR24)
{
	char VAR1[VAR25];

	if (VAR4->VAR21 < 0 || !VAR4->VAR26 || strcmp(VAR5, VAR4->VAR26)) {
		if (VAR4->VAR26) {
			FUN7(VAR4->VAR26);
			VAR4->VAR26 = NULL;
		}

		FUN2(VAR4);

		if (!FUN3(VAR5)) {
			FUN4(NULL VAR18, VAR19, "");
			FUN5(VAR20) = 1;
			return;
		}
		if (!FUN1(VAR1, sizeof(VAR1), VAR4, VAR5)) {
			return;
		}

		VAR4->VAR26 = FUN8(VAR5);

		VAR4->VAR21 = FUN9(VAR1, VAR27 | VAR28 | VAR29, VAR4->VAR30);

		if (VAR4->VAR21 != -1) {
#ifndef VAR22
			
			if (FUN10(VAR31)) {
				struct stat VAR32;

				if (FUN11(VAR4->VAR21, &VAR32)) {
					close(VAR4->VAR21);
					return;
				}
				if (FUN12(VAR32.VAR33) && FUN13(buf VAR18)) {
					close(VAR4->VAR21);
					return;
				}
			}
#endif
			flock(VAR4->VAR21, VAR34);

#ifdef VAR35
# ifndef VAR36
#  define FD_CLOEXEC 1
# endif
			if (FUN14(VAR4->VAR21, VAR35, VAR36)) {
				FUN4(NULL VAR18, VAR19, "", VAR4->VAR21, strerror(VAR37), VAR37);
			}
#endif
		} else {
			FUN4(NULL VAR18, VAR19, "", VAR1, strerror(VAR37), VAR37);
		}
	}
}

static int FUN15(const char *VAR38, int maxlifetime VAR24)
{
	VAR39 *VAR40;
	char VAR41[sizeof(struct VAR42) + VAR25];
	struct VAR42 *VAR43 = (struct VAR42 *) &VAR41;
	struct stat VAR32;
	char VAR1[VAR25];
	time_t VAR44;
	int VAR45 = 0;
	size_t VAR46;

	VAR40 = FUN16(VAR38);
	if (!VAR40) {
		FUN4(NULL VAR18, VAR47, "", VAR38, strerror(VAR37), VAR37);
		return (0);
	}

	FUN17(&VAR44);

        return (VAR45);
 }
 






























 #define PS_FILES_DATA VAR3 *VAR4 = FUN18()
 
 FUN19(VAR48)
						(VAR44 - VAR32.VAR49) > VAR50) {
					FUN20(VAR1);
					VAR45++;
				}
			}