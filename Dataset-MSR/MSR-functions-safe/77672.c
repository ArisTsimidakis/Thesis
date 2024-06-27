FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
    enum ofperr VAR5;
    enum ofpraw VAR6;

    memset(VAR2, 0xFF, sizeof (*VAR2));

    VAR5 = (VAR4->VAR7 ? FUN2(&VAR6, VAR4->VAR7)
             : FUN3(&VAR6, VAR4));
    if (VAR5) {
        return VAR5;
    }

    if (!VAR4->VAR8) {
        return VAR9;
    } else if (VAR6 == VAR10 ||
               VAR6 == VAR11) {
        struct VAR12 *VAR13;

        VAR13 = FUN4(VAR4, sizeof *VAR13);
        return FUN5(VAR2, VAR13);
    } else {
        FUN6();
    }
}