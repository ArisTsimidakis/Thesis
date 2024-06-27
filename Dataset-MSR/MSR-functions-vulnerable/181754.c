static VAR1 *FUN1(const VAR2 *VAR3,
  VAR4 *VAR5)
{
  VAR1
    *VAR6;

  VAR7
    VAR8;

  register VAR9
    *VAR10;

  register VAR11
    *VAR12;

  register VAR13
    VAR14;

  VAR15
    VAR16,
    VAR17;

  VAR13
    VAR18;

  
  assert(VAR3 != (const VAR2 *) NULL);
  assert(VAR3->VAR19 == VAR20);
  if (VAR3->VAR21 != VAR22)
    (void) FUN2(VAR23,FUN3(),"",
      VAR3->VAR24);
  assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR19 == VAR20);
  VAR6=FUN4(VAR3);
  if ((VAR6->VAR25 == 0) || (VAR6->VAR26 == 0))
    FUN5(VAR27,"");
  VAR8=FUN6(VAR3,VAR6,VAR28,VAR5);
  if (VAR8 == VAR22)
    {
      VAR6=FUN7(VAR6);
      return((VAR1 *) NULL);
    }
  if (FUN8(VAR6,VAR6->VAR29) == VAR22)
    FUN9(VAR5,VAR30,"",
      VAR6->VAR24);
  
  VAR6->VAR31=1;
  if (FUN10(VAR6,2) == VAR22)
    FUN5(VAR32,"");
  if (VAR3->VAR33 != VAR22)
    {
       (void) FUN11(VAR6);
       return(FUN12(VAR6));
     }












   
  for (VAR18=0; VAR18 < (VAR13) VAR6->VAR26; VAR18++)
  {
    VAR12=FUN13(VAR6,0,VAR18,VAR6->VAR25,1,VAR5);
    if (VAR12 == (VAR11 *) NULL)
      break;
    VAR10=FUN14(VAR6);
    VAR16=0;
    VAR17=0;
    for (VAR14=0; VAR14 < (VAR13) VAR6->VAR25; VAR14++)
    {
      if (VAR16 == 0)
        VAR17=(VAR15) FUN15(VAR6);
      if (VAR3->VAR34 == VAR35)
        FUN16(VAR10+VAR14,((VAR17 & 0x01) != 0) ? 0x00 : 0x01)
      else
        FUN16(VAR10+VAR14,((VAR17 & 0x01) != 0) ? 0x01 : 0x00)
      VAR16++;
      if (VAR16 == 8)
        VAR16=0;
      VAR17>>=1;
    }
    if (FUN17(VAR6,VAR5) == VAR22)
      break;
    VAR8=FUN18(VAR6,VAR36,(VAR37) VAR18,
      VAR6->VAR26);
    if (VAR8 == VAR22)
      break;
  }
  (void) FUN19(VAR6);
  if (FUN20(VAR6) != VAR22)
    FUN9(VAR5,VAR30,"",
      VAR6->VAR24);
  (void) FUN11(VAR6);
  return(FUN12(VAR6));
}