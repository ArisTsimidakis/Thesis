status_t VAR1::FUN1(VAR2::VAR3* VAR4) const {
 size_t VAR5 = 0;
 const char16_t* VAR6 = FUN2(&VAR5);
 if (!VAR6) {
 return VAR7;
 }

 
 if (VAR5 == 0u) {
        VAR4->FUN3();

        return VAR8;
     }
 

    ssize_t VAR9 = FUN4(VAR6, VAR5);

    if (VAR9 < 0) {






         return VAR10;
     }
     

    

    VAR4->FUN5(VAR9 + 1);

    FUN6(VAR6, VAR5, &((*VAR4)[0]));


     VAR4->FUN5(VAR9);




     return VAR8;
 }