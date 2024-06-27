void VAR1::FUN1(
     VAR2::SensorType VAR3,

    VAR4::ScopedSharedBufferMapping VAR5,


     const VAR6& VAR7) {
   FUN2(FUN3(VAR3));
   VAR8::VAR9<VAR10> VAR11;
  switch (VAR3) {
    case VAR2::VAR12::VAR13:
      VAR11 = VAR8::VAR14<
          VAR15>();
      break;
    case VAR2::VAR12::VAR16:
      VAR11 = VAR8::VAR14<
          VAR17>();
      break;
    case VAR2::VAR12::VAR18:
      VAR11 = VAR8::VAR14<
          VAR19>(
          false );
      break;
    default:
      FUN4();
   }
 
   FUN2(VAR11);

  VAR20::FUN5(VAR8::move(VAR5), this,


                                VAR8::move(VAR11), VAR7);
 }