unsigned char *FUN1(VAR1 *VAR2, unsigned char *VAR3,
                                          unsigned char *VAR4, int *VAR5)
{
    int VAR6 = 0;
    unsigned char *VAR7 = VAR3;
    unsigned char *VAR8 = VAR3;
#ifndef VAR9
    int VAR10;
#endif
#ifndef VAR11
    unsigned long VAR12 = VAR2->VAR13->VAR14.VAR15->VAR16;
    unsigned long VAR17 = VAR2->VAR13->VAR14.VAR15->VAR18;
    int VAR19 = (VAR12 & VAR20) || (VAR17 & VAR21);
    VAR19 = VAR19 && (VAR2->VAR22->VAR23 != NULL);
#endif

    VAR8 += 2;
    if (VAR8 >= VAR4)
        return NULL;            

    if (VAR2->VAR13->VAR24) {
        int VAR25;

        if (!FUN2(VAR2, 0, &VAR25, 0)) {
            FUN3(VAR26, VAR27);
            return NULL;
        }

        
        if (FUN4(VAR8, 4 + VAR25, VAR4))
            return NULL;

        FUN5(VAR28, VAR8);
        FUN5(VAR25, VAR8);

        if (!FUN2(VAR2, VAR8, &VAR25, VAR25)) {
            FUN3(VAR26, VAR27);
            return NULL;
        }

        VAR8 += VAR25;
    }

    
    if (VAR2->VAR29 == VAR30)
        goto VAR31;

    if (!VAR2->VAR32 && VAR2->VAR33 == 1
        && VAR2->VAR22->VAR34 != NULL) {
        
        if (FUN4(VAR8, 4, VAR4))
            return NULL;

        FUN5(VAR35, VAR8);
        FUN5(0, VAR8);
    }
#ifndef VAR11
    if (VAR19) {
        const unsigned char *VAR36;
        size_t VAR37;
        

        FUN6(VAR2, &VAR36, &VAR37);

        if (VAR37 > 255) {
            FUN3(VAR26, VAR27);
            return NULL;
        }

        
        if (FUN4(VAR8, 5 + VAR37, VAR4))
            return NULL;

        FUN5(VAR38, VAR8);
        FUN5(VAR37 + 1, VAR8);
        *(VAR8++) = (unsigned char)VAR37;
        memcpy(VAR8, VAR36, VAR37);
        VAR8 += VAR37;

    }
    
#endif                          

    if (VAR2->VAR39 && FUN7(VAR2)) {
        
        if (FUN4(VAR8, 4, VAR4))
            return NULL;
        FUN5(VAR40, VAR8);
        FUN5(0, VAR8);
    } else {
        
        VAR2->VAR39 = 0;
    }

    if (VAR2->VAR41) {
        
        if (FUN4(VAR8, 4, VAR4))
            return NULL;
        FUN5(VAR42, VAR8);
        FUN5(0, VAR8);
    }
#ifndef VAR43
    if (FUN8(VAR2) && VAR2->VAR44) {
        int VAR25;

        
        if (FUN9(VAR2, 0, &VAR25, 0)) {
            FUN3(VAR26, VAR27);
            return NULL;
        }
        
        if (FUN4(VAR8, 4 + VAR25, VAR4))
            return NULL;

        FUN5(VAR45, VAR8);
        FUN5(VAR25, VAR8);

        if (FUN9(VAR2, VAR8, &VAR25, VAR25)) {
            FUN3(VAR26, VAR27);
            return NULL;
        }
        VAR8 += VAR25;
    }
#endif

    if (((VAR2->VAR13->VAR14.VAR15->VAR46 & 0xFFFF) == 0x80
         || (VAR2->VAR13->VAR14.VAR15->VAR46 & 0xFFFF) == 0x81)
        && (FUN10(VAR2) & VAR47)) {
        const unsigned char VAR48[36] = {
            0xfd, 0xe8,         
            0x00, 0x20,         
            0x30, 0x1e, 0x30, 0x08, 0x06, 0x06, 0x2a, 0x85,
            0x03, 0x02, 0x02, 0x09, 0x30, 0x08, 0x06, 0x06,
            0x2a, 0x85, 0x03, 0x02, 0x02, 0x16, 0x30, 0x08,
            0x06, 0x06, 0x2a, 0x85, 0x03, 0x02, 0x02, 0x17
        };

        
        if (FUN4(VAR8, sizeof(VAR48), VAR4))
            return NULL;
        memcpy(VAR8, VAR48, sizeof(VAR48));
        VAR8 += sizeof(VAR48);

    }
#ifndef VAR49
    
    if (FUN8(VAR2) && (VAR2->VAR50 & VAR51)) {
        
        if (FUN4(VAR8, 5, VAR4))
            return NULL;
        FUN5(VAR52, VAR8);
        FUN5(1, VAR8);
        
        if (VAR2->VAR50 & VAR53)
            *(VAR8++) = VAR54;
        else
            *(VAR8++) = VAR51;

    }
#endif

#ifndef VAR9
    VAR10 = VAR2->VAR13->VAR10;
    VAR2->VAR13->VAR10 = 0;
    if (VAR10 && VAR2->VAR55->VAR56) {
        const unsigned char *VAR57;
        unsigned int VAR58;
        int VAR59;

        VAR59 = VAR2->VAR55->FUN11(VAR2, &VAR57, &VAR58,
                                              VAR2->
                                              VAR55->VAR60);
        if (VAR59 == VAR61) {
            
            if (FUN4(VAR8, 4 + VAR58, VAR4))
                return NULL;
            FUN5(VAR62, VAR8);
            FUN5(VAR58, VAR8);
            memcpy(VAR8, VAR57, VAR58);
            VAR8 += VAR58;
            VAR2->VAR13->VAR10 = 1;
        }
    }
 #endif
     if (!FUN12(VAR2, 1, &VAR8, VAR4, VAR5))
         return NULL;

    if (VAR2->VAR13->VAR63 & VAR64) {


         
        if (FUN8(VAR2) || VAR2->VAR13->VAR14.VAR15->VAR65 == VAR66
             || VAR2->VAR13->VAR14.VAR15->VAR67 == VAR68
             || VAR2->VAR13->VAR14.VAR15->VAR67 == VAR69
             || VAR2->VAR13->VAR14.VAR15->VAR67 == VAR70)

            VAR2->VAR13->VAR63 &= ~VAR64;


         else {
             
            if (FUN4(VAR8, 4, VAR4))
                return NULL;
            FUN5(VAR71, VAR8);
            FUN5(0, VAR8);
        }
    }
    if (VAR2->VAR13->VAR63 & VAR72) {
        
        if (FUN4(VAR8, 4, VAR4))
            return NULL;
        FUN5(VAR73, VAR8);
        FUN5(0, VAR8);
    }

    if (VAR2->VAR13->VAR74 != NULL) {
        const unsigned char *VAR75 = VAR2->VAR13->VAR74;
        size_t VAR76 = VAR2->VAR13->VAR77;

        
        if (FUN4(VAR8, 7 + VAR76, VAR4))
            return NULL;
        FUN5(VAR78, VAR8);
        FUN5(3 + VAR76, VAR8);
        FUN5(1 + VAR76, VAR8);
        *VAR8++ = VAR76;
        memcpy(VAR8, VAR75, VAR76);
        VAR8 += VAR76;
    }

 VAR31:

    if ((VAR6 = VAR8 - VAR7 - 2) == 0)
        return VAR7;

    FUN5(VAR6, VAR7);
    return VAR8;
}