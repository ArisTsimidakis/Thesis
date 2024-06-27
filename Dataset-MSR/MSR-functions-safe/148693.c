void VAR1::VAR2::FUN1() {
  FUN2(VAR3->VAR4->FUN3());
  VAR5.FUN4();

  if (VAR6.FUN5())
    return;

  if (VAR7) {
    __u32 VAR8 = VAR9;
    FUN6(VAR10, &VAR8);
    VAR7 = false;
  }

  for (const auto& VAR11 : VAR6) {
    for (size_t VAR12 = 0; VAR12 < VAR13; ++VAR12) {
      VAR14->FUN7(VAR11.VAR15[VAR12], VAR11.VAR16[VAR12]);
    }
  }

  struct v4l2_requestbuffers VAR17;
  memset(&VAR17, 0, sizeof(VAR17));
  VAR17.VAR18 = 0;
  VAR17.VAR8 = VAR9;
  VAR17.VAR19 = VAR20;
  FUN8(VAR21, &VAR17);

  VAR6.FUN4();
  VAR13 = 0;
}