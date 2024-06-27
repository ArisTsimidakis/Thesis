MojoResult VAR1::FUN1(MojoMessageHandle VAR2,
                                      uintptr_t VAR3,
                                      MojoMessageContextSerializer VAR4,
                                      MojoMessageContextDestructor VAR5) {
  if (!VAR2 || !VAR3)
    return VAR6;
  auto* VAR7 = reinterpret_cast<VAR8::VAR9*>(VAR2)
                      ->VAR10<VAR11>();
  return VAR7->FUN2(VAR3, VAR4, VAR5);
}