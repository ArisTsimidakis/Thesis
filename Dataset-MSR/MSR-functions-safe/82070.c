FUN1(VAR1 *VAR2, struct VAR3 *VAR4, struct VAR3 *VAR5)
{
  mrb_value VAR6;
  mrb_sym VAR7;

  if (!VAR4)
    VAR4 = VAR2->VAR8;
  VAR4->VAR9 |= VAR10;
  VAR6 = FUN2(VAR4);
  FUN3(VAR2, VAR5);
  VAR7 = FUN4(VAR2, "");
  if (!FUN5(VAR2, VAR6, VAR7, VAR11)) {
    mrb_value VAR12 = FUN2(VAR5);
    FUN6(VAR2, VAR6, VAR7, 1, &VAR12);
  }
}