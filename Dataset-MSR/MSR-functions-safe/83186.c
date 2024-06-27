FUN1(VAR1 *VAR2, struct VAR3 *VAR4, mrb_value VAR5)
{
  if (VAR2->VAR6->VAR7->argc < 0) {
    return FUN2(VAR2, VAR4, VAR5, 3); 
  }
  else {
    return FUN2(VAR2, VAR4, VAR5, VAR2->VAR6->VAR7->argc + 2); 
  }
}