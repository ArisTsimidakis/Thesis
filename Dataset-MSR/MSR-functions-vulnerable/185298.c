void FUN1(VAR1* VAR2,
                              const VAR3& VAR4) {
  char VAR5[256];
  char VAR6[256];

  FUN2(VAR2, VAR4.VAR7, VAR5, sizeof(VAR5));

  strncpy(VAR6, "", sizeof(VAR6));
  if (VAR4.VAR8 < 128) {
    VAR9::string VAR10 = VAR11::FUN3(VAR4.VAR8);
    FUN4(
        VAR2, "", VAR10.FUN5(), "", VAR6,
        sizeof(VAR6));
  } else {
    int VAR12;
    char** VAR13 = FUN6(VAR2, &VAR12);

    for (int VAR14 = 0; VAR14 < VAR12; VAR14++) {
      int VAR15, VAR16, VAR17;
      FUN7(VAR2, VAR13[VAR14], &VAR15, &VAR16, &VAR17);
      if (VAR4.VAR8 == VAR15) {
        VAR9::string VAR18 = FUN8(
            "", VAR13[VAR14], VAR4.VAR19);
        FUN4(
            VAR2, "", VAR18.FUN5(), "", VAR6,
            sizeof(VAR6));
        break;
      }
    }
     FUN9(VAR13);
   }
 

  FUN10(VAR20) 


       << ""
       << "" << VAR4.VAR21 << ""
       << "" << static_cast<int>(VAR4.VAR7)
      << "" << VAR5 << ""
      << "" << static_cast<int>(VAR4.VAR8) << ""
      << "" << static_cast<int>(VAR4.VAR19)
      << "" << VAR6 << "";
}