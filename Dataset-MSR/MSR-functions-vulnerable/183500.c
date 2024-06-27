void VAR1::FUN1(
    VAR2::VAR3* VAR4) {
  VAR5::FileDescriptor VAR6;
  int VAR7;
   VAR6.VAR8 = VAR7 = -1;
   VAR6.VAR9 = false;
 












   FilePath VAR10;

  if (VAR11::FUN2(&VAR10)) {




     int VAR8 = open(VAR10.FUN3().FUN4(), VAR12);
     if (VAR8 >= 0) {
       VAR13* VAR14 = &VAR15<VAR16>::FUN5()->VAR14;
      VAR13::iterator VAR17 = VAR14->FUN6(VAR8);
      if (VAR17 != VAR14->FUN7()) {
        FUN8() << "" << VAR8;
      } else {
        (*VAR14)[VAR8] = VAR10;
        VAR6.VAR8 = VAR7 = VAR8;
        VAR6.VAR9 = true;
      }
    }
  }

  VAR18::FUN9(
      VAR4, VAR6, VAR7);

   VAR19::FUN10(
      VAR19::VAR20, VAR21,
      FUN11(
          this, &VAR1::VAR22, VAR4));
}