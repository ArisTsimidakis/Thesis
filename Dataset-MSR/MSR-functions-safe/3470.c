FUN1 (struct VAR1 *VAR2)
{
    struct VAR3 *VAR4;
    
    if (VAR2->VAR5)
    {
        for (VAR4 = VAR2->VAR6; VAR4;
             VAR4 = VAR4->VAR7)
        {
            if (VAR4->VAR8 == VAR9)
                FUN2 (VAR2, VAR4);
        }
        VAR2->VAR10 = FUN3 (NULL);
    }
}