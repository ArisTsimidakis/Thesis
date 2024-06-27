FUN1(VAR1* VAR2, int VAR3, VAR4* VAR5)
      : FUN2(VAR2, VAR6),
        FUN3(VAR3) {
    int VAR7 = VAR2->FUN4();
    int VAR8 = VAR2->FUN5();
    int VAR9 = VAR8;
    if (VAR3 < VAR8)
      VAR9--;
    FUN6(VAR7, VAR7 - 1, VAR8,
                              VAR9);
    
    
    
    
    
    
    
    FUN7(VAR8 > 0 &&
                             (VAR9 == 0 ||
                              (VAR8 == VAR9 &&
                               VAR7 == VAR8 + 1)));
  }