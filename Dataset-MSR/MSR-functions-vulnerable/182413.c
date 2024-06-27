int FUN1(VAR1 *VAR2) {
    int VAR3 = FUN2(VAR2);
    int VAR4;
    VAR5 *VAR6;

    if (VAR3 == 0)
        return FUN3(VAR2, 0, "");

    if (!FUN4(VAR2, VAR3))
        return FUN3(VAR2, 0, "");

    VAR6 = FUN5(VAR2);
     for(VAR4 = 1; VAR4 <= VAR3; VAR4++) {
         


         FUN6(VAR2, VAR4);
 
         FUN7(VAR2,VAR6,0);

        FUN8(VAR2,(char*)VAR6->VAR7,VAR6->VAR8);

        
        VAR6->free += VAR6->VAR8;
        VAR6->VAR8 = 0;
    }
    FUN9(VAR2, VAR6);

    
    FUN10(VAR2, VAR3);
    return 1;
}