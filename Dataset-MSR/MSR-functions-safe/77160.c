FUN1(VAR1)
{
    enum ofperr VAR2 = 0;
    struct rule_collection VAR3;
    unsigned int VAR4 = VAR5->VAR6;
    unsigned int VAR7 = VAR5->VAR7;

    FUN2(&VAR3);

    while (VAR4-- > VAR7) {
        struct VAR8 *VAR8;

        if (!FUN3(VAR5, &VAR8)) {
            VAR2 = VAR9;
            break;
        } else {
            FUN4(VAR8);
            FUN5(&VAR3, VAR8);
        }
    }
    FUN6(&VAR3, VAR10, NULL);

    return VAR2;
}