static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int64_t VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR4->VAR9;
    int VAR10, VAR11;
    int VAR12;

    VAR10 = FUN2(VAR4, VAR5, VAR6);
    FUN3(VAR2, ""VAR13"", VAR4->VAR14, VAR5, VAR10);
    if (VAR10 < 0 && VAR4->VAR15 && VAR5 < VAR4->VAR16[0].VAR5)
        VAR10 = 0;
    if (VAR10 < 0) 
        return VAR17;
    VAR8->VAR18 = VAR10;
    FUN3(VAR2, "", VAR4->VAR14, VAR8->VAR18);
    
    if (VAR8->VAR19) {
        VAR11 = 0;
        for (VAR12 = 0; VAR12 < VAR8->VAR20; VAR12++) {
            int VAR21 = VAR11 + VAR8->VAR19[VAR12].VAR22;
            if (VAR21 > VAR8->VAR18) {
                VAR8->VAR23 = VAR12;
                VAR8->VAR24 = VAR8->VAR18 - VAR11;
                break;
            }
            VAR11 = VAR21;
        }
    }
    return VAR10;
}