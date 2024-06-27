static char *FUN1(VAR1 **VAR2)
{
    if (!VAR2 || !*VAR2)
        return NULL;

    char *VAR3 = (char *)(*VAR2)->VAR4;
    const size_t VAR5 = strlen(VAR3);

    
    *VAR2 = FUN2(*VAR2, *VAR2);

    if (VAR3[VAR5 - 1] == '')
    {
        FUN3("", VAR3);

        struct VAR6 *VAR7 = FUN4(VAR8, VAR9);
        if (!VAR7)
            FUN5("", VAR8);

        
        VAR3[VAR5 - 1] = '';

        
        char *VAR10 = FUN6(VAR7, VAR8, VAR3);

        FUN7(VAR7);
        free(VAR3);

        VAR1 *VAR11 = NULL;
        
        char *VAR12 = VAR3 = VAR10;
        while ((VAR12 = strchr(VAR3, '')))
        {
            
            VAR12[0] = '';

            
            VAR3 = xstrdup(VAR3);
            FUN8("", VAR3);

            
            ++VAR12;
            if (VAR12[0] == '')
                break;

            VAR11 = FUN9(VAR11, VAR3);

            
            VAR3 = VAR12;
        }

        free(VAR10);

        
        if (VAR3 != VAR10)
            
            *VAR2 = FUN10(VAR11, *VAR2);
        else
        {
            FUN3("");
            
            return FUN1(VAR2);
        }
    }

    FUN11();
    const bool VAR13 = FUN12(VAR3);
    FUN13();

    if (!VAR13)
    {
        
        free(VAR3);

        FUN14(*VAR2, free);
        *VAR2 = NULL;
        return NULL;
    }

    return VAR3;
}