static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6  = VAR2->VAR7;
    VAR8 *VAR9     = VAR6->VAR10;
    VAR1 *VAR11 = VAR6->VAR12[0];
    VAR3 *VAR13;
    VAR14 *VAR15, *VAR16;
    int VAR17, VAR18, VAR19, VAR20;

    VAR13 = FUN2(VAR11, VAR11->VAR21, VAR11->VAR22);
    if (!VAR13) {
        FUN3(&VAR4);
        return FUN4(VAR23);
    }
    FUN5(VAR13, VAR4);

    
     if (FUN6(VAR2->VAR24)->VAR25 & VAR26)
         memcpy(VAR13->VAR27[1], VAR4->VAR27[1], VAR28);
 

    for (VAR19 = 0; VAR19 < 4 && VAR4->VAR27[VAR19]; VAR19++) {


         const int VAR29  = (VAR19 == 1 || VAR19 == 2) ? FUN7(VAR2->VAR21, VAR9->VAR30) : VAR2->VAR21;
         const int VAR31 = (VAR19 == 1 || VAR19 == 2) ? FUN7(VAR2->VAR22, VAR9->VAR32) : VAR2->VAR22;
         VAR20 = VAR9->VAR33[VAR19];

        VAR16 = VAR13->VAR27[VAR19];
        VAR15  = VAR4 ->VAR27[VAR19] + (VAR29 - 1) * VAR20;
        for (VAR17 = 0; VAR17 < VAR31; VAR17++) {
            switch (VAR20) {
            case 1:
                for (VAR18 = 0; VAR18 < VAR29; VAR18++)
                    VAR16[VAR18] = VAR15[-VAR18];
            break;

            case 2:
            {
                VAR34 *VAR35 = (VAR34 *)VAR16;
                VAR34 * VAR36 = (VAR34 *) VAR15;
                for (VAR18 = 0; VAR18 < VAR29; VAR18++)
                    VAR35[VAR18] = VAR36[-VAR18];
            }
            break;

            case 3:
            {
                VAR14 *VAR4  =  VAR15;
                VAR14 *VAR13 = VAR16;
                for (VAR18 = 0; VAR18 < VAR29; VAR18++, VAR13 += 3, VAR4 -= 3) {
                    int32_t VAR37 = FUN8(VAR4);
                    FUN9(VAR13, VAR37);
                }
            }
            break;

            case 4:
            {
                VAR38 *VAR39 = (VAR38 *)VAR16;
                VAR38 * VAR40 = (VAR38 *) VAR15;
                for (VAR18 = 0; VAR18 < VAR29; VAR18++)
                    VAR39[VAR18] = VAR40[-VAR18];
            }
            break;

            default:
                for (VAR18 = 0; VAR18 < VAR29; VAR18++)
                    memcpy(VAR16 + VAR18*VAR20, VAR15 - VAR18*VAR20, VAR20);
            }

            VAR15  += VAR4 ->VAR41[VAR19];
            VAR16 += VAR13->VAR41[VAR19];
        }
    }

    FUN3(&VAR4);
    return FUN10(VAR11, VAR13);
}