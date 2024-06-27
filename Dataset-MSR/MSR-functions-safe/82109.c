FUN1(VAR1 *VAR2, mrb_value VAR3)
{
  mrb_sym VAR4;
  mrb_value VAR5;

  FUN2(VAR2, "", &VAR4, &VAR5);
  FUN3(VAR2, VAR4);
  FUN4(VAR2, VAR3, VAR4, VAR5);
  return VAR5;
}