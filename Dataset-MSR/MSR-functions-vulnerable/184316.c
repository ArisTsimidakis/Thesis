bool VAR1::FUN1(VAR2::VAR3* VAR4,
                                  VAR5* VAR6,
                                  const VAR7* VAR8,
                                  bool VAR9,
                                  VAR10* VAR11,
                                  VAR12::CompletionCallback VAR13,
                                  VAR12::CompletionCallback VAR14) {
  VAR15* VAR16 =
      new FUN2(this, VAR8, VAR9, VAR13,
                         VAR14);
  VAR6->FUN3(VAR16);
  FUN4(("",
                 static_cast<void*>(VAR16)));
  if (NULL == VAR16) {
    VAR11->FUN5(VAR17,
                          "" + VAR6->FUN6());
    return false;
   }
 
   bool VAR18 =

      VAR16->FUN7(VAR4,

                                 VAR11,

                                 FUN8());


   FUN4(("",
                  VAR18));
   if (!VAR18) {
     return false;
   }



  

  const VAR19* VAR20 = FUN9();

  if (VAR20->FUN10(FUN11())) {

    VAR21 = true;

    

    

    FUN12(VAR13.FUN13().VAR22 != NULL);

    FUN4((""));

    VAR12::VAR23::FUN14()->FUN15()->FUN16(0, VAR13, VAR24);

  }
   return true;
 }