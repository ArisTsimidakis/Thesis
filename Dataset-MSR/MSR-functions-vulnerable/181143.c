static VAR1 FUN1(const VAR2 *VAR3,
  VAR4 *VAR5)
{
  char
    *VAR6,
    VAR7[VAR8];

  const VAR9
    *VAR10;

  VAR11
    *VAR12;

  VAR4
    *VAR13;

  VAR2
    *VAR14;

  VAR1
    VAR15;

  VAR16
    VAR17,
    VAR18;

  unsigned char
    *VAR19;

  
  assert(VAR3 != (const VAR2 *) NULL);
  assert(VAR3->VAR20 == VAR21);
  assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR20 == VAR21);
  if (VAR5->VAR22 != VAR23)
    (void) FUN2(VAR24,FUN3(),"",VAR5->VAR25);
  VAR12=(&VAR5->VAR12);
  VAR14=FUN4(VAR3);
  (void) FUN5(VAR14,1,VAR12);
  if (FUN6(VAR14->VAR26,"") == 0)
    (void) FUN7(VAR14->VAR26,VAR5->VAR26,VAR8);
   VAR10=FUN8(VAR14->VAR26,VAR12);
   if ((VAR10 == (const VAR9 *) NULL) ||
       (FUN9(VAR10) == (const char *) NULL))

    FUN10(VAR27,"");








   (void) FUN7(VAR5->VAR25,VAR14->VAR25,VAR8);
   VAR17=2048;
   VAR13=FUN11(VAR5,0,0,VAR28,VAR12);
  if (VAR13 == (VAR4 *) NULL)
    {
      VAR14=FUN12(VAR14);
      return(VAR28);
    }
  VAR19=(unsigned char *) FUN13(VAR14,VAR13,&VAR17,
    VAR12);
  VAR13=FUN14(VAR13);
  VAR14=FUN12(VAR14);
  if (VAR19 == (unsigned char *) NULL)
    return(VAR23);
  VAR18=0;
  VAR6=FUN15(VAR19,VAR17,&VAR18);
  VAR19=(unsigned char *) FUN16(VAR19);
  if (VAR6 == (char *) NULL)
    FUN10(VAR29,"");
  
  VAR15=FUN17(VAR3,VAR5,VAR30,VAR12);
  if (VAR15 == VAR23)
    {
      VAR6=FUN18(VAR6);
      return(VAR15);
    }
  (void) FUN19(VAR7,VAR8,"",
    FUN9(VAR10));
  (void) FUN20(VAR5,VAR7);
  (void) FUN20(VAR5,VAR6);
  VAR6=FUN18(VAR6);
  return(VAR28);
}