VAR1<VAR2::VAR3> VAR4::FUN1(const VAR2::VAR5& VAR6, VAR7::Flags VAR8, VAR9::VAR10& VAR11, VAR2::VAR12& VAR13)
{
    VAR14<VAR2::VAR3> VAR15;
    for (unsigned VAR16 = 0; VAR16 < VAR17.FUN2(); ++VAR16) {
        VAR18* VAR19 = VAR17[VAR16].FUN3();
        if (VAR19->FUN4() == VAR8) {
            
            VAR15 = VAR19->FUN5(VAR11, VAR6, VAR13);
            if (VAR15)
                return VAR15.FUN6();
        }
    }
 
     static const int VAR20 = 1024; 
     VAR17.FUN7(FUN8(new FUN9(VAR20, VAR8)));


     return VAR17.FUN10()->FUN5(VAR11, VAR6, VAR13);
 }