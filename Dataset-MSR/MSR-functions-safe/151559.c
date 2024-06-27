void VAR1::FUN1() {
  if (VAR2)
    return;
  VAR2 = VAR3::FUN2(new VAR4<VAR5>);

  for (const auto& VAR6 : VAR7) {
    VAR8* VAR9 = VAR6.VAR10;
    VAR2->FUN3(VAR9->FUN4().FUN5());
  }
}