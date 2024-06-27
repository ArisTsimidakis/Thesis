SSLErrorInfo VAR1::FUN1(ErrorType VAR2,
                                       VAR3::VAR4* VAR5,
                                       const VAR6& VAR7) {
  string16 VAR8, VAR9, VAR10;
  VAR11::VAR12<VAR13> VAR14;
  switch (VAR2) {
    case VAR15: {
      VAR8 =
          VAR16::FUN2(VAR17);
      
      
      
      
      
      
      VAR11::VAR12<VAR11::VAR18> VAR19;
      VAR5->FUN3(&VAR19);
      FUN4(!VAR19.FUN5());
      size_t VAR20 = 0;
      for (; VAR20 < VAR19.FUN6(); ++VAR20) {
        if (VAR19[VAR20] == VAR5->FUN7().VAR21)
          break;
      }
      if (VAR20 == VAR19.FUN6())
        VAR20 = 0;
       VAR9 =
           VAR16::FUN8(VAR22,
                                      FUN9(VAR7.FUN10()),

                                     FUN9(VAR19[VAR20]),




                                      FUN9(VAR7.FUN10()));
       VAR10 = VAR16::FUN2(
           VAR23);
      VAR14.FUN11(
          VAR16::FUN2(VAR24));
       VAR14.FUN11(
           VAR16::FUN8(
               VAR25,

              FUN9(VAR5->FUN7().VAR21),


               FUN9(VAR7.FUN10())));
       break;
     }
    case VAR26:
      VAR14.FUN11(
          VAR16::FUN2(VAR24));
      if (VAR5->FUN12()) {
        VAR8 = VAR16::FUN2(VAR27);
        VAR9 = VAR16::FUN8(
            VAR28,
            FUN9(VAR7.FUN10()),
            FUN9(VAR7.FUN10()),
            VAR29::FUN13(VAR29::VAR30::FUN14()));
        VAR10 =
            VAR16::FUN2(VAR31);
        VAR14.FUN11(VAR16::FUN2(
            VAR32));
      } else {
        
        
        
        VAR8 = VAR16::FUN2(VAR33);
        VAR9 = VAR16::FUN8(
            VAR34,
            FUN9(VAR7.FUN10()),
            FUN9(VAR7.FUN10()),
            VAR29::FUN13(VAR29::VAR30::FUN14()));
        VAR10 =
            VAR16::FUN2(VAR35);
        VAR14.FUN11(
            VAR16::FUN2(
                VAR36));
      }
      break;
    case VAR37:
      VAR8 = VAR16::FUN2(VAR38);
      VAR9 = VAR16::FUN8(
          VAR39,
          FUN9(VAR7.FUN10()));
      VAR10 = VAR16::FUN2(
          VAR40);
      VAR14.FUN11(
          VAR16::FUN2(VAR24));
      VAR14.FUN11(VAR16::FUN8(
          VAR41,
          FUN9(VAR7.FUN10()),
          FUN9(VAR7.FUN10())));
      VAR14.FUN11(VAR16::FUN2(
          VAR42));
      break;
    case VAR43:
      VAR8 = VAR16::FUN2(VAR44);
      VAR9 = VAR16::FUN8(
          VAR45,
          FUN9(VAR7.FUN10()));
      VAR10 =
          VAR16::FUN2(VAR46);
      VAR14.FUN11(
          VAR16::FUN8(VAR24,
                                     FUN9(VAR7.FUN10())));
      VAR14.FUN11(VAR16::FUN2(
          VAR47));
      break;
    case VAR48:
      VAR8 = VAR16::FUN2(
          VAR49);
      VAR9 = VAR16::FUN2(
          VAR50);
      VAR10 = VAR16::FUN2(
          VAR51);
      break;
    case VAR52:
      VAR8 = VAR16::FUN2(
          VAR53);
      VAR9 = VAR16::FUN2(
          VAR54);
      VAR10 = VAR16::FUN2(
          VAR55);
      break;
    case VAR56:
      VAR8 = VAR16::FUN2(VAR57);
      VAR9 = VAR16::FUN8(VAR58,
                                           FUN9(VAR7.FUN10()));
      VAR10 =
          VAR16::FUN2(VAR59);
      VAR14.FUN11(
          VAR16::FUN2(VAR24));
      VAR14.FUN11(
          VAR16::FUN2(VAR60));
      break;
    case VAR61:
      VAR8 = VAR16::FUN2(VAR62);
      VAR9 = VAR16::FUN8(
          VAR63,
          FUN9(VAR7.FUN10()));
      VAR10 =
          VAR16::FUN2(VAR64);
      VAR14.FUN11(
          VAR16::FUN2(VAR24));
      VAR14.FUN11(VAR16::FUN2(
          VAR65));
      break;
    case VAR66:
      VAR8 = VAR16::FUN2(
          VAR67);
      VAR9 = VAR16::FUN8(
          VAR68,
          FUN9(VAR7.FUN10()));
      VAR10 = VAR16::FUN2(
          VAR69);
      VAR14.FUN11(
          VAR16::FUN2(VAR24));
      VAR14.FUN11(
          VAR16::FUN2(
              VAR70));
      break;
    case VAR71:
      VAR8 = VAR16::FUN2(VAR72);
      VAR9 = VAR16::FUN8(
          VAR73, FUN9(VAR7.FUN10()));
      VAR10 = VAR16::FUN2(
          VAR74);
      VAR14.FUN11(
          VAR16::FUN2(VAR24));
      VAR14.FUN11(
          VAR16::FUN2(
              VAR75));
      break;
    case VAR76:
      VAR8 = VAR16::FUN2(VAR77);
      VAR9 = VAR16::FUN2(VAR78);
      VAR10 =
          VAR16::FUN2(VAR79);
      break;
    default:
      FUN15();
  }
  return FUN16(VAR8, VAR9, VAR10, VAR14);
}