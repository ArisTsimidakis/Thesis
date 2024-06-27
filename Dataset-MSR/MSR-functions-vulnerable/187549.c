status_t VAR1::FUN1(VAR2::buffer_id VAR3, int VAR4) {
     VAR5::VAR6 FUN2(VAR7);
 

    VAR8 *VAR9 = FUN3(VAR3);








     VAR9->VAR10 = 0;
     VAR9->VAR11 = 0;
     VAR9->VAR12 = 0;

 
 status_t VAR13 = FUN4(VAR9, VAR4, VAR14);
 if (VAR13 != VAR15) {
        FUN5(VAR16::VAR17, VAR13, FUN6(VAR3, VAR9, VAR4));
 return VAR13;
 }

 {
 VAR5::VAR6 FUN7(VAR18);
        VAR19.FUN8(VAR9);
        FUN9(VAR16, FUN10(FUN6(VAR3, VAR9, VAR4)));
 }

    OMX_ERRORTYPE VAR20 = FUN11(VAR21, VAR9);
 if (VAR20 != VAR22) {
        FUN5(VAR16, VAR20, FUN6(VAR3, VAR9, VAR4));
 VAR5::VAR6 FUN7(VAR18);
        VAR19.remove(VAR9);
 }
 return FUN12(VAR20);
}