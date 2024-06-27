void VAR1::FUN1() {






   if (VAR2) {
     VAR2->FUN2();
     VAR2 = nullptr;
  }

  if (FUN3() && FUN4() &&
      FUN4()->FUN5()) {
    VAR3* VAR4 =
        VAR5<VAR6>(FUN4())
            ->FUN6();
    if (VAR4)
      VAR4->FUN7(this);
  }
}