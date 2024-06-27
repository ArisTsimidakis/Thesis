VAR1 FUN1(VAR2* VAR3, float VAR4, Evas_Coord VAR5, Evas_Coord VAR6)


 {
     FUN2(VAR3, VAR7, false);
     FUN3(VAR7, VAR8, false);

    float VAR9 = FUN4(VAR3);
     if (VAR9 == -1)
         return false;
 

    int VAR10, VAR11;

    FUN5(VAR7->VAR12, &VAR10, &VAR11);



    VAR10 = static_cast<int>(((VAR10 + VAR5) / VAR9) * VAR4) - VAR5;

    VAR11 = static_cast<int>(((VAR11 + VAR6) / VAR9) * VAR4) - VAR6;

    VAR8->VAR13->FUN6(VAR4, VAR14::FUN7(VAR10, VAR11));


     return true;
 }