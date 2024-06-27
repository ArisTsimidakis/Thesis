static VAR1 FUN1(const char* VAR2, unsigned VAR3)
{
    String VAR4;
    HTTPHeaderMap VAR5;

    
    while (const char* VAR6 = FUN2(VAR2, VAR3)) {
        const char* VAR7 = VAR2;
        int VAR8 = VAR6 - VAR2;

        
        VAR2 = VAR6 + 1;
        if ((*VAR6 == '') && (*VAR2 == ''))
            VAR2++; 

        VAR3 -= (VAR2 - VAR7);
        if (!VAR8) {
            
            break;
        }

        if (*VAR7 == '' || *VAR7 == '') {
            
            if (VAR4.FUN3()) {
                
                continue;
            } 
            
            
            String VAR9 = VAR5.FUN4(VAR4);
            VAR10 FUN5(VAR7, VAR8);
            
            VAR5.FUN6(VAR4, VAR9 + VAR11);
        } else {
            
            const char* VAR12 = VAR7;
            while (*VAR12 != '' && VAR12 != VAR6)
                VAR12++;

            if (VAR12 == VAR6) {
                
                continue;
            }

            VAR4 = FUN7(FUN8(VAR7, VAR12 - VAR7));
            String VAR13;
            
            for (VAR12++; VAR12 != VAR6; VAR12++) {
                if (*VAR12 != '' && *VAR12 != '')
                    break;
            }
            if (VAR12 == VAR6)
                VAR13 = "";
            else
                VAR13 = FUN8(VAR12, VAR6 - VAR12);
            
            String VAR14 = VAR5.FUN4(VAR4);
            if (!VAR14.FUN3()) {
                String VAR15 = VAR14;
                VAR15 += "";
                VAR15 += VAR13;
                VAR13 = VAR15;
            }
            
            VAR5.FUN6(VAR4, VAR13);
        }
    }

    return VAR5;
}