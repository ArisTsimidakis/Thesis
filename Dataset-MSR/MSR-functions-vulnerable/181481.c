FUN1(void)
{
    VAR1 *VAR2 = NULL, *VAR3 = NULL, *VAR4 = NULL;
    VAR1 *VAR5 = NULL;
    int VAR6 = 12;
    int VAR7;
    int VAR8 = 0;
 
     FUN2();
 

    VAR2 = FUN3(VAR6, 0, 1, '', 8);


     if (VAR2 == NULL)
         goto VAR9;

    VAR3 = FUN3(VAR6, 1, 1, '', 8);


     if (VAR3 == NULL)
         goto VAR9;

    VAR4 = FUN3(VAR6, 2, 0, '', 3);


     if (VAR4 == NULL)
         goto VAR9;
 
    if (FUN4(NULL, NULL, VAR2, NULL) != NULL)
        goto VAR9;
    if (FUN4(NULL, NULL, VAR3, NULL) != NULL)
        goto VAR9;
    VAR5 = FUN4(NULL, NULL, VAR4, NULL);
    if (VAR5 == NULL)
        goto VAR9;

    if (FUN5(VAR5) != 19)
        goto VAR9;

    
    for (VAR7 = 40; VAR7 < 40 + 8; VAR7++) {
        if (FUN6(VAR5)[VAR7] != '')
            goto VAR9;
    }

    
    for (VAR7 = 48; VAR7 < 48 + 8; VAR7++) {
        if (FUN6(VAR5)[VAR7] != '')
            goto VAR9;
    }

    
    for (VAR7 = 56; VAR7 < 56 + 3; VAR7++) {
        if (FUN6(VAR5)[VAR7] != '')
            goto VAR9;
    }

    VAR8 = 1;
VAR9:
    if (VAR2 != NULL)
        FUN7(VAR2);
    if (VAR3 != NULL)
        FUN7(VAR3);
    if (VAR4 != NULL)
        FUN7(VAR4);
    if (VAR5 != NULL)
        FUN7(VAR5);

    FUN8();
    return VAR8;
}