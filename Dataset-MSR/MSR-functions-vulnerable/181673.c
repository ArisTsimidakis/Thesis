static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9, VAR10, VAR11;
    int64_t VAR12;

    if (!VAR7->VAR13)
        return VAR14;

    if (VAR7->VAR15 && !VAR7->VAR16) {
        VAR9 = FUN2(VAR2, &VAR10);
        if (VAR9 < 0)
             return VAR9;
     }
 

    if (VAR7->VAR17 >= 0) {


         if (!VAR7->VAR17) {
             char VAR18[32];
 
                do {
                    if ((VAR9 = FUN3(VAR7, VAR18, sizeof(VAR18))) < 0)
                         return VAR9;
                 } while (!*VAR18);    
 

                VAR7->VAR17 = FUN4(VAR18, NULL, 16);


 

                FUN5(NULL, VAR19, ""VAR20"",




                         VAR7->VAR17);
 
                 if (!VAR7->VAR17)
                     return 0;










         }
         VAR5 = FUN6(VAR5, VAR7->VAR17);
     }
#if VAR21
    if (VAR7->VAR22)
        return FUN7(VAR2, VAR4, VAR5);
#endif 
     VAR11 = FUN8(VAR2, VAR4, VAR5);
     if (   (VAR11  < 0 && VAR7->VAR23        && (!VAR2->VAR24 || VAR7->VAR25) && VAR7->VAR26 > 0 && VAR7->VAR27 < VAR7->VAR26)
         || (VAR11 == 0 && VAR7->VAR28 && (!VAR2->VAR24 || VAR7->VAR25))) {

        int64_t VAR29 = VAR2->VAR24 ? 0 : VAR7->VAR27;


 
         if (VAR7->VAR30 > VAR7->VAR31)
             return FUN9(VAR32);
 

        FUN5(VAR2, VAR33, ""VAR20"", VAR7->VAR27, FUN10(VAR11));


         FUN11(1000U*1000*VAR7->VAR30);
         VAR7->VAR30 = 1 + 2*VAR7->VAR30;
         VAR12 = FUN12(VAR2, VAR29, VAR34, 1);
         if (VAR12 != VAR29) {

            FUN5(VAR2, VAR35, ""VAR20"", VAR29);


             return VAR11;
         }
 
        VAR11 = FUN8(VAR2, VAR4, VAR5);
    } else
        VAR7->VAR30 = 0;

    return VAR11;
}