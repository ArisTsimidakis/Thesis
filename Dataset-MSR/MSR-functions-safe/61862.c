static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    char VAR6[1024];
    int VAR7;

    for (VAR7=0; VAR7<FUN2(VAR8); VAR7++) {
        int VAR9 = VAR5 ? FUN3(VAR4) : FUN4(VAR4);
        FUN5(VAR4, VAR6, sizeof(VAR6), VAR9);
        FUN6(&VAR2->VAR10, VAR8[VAR7], VAR6, 0);
    }
}