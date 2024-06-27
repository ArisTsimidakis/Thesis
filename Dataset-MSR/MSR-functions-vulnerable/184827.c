VAR1::VAR2<VAR1::VAR3> VAR4::FUN1(const VAR1::VAR5& VAR6)
{
    FUN2("");
    
    
    
    
     
 
     if (VAR6.FUN3() < 2)

        return VAR7::FUN4();


 
     VAR8* VAR9 = VAR4::FUN5(VAR6.FUN6());
 
    String VAR10 = FUN7(VAR6[0]);
    String VAR11 = FUN7(VAR6[1]);
    VAR12* VAR13 = FUN8();
    if (!VAR13)
        return VAR1::FUN9();

    KURL VAR14 = VAR13->FUN10(VAR11);

    ExceptionCode VAR15 = 0;

    if (VAR6.FUN3() >= 3) {
        bool VAR16 = VAR6[2]->FUN11();

        if (VAR6.FUN3() >= 4 && !VAR6[3]->FUN12()) {
            String VAR17 = FUN13(VAR6[3]);
            
            if (VAR6.FUN3() >= 5 && !VAR6[4]->FUN12()) {
                String VAR18 = FUN13(VAR6[4]);
                VAR9->open(VAR10, VAR14, VAR16, VAR17, VAR18, VAR15);
            } else
                VAR9->open(VAR10, VAR14, VAR16, VAR17, VAR15);
        } else
            VAR9->open(VAR10, VAR14, VAR16, VAR15);
    } else
        VAR9->open(VAR10, VAR14, VAR15);

    if (VAR15)
        return FUN14(VAR15, VAR6.FUN15());

    return VAR1::FUN9();
}