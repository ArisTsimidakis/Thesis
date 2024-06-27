FUN1(gboolean VAR1)
{
    int VAR2 = VAR3;
    static gboolean VAR4 = VAR5;

    FUN2(VAR6 != NULL, return -VAR7);

    if (getenv("") != NULL) {
        VAR4 = VAR8;
    }

    if(VAR9 && VAR10 == NULL) {
        VAR10 = FUN3();
    }
    
    if(VAR9 && VAR10->VAR11 == VAR12) {
        FUN4("");
        VAR2 = VAR10->VAR13->connect(VAR10, VAR14, NULL);
        if(VAR2 == VAR3) {
            FUN4("");
            VAR10->VAR13->FUN5(VAR10, VAR15, VAR16);
        }
    }
    
    if (VAR6->VAR11 != VAR17 && VAR6->VAR11 != VAR18) {
        FUN4("");
        if (VAR19 && VAR4 && VAR6->VAR20 == VAR21) {
            VAR4 = VAR8;
            FUN6("");
        }

        VAR2 = VAR6->VAR13->FUN7(VAR6, VAR14, VAR22);

        if (VAR2 != VAR3) {
            return VAR2;
        }

        VAR23 = FUN8(VAR6);
        FUN9(NULL);

        if (VAR1) {
             if (VAR2 == VAR3) {
                 VAR2 = VAR6->VAR13->FUN10(VAR6, VAR24);
                 if (VAR2 == -VAR25) {

                    FUN6("");


                     if (VAR19) {
                         sleep(2);
                     }
                    VAR2 = VAR3;
                }

            }

            if (VAR2 == VAR3) {
                VAR6->VAR13->FUN11(VAR6, VAR26, VAR27);
                VAR2 = VAR6->VAR13->FUN12(VAR6, VAR26, VAR27);
            }

            if (VAR2 != VAR3) {
                FUN6("");
                if (VAR19) {
                    sleep(2);
                }
                FUN13(-VAR2);
            }
        }
    }
    return VAR2;
}