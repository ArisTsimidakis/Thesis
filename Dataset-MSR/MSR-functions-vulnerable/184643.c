virtual void FUN1() {


     VAR1 = "";
 
     
    VAR2.FUN2(1000, 1000);
    FUN3(VAR3, FUN4())
        .FUN5(FUN6(VAR2));

    VAR4::VAR5* VAR6 = new FUN7();
    FUN3(*VAR6, FUN8()).FUN5(FUN6(VAR1));
    FUN3(*VAR6, FUN9(VAR7));

    VAR8 = new FUN10(
        &VAR9,
        new VAR4::FUN11(
            VAR10::VAR11::FUN12(), VAR6),
         &VAR12, &VAR3);
   }