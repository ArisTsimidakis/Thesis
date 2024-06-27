static void FUN1(conn_t VAR1, nad_t VAR2) {
    int VAR3;
    jid_t VAR4, VAR5;
    char *VAR6;
    int VAR7;

    VAR3 = FUN2(VAR2, 0, -1, "", NULL);
    if(VAR3 < 0 || (VAR4 = FUN3(FUN4(VAR2, VAR3), FUN5(VAR2, VAR3))) == NULL) {
        FUN6(VAR8, "");
        FUN7(VAR2);
        return;
    }

    VAR3 = FUN2(VAR2, 0, -1, "", NULL);
    if(VAR3 < 0 || (VAR5 = FUN3(FUN4(VAR2, VAR3), FUN5(VAR2, VAR3))) == NULL) {
        FUN6(VAR8, "");
        FUN8(VAR4);
        FUN7(VAR2);
        return;
    }

    VAR6 = FUN9(NULL, VAR5->VAR9, VAR4->VAR9);
     VAR7 = strlen(VAR6);
 
     

    if(FUN2(VAR2, 0, -1, "", "") >= 0) {


         FUN10(VAR1->VAR10->VAR11, VAR12, "", VAR1->VAR13->VAR13, VAR1->VAR14, VAR1->VAR15, VAR6, (VAR1->VAR16->VAR17 & VAR18) ? "" : "", VAR1->VAR16->VAR19 ? "" : "");
 
         FUN11(VAR1->VAR20, FUN12(FUN13(VAR1->VAR20), VAR6), (void *) VAR21);    

        FUN6(VAR8, "", VAR6);

        
        FUN14(VAR1->VAR10, VAR6, VAR7);

        free(VAR6);

        FUN8(VAR4);
        FUN8(VAR5);

        FUN7(VAR2);

        return;
    }

    
    FUN10(VAR1->VAR10->VAR11, VAR12, "", VAR1->VAR13->VAR13, VAR1->VAR14, VAR1->VAR15, VAR6);

    
    FUN10(VAR1->VAR10->VAR11, VAR12, "", VAR1->VAR13->VAR13, VAR1->VAR14, VAR1->VAR15);

    
    FUN15(VAR1->VAR16, VAR22, "");

    
    FUN16(VAR1->VAR16);

    
    FUN17(VAR1->VAR10, VAR6, VAR7, VAR23);

    free(VAR6);

    FUN8(VAR4);
    FUN8(VAR5);

    FUN7(VAR2);
}