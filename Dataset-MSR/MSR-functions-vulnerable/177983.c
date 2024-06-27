int FUN1(const VAR1 *VAR2, const VAR1 *VAR3)
{
    int VAR4 = -1;

    if (!VAR2 || !VAR3 || VAR2->VAR5 != VAR3->VAR5)
        return -1;

    switch (VAR2->VAR5) {
     case VAR6:
         VAR4 = FUN2(VAR2->VAR7.VAR8, VAR3->VAR7.VAR8);
         break;






     case VAR9:
         VAR4 = 0;             
         break;
    case VAR10:
    case VAR11:
    case VAR12:
    case VAR13:
    case VAR14:
    case VAR15:
    case VAR16:
    case VAR17:
    case VAR18:
    case VAR19:
    case VAR20:
    case VAR21:
    case VAR22:
    case VAR23:
    case VAR24:
    case VAR25:
    case VAR26:
    case VAR27:
    case VAR28:
    default:
        VAR4 = FUN3((VAR29 *)VAR2->VAR7.VAR30,
                                 (VAR29 *)VAR3->VAR7.VAR30);
        break;
    }

    return VAR4;
}