static VAR1 *FUN1(const VAR2 *VAR3,VAR4 *VAR5)
{
  VAR1
    *VAR6;

  VAR7
    VAR8;

  register VAR9
    *VAR10;

  register VAR11
    VAR12;

  register unsigned char
    *VAR13;

  VAR14
    VAR15,
    VAR16;

  VAR11
    VAR17,
    VAR18;

  unsigned char
    *VAR19;

  
  assert(VAR3 != (const VAR2 *) NULL);
  assert(VAR3->VAR20 == VAR21);
  if (VAR3->VAR22 != VAR23)
    (void) FUN2(VAR24,FUN3(),"",
      VAR3->VAR25);
  assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR20 == VAR21);
  VAR6=FUN4(VAR3);
  VAR8=FUN5(VAR3,VAR6,VAR26,VAR5);
  if (VAR8 == VAR23)
    {
      VAR6=FUN6(VAR6);
      return((VAR1 *) NULL);
    }
  
  VAR16=FUN7(VAR6);
  VAR15=FUN7(VAR6);
  if (FUN8(VAR6) != VAR23)
    FUN9(VAR27,"");
  if ((VAR16 == 0UL) || (VAR15 == 0UL))
    FUN9(VAR27,"");
  do
  {
    VAR11
      VAR28;

    
    VAR6->VAR29=VAR16;
    VAR6->VAR30=VAR15;
    VAR6->VAR31=8;
     if ((VAR3->VAR32 != VAR23) && (VAR3->VAR33 != 0))
       if (VAR6->VAR34 >= (VAR3->VAR34+VAR3->VAR33-1))
         break;












     VAR19=(unsigned char *) FUN10(VAR6->VAR29,
       4*sizeof(*VAR19));
     if (VAR19 == (unsigned char *) NULL)
      FUN9(VAR35,"");
    VAR28=(VAR14) 4*VAR6->VAR29;
    for (VAR18=0; VAR18 < (VAR11) VAR6->VAR30; VAR18++)
    {
      VAR17=FUN11(VAR6,VAR28,VAR19);
      if (VAR17 != VAR28)
        FUN9(VAR27,"");
      VAR13=VAR19;
      VAR10=FUN12(VAR6,0,VAR18,VAR6->VAR29,1,VAR5);
      if (VAR10 == (VAR9 *) NULL)
        break;
      for (VAR12=0; VAR12 < (VAR11) VAR6->VAR29; VAR12++)
      {
        FUN13(VAR10,FUN14(*VAR13++));
        FUN15(VAR10,FUN14(*VAR13++));
        FUN16(VAR10,FUN14(*VAR13++));
        FUN17(VAR10,FUN14(*VAR13++));
        if (VAR10->VAR36 != VAR37)
          VAR6->VAR38=VAR39;
        VAR10++;
      }
      if (FUN18(VAR6,VAR5) == VAR23)
        break;
      if (VAR6->VAR40 == (VAR1 *) NULL)
        {
          VAR8=FUN19(VAR6,VAR41,(VAR42) VAR18,
            VAR6->VAR30);
          if (VAR8 == VAR23)
            break;
        }
    }
    VAR19=(unsigned char *) FUN20(VAR19);
    if (FUN8(VAR6) != VAR23)
      {
        FUN21(VAR5,VAR27,"",
          VAR6->VAR25);
        break;
      }
    
    if (VAR3->VAR33 != 0)
      if (VAR6->VAR34 >= (VAR3->VAR34+VAR3->VAR33-1))
        break;
    VAR16=FUN7(VAR6);
    VAR15=FUN7(VAR6);
    if ((VAR16 != 0UL) && (VAR15 != 0UL))
      {
        
        FUN22(VAR3,VAR6);
        if (FUN23(VAR6) == (VAR1 *) NULL)
          {
            VAR6=FUN6(VAR6);
            return((VAR1 *) NULL);
          }
        VAR6=FUN24(VAR6);
        VAR8=FUN19(VAR6,VAR43,FUN25(VAR6),
          FUN26(VAR6));
        if (VAR8 == VAR23)
          break;
      }
  } while ((VAR16 != 0UL) && (VAR15 != 0UL));
  (void) FUN27(VAR6);
  return(FUN28(VAR6));
}