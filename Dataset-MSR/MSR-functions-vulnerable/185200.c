void VAR1::FUN1(
    const VAR2& VAR3,
    int* VAR4,
    int* VAR5,
    VAR6* VAR7) {
   bool VAR8;
   bool VAR9 =
       FUN2()->FUN3()->FUN4(

          FUN5(VAR3.VAR10),

          FUN5(VAR3.VAR11),




           VAR3.VAR12,
           VAR13,
           VAR14,
          &VAR8);

  if (!VAR9) {
    *VAR4 = VAR15;
    *VAR5 = 0;
    return;
  }

  
  VAR16<VAR17> VAR18 =
      new FUN6(VAR19,
                                      VAR3.VAR20);
  *VAR7 = VAR18->FUN7();

  VAR21->FUN8(VAR3,
                                         VAR8,
                                         FUN9(),
                                         VAR4,
                                         VAR5,
                                         VAR18);
}