static void FUN1(VAR1 *VAR2,
        VAR3 *VAR4, VAR5 *VAR6,
        VAR7 *VAR8, VAR9 *VAR10, int VAR11)
{
    FUN2();
    VAR12 *VAR13 = VAR6->VAR14;

    if (VAR6->VAR15 & VAR16) {
        VAR17;
    }

    VAR5 *VAR18 = FUN3();
    if (VAR18 == NULL) {
        VAR17;
    }
    FUN4(VAR18, VAR19);

    VAR18->VAR20 = VAR13->VAR20;
    VAR18->VAR21 = VAR22;
    VAR18->VAR23 = VAR24;
    FUN5(&VAR18->VAR14, VAR13);
    VAR18->VAR15 |= VAR25;
    VAR18->VAR15 |= VAR26;
    VAR18->VAR15 |= VAR27;
    VAR18->VAR15 |= VAR16;

    if (VAR13->VAR15 & VAR28) {
        FUN6(VAR18);
    }
    if (VAR13->VAR15 & VAR29) {
        FUN7(VAR18);
    }

    if (VAR11 == 0) {
        FUN8("");
        VAR18->VAR30 |= VAR31;
    } else {
        FUN8("");
        VAR18->VAR30 |= VAR32;
    }
    VAR18->VAR30 |= VAR33;
    VAR18->VAR34 = NULL;
    VAR18->VAR35 = 0;

    if (FUN9(VAR13)) {
        if (VAR11 == 0) {
            FUN10(&VAR13->VAR36, &VAR18->VAR36);
            FUN10(&VAR13->VAR37, &VAR18->VAR37);
            VAR18->VAR38 = VAR13->VAR38;
            VAR18->VAR39 = VAR13->VAR39;
        } else {
            FUN10(&VAR13->VAR36, &VAR18->VAR37);
            FUN10(&VAR13->VAR37, &VAR18->VAR36);
            VAR18->VAR38 = VAR13->VAR39;
            VAR18->VAR39 = VAR13->VAR38;
        }

        
        if (FUN11(VAR18) <  40) {
            if (FUN12(VAR18, 40) == -1) {
                goto VAR40;
            }
        }
        
        VAR18->VAR41 = (VAR42 *)FUN13(VAR18);
        
        VAR18->VAR41->VAR43 = 0x45;
        VAR18->VAR41->VAR44 = 0;
        VAR18->VAR41->VAR45 = FUN14(40);
        VAR18->VAR41->VAR46 = 0;
        VAR18->VAR41->VAR47 = 0;
        VAR18->VAR41->VAR48 = 64;
        VAR18->VAR41->VAR49 = VAR24;
        if (VAR11 == 0) {
            VAR18->VAR41->VAR50.VAR51 = VAR13->VAR36.VAR52[0];
            VAR18->VAR41->VAR53.VAR51 = VAR13->VAR37.VAR52[0];
        } else {
            VAR18->VAR41->VAR50.VAR51 = VAR13->VAR37.VAR52[0];
            VAR18->VAR41->VAR53.VAR51 = VAR13->VAR36.VAR52[0];
        }

        
        VAR18->VAR54 = (VAR55 *)((VAR56 *)FUN13(VAR18) + 20);

        FUN15(VAR18, 40); 

    } else if (FUN16(VAR13)) {
        if (VAR11 == 0) {
            FUN17(&VAR13->VAR36, &VAR18->VAR36);
            FUN17(&VAR13->VAR37, &VAR18->VAR37);
            VAR18->VAR38 = VAR13->VAR38;
            VAR18->VAR39 = VAR13->VAR39;
        } else {
            FUN17(&VAR13->VAR36, &VAR18->VAR37);
            FUN17(&VAR13->VAR37, &VAR18->VAR36);
            VAR18->VAR38 = VAR13->VAR39;
            VAR18->VAR39 = VAR13->VAR38;
        }

        
        if (FUN11(VAR18) <  60) {
            if (FUN12(VAR18, 60) == -1) {
                goto VAR40;
            }
        }
        
        VAR18->VAR57 = (VAR58 *)FUN13(VAR18);
        
        VAR18->VAR57->VAR59 = 0x60;
        VAR18->VAR57->VAR60 = 0;
        VAR18->VAR57->VAR61 = VAR24;
        VAR18->VAR57->VAR62 = FUN14(20);
        VAR18->VAR57->VAR63 = 64;
        if (VAR11 == 0) {
            VAR18->VAR57->VAR64[0] = VAR13->VAR36.VAR52[0];
            VAR18->VAR57->VAR64[1] = VAR13->VAR36.VAR52[1];
            VAR18->VAR57->VAR64[2] = VAR13->VAR36.VAR52[2];
            VAR18->VAR57->VAR64[3] = VAR13->VAR36.VAR52[3];
            VAR18->VAR57->VAR65[0] = VAR13->VAR37.VAR52[0];
            VAR18->VAR57->VAR65[1] = VAR13->VAR37.VAR52[1];
            VAR18->VAR57->VAR65[2] = VAR13->VAR37.VAR52[2];
            VAR18->VAR57->VAR65[3] = VAR13->VAR37.VAR52[3];
        } else {
            VAR18->VAR57->VAR64[0] = VAR13->VAR37.VAR52[0];
            VAR18->VAR57->VAR64[1] = VAR13->VAR37.VAR52[1];
            VAR18->VAR57->VAR64[2] = VAR13->VAR37.VAR52[2];
            VAR18->VAR57->VAR64[3] = VAR13->VAR37.VAR52[3];
            VAR18->VAR57->VAR65[0] = VAR13->VAR36.VAR52[0];
            VAR18->VAR57->VAR65[1] = VAR13->VAR36.VAR52[1];
            VAR18->VAR57->VAR65[2] = VAR13->VAR36.VAR52[2];
            VAR18->VAR57->VAR65[3] = VAR13->VAR36.VAR52[3];
        }

        
        VAR18->VAR54 = (VAR55 *)((VAR56 *)FUN13(VAR18) + 40);

        FUN15(VAR18, 60); 
    }

    VAR18->VAR54->VAR66 = 0x50;
    VAR18->VAR54->VAR67 |= VAR68;
    VAR18->VAR54->VAR69 = 10;
    VAR18->VAR54->VAR70 = 0;

    
    if (VAR11 == 0) {
        VAR18->VAR54->VAR71 = FUN14(VAR13->VAR38);
        VAR18->VAR54->VAR72 = FUN14(VAR13->VAR39);

        VAR18->VAR54->VAR73 = FUN18(VAR8->VAR74.VAR75);
        VAR18->VAR54->VAR76 = FUN18(VAR8->VAR77.VAR78);

    
    } else {
        VAR18->VAR54->VAR71 = FUN14(VAR13->VAR39);
        VAR18->VAR54->VAR72 = FUN14(VAR13->VAR38);

        VAR18->VAR54->VAR73 = FUN18(VAR8->VAR77.VAR75);
        VAR18->VAR54->VAR76 = FUN18(VAR8->VAR74.VAR78);
    }

    
    memcpy(&VAR18->VAR79, &VAR6->VAR79, sizeof(struct VAR80));

    FUN8("", VAR18);
    FUN19(VAR10, VAR18);

    FUN20(VAR2, VAR4->VAR81);
    VAR17;
VAR40:
    FUN21(&VAR18->VAR14);
    VAR17;
}