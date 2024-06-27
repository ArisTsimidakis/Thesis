static int FUN1(VAR1 *VAR2, VAR3 *VAR4)


 {
     VAR5 *VAR6 = &VAR2->VAR6;
     VAR7 *VAR8 = FUN2(VAR7, VAR9, VAR6->VAR10);
     uint64_t VAR11;


     int VAR12 = 0;
 


































     switch (VAR6->VAR13.VAR14[0]) {
     case VAR15:
         if (VAR8->VAR16 || !FUN3(VAR8->VAR17))
            goto VAR18;
        break;
    case VAR19:
        VAR12 = FUN4(VAR6, VAR4);
        if (VAR12 < 0)
            goto VAR20;
        break;
    case VAR21:
    case VAR22:
        VAR12 = FUN5(VAR2, VAR4);
        if (VAR12 < 0)
            goto VAR20;
        break;
    case VAR23:
        VAR12 = FUN6(VAR6, VAR4);
        if (VAR12 < 0)
            goto VAR20;
        break;
    case VAR24:
        if (VAR6->VAR13.VAR14[1] & 1)
            goto VAR20;
        break;
    case VAR25:
        if (VAR6->VAR13.VAR14[1] & 3)
            goto VAR20;
        break;
    case VAR26:
        if (VAR6->VAR13.VAR14[1] & 1)
            goto VAR20;
        break;
    case VAR27:
        if (VAR6->VAR13.VAR14[1] & 3)
            goto VAR20;
        break;
    case VAR28:
        if (FUN7(VAR2) < 0) {
            return -1;
        }
        break;
    case VAR29:
        VAR8->VAR30 = VAR6->VAR13.VAR14[4] & 1;
        FUN8(VAR8->VAR17, VAR6->VAR13.VAR14[4] & 1);
        break;
    case VAR31:
        
        memset(VAR4, 0, 8);
        FUN9(VAR8->VAR17, &VAR11);
        if (!VAR11)
            goto VAR18;
        VAR11 /= VAR8->VAR32;
        
        VAR11--;
        
        VAR8->VAR33 = VAR11;
        
        if (VAR11 > VAR34)
            VAR11 = VAR34;
        VAR4[0] = (VAR11 >> 24) & 0xff;
        VAR4[1] = (VAR11 >> 16) & 0xff;
        VAR4[2] = (VAR11 >> 8) & 0xff;
        VAR4[3] = VAR11 & 0xff;
        VAR4[4] = 0;
        VAR4[5] = 0;
        VAR4[6] = VAR8->VAR32 * 2;
        VAR4[7] = 0;
        VAR12 = 8;
        break;
    case VAR35:
        memset(VAR4, 0, 8);
        
        VAR4[7] = 8; 
        VAR12 = 8;
        break;
    case VAR36:
        
        if ((VAR6->VAR13.VAR14[1] & 31) == VAR37) {
            FUN10("");
            memset(VAR4, 0, VAR6->VAR13.VAR38);
            FUN9(VAR8->VAR17, &VAR11);
            if (!VAR11)
                goto VAR18;
            VAR11 /= VAR8->VAR32;
            
            VAR11--;
            
            VAR8->VAR33 = VAR11;
            VAR4[0] = (VAR11 >> 56) & 0xff;
            VAR4[1] = (VAR11 >> 48) & 0xff;
            VAR4[2] = (VAR11 >> 40) & 0xff;
            VAR4[3] = (VAR11 >> 32) & 0xff;
            VAR4[4] = (VAR11 >> 24) & 0xff;
            VAR4[5] = (VAR11 >> 16) & 0xff;
            VAR4[6] = (VAR11 >> 8) & 0xff;
            VAR4[7] = VAR11 & 0xff;
            VAR4[8] = 0;
            VAR4[9] = 0;
            VAR4[10] = VAR8->VAR32 * 2;
            VAR4[11] = 0;
            VAR4[12] = 0;
            VAR4[13] = FUN11(&VAR8->VAR9.VAR39);

            
            if (VAR8->VAR9.VAR39.VAR40) {
                VAR4[14] = 0x80;
            }

            
            VAR12 = VAR6->VAR13.VAR38;
            break;
        }
        FUN10("");
        goto VAR20;
    case VAR41:
        break;
    default:
        FUN12(VAR2, FUN13(VAR42));
        return -1;
    }
    return VAR12;

VAR18:
    if (VAR8->VAR16 || !FUN3(VAR8->VAR17)) {
        FUN12(VAR2, FUN13(VAR43));
    } else {
        FUN12(VAR2, FUN13(VAR44));
    }
    return -1;

VAR20:
    if (VAR2->VAR6.VAR45 == -1) {
        FUN12(VAR2, FUN13(VAR46));
    }
    return -1;
}