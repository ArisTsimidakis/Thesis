VAR1::FUN1(VAR2* VAR3, GIOCondition VAR4)
{
    

    if ( VAR4 & VAR5 ) {
        VAR6::FUN2("");
        return false;
    }

    assert(VAR4 & VAR7);

    VAR6::FUN2("",
              FUN3(VAR3));

    const size_t VAR8 = 1;
    gchar VAR9[VAR8];

    do {
        VAR10* VAR11 = 0;
        gsize VAR12 = 0;

        GIOStatus VAR13 = FUN4(VAR3, VAR9, VAR8,
                                                   &VAR12, &VAR11);

        switch (VAR13) {
          case VAR14:
              VAR6::FUN5("",
                               VAR11 ? VAR11->VAR15 : "");
              FUN6(VAR11);
              return false;
          case VAR16:
              VAR6::FUN5("", 
                               VAR11 ? VAR11->VAR15 : "");
              FUN6(VAR11);
              return false;
          case VAR17:
              VAR6::FUN2("");
              continue;
          case VAR18:
              
              VAR19.FUN7(VAR9, VAR9+VAR12);
#if 0
              VAR6::FUN2("", VAR20::FUN8(VAR9, VAR9+VAR12));
#endif
              break;
          default:
              VAR6::FUN5("");
              return false;
        }
    } while (FUN9(VAR3) & VAR7);

    
    FUN10();
    
    return true;
}