VAR1 FUN1(const wchar_t *VAR2)
{
    const wchar_t *VAR3;

    VAR3 = VAR2;
    while (*VAR3)
        VAR3++;

    return (VAR1)(VAR3 - VAR2);
}