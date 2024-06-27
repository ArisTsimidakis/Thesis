static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    const VAR8 *VAR9 = FUN2(VAR2->VAR10);
     uint32_t VAR11[4] = {0}, VAR12 = 0;
     int VAR13, VAR14, VAR15 = VAR9->VAR16;
 

    for (VAR14 = 0; VAR14 < 4 && VAR4->VAR17[VAR14]; VAR14++) {


         int64_t VAR18 = FUN3(VAR4->VAR10, VAR4->VAR19, VAR14);
         VAR20 *VAR17 = VAR4->VAR17[VAR14];
         int VAR21 = VAR14 == 1 || VAR14 == 2 ? FUN4(VAR2->VAR21, VAR15) : VAR2->VAR21;

        if (VAR18 < 0)
            return VAR18;

        for (VAR13 = 0; VAR13 < VAR21; VAR13++) {
            VAR11[VAR14] = FUN5(VAR11[VAR14], VAR17, VAR18);
            VAR12 = FUN5(VAR12, VAR17, VAR18);
            VAR17 += VAR4->VAR18[VAR14];
        }
    }

    FUN6(VAR6, VAR22,
           ""VAR23""VAR23""
           ""
           "",
           VAR2->VAR24,
           FUN7(VAR4->VAR25), FUN8(VAR4->VAR25, &VAR2->VAR26), FUN9(VAR4),
           VAR9->VAR27,
           VAR4->VAR28.VAR29, VAR4->VAR28.VAR30,
           VAR4->VAR19, VAR4->VAR31,
           !VAR4->VAR32 ? '' :         
           VAR4->VAR33   ? '' : '',    
           VAR4->VAR34,
            FUN10(VAR4->VAR35),
            VAR12, VAR11[0]);
 

    for (VAR14 = 1; VAR14 < 4 && VAR4->VAR17[VAR14]; VAR14++)


         FUN6(VAR6, VAR22, "", VAR11[VAR14]);
     FUN6(VAR6, VAR22, "");
 
    return FUN11(VAR2->VAR7->VAR36[0], VAR4);
}