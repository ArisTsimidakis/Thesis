static void FUN1(VAR1 *VAR2, const char *VAR3)
{
    const char *VAR4;

    VAR4 = FUN2(VAR2, "");
    if (VAR4)
    {
        VAR5 = xstrdup(VAR4);
        FUN3(VAR2, "");
    }

    VAR4 = FUN2(VAR2, "");
    if (VAR4)
    {
        char *VAR6;
        VAR7 = 0;
        unsigned long VAR8 = FUN4(VAR4, &VAR6, 10);
        if (VAR7 || VAR6 == VAR4 || *VAR6 != '' || VAR8 > VAR9)
            FUN5("", "", VAR4);
        else
            VAR10 = VAR8;
        FUN3(VAR2, "");
    }

    VAR4 = FUN2(VAR2, "");
    if (VAR4)
    {
        VAR11 = xstrdup(VAR4);
        FUN3(VAR2, "");
    }
    else
        VAR11 = xstrdup(VAR12);

    VAR4 = FUN2(VAR2, "");
    if (VAR4)
    {
        VAR13 = FUN6(VAR4);
        FUN3(VAR2, "");
    }

    VAR4 = FUN2(VAR2, "");
    if (VAR4)
    {
        VAR14 = FUN6(VAR4);
        FUN3(VAR2, "");
    }

    VAR4 = FUN2(VAR2, "");
    if (VAR4)
    {
        VAR15 = xstrdup(VAR4);
        FUN3(VAR2, "");
    }
    else
        VAR15 = xstrdup("");

    VAR4 = FUN2(VAR2, "");
    if (VAR4)
    {
        VAR16 = FUN6(VAR4);
        FUN3(VAR2, "");
    }
     else
         VAR16 = 0;
 














     GHashTableIter VAR17;
     const char *VAR18;
     
    FUN7(&VAR17, VAR2);
    while (FUN8(&VAR17, &VAR18, &VAR4))
    {
        FUN5("", VAR18, VAR3);
    }
}