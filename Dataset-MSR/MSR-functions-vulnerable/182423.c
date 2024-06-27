int FUN1 (VAR1 *VAR2, char *VAR3, char *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    int64_t VAR9 = 0, VAR10;
    Wave64ChunkHeader VAR11;
    Wave64FileHeader VAR12;
    WaveHeader VAR13;
    uint32_t VAR14;

    VAR10 = FUN2 (VAR2);
    memcpy (&VAR12, VAR4, 4);

    if (!FUN3 (VAR2, ((char *) &VAR12) + 4, sizeof (VAR15) - 4, &VAR14) ||
        VAR14 != sizeof (VAR15) - 4 || memcmp (VAR12.VAR16, VAR17, sizeof (VAR17)) ||
        memcmp (VAR12.VAR18, VAR19, sizeof (VAR19))) {
            FUN4 ("", VAR3);
            return VAR20;
    }
    else if (!(VAR8->VAR21 & VAR22) &&
        !FUN5 (VAR6, &VAR12, sizeof (VAR12))) {
            FUN4 ("", FUN6 (VAR6));
            return VAR20;
    }

#if 1   
    FUN7 (&VAR12, VAR23);

    if (VAR10 && !(VAR8->VAR21 & VAR24) &&
        VAR12.VAR25 && VAR12.VAR25 + 1 && VAR12.VAR25 != VAR10) {
            FUN4 ("", VAR3);
            return VAR20;
    }
#endif

    
    

    while (1) {
        if (!FUN3 (VAR2, &VAR11, sizeof (VAR26), &VAR14) ||
            VAR14 != sizeof (VAR26)) {
                FUN4 ("", VAR3);
                return VAR20;
        }
        else if (!(VAR8->VAR21 & VAR22) &&
            !FUN5 (VAR6, &VAR11, sizeof (VAR26))) {
                FUN4 ("", FUN6 (VAR6));
                return VAR20;
        }

        FUN7 (&VAR11, VAR23);
        VAR11.VAR25 -= sizeof (VAR11);

        
        

        if (!memcmp (VAR11.VAR16, VAR27, sizeof (VAR27))) {
            int VAR28 = VAR29, VAR30;

            VAR11.VAR25 = (VAR11.VAR25 + 7) & ~7L;

            if (VAR11.VAR25 < 16 || VAR11.VAR25 > sizeof (VAR13) ||
                !FUN3 (VAR2, &VAR13, (VAR31) VAR11.VAR25, &VAR14) ||
                VAR14 != VAR11.VAR25) {
                    FUN4 ("", VAR3);
                    return VAR20;
            }
            else if (!(VAR8->VAR21 & VAR22) &&
                !FUN5 (VAR6, &VAR13, (VAR31) VAR11.VAR25)) {
                    FUN4 ("", FUN6 (VAR6));
                    return VAR20;
            }

            FUN7 (&VAR13, VAR32);

            if (VAR33) {
                FUN4 ("", VAR11.VAR25);
                FUN4 ("",
                    VAR13.VAR34, VAR13.VAR35, VAR13.VAR36);
                FUN4 ("",
                    VAR13.VAR37, VAR13.VAR38, VAR13.VAR39);

                if (VAR11.VAR25 > 16)
                    FUN4 ("", VAR13.VAR40,
                        VAR13.VAR41);

                if (VAR11.VAR25 > 20)
                    FUN4 ("",
                        VAR13.VAR42, VAR13.VAR43);
            }

            if (VAR11.VAR25 > 16 && VAR13.VAR40 == 2)
                VAR8->VAR21 |= VAR44;

            VAR30 = (VAR13.VAR34 == 0xfffe && VAR11.VAR25 == 40) ?
                VAR13.VAR43 : VAR13.VAR34;

            VAR8->VAR45 = (VAR11.VAR25 == 40 && VAR13.VAR41) ?
                VAR13.VAR41 : VAR13.VAR36;

            if (VAR30 != 1 && VAR30 != 3)
                VAR28 = VAR46;

            if (VAR30 == 3 && VAR8->VAR45 != 32)
                VAR28 = VAR46;

            if (!VAR13.VAR35 || VAR13.VAR35 > 256 ||
                VAR13.VAR37 / VAR13.VAR35 < (VAR8->VAR45 + 7) / 8 ||
                VAR13.VAR37 / VAR13.VAR35 > 4 ||
                VAR13.VAR37 % VAR13.VAR35)
                    VAR28 = VAR46;

            if (VAR8->VAR45 < 1 || VAR8->VAR45 > 32)
                VAR28 = VAR46;

            if (!VAR28) {
                FUN4 ("", VAR3);
                return VAR20;
            }

            if (VAR11.VAR25 < 40) {
                if (!VAR8->VAR47 && !(VAR8->VAR21 & VAR48)) {
                    if (VAR13.VAR35 <= 2)
                        VAR8->VAR47 = 0x5 - VAR13.VAR35;
                    else if (VAR13.VAR35 <= 18)
                        VAR8->VAR47 = (1 << VAR13.VAR35) - 1;
                    else
                        VAR8->VAR47 = 0x3ffff;
                }
            }
            else if (VAR13.VAR42 && (VAR8->VAR47 || (VAR8->VAR21 & VAR48))) {
                FUN4 ("");
                return VAR20;
            }
            else if (VAR13.VAR42)
                VAR8->VAR47 = VAR13.VAR42;

            if (VAR30 == 3)
                VAR8->VAR49 = 127;
            else if ((VAR8->VAR21 & VAR44) &&
                VAR13.VAR37 / VAR13.VAR35 == 4) {
                    if (VAR13.VAR36 == 24)
                        VAR8->VAR49 = 127 + 23;
                    else if (VAR13.VAR36 == 32)
                        VAR8->VAR49 = 127 + 15;
            }

            if (VAR33) {
                if (VAR8->VAR49 == 127)
                    FUN4 ("");
                else
                    FUN4 ("",
                        VAR8->VAR45, VAR13.VAR37 / VAR13.VAR35);
            }
        }
        else if (!memcmp (VAR11.VAR16, VAR50, sizeof (VAR50))) { 

            if (!VAR13.VAR35) {          
                FUN4 ("", VAR3);
                return VAR20;
            }

            if ((VAR8->VAR21 & VAR24) || VAR11.VAR25 <= 0) {
                VAR8->VAR21 |= VAR24;

                if (VAR10 && FUN8 (VAR2) != -1)
                    VAR9 = (VAR10 - FUN8 (VAR2)) / VAR13.VAR37;
                else
                    VAR9 = -1;
            }
            else {
                if (VAR10 && VAR10 - VAR11.VAR25 > 16777216) {
                    FUN4 ("");
                    return VAR20;
                }

                VAR9 = VAR11.VAR25 / VAR13.VAR37;

                if (!VAR9) {
                    FUN4 ("");
                    return VAR20;
                }

                if (VAR9 > VAR51) {
                    FUN4 ("", VAR3);
                    return VAR20;
                }
            }

            VAR8->VAR52 = VAR13.VAR37 / VAR13.VAR35;
            VAR8->VAR53 = VAR13.VAR35;
            VAR8->VAR54 = VAR13.VAR38;
            break;
         }
         else {          
             int VAR55 = (VAR11.VAR25 + 7) & ~7L;

            char *VAR56 = malloc (VAR55);
















 
             if (VAR33)
                 FUN4 (""%VAR57%VAR57%VAR57%VAR57\"",
                    VAR11.VAR16 [0], VAR11.VAR16 [1], VAR11.VAR16 [2],
                    VAR11.VAR16 [3], VAR11.VAR25);

            if (!FUN3 (VAR2, VAR56, VAR55, &VAR14) ||
                VAR14 != VAR55 ||
                (!(VAR8->VAR21 & VAR22) &&
                !FUN5 (VAR6, VAR56, VAR55))) {
                    FUN4 ("", FUN6 (VAR6));
                    free (VAR56);
                    return VAR20;
            }

            free (VAR56);
        }
    }

    if (!FUN9 (VAR6, VAR8, VAR9, NULL)) {
        FUN4 ("", VAR3, FUN6 (VAR6));
        return VAR20;
    }

    return VAR58;
}