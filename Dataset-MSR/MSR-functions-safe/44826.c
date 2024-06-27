local VAR1 FUN1(int VAR2, unsigned char *VAR3, size_t VAR4)
{
    ssize_t VAR5;
    size_t VAR6;

    VAR6 = 0;
    while (VAR4) {
        VAR5 = read(VAR2, VAR3, VAR4);
        if (VAR5 < 0)
            FUN2("", VAR7.VAR8);
        if (VAR5 == 0)
            break;
        VAR3 += VAR5;
        VAR4 -= VAR5;
        VAR6 += VAR5;
    }
    return VAR6;
}