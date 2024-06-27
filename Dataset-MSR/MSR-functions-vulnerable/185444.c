bool VAR1::FUN1(
    const VAR2::VAR3& VAR4,
    VAR5* VAR6) const {
  FUN2(VAR6);
  bool VAR7 = false;
  STGMEDIUM VAR8;
   FORMATETC VAR9 = VAR4.FUN3();
   if (FUN4(VAR10->FUN5(&VAR9, &VAR8))) {
     if (VAR8.VAR11 & VAR12) {

      VAR13::VAR14::VAR15<char> FUN6(VAR8.VAR16);


       FUN7(VAR17.FUN8(), 0u);
       *VAR6 = FUN9(VAR17.FUN10(), static_cast<int>(VAR17.FUN8()));
       VAR7 = true;
    }
    FUN11(&VAR8);
  }
  return VAR7;
}