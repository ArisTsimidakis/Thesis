FUN1(VAR1)
{
    enum ofperr VAR2;

    if (!FUN2(VAR3, VAR4->VAR5.VAR6)) {
        VAR2 = FUN3(VAR3, VAR4);
    } else {
        VAR2 = FUN4(VAR3, VAR4);
    }

    return VAR2;
}