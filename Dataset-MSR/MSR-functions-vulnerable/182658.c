static av_cold int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7, VAR8, VAR9;

    VAR4->VAR2 = VAR2;
    VAR2->VAR10 = VAR11;

    
    if (VAR4->VAR2->VAR12 != VAR13) {
        FUN2(VAR4->VAR2, VAR14, "", VAR13);
        return FUN3(VAR15);
    }

    
    VAR4->VAR16 = VAR4->VAR2->VAR17[0];
    switch (VAR4->VAR16) {
    case 1:
    case 2:
        break;
    case 3:
        FUN4(VAR2, "", VAR4->VAR16);
        return VAR18;
    default:
        FUN5(VAR2, "", VAR4->VAR16);
        return VAR18;
     }
     VAR4->VAR19 = FUN6(&VAR4->VAR2->VAR17[6]);
     VAR4->VAR20 = FUN6(&VAR4->VAR2->VAR17[8]);

    if ((VAR9 = FUN7(VAR4->VAR19, VAR4->VAR20, 0, VAR2)) < 0) {


         VAR4->VAR19= VAR4->VAR20= 0;
         return VAR9;
     }
    VAR4->VAR21 = VAR4->VAR2->VAR17[10];
    VAR4->VAR22 = VAR4->VAR2->VAR17[11];
    VAR4->VAR23 = VAR4->VAR24 = VAR4->VAR2->VAR17[13];

    
    if ((VAR4->VAR21 != 4) ||
        ((VAR4->VAR22 != 2) && (VAR4->VAR22 != 4))) {
        
        return VAR25;
    }

    if (VAR4->VAR19 % VAR4->VAR21 || VAR4->VAR20 % VAR4->VAR22) {
        FUN2(VAR2, VAR14, "");
        return VAR25;
    }

    
    VAR4->VAR26 = VAR27;
    VAR4->VAR28 = FUN8(VAR4->VAR26);
    if (!VAR4->VAR28)
        goto VAR29;
    VAR4->VAR30 = FUN8(VAR4->VAR26);
    if (!VAR4->VAR30)
        goto VAR29;

    
    VAR4->VAR31 = (VAR4->VAR19 / VAR4->VAR21) *
        (VAR4->VAR20 / VAR4->VAR22) * 2;
    VAR4->VAR32 = FUN9(VAR4->VAR31);
    if (!VAR4->VAR32)
        goto VAR29;

    
    if (VAR4->VAR22 == 4) {
        VAR8 = 0xFF00 * 16;
        for (VAR6 = 0; VAR6 < 256; VAR6++)
            for (VAR7 = 0; VAR7 < 16; VAR7++)
                VAR4->VAR28[VAR8++] = VAR6;
    } else {
        VAR8 = 0xF00 * 8;
        for (VAR6 = 0; VAR6 < 256; VAR6++)
            for (VAR7 = 0; VAR7 < 8; VAR7++)
                VAR4->VAR28[VAR8++] = VAR6;
    }
    VAR4->VAR33 = 0;

    return 0;
VAR29:
    FUN10(&VAR4->VAR28);
    FUN10(&VAR4->VAR30);
    FUN10(&VAR4->VAR32);
    return FUN3(VAR34);
}