bool FUN1(const VAR1::VAR2& VAR3, VAR1::VAR2* VAR4) {
  VAR1::VAR5<VAR6> VAR7;
  if (!VAR8::FUN2(VAR3, &VAR7))
    return false;
  VAR4->FUN3(reinterpret_cast<const char*>(&VAR7[0]), VAR7.FUN4());
  return true;
}