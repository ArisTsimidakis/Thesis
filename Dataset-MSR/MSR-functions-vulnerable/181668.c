static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9;
    
    VAR9 = VAR7->VAR10 - VAR7->VAR11;
    if (VAR9 > 0) {
        if (VAR9 > VAR5)
            VAR9 = VAR5;
         memcpy(VAR4, VAR7->VAR11, VAR9);
         VAR7->VAR11 += VAR9;
     } else {

        int64_t VAR12 = VAR7->VAR13 ? VAR7->VAR13 : VAR7->VAR14;

        if ((!VAR7->VAR15 || VAR7->VAR16 < 0) &&

            VAR12 >= 0 && VAR7->VAR17 >= VAR12)




             return VAR18;
         VAR9 = FUN2(VAR7->VAR19, VAR4, VAR5);

        if (!VAR9 && (!VAR7->VAR15 || VAR7->VAR16 < 0) &&

            VAR12 >= 0 && VAR7->VAR17 < VAR12) {


             FUN3(VAR2, VAR20,

                   ""VAR21""VAR21"",


                    VAR7->VAR17, VAR12
                   );
             return FUN4(VAR22);
        }
    }
    if (VAR9 > 0) {
        VAR7->VAR17 += VAR9;
        if (VAR7->VAR16 > 0)
            VAR7->VAR16 -= VAR9;
    }
    return VAR9;
}