VAR1::VAR2<VAR3::VAR4> FUN1(
    int VAR5,
    const VAR3::VAR4* VAR6,
    VAR7* VAR8) {
  
  
  if (const VAR3::VAR9* VAR10 = VAR6->FUN2(""))
    VAR8->VAR11 = VAR10->FUN3();

  if (const VAR3::VAR9* VAR12 =
          VAR6->FUN2("")) {
    VAR8->VAR13 = VAR12->FUN3();
  }

  if (const VAR3::VAR9* VAR14 =
          VAR6->FUN2("")) {
    VAR8->VAR15 =
        VAR14->FUN3();
  }
  if (const VAR3::VAR9* VAR16 = VAR6->FUN2(""))
    VAR8->VAR17 = VAR16->FUN4();
  if (VAR8->VAR17 > VAR18 / 100 ||
      VAR8->VAR17 < VAR19 / 100)
    return FUN5(VAR5, "");
  if (const VAR3::VAR9* VAR20 = VAR6->FUN2(""))
    VAR8->VAR21 = VAR20->FUN6();

  if (const VAR3::VAR9* VAR22 =
          VAR6->FUN2("")) {
    VAR8->VAR23 =
        VAR22->FUN3();
  }

  double VAR24 = VAR25::VAR26;

  if (const VAR3::VAR9* VAR27 = VAR6->FUN2(""))
    VAR24 = VAR27->FUN4();

  double VAR28 = VAR25::VAR29;

  if (const VAR3::VAR9* VAR30 = VAR6->FUN2(""))
    VAR28 = VAR30->FUN4();
  if (VAR24 <= 0)
    return FUN5(VAR5, "");
  if (VAR28 <= 0)
    return FUN5(VAR5, "");
  VAR8->VAR31 =
      VAR32::FUN7(VAR24 * VAR25::VAR33,
                VAR28 * VAR25::VAR33);

  
  double VAR34 = 1000.0 / VAR25::VAR35;
  double VAR36 = VAR34;
  double VAR37 = VAR34;
  double VAR38 = VAR34;
  double VAR39 = VAR34;

  if (const VAR3::VAR9* VAR40 = VAR6->FUN2(""))
    VAR36 = VAR40->FUN4();

  if (const VAR3::VAR9* VAR41 = VAR6->FUN2(""))
    VAR37 = VAR41->FUN4();

  if (const VAR3::VAR9* VAR42 = VAR6->FUN2(""))
    VAR38 = VAR42->FUN4();

   if (const VAR3::VAR9* VAR43 = VAR6->FUN2(""))
     VAR39 = VAR43->FUN4();
 


















   if (VAR36 < 0)
     return FUN5(VAR5, "");
   if (VAR37 < 0)
    return FUN5(VAR5, "");
  if (VAR38 < 0)
    return FUN5(VAR5, "");
  if (VAR39 < 0)
    return FUN5(VAR5, "");
  VAR8->VAR44.VAR45 =
      VAR36 * VAR25::VAR33;
  VAR8->VAR44.VAR46 =
      VAR37 * VAR25::VAR33;
  VAR8->VAR44.VAR47 =
      VAR38 * VAR25::VAR33;
  VAR8->VAR44.VAR48 =
      VAR39 * VAR25::VAR33;

  return nullptr;
}