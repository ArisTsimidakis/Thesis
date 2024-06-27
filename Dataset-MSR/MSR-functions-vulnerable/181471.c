static int FUN1(void)
{
    int VAR1 = 0;
    int VAR2 = 9;
    VAR3 *VAR4 = NULL;
 
     FUN2();
 

    VAR3 *VAR5 = FUN3(VAR2, 2, 1, '', 8);

    VAR3 *VAR6 = FUN3(VAR2, 0, 1, '', 8);

    VAR3 *VAR7 = FUN3(VAR2, 1, 0, '', 8);






     if (VAR5 == NULL || VAR6 == NULL || VAR7 == NULL) {
         goto VAR8;
     }

    VAR4 = FUN4(NULL, NULL, VAR5, NULL);
    if (VAR4 != NULL) {
        goto VAR8;
    }

    VAR4 = FUN4(NULL, NULL, VAR6, NULL);
    if (VAR4 != NULL) {
        goto VAR8;
    }

    
    VAR4 = FUN4(NULL, NULL, VAR7, NULL);
    if (VAR4 == NULL) {
        goto VAR8;
    }

    
    if (FUN5(VAR4) != 36) {
        goto VAR8;
    }

    VAR1 = 1;
VAR8:
    if (VAR5 != NULL) {
        FUN6(VAR5);
    }
    if (VAR6 != NULL) {
        FUN6(VAR6);
    }
    if (VAR7 != NULL) {
        FUN6(VAR7);
    }
    if (VAR4 != NULL) {
        FUN6(VAR4);
    }
    FUN7();
    return VAR1;
}