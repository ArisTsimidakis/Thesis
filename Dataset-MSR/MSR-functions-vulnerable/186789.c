bool VAR1::VAR2::FUN1(
    const VAR3* VAR4,
    const VAR5* VAR6,
    const VAR7::VAR8& VAR9,
    const VAR7::VAR8& VAR10,
     const VAR11<VAR7>& VAR12,
     const VAR13* VAR14,
     size_t VAR15) {


   VASliceParameterBufferH264 VAR16;
   memset(&VAR16, 0, sizeof(VAR16));
 
  VAR16.VAR17 = VAR6->VAR18;
  VAR16.VAR19 = 0;
  VAR16.VAR20 = VAR21;
  VAR16.VAR22 = VAR6->VAR23;

#VAR24 FUN2(VAR25) VAR16.VAR25 = VAR6->VAR25
  FUN2(VAR26);
  VAR16.VAR27 = VAR6->VAR27 % 5;
  FUN2(VAR28);

  
  
  FUN2(VAR29);
  FUN2(VAR30);
  FUN2(VAR31);
  FUN2(VAR32);
  FUN2(VAR33);
  FUN2(VAR34);
  FUN2(VAR35);

  if (((VAR6->FUN3() || VAR6->FUN4()) &&
       VAR4->VAR36) ||
      (VAR6->FUN5() && VAR4->VAR37 == 1)) {
    FUN2(VAR38);
    FUN2(VAR39);

    FUN2(VAR40);
    FUN2(VAR41);

    FUN2(VAR42);
    FUN2(VAR43);

    for (int VAR44 = 0; VAR44 <= VAR16.VAR29; ++VAR44) {
      VAR16.VAR45[VAR44] =
          VAR6->VAR46.VAR47[VAR44];
      VAR16.VAR48[VAR44] =
          VAR6->VAR46.VAR49[VAR44];

      for (int VAR50 = 0; VAR50 < 2; ++VAR50) {
        VAR16.VAR51[VAR44][VAR50] =
            VAR6->VAR46.VAR52[VAR44][VAR50];
        VAR16.VAR53[VAR44][VAR50] =
            VAR6->VAR46.VAR54[VAR44][VAR50];
      }
    }

    if (VAR6->FUN5()) {
      for (int VAR44 = 0; VAR44 <= VAR16.VAR30; ++VAR44) {
        VAR16.VAR55[VAR44] =
            VAR6->VAR56.VAR47[VAR44];
        VAR16.VAR57[VAR44] =
            VAR6->VAR56.VAR49[VAR44];

        for (int VAR50 = 0; VAR50 < 2; ++VAR50) {
          VAR16.VAR58[VAR44][VAR50] =
              VAR6->VAR56.VAR52[VAR44][VAR50];
          VAR16.VAR59[VAR44][VAR50] =
              VAR6->VAR56.VAR54[VAR44][VAR50];
        }
      }
    }
  }

  static_assert(
      FUN6(VAR16.VAR60) == FUN6(VAR16.VAR61),
      "");

  for (size_t VAR44 = 0; VAR44 < FUN6(VAR16.VAR60); ++VAR44) {
    FUN7(&VAR16.VAR60[VAR44]);
    FUN7(&VAR16.VAR61[VAR44]);
  }

  for (size_t VAR44 = 0;
       VAR44 < VAR9.FUN8() && VAR44 < FUN6(VAR16.VAR60);
       ++VAR44) {
    if (VAR9[VAR44])
      FUN9(&VAR16.VAR60[VAR44], VAR9[VAR44]);
  }
  for (size_t VAR44 = 0;
       VAR44 < VAR10.FUN8() && VAR44 < FUN6(VAR16.VAR61);
       ++VAR44) {
    if (VAR10[VAR44])
      FUN9(&VAR16.VAR61[VAR44], VAR10[VAR44]);
  }

  if (!VAR62->FUN10(VAR63,
                                    sizeof(VAR16), &VAR16))
    return false;

  
  void* VAR64 = const_cast<VAR13*>(VAR14);
  return VAR62->FUN10(VAR65, VAR15,
                                      VAR64);
}