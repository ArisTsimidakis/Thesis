FUN1 (const char *VAR1,
                          const char *VAR2,
                          int         VAR3,
                          int         VAR4)
{
    const char *VAR5;
    char *VAR6;
    int VAR7;
    gboolean VAR8;

    if (VAR3 < 1)
    {
        FUN2 ("", VAR3);
        VAR3 = 1;
    }

    if (VAR3 <= 2)
    {
        
        switch (VAR3)
        {
            default:
            {
                FUN3 ();
                
            }

            case 1:
            {
                VAR5 = VAR9;
            }
            break;

            case 2:
            {
                VAR5 = VAR10;
            }
            break;
        }

        VAR8 = VAR11;
    }
    else
    {
        

        
        switch (VAR3 % 100)
        {
            case 11:
            {
                VAR5 = VAR12;
            }
            break;

            case 12:
            {
                VAR5 = VAR13;
            }
            break;

            case 13:
            {
                VAR5 = VAR14;
            }
            break;

            default:
            {
                VAR5 = NULL;
            }
            break;
        }

        if (VAR5 == NULL)
        {
            switch (VAR3 % 10)
            {
                case 1:
                {
                    VAR5 = VAR15;
                }
                break;

                case 2:
                {
                    VAR5 = VAR16;
                }
                break;

                case 3:
                {
                    VAR5 = VAR17;
                }
                break;

                default:
                {
                    
                    VAR5 = VAR18;
                }
                break;
            }
        }

        VAR8 = VAR19;
    }

#pragma GCC diagnostic VAR20
#pragma GCC diagnostic VAR21 ""
    if (VAR8)
    {
        VAR6 = FUN4 (VAR5, VAR1, VAR3, VAR2);
    }
    else
    {
        VAR6 = FUN4 (VAR5, VAR1, VAR2);
    }

    if (VAR4 > 0 && (VAR7 = strlen (VAR6)) > VAR4)
    {
        char *VAR22;

        VAR22 = FUN5 (VAR1, VAR7 - VAR4);
        if (VAR22)
        {
            FUN6 (VAR6);

            if (VAR8)
            {
                VAR6 = FUN4 (VAR5, VAR22, VAR3, VAR2);
            }
            else
            {
                VAR6 = FUN4 (VAR5, VAR22, VAR2);
            }

            FUN7 (strlen (VAR6) <= VAR4);
            FUN6 (VAR22);
        }
    }
#pragma GCC diagnostic VAR23

    return VAR6;
}