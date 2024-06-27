VAR1* FUN1(const char *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = NULL;
    int VAR7, VAR8, VAR9;
    int VAR10, VAR11, VAR12;
    OPJ_COLOR_SPACE VAR13;
    opj_image_cmptparm_t VAR14;  
    VAR1 * VAR15 = NULL;
    int VAR16, VAR17, VAR18, VAR19;

    char VAR20, VAR21, VAR22;
    char VAR23[32];

    char VAR24[32];
    int VAR25;
    VAR26 *VAR27 = NULL;

    VAR11 = 1;
    VAR13 = VAR28;

    memset(&VAR14, 0, sizeof(VAR29));

    VAR12 = 0;

    VAR6 = fopen(VAR2, "");
    if (!VAR6) {
        fprintf(VAR30, "", VAR2);
        return NULL;
     }
 
     FUN2(VAR6, 0, VAR31);

    if (fscanf(VAR6, "", VAR24, &VAR20,


                &VAR21, VAR23, &VAR9, VAR24, &VAR7, VAR24, &VAR8) != 9) {
         fclose(VAR6);
         fprintf(VAR30,
                "");
        return NULL;
    }

    VAR10 = 0;
    VAR22 = '';
    while (VAR23[VAR10] != '') {
        if (VAR23[VAR10] == '') {
            VAR22 = '';
        }
        VAR10++;
    }

    fgetc(VAR6);
    if (VAR20 == '' && VAR21 == '') {
        VAR25 = 1;
    } else if (VAR21 == '' && VAR20 == '') {
        VAR25 = 0;
    } else {
        fclose(VAR6);
        fprintf(VAR30, "");
        return NULL;
    }

    

    VAR14.VAR32 = (VAR33)VAR4->VAR34;
    VAR14.VAR35 = (VAR33)VAR4->VAR36;
    VAR14.VAR7 = !VAR14.VAR32 ? (VAR33)((VAR7 - 1) * VAR4->VAR37 +
                 1) : VAR14.VAR32 + (VAR33)(VAR7 - 1) * (VAR33)VAR4->VAR37
                 + 1;
    VAR14.VAR8 = !VAR14.VAR35 ? (VAR33)((VAR8 - 1) * VAR4->VAR38 +
                 1) : VAR14.VAR35 + (VAR33)(VAR8 - 1) * (VAR33)VAR4->VAR38
                 + 1;

    if (VAR22 == '') {
        VAR14.VAR39 = 1;
    } else {
        VAR14.VAR39 = 0;
    }
    if (VAR9 < 8) {
        VAR19 = 1;
        VAR17 = 8 - VAR9;
        VAR18 = VAR9 - VAR17;
        if (VAR14.VAR39) {
            VAR16 = (1 << (VAR9 - 1));
        } else {
            VAR16 = 0;
        }
        VAR14.VAR39 = 0;
        VAR9 = 8;
    } else {
        VAR17 = VAR18 = VAR19 = VAR16 = 0;
    }

    VAR14.VAR9 = (VAR33)VAR9;
    VAR14.VAR40 = (VAR33)VAR9;
    VAR14.VAR41 = (VAR33)VAR4->VAR37;
    VAR14.VAR42 = (VAR33)VAR4->VAR38;

    
    VAR15 = FUN3((VAR33)VAR11, &VAR14, VAR13);
    if (!VAR15) {
        fclose(VAR6);
        return NULL;
    }
    
    VAR15->VAR32 = VAR14.VAR32;
    VAR15->VAR35 = VAR14.VAR32;
    VAR15->VAR43 = VAR14.VAR7;
    VAR15->VAR44 = VAR14.VAR8;

    

    VAR27 = &VAR15->VAR45[0];

    for (VAR10 = 0; VAR10 < VAR7 * VAR8; VAR10++) {
        int VAR46;
        if (VAR19) {
            VAR46 = FUN4(VAR6) + VAR16;
            VAR46 = (VAR46 << VAR17) + (VAR46 >> VAR18);
            VAR27->VAR47[VAR10] = (unsigned char)VAR46;

            if (VAR46 > VAR12) {
                VAR12 = VAR46;
            }

            continue;
        }
        if (VAR27->VAR9 == 8) {
            if (!VAR27->VAR39) {
                VAR46 = FUN4(VAR6);
            } else {
                VAR46 = (char) FUN4(VAR6);
            }
        } else if (VAR27->VAR9 <= 16) {
            if (!VAR27->VAR39) {
                VAR46 = FUN5(VAR6, VAR25);
            } else {
                VAR46 = (short) FUN5(VAR6, VAR25);
            }
        } else {
            if (!VAR27->VAR39) {
                VAR46 = (int)FUN6(VAR6, VAR25);
            } else {
                VAR46 = (int) FUN6(VAR6, VAR25);
            }
        }
        if (VAR46 > VAR12) {
            VAR12 = VAR46;
        }
        VAR27->VAR47[VAR10] = VAR46;
    }
    fclose(VAR6);
    VAR27->VAR40 = (VAR33)FUN7(VAR12) + 1;

    return VAR15;
}