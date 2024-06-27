static VAR1 FUN1(const VAR2 *VAR3,
  const VAR4 *VAR5,VAR6 *VAR7,VAR6 *VAR8,
  MagickOffsetType VAR9,const MagickBooleanType VAR10,
  VAR11 *VAR12)
{
  VAR6
    *VAR13;

  VAR14
    VAR15;

  VAR1
    VAR16,
    VAR17,
    VAR18,
    VAR19;

  unsigned char
    *VAR20;

  VAR17=0;
  VAR19=0;
  VAR15=0;
   VAR20=(unsigned char *) NULL;
   if (VAR8->VAR21 == VAR22)
     {

      VAR20=FUN2(VAR7,VAR12);


       if (VAR20 == (unsigned char *) NULL)
         return(0);
     }
  VAR16=1;
  if (VAR10 == VAR23)
    {
      if (VAR8->VAR24 != VAR25)
        {
          if (FUN3(VAR8) == VAR23)
            VAR16=VAR8->VAR26 == VAR27 ? 4 : 3;
          if (VAR8->VAR28 != VAR29)
            VAR16++;
        }
      VAR15=FUN4(VAR7)+2;
      VAR17+=FUN5(VAR3,VAR7,VAR8,VAR16);
      VAR19=(VAR8->VAR30*(VAR3->VAR31 == 1 ? 2 : 4));
    }
  VAR9+=2;
  if (VAR8->VAR24 == VAR25)
    {
      VAR18=FUN6(VAR3,VAR5,VAR7,VAR8,
        VAR32,VAR20,VAR15,VAR10,VAR12);
      if (VAR10 != VAR23)
        VAR9+=FUN7(VAR3,VAR7,VAR18,VAR9)+2;
      else
        VAR15+=VAR19;
      VAR17+=VAR18;
    }
  else
    {
      if (FUN3(VAR8) != VAR23)
        {
          VAR18=FUN6(VAR3,VAR5,VAR7,VAR8,
            VAR33,VAR20,VAR15,VAR10,VAR12);
          if (VAR10 != VAR23)
            VAR9+=FUN7(VAR3,VAR7,VAR18,VAR9)+2;
          else
            VAR15+=VAR19;
          VAR17+=VAR18;
        }
      else
        {
          if (VAR8->VAR26 == VAR27)
            (void) FUN8(VAR8,VAR12);

          VAR18=FUN6(VAR3,VAR5,VAR7,VAR8,
            VAR34,VAR20,VAR15,VAR10,VAR12);
          if (VAR10 != VAR23)
            VAR9+=FUN7(VAR3,VAR7,VAR18,VAR9)+2;
          else
            VAR15+=VAR19;
          VAR17+=VAR18;

          VAR18=FUN6(VAR3,VAR5,VAR7,VAR8,
            VAR35,VAR20,VAR15,VAR10,VAR12);
          if (VAR10 != VAR23)
            VAR9+=FUN7(VAR3,VAR7,VAR18,VAR9)+2;
          else
            VAR15+=VAR19;
          VAR17+=VAR18;

          VAR18=FUN6(VAR3,VAR5,VAR7,VAR8,
            VAR36,VAR20,VAR15,VAR10,VAR12);
          if (VAR10 != VAR23)
            VAR9+=FUN7(VAR3,VAR7,VAR18,VAR9)+2;
          else
            VAR15+=VAR19;
          VAR17+=VAR18;

          if (VAR8->VAR26 == VAR27)
            {
              VAR18=FUN6(VAR3,VAR5,VAR7,VAR8,
                VAR37,VAR20,VAR15,VAR10,VAR12);
              if (VAR10 != VAR23)
                VAR9+=FUN7(VAR3,VAR7,VAR18,VAR9)+2;
              else
                VAR15+=VAR19;
              VAR17+=VAR18;
            }
        }
      if (VAR8->VAR28 != VAR29)
        {
          VAR18=FUN6(VAR3,VAR5,VAR7,VAR8,
            VAR38,VAR20,VAR15,VAR10,VAR12);
          if (VAR10 != VAR23)
            VAR9+=FUN7(VAR3,VAR7,VAR18,VAR9)+2;
          else
            VAR15+=VAR19;
          VAR17+=VAR18;
        }
    }
  VAR20=(unsigned char *) FUN9(VAR20);
  if (VAR8->VAR26 == VAR27)
    (void) FUN8(VAR8,VAR12);
  if (VAR10 != VAR23)
    {
      const char
        *VAR39;

      VAR39=FUN10(VAR8,"");
      if (VAR39 != (const char *) NULL)
        {
          VAR13=(VAR6 *) FUN11(VAR40,VAR39,
            VAR12);
          if (VAR13 != (VAR6 *) NULL)
            {
              if (VAR13->VAR21 == VAR22)
                {
                  VAR20=FUN2(VAR13,VAR12);
                  if (VAR20 == (unsigned char *) NULL)
                    return(0);
                }
              VAR18=FUN6(VAR3,VAR5,VAR7,VAR13,
                VAR34,VAR20,VAR15,VAR41,VAR12);
              (void) FUN7(VAR3,VAR7,VAR18,VAR9);
              VAR17+=VAR18;
              VAR20=(unsigned char *) FUN9(
                VAR20);
            }
        }
    }
  return(VAR17);
}