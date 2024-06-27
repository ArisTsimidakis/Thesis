FUN1 (VAR1 *VAR2)
{
        VAR3 *VAR4;
        VAR5 *VAR6;
        VAR3 *VAR7;
        VAR8 *VAR9;

        VAR6 = FUN2 ();
        FUN3 (VAR2, VAR6);

        VAR9 = NULL;
        VAR7 = FUN4 (VAR6, NULL, &VAR9);
        if (VAR9 == NULL) {
                VAR4 = FUN5 ("",
                                             VAR2->VAR10,
                                             NULL);
                FUN6 (VAR4, VAR7, -1, &VAR9);
                FUN7 (VAR4);
        }
        if (VAR9) {
                FUN8 ("",
                           VAR2->VAR10, VAR9->VAR11);
                FUN9 (VAR9);
        }
        FUN10 (VAR6);
}