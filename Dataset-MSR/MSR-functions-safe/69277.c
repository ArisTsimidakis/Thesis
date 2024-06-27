int FUN1(VAR1 *VAR2)
{
    int VAR3;
    if (VAR2 == NULL)
        return 0;
    for (VAR3 = 0; VAR3 < FUN2(VAR2); VAR3++) {
        VAR4 *VAR5 = FUN3(VAR2, VAR3);
        if (VAR5->VAR6->VAR7 == VAR8)
            return 1;
    }
    return 0;
}