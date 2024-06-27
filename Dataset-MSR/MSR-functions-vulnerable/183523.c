bool VAR1::VAR2::FUN1(
    const VAR3::VAR4* VAR5,
    const VAR3::VAR6* VAR7,
    const VAR8& VAR9,
    const VAR10::VAR11& VAR12,
    const VAR10::VAR11& VAR13,
    const VAR10::VAR11& VAR14,
    const VAR15<VAR10>& VAR16) {
   VAPictureParameterBufferH264 VAR17;
   memset(&VAR17, 0, sizeof(VAR17));
 

#VAR18 FUN2(VAR19) VAR17.VAR19 = VAR5->VAR19

#VAR18 FUN3(VAR19, VAR20) VAR17.VAR20 = VAR5->VAR19




   FUN3(VAR21, VAR22);
   
   FUN3(VAR23, VAR24);
  FUN2(VAR25);
  FUN2(VAR26);
 #undef VAR27
 #undef VAR28
 

#VAR18 FUN4(VAR19) VAR17.VAR29.VAR30.VAR19 = VAR5->VAR19

#VAR18 FUN5(VAR19, VAR20) VAR17.VAR29.VAR30.VAR20 = VAR5->VAR19




   FUN4(VAR31);
   FUN5(VAR32,
                      VAR33);
  FUN4(VAR34);
  FUN4(VAR35);
  FUN4(VAR36);
  FUN4(VAR37);
  VAR17.VAR29.VAR30.VAR38 = (VAR5->VAR39 >= 31);
  FUN4(VAR40);
  FUN4(VAR41);
  FUN4(VAR42);
  FUN4(VAR43);
 #undef VAR44
 #undef VAR45
 

#VAR18 FUN6(VAR19) VAR17.VAR19 = VAR7->VAR19


   FUN6(VAR46);
   VAR17.VAR47 = 0;
   VAR17.VAR48 = 0;
  FUN6(VAR49);
  FUN6(VAR50);
  FUN6(VAR51);
   FUN6(VAR52);
 #undef VAR53
 

#VAR18 FUN7(VAR19) VAR17.VAR54.VAR30.VAR19 = VAR7->VAR19

#VAR18 FUN8(VAR19, VAR20) VAR17.VAR54.VAR30.VAR20 = VAR7->VAR19




   FUN7(VAR55);
   FUN7(VAR56);
   FUN7(VAR57);
  FUN7(VAR58);

  VAR17.VAR54.VAR30.VAR59 = 0;
  FUN7(VAR60);
  FUN8(VAR61,
                     VAR62);
  FUN7(VAR63);
  FUN7(VAR64);
  VAR17.VAR54.VAR30.VAR65 = VAR16->VAR66;
#undef VAR67
#undef VAR68

  VAR17.VAR69 = VAR16->VAR69;

  FUN9(&VAR17.VAR70);
  FUN10(&VAR17.VAR70, VAR16);

  
  for (int VAR71 = 0; VAR71 < 16; ++VAR71)
    FUN9(&VAR17.VAR72[VAR71]);

  
  FUN11(VAR9, VAR17.VAR72,
                         FUN12(VAR17.VAR72));

  VAR17.VAR73 = VAR5->VAR74;

  if (!VAR75->FUN13(VAR76,
                                    sizeof(VAR17),
                                    &VAR17))
    return false;

  VAIQMatrixBufferH264 VAR77;
  memset(&VAR77, 0, sizeof(VAR77));

  if (VAR7->VAR78) {
    for (int VAR71 = 0; VAR71 < 6; ++VAR71) {
      for (int VAR79 = 0; VAR79 < 16; ++VAR79)
        VAR77.VAR80[VAR71][VAR79] = VAR7->VAR81[VAR71][VAR79];
    }

    for (int VAR71 = 0; VAR71 < 2; ++VAR71) {
      for (int VAR79 = 0; VAR79 < 64; ++VAR79)
        VAR77.VAR82[VAR71][VAR79] = VAR7->VAR83[VAR71][VAR79];
    }
  } else {
    for (int VAR71 = 0; VAR71 < 6; ++VAR71) {
      for (int VAR79 = 0; VAR79 < 16; ++VAR79)
        VAR77.VAR80[VAR71][VAR79] = VAR5->VAR81[VAR71][VAR79];
    }

    for (int VAR71 = 0; VAR71 < 2; ++VAR71) {
      for (int VAR79 = 0; VAR79 < 64; ++VAR79)
        VAR77.VAR82[VAR71][VAR79] = VAR5->VAR83[VAR71][VAR79];
    }
  }

  return VAR75->FUN13(VAR84,
                                      sizeof(VAR77),
                                      &VAR77);
}