static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    const char *VAR5;
    const char *VAR6;
    const char *VAR7;

    unsigned int VAR8 = 1, VAR9 = 0;   
    char VAR10[5];
    apr_size_t VAR11;
    int VAR12 = 0;
    int VAR13 = VAR2->VAR14->VAR15;
    VAR16 *VAR17 = FUN2(VAR2->VAR14->VAR18);
    int VAR19 = VAR17->VAR20 & VAR21;
    int VAR22 = !(VAR17->VAR20 & VAR23);

    if (VAR13 <= 0) {
        VAR13 = VAR24;
    }

    

    do {
        apr_status_t VAR25;

        
        VAR2->VAR26 = NULL;
        VAR25 = FUN3(&(VAR2->VAR26), (VAR27)(VAR2->VAR14->VAR28 + 2),
                         &VAR11, VAR2, 0, VAR4);

        if (VAR25 != VAR29) {
            VAR2->VAR30 = FUN4();

            
             if (FUN5(VAR25)) {
                 VAR2->VAR31    = VAR32;

                VAR2->VAR33 = FUN6(1,0);

                VAR2->VAR34  = FUN7(VAR2->VAR35, "");
             }
             else if (FUN8(VAR25)) {
                 VAR2->VAR31 = VAR36;
             }
             else if (FUN9(VAR25)) {
                 VAR2->VAR31 = VAR37;
             }




             return 0;
         }
     } while ((VAR11 <= 0) && (++VAR12 < VAR13));

    if (FUN10(VAR2)) {
        FUN11(VAR38, VAR39, 0, VAR2,
                      "",
                      FUN12(VAR2->VAR35, VAR2->VAR26));
    }

    VAR2->VAR30 = FUN4();
    VAR5 = VAR2->VAR26;
    VAR2->VAR40 = FUN13(VAR2->VAR35, &VAR5);

    VAR6 = FUN13(VAR2->VAR35, &VAR5);

    

    VAR2->VAR41 = FUN14(VAR2->VAR40);
    if (VAR2->VAR41 == VAR42 && VAR2->VAR40[0] == '') {
        VAR2->VAR43 = 1;
    }

    FUN15(VAR2, VAR6);

    if (VAR5[0]) {
        VAR2->VAR44 = 0;
        VAR7 = VAR5;
        VAR11 = strlen(VAR5);
    } else {
        VAR2->VAR44 = 1;
        VAR7 = "";
        VAR11 = 8;
        if (VAR17->VAR45 == VAR46) {
                VAR2->VAR31 = VAR47;
                VAR2->VAR34 = FUN16(VAR2->VAR35, VAR7, VAR11);
                
                VAR2->VAR44 = 0;
                VAR2->VAR33 = FUN6(0, 9);
                VAR2->VAR48->VAR49 = VAR50;
                FUN11(VAR38, VAR51, 0, VAR2, FUN17(02401)
                              "");
                return 0;
        }
    }
    VAR2->VAR34 = FUN16(VAR2->VAR35, VAR7, VAR11);

    
    if (VAR11 == 8
        && VAR7[0] == '' && VAR7[1] == '' && VAR7[2] == '' && VAR7[3] == ''
        && VAR7[4] == '' && FUN18(VAR7[5]) && VAR7[6] == ''
        && FUN18(VAR7[7])) {
        VAR2->VAR33 = FUN6(VAR7[5] - '', VAR7[7] - '');
    }
    else {
        if (VAR19) {
            FUN11(VAR38, VAR51, 0, VAR2, FUN17(02418)
                          "", VAR2->VAR34);
            if (VAR22) {
                VAR2->VAR31 = VAR37;
                return 0;
            }
        }
        if (3 == sscanf(VAR2->VAR34, "", VAR10, &VAR8, &VAR9)
            && (FUN19("", VAR10) == 0)
            && (VAR9 < FUN6(1, 0)) ) { 
            VAR2->VAR33 = FUN6(VAR8, VAR9);
        }
        else {
            VAR2->VAR33 = FUN6(1, 0);
        }
    }

    if (VAR19) {
        int VAR52 = 0;
        if (FUN20(VAR2->VAR26)) {
            FUN11(VAR38, VAR51, 0, VAR2, FUN17(02420)
                          "");
            VAR52 = VAR37;
        }
        if (VAR2->VAR53.VAR54) {
            
            FUN11(VAR38, VAR51, 0, VAR2, FUN17(02421)
                          "");
            VAR52 = VAR37;
        }
        else if (VAR2->VAR53.VAR55 || VAR2->VAR53.VAR56) {
            FUN11(VAR38, VAR51, 0, VAR2, FUN17(02422)
                          "");
            VAR52 = VAR37;
        }
        else if (VAR2->VAR41 == VAR57) {
            FUN11(VAR38, VAR51, 0, VAR2, FUN17(02423)
                          "", VAR2->VAR40);
            VAR52 = VAR58;
        }
        else if (VAR2->VAR44 == 0 && VAR2->VAR33 < FUN6(1, 0)) {
            FUN11(VAR38, VAR51, 0, VAR2, FUN17(02424)
                          "");
            VAR52 = VAR37;
        }

        if (VAR52 && VAR22) {
            VAR2->VAR31 = VAR52;
            return 0;
        }
    }

    return 1;
}