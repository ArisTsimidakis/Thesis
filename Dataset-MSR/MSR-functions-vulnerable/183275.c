static VAR1 FUN1(const VAR2 *VAR3,
  const VAR4 *VAR5,VAR6 *VAR7,VAR6 *VAR8,
  MagickOffsetType VAR9,const MagickBooleanType VAR10)
{
  VAR6
    *VAR11;

  VAR12
    VAR13;

  VAR14
    VAR15,
    VAR16,
    VAR17,
    VAR18;

  unsigned char
    *VAR19;

  VAR16=0;
  VAR18=0;
  VAR13=0;
   VAR19=(unsigned char *) NULL;
   if (VAR8->VAR20 == VAR21)
     {

      VAR19=FUN2(VAR7);


       if (VAR19 == (unsigned char *) NULL)
         return(0);
     }
  VAR15=1;
  if (VAR10 == VAR22)
    {
      if (VAR8->VAR23 != VAR24)
        {
          if (FUN3(VAR8,&VAR8->VAR25) == VAR22)
            VAR15=VAR8->VAR26 == VAR27 ? 4 : 3;
          if (VAR8->VAR28 != VAR22)
            VAR15++;
        }
      VAR13=FUN4(VAR7)+2;
      VAR16+=FUN5(VAR3,VAR7,VAR8,VAR15);
      VAR18=(VAR8->VAR29*(VAR3->VAR30 == 1 ? 2 : 4));
    }
  VAR9+=2;
  if (VAR8->VAR23 == VAR24)
    {
      VAR17=FUN6(VAR3,VAR5,VAR7,VAR8,
        VAR31,VAR19,VAR13,VAR10);
      if (VAR10 != VAR22)
        VAR9+=FUN7(VAR3,VAR7,VAR17,VAR9)+2;
      else
        VAR13+=VAR18;
      VAR16+=VAR17;
    }
  else
    {
      if (FUN3(VAR8,&VAR8->VAR25) != VAR22)
        {
          VAR17=FUN6(VAR3,VAR5,VAR7,VAR8,
            VAR32,VAR19,VAR13,VAR10);
          if (VAR10 != VAR22)
            VAR9+=FUN7(VAR3,VAR7,VAR17,VAR9)+2;
          else
            VAR13+=VAR18;
          VAR16+=VAR17;
        }
      else
        {
          if (VAR8->VAR26 == VAR27)
            (void) FUN8(VAR8,VAR22);

          VAR17=FUN6(VAR3,VAR5,VAR7,VAR8,
            VAR33,VAR19,VAR13,VAR10);
          if (VAR10 != VAR22)
            VAR9+=FUN7(VAR3,VAR7,VAR17,VAR9)+2;
          else
            VAR13+=VAR18;
          VAR16+=VAR17;

          VAR17=FUN6(VAR3,VAR5,VAR7,VAR8,
            VAR34,VAR19,VAR13,VAR10);
          if (VAR10 != VAR22)
            VAR9+=FUN7(VAR3,VAR7,VAR17,VAR9)+2;
          else
            VAR13+=VAR18;
          VAR16+=VAR17;

          VAR17=FUN6(VAR3,VAR5,VAR7,VAR8,
            VAR35,VAR19,VAR13,VAR10);
          if (VAR10 != VAR22)
            VAR9+=FUN7(VAR3,VAR7,VAR17,VAR9)+2;
          else
            VAR13+=VAR18;
          VAR16+=VAR17;

          if (VAR8->VAR26 == VAR27)
            {
              VAR17=FUN6(VAR3,VAR5,VAR7,VAR8,
                VAR36,VAR19,VAR13,VAR10);
              if (VAR10 != VAR22)
                VAR9+=FUN7(VAR3,VAR7,VAR17,VAR9)+2;
              else
                VAR13+=VAR18;
              VAR16+=VAR17;
            }
        }
      if (VAR8->VAR28 != VAR22)
        {
          VAR17=FUN6(VAR3,VAR5,VAR7,VAR8,
            VAR37,VAR19,VAR13,VAR10);
          if (VAR10 != VAR22)
            VAR9+=FUN7(VAR3,VAR7,VAR17,VAR9)+2;
          else
            VAR13+=VAR18;
          VAR16+=VAR17;
        }
    }
  VAR19=(unsigned char *) FUN9(VAR19);
  if (VAR8->VAR26 == VAR27)
    (void) FUN8(VAR8,VAR22);
  if (VAR10 != VAR22)
    {
      const char
        *VAR38;

      VAR38=FUN10(VAR8,"");
      if (VAR38 != (const char *) NULL)
        {
          VAR11=(VAR6 *) FUN11(VAR39,VAR38,
            &VAR7->VAR25);
          if (VAR11 != (VAR6 *) NULL)
            {
              if (VAR11->VAR20 == VAR21)
                {
                  VAR19=FUN2(VAR11);
                  if (VAR19 == (unsigned char *) NULL)
                    return(0);
                }
              VAR17=FUN6(VAR3,VAR5,VAR7,VAR11,
                VAR33,VAR19,VAR13,VAR40);
              (void) FUN7(VAR3,VAR7,VAR17,VAR9);
              VAR16+=VAR17;
              VAR19=(unsigned char *) FUN9(
                VAR19);
            }
        }
    }
  return(VAR16);
}