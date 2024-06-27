size_t VAR1::FUN1(const VAR2& VAR3, size_t VAR4,
                               char VAR5) {
  do {
    
    
    const char VAR6[] = { VAR5, '', ''''\0' };
    size_t VAR7 = VAR3.FUN2(VAR6, VAR4);
    if (VAR7 == VAR2::VAR8)
      return VAR3.FUN3();

    char VAR9 = VAR3[VAR7];
    if (VAR9 == VAR5) {
      
      return VAR7;
    }

    
    VAR4 = FUN4(VAR3, VAR7, VAR9);
    if (VAR4 == VAR3.FUN3())
      return VAR4;

    ++VAR4;

    
    
    
  } while (true);

  FUN5();
  return VAR3.FUN3();
}