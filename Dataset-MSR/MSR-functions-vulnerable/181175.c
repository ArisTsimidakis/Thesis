FUN1(VAR1 *VAR2, uint32_t VAR3) {
    uint8_t VAR4 = 0;
    uint32_t VAR5 = 0;
    uint32_t VAR6 = 0;
    uint32_t VAR7 = 0;
    uint32_t VAR8 = 0;
    uint32_t VAR9 = 0;
    uint32_t VAR10 = 0;
    uint32_t VAR11 = 0;
    uint32_t VAR12 = 0;
    struct VAR13 *VAR14;
    VAR1 **VAR15;
    VAR16 *VAR17;
    VAR16 *VAR18;
    VAR16 *VAR19;
    VAR1 *VAR20;
    uint32_t VAR21 = 0;
    uint32_t VAR22 = 0;

    uint32_t VAR23 = 0;
    uint32_t VAR24 = 0;

    uint32_t VAR25 = 0;
    uint32_t VAR26 = 0;

    float VAR27 = 500000.0;
    float VAR28 = 0.0;




    uint32_t VAR29 = 0;
    float VAR30 = 0;
    float VAR31 = 0;

    if (memcmp(VAR2, "", 8)) {
        FUN2(VAR32, VAR33, VAR34, NULL, 0);
        return NULL;
    }
    VAR2 += 8;
    VAR3 -= 8;

    if (!memcmp(VAR2, "", 6)) {
        VAR2 += 6;
        VAR3 -= 6;
        VAR4 = 1;
    }

    
    if (VAR4) {
        VAR5 = 18;
    } else {
        VAR5 = 24;
    }
    for (VAR6 = 0; VAR6 < VAR5; VAR6++) {
        if (VAR2[VAR6] != 0) {
            FUN2(VAR32, VAR33, VAR34, NULL, 0);
            return NULL;
        }
    }
    VAR2 += VAR5;
    VAR3 -= VAR5;

    VAR7 = *VAR2++;
    VAR7 += (*VAR2++ << 8);
    VAR7 += (*VAR2++ << 16);
    VAR7 += (*VAR2++ << 24);
    VAR3 -= 4;

    FUN3(VAR7);

    
    VAR2 += 12;
    VAR3 -= 12;

    VAR8 = *VAR2++;
    VAR8 += (*VAR2++ << 8);
    VAR8 += (*VAR2++ << 16);
    VAR8 += (*VAR2++ << 24);
    VAR3 -= 4;

    
    VAR10 = *VAR2++;
    VAR10 += (*VAR2++ << 8);
    VAR10 += (*VAR2++ << 16);
    VAR10 += (*VAR2++ << 24);
    VAR3 -= 4;

    FUN3(VAR10);

    
    VAR9 = 60;

    
    VAR11 = *VAR2++;
    VAR11 += (*VAR2++ << 8);
    VAR11 += (*VAR2++ << 16);
    VAR11 += (*VAR2++ << 24);
    VAR3 -= 4;

    
    if ((VAR35 & VAR36)) {
        VAR27 = (float) (60000000 / VAR11) + 0.5f;
    } else {
        VAR27 = (float) (60000000 / VAR11);
    }

    VAR28 = FUN4(VAR9, VAR27);

    
    

    
    VAR12 = *VAR2++;
    VAR12 += (*VAR2++ << 8);
    VAR12 += (*VAR2++ << 16);
    VAR12 += (*VAR2++ << 24);
    VAR3 -= 4;

    
    

    FUN3(VAR12);

    if (VAR4) {
        VAR2 += 840;
        VAR3 -= 840;
    } else {
        VAR2 += 712;
        VAR3 -= 712;
    }

    VAR14 = FUN5();

    FUN6(VAR14, VAR9);
    FUN7(VAR14, (VAR16)VAR27);

    VAR15 = malloc(sizeof(VAR1 *) * VAR8);
    VAR17 = malloc(sizeof(VAR16) * VAR8);
    VAR19 = malloc(sizeof(VAR16) * VAR8);
    VAR18 = malloc(sizeof(VAR16) * VAR8);
    VAR20 = malloc(sizeof(VAR1) * VAR8);

    VAR23 = 0xffffffff;
    
    for (VAR6 = 0; VAR6 < VAR8; VAR6++) {
        VAR15[VAR6] = VAR2;
        VAR18[VAR6] = 0;

        VAR21 = *VAR2++;
        VAR21 += (*VAR2++ << 8);
        VAR21 += (*VAR2++ << 16);
        VAR21 += (*VAR2++ << 24);
        VAR18[VAR6] += 4;

        FUN3(VAR21);

        VAR17[VAR6] = *VAR2++;
        VAR17[VAR6] += (*VAR2++ << 8);
        VAR17[VAR6] += (*VAR2++ << 16);
        VAR17[VAR6] += (*VAR2++ << 24);
        VAR18[VAR6] += 4;

        if (VAR17[VAR6] > VAR3) {
            FUN2(VAR32, VAR33, VAR34, "", 0);
            goto VAR37;
        }
        VAR3 -= VAR17[VAR6];

        VAR22 = *VAR2++;
        VAR22 += (*VAR2++ << 8);
        VAR22 += (*VAR2++ << 16);
        VAR22 += (*VAR2++ << 24);
        VAR18[VAR6] += 4;

        FUN3(VAR22);

        
        VAR19[VAR6] = 0;
        VAR26 = 0;
        if (*VAR2 < 0x80) {
            do {
                VAR19[VAR6] = VAR19[VAR6] | ((*VAR2++ & 0x7F) << VAR26);
                VAR26 += 7;
                VAR18[VAR6]++;
            } while (*VAR2 < 0x80);
        }
        VAR19[VAR6] = VAR19[VAR6] | ((*VAR2++ & 0x7F) << VAR26);
        VAR18[VAR6]++;

        if (VAR19[VAR6] < VAR23) {
            VAR23 = VAR19[VAR6];
        }
 
         
         VAR2 = VAR15[VAR6] + VAR17[VAR6];


         VAR15[VAR6] += VAR18[VAR6]++;
         VAR20[VAR6] = 0;
     }

    VAR24 = VAR23;
    VAR30 = (((float) VAR23 * VAR28) + VAR31);

    VAR29 = (VAR16) VAR30;
    VAR31 = VAR30 - (float) VAR29;

    VAR14->VAR38[VAR14->VAR39 - 1].VAR40 += VAR29;
    VAR14->VAR41.VAR42 += VAR29;

    while (VAR25 < VAR8) {
        VAR23 = 0;

        
        

        for (VAR6 = 0; VAR6 < VAR8; VAR6++) {
            if (VAR20[VAR6])
                continue;

            if (VAR19[VAR6]) {
                VAR19[VAR6] -= VAR24;
                if (VAR19[VAR6]) {
                    if ((!VAR23)
                        || (VAR23 > VAR19[VAR6])) {
                        VAR23 = VAR19[VAR6];
                    }
                    continue;
                }
            }
            do {
                if (((VAR15[VAR6][0] & 0xf0) == 0xb0 ) && ((VAR15[VAR6][1] == 110) || (VAR15[VAR6][1] == 111)) && (VAR15[VAR6][2] > 0x7f)) {
                     
                     
                     VAR15[VAR6] += 3;


                 } else {
                     uint32_t VAR43 = 0;
 

                    if ((VAR43 = FUN8(VAR14, VAR15[VAR6], 0)) == 0) {


                         goto VAR37;
                     }
 
                     if ((VAR15[VAR6][0] == 0xff) && (VAR15[VAR6][1] == 0x2f) && (VAR15[VAR6][2] == 0x00)) {
                         
                         VAR25++;
                         VAR20[VAR6] = 1;


                         VAR15[VAR6] += 3;
                         goto VAR44;
                     } else if ((VAR15[VAR6][0] == 0xff) && (VAR15[VAR6][1] == 0x51) && (VAR15[VAR6][2] == 0x03)) {
                        
                        VAR27 = (float)((VAR15[VAR6][3] << 16) + (VAR15[VAR6][4] << 8)+ VAR15[VAR6][5]);
                        if (VAR27 == 0.0)
                            VAR27 = 500000.0;

                        
                         fprintf(VAR45,"", VAR27);
                     }
                     VAR15[VAR6] += VAR43;


                 }
                 VAR26 = 0;
                 VAR19[VAR6] = 0;

                if (*VAR15[VAR6] < 0x80) {


                     do {


                         VAR19[VAR6] = VAR19[VAR6] + ((*VAR15[VAR6] & 0x7F) << VAR26);
                         VAR26 += 7;
                         VAR15[VAR6]++;


                     } while (*VAR15[VAR6] < 0x80);
                 }








                 VAR19[VAR6] = VAR19[VAR6] + ((*VAR15[VAR6] & 0x7F) << VAR26);
                 VAR15[VAR6]++;


             } while (!VAR19[VAR6]);
 
             if ((!VAR23) || (VAR23 > VAR19[VAR6])) {
                VAR23 = VAR19[VAR6];
            }
        VAR44: continue;
        }

        VAR24 = VAR23;
        VAR30= (((float) VAR23 * VAR28) + VAR31);

        VAR29 = (VAR16) VAR30;
        VAR31 = VAR30 - (float) VAR29;

        VAR14->VAR38[VAR14->VAR39 - 1].VAR40 += VAR29;
        VAR14->VAR41.VAR42 += VAR29;

        
        
    }

    if ((VAR14->VAR46 = FUN9(VAR47, VAR48, VAR49, VAR50, VAR51)) == NULL) {
        FUN2(VAR32, VAR33, VAR52, "", 0);
        goto VAR37;
    }

    VAR14->VAR41.VAR53 = 0;
    VAR14->VAR54 = &VAR14->VAR38[0];
    VAR14->VAR55 = 0;
    VAR14->VAR56 = NULL;

    FUN10(VAR14);

VAR37:
    free(VAR15);
    free(VAR17);
    free(VAR19);
    free(VAR18);
    free(VAR20);
    if (VAR14->VAR46) return (VAR14);
    FUN11(VAR14);
    return NULL;
}