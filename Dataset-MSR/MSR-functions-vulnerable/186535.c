bool FUN1(


       VAR1::EVRButtonId VAR2,
       AxesRequirement VAR3 = VAR4::VAR5) {
     if (!FUN2(VAR2))
       return false;
 

    bool VAR6 = (VAR3 == VAR4::VAR7);


     if (VAR6 && !VAR8[VAR2].VAR9)
       return false;
 
    FUN3(VAR8[VAR2]);
    VAR10.FUN4(VAR2);

     return true;
   }