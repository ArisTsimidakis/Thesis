void VAR1::FUN1(
 const VAR2<VAR3>& VAR4, VAR5* VAR6, const VAR7* VAR8,
 int32_t VAR9) {
 int32_t VAR10 = VAR8->VAR11;
 if (!(VAR10 & VAR9)) {
 return;
 }
    VAR10 = (VAR10 & ~VAR7::VAR12) | VAR9;

 
 
 VAR13* VAR14 = new FUN2(VAR6, 
            VAR10, VAR8->VAR15, VAR8->VAR16,
            VAR8->VAR17);

 
 switch (VAR6->VAR18) {
 case VAR5::VAR19: {
 VAR20* VAR21 = static_cast<VAR20*>(VAR6);
        VAR14->VAR22 = VAR21->VAR23;
        VAR14->VAR24 = VAR21->VAR11;

 if (!VAR4->VAR25.FUN3(VAR21,
                VAR14->VAR22, VAR14->VAR24)) {
#if VAR26
            FUN4("",
                    VAR4->FUN5());
#endif
 delete VAR14;
 return; 
 }
 break;
 }

 case VAR5::VAR27: {
 VAR28* VAR29 = static_cast<VAR28*>(VAR6);
 if (VAR9 & VAR7::VAR30) {
            VAR14->VAR22 = VAR31;
 } else if (VAR9 & VAR7::VAR32) {
            VAR14->VAR22 = VAR33;
 } else if (VAR9 & VAR7::VAR34) {
            VAR14->VAR22 = VAR35;
 } else if (VAR9 & VAR7::VAR36) {
            VAR14->VAR22 = VAR37;
 } else if (VAR9 & VAR7::VAR38) {
            VAR14->VAR22 = VAR39;
 } else {
            VAR14->VAR22 = VAR29->VAR23;
 }
 if (VAR14->VAR22 == VAR40
 && !VAR4->VAR25.FUN6(
                        VAR29->VAR41, VAR29->VAR42, VAR29->VAR43)) {
#if VAR26
        FUN4("",
                VAR4->FUN5());
#endif
            VAR14->VAR22 = VAR35;
 }

        VAR14->VAR24 = VAR29->VAR11;

         if (VAR14->VAR44 & VAR7::VAR45) {
             VAR14->VAR24 |= VAR46;
         }






 
         if (!VAR4->VAR25.FUN7(VAR29,
                 VAR14->VAR22, VAR14->VAR24)) {
#if VAR26
            FUN4("",
                    VAR4->FUN5());
#endif
 delete VAR14;
 return; 
 }
 break;
 }
 }

 
 if (VAR14->FUN8()) {
        FUN9(VAR6);
 }

 
    VAR4->VAR47.FUN10(VAR14);
    FUN11(VAR4);
}