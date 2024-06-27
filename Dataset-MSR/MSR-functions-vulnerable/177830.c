void FUN1(
                VAR1 *VAR2,
                const void *VAR3, size_t VAR4,
                struct VAR5 *VAR5,
                struct VAR6 *VAR7,
                const char *VAR8, size_t VAR9) {

        struct VAR10 *VAR10 = NULL;
        unsigned VAR11 = 0, VAR12 = 0, VAR13, VAR14 = (unsigned) -1;
        const char *VAR15;
        size_t VAR16;
        int VAR17 = VAR18;
        char *VAR19 = NULL, *VAR20 = NULL;

        assert(VAR2);
        assert(VAR3 || VAR4 == 0);

        VAR15 = VAR3;
        VAR16 = VAR4;

        while (VAR16 > 0) {
                const char *VAR21, *VAR22;

                VAR21 = memchr(VAR15, '', VAR16);

                if (!VAR21) {
                        
                        FUN2("");
                        break;
                }

                if (VAR21 == VAR15) {
                        
                        FUN3(VAR2, VAR10, VAR11, VAR12, VAR5, VAR7, VAR8, VAR9, NULL, VAR17);
                        VAR11 = 0;
                        VAR17 = VAR18;

                        VAR15++;
                        VAR16--;
                        continue;
                }

                if (*VAR15 == '' || *VAR15 == '') {
                        
                        VAR16 -= (VAR21 - VAR15) + 1;
                        VAR15 = VAR21 + 1;
                        continue;
                }

                

                if (VAR11+VAR23 >= VAR12) {
                        struct VAR10 *VAR24;
                        unsigned VAR25;

                        VAR25 = FUN4((VAR11+VAR23+1) * 2U, 4U);
                        VAR24 = realloc(VAR10, VAR25 * sizeof(struct VAR10));
                        if (!VAR24) {
                                FUN5();
                                break;
                        }

                        VAR10 = VAR24;
                        VAR12 = VAR25;
                }

                VAR22 = memchr(VAR15, '', VAR21 - VAR15);
                if (VAR22) {
                        if (FUN6(VAR15, VAR22 - VAR15)) {
                                size_t VAR26;

                                VAR26 = VAR21 - VAR15;

                                
                                VAR10[VAR11].VAR27 = (char*) VAR15;
                                VAR10[VAR11].VAR28 = VAR26;
                                VAR11++;

                                
                                if (VAR26 == 10 &&
                                    memcmp(VAR15, "", 9) == 0 &&
                                    VAR15[9] >= '' && VAR15[9] <= '')
                                        VAR17 = (VAR17 & VAR29) | (VAR15[9] - '');

                                else if (VAR26 == 17 &&
                                         memcmp(VAR15, "", 16) == 0 &&
                                         VAR15[16] >= '' && VAR15[16] <= '')
                                        VAR17 = (VAR17 & VAR30) | ((VAR15[16] - '') << 3);

                                else if (VAR26 == 18 &&
                                         memcmp(VAR15, "", 16) == 0 &&
                                         VAR15[16] >= '' && VAR15[16] <= '' &&
                                         VAR15[17] >= '' && VAR15[17] <= '')
                                        VAR17 = (VAR17 & VAR30) | (((VAR15[16] - '')*10 + (VAR15[17] - '')) << 3);

                                else if (VAR26 >= 19 &&
                                         memcmp(VAR15, "", 18) == 0) {
                                        char *VAR31;

                                        VAR31 = FUN7(VAR15 + 18, VAR26 - 18);
                                        if (VAR31) {
                                                free(VAR19);
                                                VAR19 = VAR31;
                                        }
                                } else if (VAR26 >= 8 &&
                                           memcmp(VAR15, "", 8) == 0) {
                                        char *VAR31;

                                        VAR31 = FUN7(VAR15 + 8, VAR26 - 8);
                                        if (VAR31) {
                                                free(VAR20);
                                                VAR20 = VAR31;
                                        }
                                }
                        }

                        VAR16 -= (VAR21 - VAR15) + 1;
                        VAR15 = VAR21 + 1;
                        continue;
                } else {
                        le64_t VAR32;
                        uint64_t VAR26;
                        char *VAR33;

                        if (VAR16 < VAR21 - VAR15 + 1 + sizeof(VAR34) + 1) {
                                FUN2("");
                                break;
                        }

                        memcpy(&VAR32, VAR21 + 1, sizeof(VAR34));
                         memcpy(&VAR32, VAR21 + 1, sizeof(VAR34));
                         VAR26 = FUN8(VAR32);
 

                        if (VAR16 < VAR21 - VAR15 + 1 + sizeof(VAR34) + VAR26 + 1 ||












                             VAR21[1+sizeof(VAR34)+VAR26] != '') {
                                 FUN2("");
                                 break;
                        }

                        memcpy(VAR33, VAR15, VAR21 - VAR15);
                        VAR33[VAR21 - VAR15] = '';
                        memcpy(VAR33 + (VAR21 - VAR15) + 1, VAR21 + 1 + sizeof(VAR34), VAR26);

                        if (FUN6(VAR15, VAR21 - VAR15)) {
                                VAR10[VAR11].VAR27 = VAR33;
                                VAR10[VAR11].VAR28 = (VAR21 - VAR15) + 1 + VAR26;
                                VAR11++;
                        } else
                                free(VAR33);

                        VAR16 -= (VAR21 - VAR15) + 1 + sizeof(VAR34) + VAR26 + 1;
                        VAR15 = VAR21 + 1 + sizeof(VAR34) + VAR26 + 1;
                }
        }

        if (VAR11 <= 0)
                goto VAR35;

        VAR14 = VAR11++;
        FUN9(VAR10[VAR14], "");

        if (VAR20) {
                if (VAR2->VAR36)
                        FUN10(VAR2, VAR17, VAR19, VAR20, VAR5, VAR7);

                if (VAR2->VAR37)
                        FUN11(VAR2, VAR17, VAR19, VAR20, VAR5);

                if (VAR2->VAR38)
                        FUN12(VAR2, VAR17, VAR19, VAR20, VAR5);
        }

        FUN3(VAR2, VAR10, VAR11, VAR12, VAR5, VAR7, VAR8, VAR9, NULL, VAR17);

VAR35:
        for (VAR13 = 0; VAR13 < VAR11; VAR13++)  {
                if (VAR13 == VAR14)
                        continue;

                if (VAR10[VAR13].VAR27 < VAR3 ||
                    (const VAR39*) VAR10[VAR13].VAR27 >= (const VAR39*) VAR3 + VAR4)
                        free(VAR10[VAR13].VAR27);
        }

        free(VAR10);
        free(VAR19);
        free(VAR20);
}