void VAR1::FUN1(
    VAR2* VAR3,
    VAR4* VAR5,
    VAR6::VAR7* VAR8) {
  FUN2(!VAR9);
  FUN2(!VAR10);
  FUN2(VAR3);
  FUN2(VAR5);
  FUN2(VAR11);
  FUN2(VAR8);
 
   VAR9 = VAR3;
   VAR10 = VAR5;


 

  VAR10->FUN3(this);
   VAR9->FUN3(this);



  VAR9->FUN4(

      VAR12::FUN5(&VAR1::VAR13,

                 VAR14.FUN6()));



  FUN7(VAR10->FUN8());



  VAR11->FUN9(this);



  FUN10(VAR8);


 }