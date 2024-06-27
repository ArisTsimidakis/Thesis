void VAR1::FUN1(VAR2* VAR3) {
  VAR4<VAR5> VAR6;
  if (VAR7) {
    InvalidRects VAR8;
    VAR9.FUN2(VAR8);
    VAR10& VAR11 = VAR12[VAR13];
    VAR11.FUN3();

    bool VAR14 = true;  
    if (VAR15) {
       if (VAR16.FUN4() != 0) {
         FUN5(VAR11);
       } else {




         FUN6(VAR11);
       }
     } else {
      FUN7(VAR11, VAR8);
      VAR14 = false;
    }

    DataPlanes VAR17;
    VAR17.VAR6[0] = VAR11.FUN8();
    VAR17.VAR18[0] = VAR11.FUN9();
    if (VAR14) {
      VAR17.VAR18[0] = -VAR17.VAR18[0];
      VAR17.VAR6[0] +=
          (VAR11.FUN10().FUN11() - 1) * VAR11.FUN9();
    }

    VAR6 = new FUN12(VAR17, VAR19::FUN13(VAR11.FUN10()),
                           FUN14());
    VAR6->FUN15() = VAR8;

    VAR13 = (VAR13 + 1) % VAR20;
    VAR9.FUN16(VAR6->FUN10());
  }

  VAR3->FUN17(VAR6);
  delete VAR3;
}