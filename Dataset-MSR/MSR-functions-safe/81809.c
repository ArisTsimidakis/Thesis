VAR1 FUN1(VAR2 *VAR3, size_t VAR4, int VAR5) {
    if (VAR3->VAR6 <= VAR4) return 0;

    raxIterator VAR7;
    FUN2(&VAR7,VAR3->VAR8);
    FUN3(&VAR7,"",NULL,0);

    int64_t VAR9 = 0;
    while(VAR3->VAR6 > VAR4 && FUN4(&VAR7)) {
        unsigned char *VAR10 = VAR7.VAR11, *VAR12 = FUN5(VAR10);
        int64_t VAR13 = FUN6(VAR12);

        
        if (VAR3->VAR6 - VAR13 >= VAR4) {
            FUN7(VAR10);
            FUN8(VAR3->VAR8,VAR7.VAR14,VAR7.VAR15,NULL);
            FUN3(&VAR7,"",VAR7.VAR14,VAR7.VAR15);
            VAR3->VAR6 -= VAR13;
            VAR9 += VAR13;
            continue;
        }

        
        if (VAR5) break;

        
        int64_t VAR16 = VAR3->VAR6 - VAR4;
        FUN9(VAR16 < VAR13);
        VAR10 = FUN10(VAR10,&VAR12,VAR13-VAR16);
        VAR12 = FUN11(VAR10,VAR12); 
        int64_t VAR17 = FUN6(VAR12);
        VAR10 = FUN10(VAR10,&VAR12,VAR17+VAR16);
        VAR12 = FUN11(VAR10,VAR12); 

        
        int64_t VAR18 = FUN6(VAR12);
        VAR12 = FUN11(VAR10,VAR12); 
        for (int64_t VAR19 = 0; VAR19 < VAR18; VAR19++)
            VAR12 = FUN11(VAR10,VAR12); 
        VAR12 = FUN11(VAR10,VAR12); 

        
        while(VAR12) {
            int VAR20 = FUN6(VAR12);
            int VAR21;

            
            if (!(VAR20 & VAR22)) {
                VAR20 |= VAR22;
                VAR10 = FUN10(VAR10,&VAR12,VAR20);
                VAR9++;
                VAR3->VAR6--;
                if (VAR3->VAR6 <= VAR4) break; 
            }

            VAR12 = FUN11(VAR10,VAR12); 
            VAR12 = FUN11(VAR10,VAR12); 
            VAR12 = FUN11(VAR10,VAR12); 
            if (VAR20 & VAR23) {
                VAR21 = VAR18;
            } else {
                VAR21 = FUN6(VAR12);
                VAR21 = 1+(VAR21*2);
            }

            while(VAR21--) VAR12 = FUN11(VAR10,VAR12); 
            VAR12 = FUN11(VAR10,VAR12); 
        }

        
        VAR13 -= VAR16;
        VAR17 += VAR16;
        if (VAR13 + VAR17 > 10 && VAR17 > VAR13/2) {
            
        }

        
        FUN12(VAR3->VAR8,VAR7.VAR14,VAR7.VAR15,VAR10,NULL);

        break; 
    }

    FUN13(&VAR7);
    return VAR9;
}