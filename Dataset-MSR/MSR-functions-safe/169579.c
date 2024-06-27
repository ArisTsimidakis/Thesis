void FUN1(const VAR1& VAR2,
                              VAR3* VAR4) {
  VAR4->VAR5 = VAR2.VAR5;
  VAR4->VAR6 = VAR2.VAR7;
  VAR4->VAR8.FUN2(new int(VAR2.VAR9));
  VAR4->VAR10.FUN2(new int(VAR2.VAR11));
  VAR4->VAR12 = VAR2.VAR12;
  VAR4->VAR13 = VAR2.VAR13;
  VAR4->VAR14 = VAR2.VAR14;
  if (VAR2.VAR15)
    VAR4->VAR15.FUN2(new int(VAR2.VAR15));
  if (VAR2.VAR16)
    VAR4->VAR16.FUN2(new int(VAR2.VAR16));
  if (VAR2.VAR17)
    VAR4->VAR17.FUN2(new int(VAR2.VAR17));
  if (VAR2.VAR18)
    VAR4->VAR18.FUN2(new int(VAR2.VAR18));
  if (VAR2.VAR19 > 0.0)
    VAR4->VAR19.FUN2(new double(VAR2.VAR19));
  for (size_t VAR20 = 0; VAR20 < VAR2.VAR21.FUN3(); ++VAR20) {
    CodecSpecificParams VAR22;
    FUN4(VAR2.VAR21[VAR20],
                                &VAR22);
    VAR4->VAR21.FUN5(VAR23::move(VAR22));
  }
}