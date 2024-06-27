static int FUN1(VAR1 *VAR2)
{
  VAR3
    *magick_restrict VAR4;

  int
    VAR5;

  assert(VAR2 != (VAR1 *) NULL);
  assert(VAR2->VAR6 == VAR7);
  if (VAR2->VAR8 != VAR9)
    (void) FUN2(VAR10,FUN3(),"",VAR2->VAR11);
  assert(VAR2->VAR12 != (VAR3 *) NULL);
  assert(VAR2->VAR12->VAR13 != VAR14);
  VAR4=VAR2->VAR12;
  VAR5=0;
  switch (VAR4->VAR13)
  {
    case VAR14:
    case VAR15:
      break;
    case VAR16:
    case VAR17:
    {
      VAR5=FUN4(VAR4->VAR18.VAR19);
      break;
    }
    case VAR20:
    {
#if FUN5(VAR21)
      VAR5=FUN6(VAR4->VAR18.VAR22,VAR23);
#endif
      break;
    }
    case VAR24:
    {
#if FUN5(VAR25)
      VAR5=FUN7(VAR4->VAR18.VAR26);
#endif
      break;
    }
    case VAR27:
      break;
    case VAR28:
      break;
    case VAR29:
      break;
  }
  return(VAR5);
}