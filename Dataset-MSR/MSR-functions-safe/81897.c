int FUN1(VAR1* VAR2, const char* VAR3, const char* VAR4,
                   const char* VAR5, const char* VAR6)
{
    int VAR7, VAR8;

    
    if (VAR2 == NULL || VAR3 == NULL || VAR4 == NULL || VAR6 == NULL) {
        return VAR9;
    }

    
    for (VAR8 = 0; VAR10[VAR8].VAR11 != 0; VAR8++) {
        if (FUN2(VAR10[VAR8].VAR12, VAR6,
                     FUN3(VAR6)) == 0) {
            break;
        }
    }

    if (VAR10[VAR8].VAR11 == 0) {
        FUN4("");
        VAR7 = VAR13;
    } else {
        return FUN5(VAR2, VAR3, VAR4, VAR5, VAR10[VAR8].VAR14,
            VAR15);
    }

    return VAR7;
}