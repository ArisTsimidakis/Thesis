int FUN1(effect_handle_t     VAR1,
                                    VAR2    *VAR3,

                                   VAR2    *VAR4)


 {
     VAR5 * VAR6 = (VAR5 *)VAR1;
     int    VAR7 = 0;

 if (VAR6 == NULL){
        FUN2("");
 return -VAR8;
 }
 VAR9 * VAR10 = (VAR9 *)VAR6->VAR10;

 if (VAR3 == NULL  || VAR3->VAR11 == NULL){
        FUN2("");
 return -VAR8;
 }

    VAR10->VAR12 |= (1<<VAR6->VAR13);





 if ((VAR10->VAR12 & VAR10->VAR14) == VAR10->VAR14) {
        VAR6->VAR10->VAR12 = 0;
 if (VAR10->VAR15 != NULL) {
 size_t VAR16 = VAR10->VAR17 - VAR10->VAR18;
 if (VAR3->VAR17 < VAR16) {
                VAR16 = VAR3->VAR17;
 }
 if (VAR10->VAR19 < VAR10->VAR18 + VAR16) {
                VAR10->VAR19 = VAR10->VAR18 + VAR16;
                VAR10->VAR20 = (VAR21 *)realloc(VAR10->VAR20,
                                  VAR10->VAR19 * VAR10->VAR22 * sizeof(VAR21));
 }
            memcpy(VAR10->VAR20 + VAR10->VAR18 * VAR10->VAR22,
                   VAR3->VAR23,
                   VAR16 * VAR10->VAR22 * sizeof(VAR21));

            VAR10->VAR18 += VAR16;
            VAR3->VAR17 = VAR16;
 if (VAR10->VAR18 < VAR10->VAR17) {
 return 0;
 }
 spx_uint32_t VAR24 = VAR10->VAR18;
 spx_uint32_t VAR25 = VAR10->VAR26;
 if (VAR10->VAR22 == 1) {
                FUN3(VAR10->VAR15,
 0,
                                            VAR10->VAR20,
 &VAR24,
                                            VAR10->VAR27->VAR28,
 &VAR25);
 } else {
                FUN4(VAR10->VAR15,
                                                        VAR10->VAR20,
 &VAR24,
                                                        VAR10->VAR27->VAR28,
 &VAR25);
 }
            memcpy(VAR10->VAR20,
                   VAR10->VAR20 + VAR24 * VAR10->VAR22,
 (VAR10->VAR18 - VAR24) * VAR10->VAR22 * sizeof(VAR21));
            VAR10->VAR18 -= VAR24;
 } else {
 size_t VAR16 = VAR10->VAR17 - VAR10->VAR18;
 if (VAR3->VAR17 < VAR16) {
                VAR16 = VAR3->VAR17;
 }
            memcpy(VAR10->VAR27->VAR28 + VAR10->VAR18 * VAR10->VAR22,
                   VAR3->VAR23,
                   VAR16 * VAR10->VAR22 * sizeof(VAR21));
            VAR10->VAR18 += VAR16;
            VAR3->VAR17 = VAR16;
 if (VAR10->VAR18 < VAR10->VAR17) {
 return 0;
 }
            VAR10->VAR18 = 0;
 }
        VAR10->VAR27->VAR29 =
                VAR10->VAR26 * VAR10->VAR22;
        VAR6->VAR10->VAR30->FUN5(VAR10->VAR27);
 return 0;
 } else {
 return -VAR31;
 }
}