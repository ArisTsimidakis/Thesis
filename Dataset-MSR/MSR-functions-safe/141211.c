VAR1* VAR2::FUN1() {
  if (VAR3::FUN2()) {
    if (FUN3()) {
      FUN4(VAR4.FUN5() >= VAR5::VAR6);
      VAR7* VAR8 = FUN6();
      if (VAR8 && VAR8->FUN7() &&
          VAR8->FUN7()->FUN8())
        return nullptr;

      return VAR8;
    }

    return FUN9();
  }

  return FUN10();
}