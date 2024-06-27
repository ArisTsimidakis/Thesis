static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR6->VAR10;
    VAR1 *VAR11 = VAR6->VAR12[0];
    VAR3 *VAR13;
    VAR14 *VAR15, *VAR16, *VAR17, *VAR18;
    int VAR19, VAR20, VAR21, VAR22 = 0;

    if (FUN2(VAR4)) {
        VAR22 = 1;
        VAR13 = VAR4;
    } else {
        VAR13 = FUN3(VAR11, VAR11->VAR23, VAR11->VAR24);
        if (!VAR13) {
            FUN4(&VAR4);
            return FUN5(VAR25);
        }
        FUN6(VAR13, VAR4);
    }

    if (VAR9->VAR26) {
        
        VAR17  = VAR4 ->VAR27[0];
        VAR18 = VAR13->VAR27[0];

        for (VAR19 = 0; VAR19 < VAR4->VAR28; VAR19 ++) {
            int VAR23 = VAR2->VAR23;
            const FUN7 (*VAR29)[256] = (const FUN7 (*)[256])VAR9->VAR30;
            VAR15  = VAR17;
            VAR16 = VAR18;
            for (VAR20 = 0; VAR20 < VAR23; VAR20++) {
                switch (VAR9->VAR31) {
                case 4:  VAR16[3] = VAR29[3][VAR15[3]]; 
                case 3:  VAR16[2] = VAR29[2][VAR15[2]]; 
                case 2:  VAR16[1] = VAR29[1][VAR15[1]]; 
                default: VAR16[0] = VAR29[0][VAR15[0]];
                }
                VAR16 += VAR9->VAR31;
                VAR15  += VAR9->VAR31;
            }
            VAR17  += VAR4 ->VAR32[0];
            VAR18 += VAR13->VAR32[0];
         }
     } else {
         

        for (VAR21 = 0; VAR21 < 4 && VAR4->VAR27[VAR21]; VAR21++) {


             int VAR33 = VAR21 == 1 || VAR21 == 2 ? VAR9->VAR33 : 0;
             int VAR34 = VAR21 == 1 || VAR21 == 2 ? VAR9->VAR34 : 0;
             int VAR24 = FUN8(VAR2->VAR24, VAR33);
            int VAR23 = FUN8(VAR2->VAR23, VAR34);

            VAR15  = VAR4 ->VAR27[VAR21];
            VAR16 = VAR13->VAR27[VAR21];

            for (VAR19 = 0; VAR19 < VAR24; VAR19++) {
                const VAR14 *VAR29 = VAR9->VAR30[VAR21];
                for (VAR20 = 0; VAR20 < VAR23; VAR20++)
                    VAR16[VAR20] = VAR29[VAR15[VAR20]];
                VAR15  += VAR4 ->VAR32[VAR21];
                VAR16 += VAR13->VAR32[VAR21];
            }
        }
    }

    if (!VAR22)
        FUN4(&VAR4);

    return FUN9(VAR11, VAR13);
}