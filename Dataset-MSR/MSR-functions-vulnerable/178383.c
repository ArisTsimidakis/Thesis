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
        VAR4 = VAR2->VAR7.VAR10 - VAR3->VAR7.VAR10;
        break;
    case VAR11:
         VAR4 = 0;             
         break;
     case VAR12:

    case VAR13:
     case VAR14:

    case VAR15:
     case VAR16:
     case VAR17:
     case VAR18:
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
    case VAR29:
    case VAR30:
    case VAR31:
    case VAR32:
    case VAR33:
    default:
        VAR4 = FUN3((VAR34 *)VAR2->VAR7.VAR35,
                                 (VAR34 *)VAR3->VAR7.VAR35);
        break;
    }

    return VAR4;
}