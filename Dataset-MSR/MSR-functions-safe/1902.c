static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;

    FUN2(VAR4, &VAR5->VAR6) {
        VAR7 *VAR8;

        VAR8 = FUN3(VAR4, VAR7, VAR9);
        if (VAR8->VAR2 == VAR2) {
            FUN4(VAR4);
            free(VAR8);
            if (FUN5(&VAR5->VAR6)) {
                FUN6();
            }
            return;
        }
    }
    FUN7("", VAR2);
}