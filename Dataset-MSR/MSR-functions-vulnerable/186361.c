FUN1(VAR1::VAR2::CompositorFrameMetadataDataView VAR3,
         VAR1::VAR4* VAR5) {
  VAR5->VAR6 = VAR3.FUN2();
  if (!VAR3.FUN3(&VAR5->VAR7))
    return false;

  VAR5->VAR8 = VAR3.FUN4();
  if (!VAR3.FUN5(&VAR5->VAR9) ||
      !VAR3.FUN6(&VAR5->VAR10)) {
    return false;
  }

  VAR5->VAR11 = VAR3.FUN7();
  VAR5->VAR12 = VAR3.FUN8();
  VAR5->VAR13 = VAR3.FUN9();
  VAR5->VAR14 = VAR3.FUN10();
  VAR5->VAR15 = VAR3.FUN11();
  VAR5->VAR16 =
      VAR3.FUN12();
  VAR5->VAR17 = VAR3.FUN13();
   VAR5->VAR18 = VAR3.FUN14();
   VAR5->VAR19 = VAR3.FUN15();
   VAR5->VAR20 = VAR3.FUN16();


 
   VAR5->VAR21 = VAR3.FUN17();
   VAR5->VAR22 =
      VAR3.FUN18();
  return VAR3.FUN19(&VAR5->VAR23) &&
         VAR3.FUN20(&VAR5->VAR24) &&
         VAR3.FUN21(&VAR5->VAR25);
}