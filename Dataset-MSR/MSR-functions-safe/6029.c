FUN1(VAR1 *VAR2, const VAR3 *VAR4, size_t VAR5)
{
    const struct iovec VAR6 = {
        .VAR7 = (VAR3 *)VAR4,
        .VAR8 = VAR5
    };

    return FUN2(VAR2, &VAR6, 1);
}