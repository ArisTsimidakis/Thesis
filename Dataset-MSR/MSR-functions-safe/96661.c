MagickExport VAR1 FUN1(const VAR2 *VAR3)
{
  VAR4
    *magick_restrict VAR5;

  VAR1
    VAR6;

  assert(VAR3 != (VAR2 *) NULL);
  assert(VAR3->VAR7 == VAR8);
  if (VAR3->VAR9 != VAR10)
    (void) FUN2(VAR11,FUN3(),"",VAR3->VAR12);
  assert(VAR3->VAR13 != (VAR4 *) NULL);
  assert(VAR3->VAR13->VAR14 != VAR15);
  VAR5=VAR3->VAR13;
  VAR6=(-1);
  switch (VAR5->VAR14)
  {
    case VAR15:
    case VAR16:
      break;
    case VAR17:
    {
      VAR6=FUN4(VAR5->VAR18.VAR19);
      break;
    }
    case VAR20:
      break;
    case VAR21:
    {
#if FUN5(VAR22)
      VAR6=(VAR1) FUN6(VAR5->VAR18.VAR23);
#endif
      break;
    }
    case VAR24:
      break;
    case VAR25:
      break;
    case VAR26:
    {
      VAR6=VAR5->VAR6;
      break;
    }
    case VAR27:
    {
      if (VAR5->VAR28->VAR29 != (VAR30) NULL)
        VAR6=VAR5->VAR28->FUN7(VAR5->VAR28->VAR31);
      break;
    }
  }
  return(VAR6);
}