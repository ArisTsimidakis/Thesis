FUN1(
   Dwarf_Debug VAR1,
   VAR2* VAR3,
   struct VAR4 *VAR5,
   int *VAR6)
{
    VAR7 *VAR8 = 0;
    VAR7 *VAR9 = VAR3->VAR10->VAR11;
    Dwarf_Unsigned VAR12 = VAR3->VAR10->VAR13;
    Dwarf_Unsigned VAR14 = VAR3->VAR10->VAR15;
    VAR7 *VAR16  = VAR5->VAR17;
    Dwarf_Unsigned VAR18 =
        VAR5->VAR19;
    Dwarf_Unsigned VAR20 = VAR5->VAR21;

    int VAR22 = VAR23;
    struct VAR24 *VAR25 = 0;
    unsigned int VAR26 = 0;
    VAR7 *VAR27 = 0;

    VAR22 = FUN2(VAR3->VAR28,
        VAR3->VAR29,
        VAR3->VAR30,
        VAR16,
        VAR18,
        VAR20,
        &VAR25, &VAR26, VAR6);
    if (VAR22 != VAR31) {
        free(VAR25);
        return VAR22;
    }

    if(!VAR5->VAR32) {
        
        VAR27 = malloc(VAR5->VAR15);
        if (!VAR27) {
            *VAR6 = VAR33;
            return VAR23;
        }
        memcpy(VAR27,VAR5->VAR11,VAR5->VAR15);
        VAR5->VAR11 = VAR27;
        VAR8 = VAR5->VAR11;
        VAR5->VAR32 = 1;
    }
    VAR8 = VAR5->VAR11;

    VAR22 = FUN3(
        VAR1,
        VAR3->VAR28,
        VAR3->VAR29, VAR3->VAR30,
        VAR8,
        VAR9,
        VAR14,
        VAR12,
        VAR25, VAR26, VAR6);
    free(VAR25);
    return VAR22;
}