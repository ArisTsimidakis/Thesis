virtual VAR1 FUN1(off64_t VAR2, void *VAR3, size_t VAR4) {
 Parcel VAR5, VAR6;
        VAR5.FUN2(
 VAR7::FUN3());

        VAR5.FUN4(VAR2);
        VAR5.FUN5(VAR4);

 status_t VAR8 = FUN6()->FUN7(VAR9, VAR5, &VAR6);
 if (VAR8 != VAR10) {
            FUN8("");
 return VAR11;
 }

 int32_t VAR12 = VAR6.FUN9();

 if (VAR12) {

             return VAR11;
         }
 

        int32_t VAR13 = VAR6.FUN10();


 

        if (VAR13 > 0) {

            memcpy(VAR3, VAR14->FUN11(), VAR13);






         }












 
         return VAR13;
     }