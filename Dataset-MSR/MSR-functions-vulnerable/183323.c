char* FUN1(VAR1 *VAR2)
 {
     FUN2();
 

    struct VAR3 *VAR4 = FUN3(VAR2, VAR5);












 
     char *VAR6 = NULL;
     if (VAR4)
    {
        VAR6 = xstrdup(VAR4->VAR7);
        FUN4(VAR4);
    }

    FUN5("", VAR6);
    return VAR6;
}