FUN1(ClientPtr VAR1)
 {

    int VAR2;


     DeviceIntPtr VAR3;
     VAR4 *VAR5;
     VAR6 *VAR7;
    struct tmask VAR8[VAR9];

    FUN2(VAR10);
    FUN3(VAR10);

    if (VAR11->VAR12 !=
        FUN4(sizeof(VAR10)) + VAR11->VAR13 +
        (VAR11->VAR14 * FUN4(sizeof(VAR4))))
        return VAR15;

    VAR2 = FUN5(&VAR3, VAR11->VAR16, VAR1, VAR17);
    if (VAR2 != VAR18)
        return VAR2;

    if (VAR11->VAR14 == 0)
        return VAR2;

     
 
     VAR5 = ((VAR4 *) &VAR11[1]);

    if (!((VAR19 <= VAR5->VAR20.VAR20.VAR21) &&

          (VAR5->VAR20.VAR20.VAR21 < VAR22))) {

        VAR1->VAR23 = VAR5->VAR20.VAR20.VAR21;

        return VAR24;












     }
 
     VAR7 = (VAR6 *) (VAR5 + VAR11->VAR14);
        return VAR2;

    VAR2 = (FUN6(VAR1, VAR3, VAR11->VAR25,
                     VAR11->VAR26, (VAR4 *) &VAR11[1],
                     VAR8[VAR11->VAR16].VAR27, VAR11->VAR14));

    return VAR2;
}