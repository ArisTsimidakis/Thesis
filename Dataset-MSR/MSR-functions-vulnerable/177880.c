FUN1(VAR1 *VAR2, const char *VAR3, int VAR4,
                        VAR5 *VAR6, const char *VAR7)
{
    long VAR8;
    VAR9 *VAR10 = NULL;
    
    
    const char *VAR11 = "";
    bool VAR12 = (FUN2(VAR11, 1, VAR11) == 1);
    uint VAR13 = FUN3(VAR3, VAR4);

     

    if (VAR6 != FUN4(VAR14)) {


         return 0;
     }
 
    
    if (FUN5(&(VAR2->VAR15), VAR7, &VAR10) <= 0)
        return 0;       

    for (VAR8=0; VAR8<FUN6(VAR10); VAR8++) {
        ref VAR16;
        const string_match_params VAR17 = {
                '', '', '', true, true      
        };
        const VAR18 *VAR19;
        uint VAR20;
        int VAR21 = 0;

        if (FUN7(VAR14, VAR10, VAR8, &VAR16) < 0 ||
            FUN8(&VAR16) != VAR22
           )
            break;      
        VAR19 = VAR16.VAR23.VAR24;
        VAR20 = FUN6(&VAR16);
        
        if (VAR20 == 1 && VAR19[0] == '')
            return 0;           
        
        if (VAR13 != 0 && VAR13 != FUN3((const char *)VAR19, VAR20))
            continue;
        VAR21 = FUN9((const char *)VAR19, VAR20);
        
        if (VAR21 > 0 && FUN10(VAR3, VAR4))
            continue;
        
        if (FUN11( (const unsigned char*) VAR3, VAR4,
                          VAR19 + VAR21, VAR20 - VAR21,
                VAR12 ? &VAR17 : NULL))
            return 0;           
    }
    
    return VAR25;
}