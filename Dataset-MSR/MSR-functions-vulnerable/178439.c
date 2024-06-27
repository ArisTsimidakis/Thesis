FUN1(VAR1 * VAR2)
{
    if (VAR2->VAR3 < 1) {
        gs_dual_memory_t VAR4;
        int VAR5 =
            FUN2(&VAR4, VAR2->VAR6,
                        VAR2->VAR7, FUN3());

        if (VAR5 < 0)
            return VAR5;
        VAR5 = FUN4((VAR8 *)VAR4.VAR9);
        if (VAR5 < 0)
            return VAR5;
        FUN5(&VAR4);
        {
            VAR8 *VAR10 = (VAR8 *)VAR4.VAR9;
            VAR11 *VAR12 = FUN6(VAR2->VAR13,
                                        VAR4.VAR9);

            if (VAR12 == 0)
                FUN7(VAR14);
            VAR10->VAR15->VAR16 = VAR12;
            VAR5 = FUN8(VAR10, NULL,
                                           (void **)&VAR10->VAR15->VAR16,
                                           "");
                                            "");
             if (VAR5 < 0)
                 return VAR5;


         }
         VAR5 = FUN9(&VAR2->VAR17, &VAR4);  
         if (VAR5 < 0)
        if (VAR5 < 0)
            return VAR5;
        VAR5 = FUN10(VAR2->VAR17);
        if (VAR5 < 0)
            return VAR5;
        VAR2->VAR3 = 1;
    }
    return 0;
}