void VAR1::FUN1(VAR2* VAR3) {

  VAR3->FUN2(VAR4 ? VAR4->FUN3() : nullptr,




                        VAR4);
 
   VAR5::VAR6* VAR7 =
      new VAR5::FUN4();
  VAR3->FUN5(VAR8::FUN6(new VAR5::FUN7()));
  VAR3->FUN5(VAR8::FUN6(new VAR5::FUN8()));
  VAR3->FUN5(VAR8::FUN6(VAR7));
  VAR3->FUN5(VAR8::FUN6(new VAR5::FUN9()));
  VAR3->FUN5(VAR8::FUN6(new VAR5::FUN10()));
  VAR3->FUN5(VAR8::FUN6(new VAR5::FUN11(
      FUN12())));
  VAR3->FUN5(VAR8::FUN6(new VAR5::FUN13(FUN14())));
  VAR3->FUN5(VAR8::FUN6(new VAR5::FUN15()));
  VAR3->FUN5(VAR8::FUN6(new VAR5::FUN16()));
  VAR3->FUN5(VAR8::FUN6(new VAR5::FUN17()));
  VAR3->FUN5(VAR8::FUN6(new VAR5::FUN18()));
  VAR3->FUN5(VAR8::FUN6(new VAR5::FUN19(
      VAR5::VAR9::VAR10,
      VAR11 ? VAR11->FUN20() : 0,
      FUN12())));
  if (VAR11 && !VAR11->FUN21()) {
    VAR3->FUN5(
        VAR8::FUN6(new VAR5::FUN22(VAR7)));
    VAR3->FUN5(VAR8::FUN6(new VAR5::FUN23()));
  }

  if (FUN24())
    VAR3->FUN25(VAR12);

  if (FUN26().FUN27() == 1) {
    VAR13.FUN28(new FUN29());
    FUN30();
#if FUN31(VAR14)
    FUN32()->FUN33();
#endif
  }
}