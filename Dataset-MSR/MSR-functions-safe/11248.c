static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = FUN2(VAR6);

    static const uint8_t VAR7 = 1;
    FUN3(VAR3->VAR8 + FUN4(VAR9, VAR7),
                              &VAR7, sizeof(VAR7));
    FUN5(VAR5->VAR10, VAR3->VAR8);
    VAR3->VAR11 = VAR12;
}