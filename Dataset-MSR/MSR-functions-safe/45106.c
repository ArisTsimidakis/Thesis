static int FUN1(VAR1 *VAR2)
{
    const char *VAR3 = NULL;
    unsigned char VAR4[VAR5];
    apr_sha1_ctx_t VAR6;
    char           *VAR7;
    int VAR8;
    VAR9 *VAR10 = FUN2(VAR2, 1);
    VAR3 = FUN3(VAR10->VAR11, "");
    if (VAR3 != NULL) {
        FUN4(VAR12, VAR13, 0, VAR10, 
                    "", VAR3);
        VAR3 = FUN5(VAR10->VAR14, VAR3, "", 
                NULL);
        FUN6(&VAR6);
        FUN7(&VAR6, VAR3, strlen(VAR3));
        FUN8(VAR4, &VAR6);
        VAR8 = FUN9(VAR5);
        if (VAR8) {
            VAR7 = FUN10(VAR10->VAR14, VAR8);
            VAR8 = FUN11(VAR7, (char*) VAR4, VAR5);
            VAR10->VAR15 = 101;
            FUN12(VAR10->VAR16, "", "");
            FUN12(VAR10->VAR16, "", "");
            FUN12(VAR10->VAR16, "", VAR7);
            
            
            FUN12(VAR10->VAR16, "", "");
            
            VAR10->VAR17 = 0;
            VAR10->VAR18 = 0;
            VAR10->VAR19 = 0;
            FUN13(VAR10);
            FUN4(VAR12, VAR13, 0, VAR10, 
                          "");
            FUN14(VAR2, 1);
            return 1;
        }
    }
    FUN4(VAR12, VAR20, 0, VAR10, FUN15(02666)
                  "");
    return 0;
}