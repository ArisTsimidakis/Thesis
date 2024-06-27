static int FUN1(VAR1 *VAR2, int64_t VAR3, VAR4 *VAR5)
{
    uint64_t VAR6;
    int VAR7;

    VAR7 = FUN2(VAR2->VAR8, VAR3, &VAR6, 8);
    if (VAR7 < 0) {
        return VAR7;
    }

    *VAR5 = FUN3(VAR6);
    return 0;
}