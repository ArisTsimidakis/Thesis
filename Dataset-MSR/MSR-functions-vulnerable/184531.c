void FUN1(double VAR1) {
     VAR2.FUN2(VAR1);
     ObjectIdSet VAR3 = FUN3(VAR4);

    VAR2.FUN4(VAR3);


 
     
     ObjectIdSet VAR5 = FUN3(2);
    FUN5(VAR5);
    FUN6(
        VAR5, 0.0,
        VAR2.FUN7());

    
    VAR2.FUN8();
    FUN5(VAR5);

    double VAR6 =
        VAR1 * VAR7::VAR8;

    double VAR9 =
        VAR7::VAR10 *
        (1.0 + VAR6);
    VAR9 = VAR11::FUN9(VAR9);
    FUN6(
        VAR5, VAR9,
        VAR2.FUN7());

    
    VAR2.FUN8();
    FUN5(VAR5);
    VAR9 *=
        VAR7::VAR12 + VAR6;
    VAR9 = VAR11::FUN9(VAR9);
    FUN6(
        VAR5, VAR9,
        VAR2.FUN7());

    
    while (VAR9 < VAR7::VAR13) {
      VAR2.FUN8();
      FUN5(VAR5);
      VAR9 *=
          VAR7::VAR12 + VAR6;
      VAR9 = VAR11::FUN9(VAR9);
    }
    FUN6(
        VAR5,
        VAR7::VAR13,
        VAR2.FUN7());
  }