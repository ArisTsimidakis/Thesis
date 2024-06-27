static VAR1 *FUN1(const VAR2 *VAR3,VAR4 *VAR5)
{
  VAR1
    *VAR6;

  VAR7
    VAR8,
    VAR9 = VAR10,
    VAR11 = VAR10,
    VAR12;

  VAR13
    VAR14;

  VAR15
    VAR16;

  VAR17
    *VAR18;

  VAR19
    VAR20,
    VAR21;

  
  assert(VAR3 != (const VAR2 *) NULL);
  assert(VAR3->VAR22 == VAR23);
  if (VAR3->VAR24 != VAR10)
    (void) FUN2(VAR25,FUN3(),"",
      VAR3->VAR26);
  assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR22 == VAR23);
  VAR6=FUN4(VAR3);
  VAR8=FUN5(VAR3,VAR6,VAR27,VAR5);
  if (VAR8 == VAR10)
    {
      VAR6=FUN6(VAR6);
      return((VAR1 *) NULL);
    }

  
  if (FUN7(VAR6, &VAR16) != VAR28) {
    FUN8(VAR29,"");
  }

  if (VAR16.VAR30 & VAR31)
    VAR9 = VAR28;

  if (VAR16.VAR30 & VAR32 && VAR16.VAR33 > 0)
    VAR11 = VAR28;

  (void) FUN9(VAR6, 128, VAR34);

  
  if (VAR16.VAR35.VAR36 & VAR37)
    {
      VAR14 = VAR38;
      if (VAR16.VAR35.VAR36 & VAR39)
        {
          VAR12 = VAR28;
          VAR18 = VAR40;
        }
      else
        {
          VAR12 = VAR28;
          VAR18 = VAR41;
        }
    }
  else if (VAR16.VAR35.VAR36 & VAR42)
   {
      VAR14 = VAR38;
      if (VAR16.VAR35.VAR36 & VAR39)
        {
          
          FUN8(VAR29, "");
        }
      else
        {
          VAR12 = VAR10;
          VAR18 = VAR41;
        }
    }
  else if (VAR16.VAR35.VAR36 & VAR43)
    {
      switch (VAR16.VAR35.VAR44)
      {
        case VAR45:
        {
          VAR12 = VAR10;
          VAR14 = VAR46;
          VAR18 = VAR47;
          break;
        }
        case VAR48:
        {
          VAR12 = VAR28;
          VAR14 = VAR49;
          VAR18 = VAR50;
          break;
        }
        case VAR51:
        {
          VAR12 = VAR28;
          VAR14 = VAR52;
          VAR18 = VAR53;
          break;
        }
        default:
        {
          
          FUN8(VAR29, "");
        }
      }
    }
  else
    {
      
      FUN8(VAR29, "");
    }

  VAR21 = 1;
  if (VAR9)
    {
      
      VAR21 = 0;
      if (VAR16.VAR30 & VAR54) VAR21++;
      if (VAR16.VAR30 & VAR55) VAR21++;
      if (VAR16.VAR30 & VAR56) VAR21++;
      if (VAR16.VAR30 & VAR57) VAR21++;
      if (VAR16.VAR30 & VAR58) VAR21++;
      if (VAR16.VAR30 & VAR59) VAR21++;
    }

  if (VAR11)
    VAR21 = VAR16.VAR33;

  for (VAR20 = 0; VAR20 < VAR21; VAR20++)
   {
     if (VAR20 != 0)
       {




         
         FUN10(VAR3,VAR6);
         if (FUN11(VAR6) == (VAR1 *) NULL)
          return(FUN6(VAR6));
        VAR6=FUN12(VAR6);
      }
 
    VAR6->VAR12 = VAR12;
    VAR6->VAR14 = VAR14;
    VAR6->VAR60 = VAR16.VAR61;
    VAR6->VAR62 = VAR16.VAR63;
    VAR6->VAR64 = VAR65;
    VAR6->VAR66 = VAR67;
    VAR6->VAR33 = 8;
    if (VAR3->VAR68 != VAR10)
      {
        (void) FUN13(VAR6);
        return(FUN14(VAR6));
      }
    VAR8=FUN15(VAR6,VAR6->VAR60,VAR6->VAR62);
    if (VAR8 == VAR10)
      {
        FUN16(VAR5,&VAR6->VAR5);
        return(FUN6(VAR6));
      }

    if ((VAR18)(VAR6, &VAR16, VAR5) != VAR28)
      {
        (void) FUN13(VAR6);
        return(FUN14(VAR6));
      }
  }

  if (FUN17(VAR6) != VAR10)
    FUN18(VAR5,VAR29,"",
      VAR6->VAR26);

  (void) FUN13(VAR6);
  return(FUN14(VAR6));
}