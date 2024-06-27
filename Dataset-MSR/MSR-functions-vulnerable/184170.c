void VAR1::FUN1() {


   {
     VAR2 FUN2(VAR3);
     if (!VAR4)
       VAR5 = VAR6;
     if ((VAR5 == VAR6) || (VAR5 == VAR7))
       return;


     
     VAR5 = VAR7;
   }

  FUN3(VAR4);

  FUN4();
  if (VAR8) {
    FUN5(VAR8);
    FUN6(VAR8);
    VAR8 = NULL;
  }
  FUN7();

  FUN8(VAR4);
  FUN9(VAR4);
  VAR4 = NULL;

  {
    VAR2 FUN2(VAR3);
    VAR5 = VAR6;
   }
 }