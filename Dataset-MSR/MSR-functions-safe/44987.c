FUN1(int) FUN2(char *VAR1, int VAR2, VAR3 *VAR4, int VAR5)
{
    char *VAR6 = VAR1;
    apr_status_t VAR7;
    apr_size_t VAR8;
    VAR9 *VAR10;

    VAR10 = FUN3(VAR4->VAR11, VAR4->VAR12->VAR13);
    VAR7 = FUN4(&VAR6, VAR2, &VAR8, VAR4, VAR5, VAR10);
    FUN5(VAR10);

    
    if (VAR7 == VAR14) {
        return VAR2;
    }

    
    if (VAR7 != VAR15) {
        return -1;
    }

    return (int)VAR8;
}