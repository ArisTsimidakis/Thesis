static VAR1<VAR2> FUN1(
    VAR3* VAR4,
    const VAR5& VAR6,
    AlphaDisposition VAR7 = VAR8,
    VAR9::ColorSpaceOption VAR10 =
        VAR9::VAR11) {
  FUN2(VAR4);
  VAR12 FUN3(FUN4(), FUN5(VAR4->FUN6(), VAR4->FUN7()));
  const IntRect VAR13 = FUN8(VAR14, VAR6.VAR15);

  
  
  
  if (VAR13.FUN9() && !VAR6.VAR16) {
    SkImageInfo VAR17 =
         VAR18::FUN10(VAR6.VAR19, VAR6.VAR20,
                           VAR21, VAR22);
     VAR23<VAR24> VAR25 = VAR24::FUN11(

        static_cast<VAR26>(VAR17.FUN6()) * VAR17.FUN7(),


         VAR17.FUN12());
     if (!VAR25)
       return nullptr;
     VAR23<VAR27> VAR28 =
         VAR27::FUN13(VAR25, 0, VAR25->FUN14());
     return VAR2::FUN13(FUN15(
         VAR17, VAR29::move(VAR28),

        static_cast<VAR26>(VAR17.FUN6()) * VAR17.FUN12()));


   }
 
   VAR30<VAR31> VAR32 = VAR4->FUN16();
  
  
  if ((((!VAR6.VAR16 && !VAR32->FUN17()) ||
        !VAR32) &&
       VAR4->FUN18() && VAR7 == VAR8) ||
      VAR10 == VAR9::VAR33) {
    VAR29::VAR34<VAR9> FUN19(VAR9::FUN13(
        VAR4->FUN18(), true,
        VAR6.VAR16 ? VAR9::VAR35
                                       : VAR9::VAR36,
        VAR10));
    if (!VAR37)
      return nullptr;
    VAR32 = VAR38::FUN20(VAR29::move(VAR37));
    if (!VAR32)
      return nullptr;
  }

  if (VAR6.VAR15 == VAR13 && !VAR6.VAR39) {
    VAR30<VAR31> VAR40 = VAR32->FUN21(VAR13);
    if (VAR6.VAR41)
      return VAR2::FUN13(FUN22(
          VAR40.FUN23(), VAR6.VAR16
                                    ? VAR8
                                    : VAR42));
    
    
    if (VAR6.VAR16 && VAR7 == VAR42)
      return VAR2::FUN13(
          FUN24(VAR40.FUN23()));
    
    VAR40->FUN25();
    return VAR2::FUN13(VAR29::move(VAR40));
  }

  VAR30<VAR43> VAR44 = VAR43::FUN26(
      VAR6.VAR19, VAR6.VAR20);
  if (!VAR44)
    return nullptr;
  if (VAR13.FUN9())
    return VAR2::FUN13(VAR44->FUN27());

  SkScalar VAR45 = VAR29::FUN28(0, -VAR6.VAR15.FUN29());
  SkScalar VAR46 = VAR29::FUN28(0, -VAR6.VAR15.FUN30());
  if (VAR6.VAR15.FUN29() < 0)
    VAR45 = -VAR6.VAR15.FUN29();
  if (VAR6.VAR15.FUN30() < 0)
    VAR46 = -VAR6.VAR15.FUN30();
  if (VAR6.VAR41) {
    VAR44->FUN31()->FUN32(0, VAR44->FUN7());
    VAR44->FUN31()->FUN33(1, -1);
  }
  if (VAR6.VAR39) {
    SkRect VAR47 = VAR48::FUN34(
        VAR6.VAR15.FUN29(), VAR6.VAR15.FUN30(),
        VAR6.VAR15.FUN6(), VAR6.VAR15.FUN7());
    SkRect VAR49 = VAR48::FUN34(0, 0, VAR6.VAR19,
                                          VAR6.VAR20);
    SkPaint VAR50;
    VAR50.FUN35(VAR6.VAR51);
    VAR44->FUN31()->FUN36(VAR32, VAR47, VAR49,
                                        &VAR50);
  } else {
    VAR44->FUN31()->FUN37(VAR32, VAR45, VAR46);
  }
  VAR32 = VAR44->FUN27();

  if (VAR6.VAR16) {
    if (VAR7 == VAR42)
      return VAR2::FUN13(
          FUN24(VAR32.FUN23()));
    return VAR2::FUN13(VAR29::move(VAR32));
  }
  return VAR2::FUN13(FUN38(VAR32.FUN23()));
}