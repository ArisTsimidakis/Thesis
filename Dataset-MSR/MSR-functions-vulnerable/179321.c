FUN1(gpointer VAR1)




 {
     const char *VAR2 = NULL;

    VAR3 *VAR4 = NULL;

    VAR5 *VAR6 = VAR1;



    FUN2("", VAR6->VAR7 ? "" : "");



    VAR4 = FUN3(VAR6->VAR8, VAR6->VAR7);

    if (VAR4 == NULL) {

        return -1;

    }
 
     VAR2 = FUN4(VAR4);
     if (FUN5(VAR2, "")) {
         FUN6(VAR4, "");

        goto VAR9;


     }
 
     if (VAR6->VAR10 == NULL) {
        VAR2 = FUN7(VAR4, VAR11);
        if (VAR2 == NULL) {
            VAR6->VAR10 = strdup(VAR6->VAR12);
        } else {
            VAR6->VAR10 = strdup(VAR2);
        }
    }

    if (VAR6->VAR13 == NULL) {
        VAR2 = FUN7(VAR4, VAR14);
        if (VAR2 != NULL) {
            VAR6->VAR13 = strdup(VAR2);
            FUN2("", VAR6->VAR12, VAR6->VAR13);

        } else {
            VAR6->VAR13 = strdup(VAR6->VAR12);
        }
    }

    
    FUN8(VAR4, VAR15);
    FUN8(VAR4, VAR16);
    FUN8(VAR4, VAR17);

    FUN9(VAR4, VAR18, VAR19);
    FUN9(VAR4, VAR20, VAR6->VAR12);
    FUN9(VAR4, VAR21, VAR6->VAR10);
#if VAR22
    FUN9(VAR4, VAR23, VAR6->VAR24);
#endif

    if (FUN7(VAR4, VAR25) == NULL) {
        char *VAR26 = FUN10();

        
        FUN9(VAR4, VAR25, VAR26);
        free(VAR26);
    }

    if (FUN7(VAR4, VAR27) == NULL) {
        FUN11(VAR4, VAR27, 0);
    }
 
     FUN6(VAR4, "");
     FUN12(0, 0, VAR4, VAR6, VAR28);

  VAR9:

    FUN13(VAR4);

    VAR4 = NULL;


















































































































































































     return 0;
 }