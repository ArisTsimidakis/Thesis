static VAR1 *FUN1(const VAR2 *VAR3,VAR4 *VAR5)
{
  VAR1
    *VAR6,
    *VAR7;

  VAR8
    VAR9;

  VAR10
    VAR11;

  VAR12
    *VAR13;

  VAR14
    VAR15;

  VAR16
    VAR17;

  VAR18
    VAR19,
    VAR20;

  unsigned char
    *VAR21;

  
  assert(VAR3 != (const VAR2 *) NULL);
  assert(VAR3->VAR22 == VAR23);
  if (VAR3->VAR24 != VAR25)
    (void) FUN2(VAR26,FUN3(),"",
      VAR3->VAR27);
  assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR22 == VAR23);
  VAR7=FUN4(VAR3);
  if ((VAR7->VAR28 == 0) || (VAR7->VAR29 == 0))
    FUN5(VAR30,"");
  VAR9=FUN6(VAR3,VAR7,VAR31,VAR5);
  if (VAR9 == VAR25)
    {
      VAR7=FUN7(VAR7);
      return((VAR1 *) NULL);
    }
  if (FUN8(VAR7,VAR7->VAR32) == VAR25)
    FUN9(VAR5,VAR33,"",
      VAR7->VAR27);
  
  VAR6=FUN10(VAR7,VAR7->VAR34.VAR35,1,VAR25,
    VAR5);
  (void) FUN11(VAR6,VAR36);
  VAR15=VAR37;
  VAR13=FUN12(VAR3,VAR6);
  if (VAR13 == (VAR12 *) NULL)
    FUN5(VAR38,"");
  VAR21=FUN13(VAR13);
  if (VAR3->VAR39 != 0)
    while (VAR7->VAR11 < VAR3->VAR11)
    {
      
      VAR7->VAR11++;
      VAR17=FUN14(VAR6,VAR13,VAR15);
      for (VAR20=0; VAR20 < (VAR18) VAR7->VAR29; VAR20++)
      {
        VAR19=FUN15(VAR7,VAR17,VAR21);
        if (VAR19 != (VAR18) VAR17)
          break;
      }
    }
  VAR11=0;
  VAR19=0;
  VAR17=0;
  do
  {
    
     if ((VAR3->VAR40 != VAR25) && (VAR3->VAR39 != 0))
       if (VAR7->VAR11 >= (VAR3->VAR11+VAR3->VAR39-1))
         break;












     if (VAR11 == 0)
       {
         VAR17=FUN14(VAR6,VAR13,VAR15);
        VAR19=FUN15(VAR7,VAR17,VAR21);
      }
    for (VAR20=0; VAR20 < (VAR18) VAR7->VAR34.VAR41; VAR20++)
    {
      register const VAR42
        *restrict VAR43;

      register VAR42
        *restrict VAR44;

      register VAR18
        VAR45;

      if (VAR19 != (VAR18) VAR17)
        {
          FUN9(VAR5,VAR33,"",
            VAR7->VAR27);
          break;
        }
      VAR44=FUN16(VAR6,0,0,VAR6->VAR28,1,VAR5);
      if (VAR44 == (VAR42 *) NULL)
        break;
      VAR17=FUN17(VAR6,(VAR46 *) NULL,VAR13,
        VAR15,VAR21,VAR5);
      if (FUN18(VAR6,VAR5) == VAR25)
        break;
      if (((VAR20-VAR7->VAR34.VAR20) >= 0) &&
          ((VAR20-VAR7->VAR34.VAR20) < (VAR18) VAR7->VAR29))
        {
          VAR43=FUN19(VAR6,VAR6->VAR34.VAR45,0,
            VAR7->VAR28,1,VAR5);
          VAR44=FUN20(VAR7,0,VAR20-VAR7->VAR34.VAR20,VAR7->VAR28,
            1,VAR5);
          if ((VAR43 == (const VAR42 *) NULL) || (VAR44 == (VAR42 *) NULL))
            break;
          for (VAR45=0; VAR45 < (VAR18) VAR7->VAR28; VAR45++)
          {
            FUN21(VAR44,FUN22(VAR43));
            FUN23(VAR44,FUN24(VAR43));
            FUN25(VAR44,FUN26(VAR43));
            VAR43++;
            VAR44++;
          }
          if (FUN18(VAR7,VAR5) == VAR25)
            break;
        }
      if (VAR7->VAR47 == (VAR1 *) NULL)
        {
          VAR9=FUN27(VAR7,VAR48,(VAR10) VAR20,
            VAR7->VAR29);
          if (VAR9 == VAR25)
            break;
        }
      VAR19=FUN15(VAR7,VAR17,VAR21);
    }
    FUN28(VAR7,VAR15);
    
    if (VAR3->VAR39 != 0)
      if (VAR7->VAR11 >= (VAR3->VAR11+VAR3->VAR39-1))
        break;
    if (VAR19 == (VAR18) VAR17)
      {
        
        FUN29(VAR3,VAR7);
        if (FUN30(VAR7) == (VAR1 *) NULL)
          {
            VAR7=FUN7(VAR7);
            return((VAR1 *) NULL);
          }
        VAR7=FUN31(VAR7);
        VAR9=FUN27(VAR7,VAR49,FUN32(VAR7),
          FUN33(VAR7));
        if (VAR9 == VAR25)
          break;
      }
    VAR11++;
  } while (VAR19 == (VAR18) VAR17);
  VAR13=FUN34(VAR13);
  FUN35(&VAR7->VAR5,&VAR6->VAR5);
  VAR6=FUN36(VAR6);
  (void) FUN37(VAR7);
  return(FUN38(VAR7));
}