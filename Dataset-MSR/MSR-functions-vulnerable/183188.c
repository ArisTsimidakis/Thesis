static VAR1 FUN1(VAR2 *VAR3,
  const VAR4 *VAR5,const VAR6 *VAR7,VAR8* VAR9,
  const size_t VAR10,const PSDCompressionType VAR11,
  VAR12 *VAR13)
{
  VAR2
    *VAR14,
    *VAR15;

  VAR16
    VAR17;

  VAR1
    VAR18;

  VAR14=VAR3;
  VAR15=(VAR2 *) NULL;
  if ((VAR9->VAR19[VAR10].VAR20 < -1) &&
      (VAR9->VAR15.VAR21.VAR22 > 0) && (VAR9->VAR15.VAR21.VAR23 > 0))
    {
      const char
        *VAR24;

      
      VAR24=FUN2(VAR5,"");
       if ((VAR9->VAR19[VAR10].VAR20 != -2) ||
           (VAR9->VAR15.VAR25 > 2) || ((VAR9->VAR15.VAR25 & 0x02) &&
            (FUN3(VAR24) == VAR26)))

      {

        FUN4(VAR3,VAR9->VAR19[VAR10].VAR27-2,VAR28);

        return(VAR29);

      }








       VAR15=FUN5(VAR3,VAR9->VAR15.VAR21.VAR22,
         VAR9->VAR15.VAR21.VAR23,VAR26,VAR13);
       if (VAR15 != (VAR2 *) NULL)
        {
          FUN6(VAR15,VAR30,VAR13);
          VAR14=VAR15;
        }
    }

  VAR17=FUN7(VAR3);
  VAR18=VAR26;
  switch(VAR11)
  {
    case VAR31:
      VAR18=FUN8(VAR14,VAR7->VAR32,
        VAR9->VAR19[VAR10].VAR20,VAR13);
      break;
    case VAR33:
      {
        VAR16
          *VAR34;

        VAR34=FUN9(VAR14,VAR7,VAR14->VAR35);
        if (VAR34 == (VAR16 *) NULL)
          FUN10(VAR36,"",
            VAR3->VAR37);
        VAR18=FUN11(VAR14,VAR7,
          VAR9->VAR19[VAR10].VAR20,VAR34,VAR13);
        VAR34=(VAR16 *) FUN12(VAR34);
      }
      break;
    case VAR38:
    case VAR39:
#ifdef VAR40
      VAR18=FUN13(VAR14,VAR9->VAR32,
        VAR9->VAR19[VAR10].VAR20,VAR11,
        VAR9->VAR19[VAR10].VAR27-2,VAR13);
#else
      (void) FUN14(VAR13,FUN15(),
          VAR41,"",
            "",VAR3->VAR37);
#endif
      break;
    default:
      (void) FUN14(VAR13,FUN15(),VAR42,
        "","",(double) VAR11);
      break;
  }

  FUN4(VAR3,VAR17+VAR9->VAR19[VAR10].VAR27-2,VAR43);
  if (VAR18 == VAR26)
    {
      if (VAR15 != (VAR2 *) NULL)
        FUN16(VAR15);
      FUN10(VAR44,"",
        VAR3->VAR37);
    }
  VAR9->VAR15.VAR3=VAR15;
  return(VAR18);
}