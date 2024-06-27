VAR1::~FUN1() {
  FUN2(this, VAR1::FUN3(VAR2.FUN4()));
  VAR2->FUN5(VAR3);
  if (VAR4.FUN4())
    VAR4->FUN6(NULL);
  if (VAR5.FUN4())
    VAR5->FUN6(NULL);
  VAR6::VAR7::Atomic32 VAR8 =
      VAR6::VAR7::FUN7(&VAR9, -1);
  
  
  
  if (VAR8 == 0) {
    VAR6::VAR10::FUN8(
        VAR6::VAR10::VAR11);
  }
}