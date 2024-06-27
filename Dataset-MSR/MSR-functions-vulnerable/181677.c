static int FUN1(VAR1 *VAR2, int VAR3)
 {
     VAR4 *VAR5 = VAR2->VAR6;
     

    int VAR7 = VAR5->VAR8 - VAR5->VAR9;


 

    if (VAR7 < 0)


         return VAR10;


 
     if (!VAR7) {
         
        uint8_t VAR11;
        int VAR12 = FUN2(VAR2, &VAR11, 1);
        if (VAR12 < 0)
            return VAR12;
        if (VAR11 > 0) {
            char VAR13[255 * 16 + 1];
            int VAR14;
            VAR12 = VAR11 * 16;
            VAR14 = FUN2(VAR2, VAR13, VAR12);
            if (VAR14 < 0)
                return VAR14;
            VAR13[VAR12 + 1] = 0;
            if ((VAR14 = FUN3(VAR5, "", VAR13, 0)) < 0)
                return VAR14;
            FUN4(VAR5, VAR13);
        }
        VAR5->VAR9 = 0;
        VAR7        = VAR5->VAR8;
    }

    return FUN5(VAR3, VAR7);
}