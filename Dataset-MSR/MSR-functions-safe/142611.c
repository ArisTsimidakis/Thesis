void VAR1::FUN1(int VAR2,
                        const VAR3::VAR4& VAR5,
                        const VAR3::VAR6& VAR7) {
  FUN2(VAR3::VAR8, VAR2);
  const VAR9& VAR10 =
      *VAR3::VAR11<VAR9>(VAR5).FUN3();
  FUN2(VAR10.FUN4(), FUN5());

  if (VAR12) {
    VAR12 = false;
    
    
    
    
    if (VAR10.FUN6())
      FUN7(VAR13);
  }
}