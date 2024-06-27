VAR1::FUN1() {
  if (!VAR2->FUN2())
    return nullptr;
  return VAR2->FUN2()->FUN1();
}