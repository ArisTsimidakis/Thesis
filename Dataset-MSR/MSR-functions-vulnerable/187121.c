void VAR1::FUN1(SnapshotType VAR2) {
  FUN2(VAR3->FUN3());
 
   
   

  VAR4::VAR5 FUN4(VAR6::FUN5() + 1);


   String VAR7 =
       VAR8::FUN6("",
                      static_cast<unsigned long>(VAR3->FUN7()));
  const String VAR9 = VAR7 + "";
  const String VAR10 = VAR7 + "";

  int VAR11 = 0;
#VAR12 FUN8(VAR13)                                          \
  {                                                                       \
    VAR11++;                                           \
    switch (VAR2) {                                                       \
      case VAR14::VAR15:                                   \
        VAR16[VAR17::VAR18##VAR13##VAR19]->FUN1(         \
            VAR9 + "" #VAR13, VAR20);                      \
        break;                                                            \
      case VAR14::VAR21:                               \
        VAR16[VAR17::VAR18##VAR13##VAR19]->FUN9( \
            VAR9 + "" #VAR13);                            \
        break;                                                            \
      default:                                                            \
        FUN10();                                                     \
    }                                                                     \
  }

  FUN8(VAR22);
  FUN8(VAR23);
  FUN8(VAR24);
  FUN8(VAR25);
  FUN8(VAR26);
  FUN8(VAR27);
  FUN8(VAR28);
  FUN8(VAR29);
  FUN8(VAR30);
  FUN8(VAR31);
  FUN8(VAR32);
  FUN8(VAR33);
  FUN11(VAR34);

  FUN12(VAR11, VAR17::VAR35);

#undef VAR34

  if (VAR2 == VAR14::VAR21)
    return;

  size_t VAR36 = 0;
   size_t VAR37 = 0;
   size_t VAR38 = 0;
   size_t VAR39 = 0;

  for (size_t VAR40 = 1; VAR40 <= VAR6::FUN5();

       ++VAR40) {




     VAR36 += VAR20.VAR41[VAR40];
     VAR37 += VAR20.VAR42[VAR40];
     VAR38 += VAR20.VAR43[VAR40];
    VAR39 += VAR20.VAR44[VAR40];
  }

  VAR45::VAR46::VAR47* VAR48 =
      VAR49::FUN13()
          ->FUN14(VAR7);
  VAR48->FUN15("", "", VAR36);
  VAR48->FUN15("", "", VAR37);
  VAR48->FUN15("", "", VAR38);
  VAR48->FUN15("", "", VAR39);

  VAR45::VAR46::VAR47* VAR50 =
      VAR49::FUN13()
          ->FUN14(VAR9);
  VAR45::VAR46::VAR47* VAR51 =
      VAR49::FUN13()
          ->FUN14(VAR10);
  VAR49::FUN13()
      ->FUN16()
      ->FUN17(VAR51->FUN18(), VAR50->FUN18());
}