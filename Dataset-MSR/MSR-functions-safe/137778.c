void VAR1::FUN1(int VAR2,
                                                         bool VAR3) {
  FUN2("",
               "",
               "", VAR2, "", VAR3);

  if (VAR3) {
    if (!VAR4::FUN3(VAR5,
                             VAR2)) {
      VAR5.FUN4(VAR2);

      
      
      if (VAR6)
        FUN5(VAR2);
    }
  } else {
    VAR5.remove(VAR2);
  }
}