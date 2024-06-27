int FUN1(VAR1 *VAR2, const VAR3 *VAR4,
                 int VAR5, VAR6 *VAR7)
{
    int VAR8;
    int VAR9;
    int VAR10;
    uint16_t VAR11;
    uint8_t VAR12[VAR13];
    int VAR14 = 0;
    sft_t VAR15;

    if (VAR2 == NULL) {
        VAR16 = VAR17;
        return -1;
    }

    VAR8 = VAR2->VAR18->VAR19;
    VAR9 = VAR4[VAR8 - 1];
    VAR10 = VAR4[VAR8];
    VAR11 = (VAR4[VAR8 + 1] << 8) + VAR4[VAR8 + 2];

    VAR15.VAR9 = VAR9;
    VAR15.VAR10 = VAR10;
    VAR15.VAR20 = VAR2->VAR18->FUN2(VAR4, &VAR5);

    
    switch (VAR10) {
    case VAR21:
    case VAR22: {
        unsigned int VAR23 = (VAR10 == VAR22);
        int VAR24 = VAR23 ? VAR7->VAR25 : VAR7->VAR24;
        int VAR26 = VAR23 ? VAR7->VAR27 : VAR7->VAR26;
        VAR3 *VAR28 = VAR23 ? VAR7->VAR29 : VAR7->VAR28;
        const char * const VAR30 = VAR23 ? "" : "";
        int VAR31 = (VAR4[VAR8 + 3] << 8) + VAR4[VAR8 + 4];
        
        int VAR32 = VAR11 - VAR24;

        if (VAR31 < 1 || VAR33 < VAR31) {
            VAR14 = FUN3(
                VAR2, &VAR15, VAR34, VAR12, VAR35,
                "",
                VAR31, VAR30, VAR33);
        } else if (VAR32 < 0 || (VAR32 + VAR31) > VAR26) {
            VAR14 = FUN3(
                VAR2, &VAR15,
                VAR36, VAR12, VAR37,
                "",
                VAR32 < 0 ? VAR11 : VAR11 + VAR31, VAR30);
        } else {
            VAR14 = VAR2->VAR18->FUN4(&VAR15, VAR12);
            VAR12[VAR14++] = (VAR31 / 8) + ((VAR31 % 8) ? 1 : 0);
            VAR14 = FUN5(VAR28, VAR32, VAR31,
                                            VAR12, VAR14);
        }
    }
        break;
    case VAR38:
    case VAR39: {
        unsigned int VAR23 = (VAR10 == VAR39);
        int VAR40 = VAR23 ? VAR7->VAR41 : VAR7->VAR40;
        int VAR42 = VAR23 ? VAR7->VAR43 : VAR7->VAR42;
        VAR44 *VAR45 = VAR23 ? VAR7->VAR46 : VAR7->VAR45;
        const char * const VAR30 = VAR23 ? "" : "";
        int VAR31 = (VAR4[VAR8 + 3] << 8) + VAR4[VAR8 + 4];
        
        int VAR32 = VAR11 - VAR40;

        if (VAR31 < 1 || VAR47 < VAR31) {
            VAR14 = FUN3(
                VAR2, &VAR15, VAR34, VAR12, VAR35,
                "",
                VAR31, VAR30, VAR47);
        } else if (VAR32 < 0 || (VAR32 + VAR31) > VAR42) {
            VAR14 = FUN3(
                VAR2, &VAR15, VAR36, VAR12, VAR37,
                "",
                VAR32 < 0 ? VAR11 : VAR11 + VAR31, VAR30);
        } else {
            int VAR48;

            VAR14 = VAR2->VAR18->FUN4(&VAR15, VAR12);
            VAR12[VAR14++] = VAR31 << 1;
            for (VAR48 = VAR32; VAR48 < VAR32 + VAR31; VAR48++) {
                VAR12[VAR14++] = VAR45[VAR48] >> 8;
                VAR12[VAR14++] = VAR45[VAR48] & 0xFF;
            }
        }
    }
        break;
    case VAR49: {
        int VAR32 = VAR11 - VAR7->VAR24;

        if (VAR32 < 0 || VAR32 >= VAR7->VAR26) {
            VAR14 = FUN3(
                VAR2, &VAR15, VAR36, VAR12, VAR37,
                "",
                VAR11);
        } else {
            int VAR50 = (VAR4[VAR8 + 3] << 8) + VAR4[VAR8 + 4];

            if (VAR50 == 0xFF00 || VAR50 == 0x0) {
                VAR7->VAR28[VAR32] = VAR50 ? VAR51 : VAR52;
                memcpy(VAR12, VAR4, VAR5);
                VAR14 = VAR5;
            } else {
                VAR14 = FUN3(
                    VAR2, &VAR15,
                    VAR34, VAR12, VAR37,
                    "",
                    VAR50, VAR11);
            }
        }
    }
        break;
    case VAR53: {
        int VAR32 = VAR11 - VAR7->VAR40;

        if (VAR32 < 0 || VAR32 >= VAR7->VAR42) {
            VAR14 = FUN3(
                VAR2, &VAR15,
                VAR36, VAR12, VAR37,
                "",
                VAR11);
        } else {
            int VAR50 = (VAR4[VAR8 + 3] << 8) + VAR4[VAR8 + 4];

            VAR7->VAR45[VAR32] = VAR50;
            memcpy(VAR12, VAR4, VAR5);
            VAR14 = VAR5;
        }
    }
         break;
     case VAR54: {
         int VAR31 = (VAR4[VAR8 + 3] << 8) + VAR4[VAR8 + 4];


         int VAR32 = VAR11 - VAR7->VAR24;
 

        if (VAR31 < 1 || VAR55 < VAR31) {


             
            VAR14 = FUN3(
                VAR2, &VAR15, VAR34, VAR12, VAR35,
                "",
                VAR31, VAR55);
        } else if (VAR32 < 0 ||
                   (VAR32 + VAR31) > VAR7->VAR26) {
            VAR14 = FUN3(
                VAR2, &VAR15,
                VAR36, VAR12, VAR37,
                "",
                VAR32 < 0 ? VAR11 : VAR11 + VAR31);
        } else {
            
            FUN6(VAR7->VAR28, VAR32, VAR31,
                                       &VAR4[VAR8 + 6]);

            VAR14 = VAR2->VAR18->FUN4(&VAR15, VAR12);
            
            memcpy(VAR12 + VAR14, VAR4 + VAR14, 4);
            VAR14 += 4;
        }
    }
         break;
     case VAR56: {
         int VAR31 = (VAR4[VAR8 + 3] << 8) + VAR4[VAR8 + 4];


         int VAR32 = VAR11 - VAR7->VAR40;
 

        if (VAR31 < 1 || VAR57 < VAR31) {


             VAR14 = FUN3(
                 VAR2, &VAR15, VAR34, VAR12, VAR35,
                 "",
                VAR31, VAR57);
        } else if (VAR32 < 0 ||
                   (VAR32 + VAR31) > VAR7->VAR42) {
            VAR14 = FUN3(
                VAR2, &VAR15, VAR36, VAR12, VAR37,
                "",
                VAR32 < 0 ? VAR11 : VAR11 + VAR31);
        } else {
            int VAR48, VAR58;
            for (VAR48 = VAR32, VAR58 = 6; VAR48 < VAR32 + VAR31; VAR48++, VAR58 += 2) {
                
                VAR7->VAR45[VAR48] =
                    (VAR4[VAR8 + VAR58] << 8) + VAR4[VAR8 + VAR58 + 1];
            }

            VAR14 = VAR2->VAR18->FUN4(&VAR15, VAR12);
            
            memcpy(VAR12 + VAR14, VAR4 + VAR14, 4);
            VAR14 += 4;
        }
    }
        break;
    case VAR59: {
        int VAR60;
        int VAR61;

        VAR14 = VAR2->VAR18->FUN4(&VAR15, VAR12);
        
        VAR61 = VAR14++;
        VAR12[VAR14++] = VAR62;
        
        VAR12[VAR14++] = 0xFF;
        
        VAR60 = 3 + strlen(VAR63);
        memcpy(VAR12 + VAR14, "" VAR63, VAR60);
        VAR14 += VAR60;
        VAR12[VAR61] = VAR14 - VAR61 - 1;
    }
        break;
    case VAR64:
        if (VAR2->VAR65) {
            fprintf(VAR66, "");
        }
        VAR16 = VAR67;
        return -1;
        break;
    case VAR68: {
        int VAR32 = VAR11 - VAR7->VAR40;

        if (VAR32 < 0 || VAR32 >= VAR7->VAR42) {
            VAR14 = FUN3(
                VAR2, &VAR15, VAR36, VAR12, VAR37,
                "",
                VAR11);
        } else {
            uint16_t VAR50 = VAR7->VAR45[VAR32];
            uint16_t and = (VAR4[VAR8 + 3] << 8) + VAR4[VAR8 + 4];
            uint16_t or = (VAR4[VAR8 + 5] << 8) + VAR4[VAR8 + 6];

            VAR50 = (VAR50 & and) | (or & (~and));
            VAR7->VAR45[VAR32] = VAR50;
            memcpy(VAR12, VAR4, VAR5);
            VAR14 = VAR5;
        }
    }
        break;
    case VAR69: {
        int VAR31 = (VAR4[VAR8 + 3] << 8) + VAR4[VAR8 + 4];
        uint16_t VAR70 = (VAR4[VAR8 + 5] << 8) + VAR4[VAR8 + 6];
        int VAR71 = (VAR4[VAR8 + 7] << 8) + VAR4[VAR8 + 8];
        int VAR72 = VAR4[VAR8 + 9];
        int VAR32 = VAR11 - VAR7->VAR40;
        int VAR73 = VAR70 - VAR7->VAR40;

        if (VAR71 < 1 || VAR74 < VAR71 ||
            VAR31 < 1 || VAR75 < VAR31 ||
            VAR72 != VAR71 * 2) {
            VAR14 = FUN3(
                VAR2, &VAR15, VAR34, VAR12, VAR35,
                "",
                VAR71, VAR31, VAR74, VAR75);
        } else if (VAR32 < 0 ||
                   (VAR32 + VAR31) > VAR7->VAR42 ||
                   VAR32 < 0 ||
                   (VAR73 + VAR71) > VAR7->VAR42) {
            VAR14 = FUN3(
                VAR2, &VAR15, VAR36, VAR12, VAR37,
                "",
                VAR32 < 0 ? VAR11 : VAR11 + VAR31,
                VAR73 < 0 ? VAR70 : VAR70 + VAR71);
        } else {
            int VAR48, VAR58;
            VAR14 = VAR2->VAR18->FUN4(&VAR15, VAR12);
            VAR12[VAR14++] = VAR31 << 1;

            
            for (VAR48 = VAR73, VAR58 = 10;
                 VAR48 < VAR73 + VAR71; VAR48++, VAR58 += 2) {
                VAR7->VAR45[VAR48] =
                    (VAR4[VAR8 + VAR58] << 8) + VAR4[VAR8 + VAR58 + 1];
            }

            
            for (VAR48 = VAR32; VAR48 < VAR32 + VAR31; VAR48++) {
                VAR12[VAR14++] = VAR7->VAR45[VAR48] >> 8;
                VAR12[VAR14++] = VAR7->VAR45[VAR48] & 0xFF;
            }
        }
    }
        break;

    default:
        VAR14 = FUN3(
            VAR2, &VAR15, VAR76, VAR12, VAR35,
            "", VAR10);
        break;
    }

    
    return (VAR2->VAR18->VAR77 == VAR78 &&
            VAR9 == VAR79) ? 0 : FUN7(VAR2, VAR12, VAR14);
}