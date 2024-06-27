void VAR1::FUN1() {
  FUN2(VAR2->FUN3().FUN4(VAR3::VAR4));
  VAR5::VAR6<VAR7::VAR8> VAR9 =
      VAR10->FUN5();
  VAR11::ListValue VAR12;
  for (size_t VAR13 = 0; VAR13 < VAR9.FUN6(); ++VAR13)
    VAR12.FUN7(FUN8(VAR9[VAR13]));
  FUN9("",
                     &VAR12, NULL, NULL);
}