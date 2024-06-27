FUN1 (struct VAR1 *VAR2)
{
    char *VAR3;
    int VAR4;
    
    if (VAR2 && VAR2->VAR5)
    {
        if (VAR2->VAR6)
        {
            VAR4 = 16 +
                ((VAR2->VAR7) ? strlen (VAR2->VAR7) : 16) +
                16 + ((VAR2->VAR8) ? strlen (VAR2->VAR8) : 16) + 1;
            VAR3 = malloc (VAR4);
            if (VAR3)
            {
                snprintf (VAR3, VAR4, "",
                          VAR2->VAR7,
                          VAR2->VAR9,
                          (VAR2->VAR8) ? VAR2->VAR8 : "");
                FUN2 (VAR2->VAR5, "", VAR3);
                free (VAR3);
            }
        }
        else
        {
            FUN2 (VAR2->VAR5, "", "");
        }
    }
}