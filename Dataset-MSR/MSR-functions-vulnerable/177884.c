FUN1 ()
{
#ifdef VAR1
    char *VAR2, *VAR3;

    FUN2 ();
    FUN3 (&VAR4);
    
    VAR2 = FUN4 (FUN5(VAR5));
    if (VAR2)
    {
        VAR3 = FUN6 (VAR2, "", VAR6);
        if (VAR3)
        {
            FUN7 (VAR4, VAR3,
                                                    VAR7);
            free (VAR3);
         }
         free (VAR2);
     }




     FUN8 (VAR4,
                                                      &VAR8);
     VAR9 = 1;
    FUN9 (VAR10);
    FUN10 (VAR11, 0);
    FUN10 (VAR12, 0);
#endif
}