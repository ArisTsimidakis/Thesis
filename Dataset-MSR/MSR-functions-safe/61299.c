FUN1(const char *VAR1, const char *VAR2)
{
    VAR3 *VAR4 = NULL;
    int VAR5;
    struct VAR6 *VAR7 = NULL;

    
    
    do {
        VAR5 = FUN2(VAR1, &VAR4, &VAR7, 1);
    } while(VAR5 == VAR8);

    
    if (!VAR5 && VAR4->VAR9 & (VAR10 | VAR11 | VAR12)) {
        VAR5 = VAR13;
    }

    
    if (!VAR5) {
        
        free(VAR4->VAR14);
        VAR4->VAR14 = FUN3(VAR2);

        VAR5 = FUN4(VAR1, VAR4, &VAR7);

        if (VAR5) {
            syslog(VAR15, "",
                   VAR1, FUN5(VAR5));
            VAR5 = VAR16;
        }
    }

    
    if (!VAR5) {
        VAR5 = FUN6(VAR17, VAR7);
        if (VAR5) {
            syslog(VAR15, "",
                   VAR1, FUN5(VAR5));
            VAR5 = VAR16;
        }
        VAR7 = NULL;
    }

    
    if (!VAR5 && VAR18) {
        VAR19 *VAR20 = NULL;
        
        char VAR21[VAR22 + VAR23 + 2];
        sprintf(VAR21, "", VAR24, VAR4->VAR25);

        VAR5 = FUN7(VAR18, NULL, &VAR20, NULL);
        if (VAR5) {
            syslog(VAR15,
                   "",
                   VAR1);
        } else {
            VAR5 = FUN8(VAR20, VAR1, VAR21, VAR2);
            if(VAR5) {
                syslog(VAR15,
                       "",
                       VAR1);
            }
        }
        FUN9(&VAR20);
    }

    if (VAR5 && VAR7) {
        
        int VAR26 = FUN10(VAR17, VAR7);
        if (VAR26) {
            syslog(VAR15,
                   "",
                   VAR1, FUN5(VAR26));
        }
    }

    FUN11(&VAR4);

    return VAR5;
}