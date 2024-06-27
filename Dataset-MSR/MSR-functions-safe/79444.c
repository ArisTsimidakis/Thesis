static void FUN1(VAR1 *VAR2, int VAR3, unsigned int VAR4)
{
    int VAR5 = 3;
    FUN2(VAR2, VAR3);
    for (; VAR5 > 0; VAR5--)
        FUN2(VAR2, (VAR4 >> (7 * VAR5)) | 0x80);
    FUN2(VAR2, VAR4 & 0x7F);
}