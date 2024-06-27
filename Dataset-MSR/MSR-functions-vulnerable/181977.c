static VAR1 *FUN1(const VAR2 *VAR3,VAR4 *VAR5)
{
  VAR1
    *VAR6;

  VAR7
    VAR8,
    VAR9;

  VAR10
    VAR11;

  VAR12
    VAR13;

  VAR7
    VAR14;

  VAR15
    VAR16;

  register VAR17
    VAR18;

  VAR17
    VAR19;

  unsigned char
    *VAR20;

  
  assert(VAR3 != (const VAR2 *) NULL);
  assert(VAR3->VAR21 == VAR22);
  if (VAR3->VAR23 != VAR24)
    (void) FUN2(VAR25,FUN3(),"",
      VAR3->VAR26);
  assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR21 == VAR22);

  VAR6=FUN4(VAR3,VAR5);
  VAR14=FUN5(VAR3,VAR6,VAR27,VAR5);
  if (VAR14 == VAR24)
    {
      VAR6=FUN6(VAR6);
      return((VAR1 *) NULL);
    }
  
  VAR6->VAR28=VAR29;
  VAR19=FUN7(VAR6,4,(unsigned char *) VAR16.VAR21);
  VAR16.VAR30=FUN8(VAR6);
  if ((VAR19 == 0) || (FUN9(VAR16.VAR21,"",4) != 0) ||
      ((VAR16.VAR30 != 1) && (VAR16.VAR30 != 2)))
    FUN10(VAR31,"");
  (void) FUN7(VAR6,6,VAR16.VAR32);
  VAR16.VAR33=FUN8(VAR6);
  if (VAR16.VAR33 > VAR34)
    FUN10(VAR31,"");
  VAR16.VAR35=FUN11(VAR6);
  VAR16.VAR36=FUN11(VAR6);
  if ((VAR16.VAR30 == 1) && ((VAR16.VAR35 > 30000) ||
      (VAR16.VAR36 > 30000)))
    FUN10(VAR31,"");
  VAR16.VAR37=FUN8(VAR6);
  if ((VAR16.VAR37 != 1) && (VAR16.VAR37 != 8) && (VAR16.VAR37 != 16))
    FUN10(VAR31,"");
  VAR16.VAR38=FUN8(VAR6);
  if (VAR6->VAR23 != VAR24)
    (void) FUN2(VAR39,FUN3(),
      "",
      (double) VAR16.VAR36,(double) VAR16.VAR35,(double)
      VAR16.VAR33,(double) VAR16.VAR37,FUN12((VAR40)
      VAR16.VAR38));
  
  VAR6->VAR37=VAR16.VAR37;
  VAR6->VAR36=VAR16.VAR36;
  VAR6->VAR35=VAR16.VAR35;
  VAR14=FUN13(VAR6,VAR6->VAR36,VAR6->VAR35,VAR5);
  if (VAR14 == VAR24)
    return(FUN6(VAR6));
  if (FUN14(VAR6,VAR5) == VAR24)
    {
      VAR6=FUN6(VAR6);
      return((VAR1 *) NULL);
    }
  if (VAR16.VAR38 == VAR41)
    FUN15(VAR6,VAR42,VAR5);
  if (VAR16.VAR38 == VAR43)
    {
      FUN15(VAR6,VAR44,VAR5);
      VAR6->VAR45=VAR16.VAR33 > 4 ? VAR46 :
        VAR47;
    }
  else if ((VAR16.VAR38 == VAR48) || (VAR16.VAR38 == VAR49) ||
      (VAR16.VAR38 == VAR50))
    {
      VAR14=FUN16(VAR6,VAR16.VAR37 != 16 ? 256 : 65536,
        VAR5);
      if (VAR14 == VAR24)
        FUN10(VAR51,"");
      if (VAR6->VAR23 != VAR24)
        (void) FUN2(VAR39,FUN3(),
          "");
      FUN15(VAR6,VAR52,VAR5);
      VAR6->VAR45=VAR16.VAR33 > 1 ? VAR46 :
        VAR47;
    }
  else
    VAR6->VAR45=VAR16.VAR33 > 3 ? VAR46 :
      VAR47;
  
  VAR13=FUN11(VAR6);
  if (VAR13 != 0)
    {
      if (VAR6->VAR23 != VAR24)
        (void) FUN2(VAR39,FUN3(),
          "");
      if (VAR16.VAR38 == VAR50)
        {
          
          VAR20=(unsigned char *) FUN17((VAR53) VAR13,
            sizeof(*VAR20));
          if (VAR20 == (unsigned char *) NULL)
            FUN10(VAR51,"");
          (void) FUN7(VAR6,(VAR53) VAR13,VAR20);
          VAR20=(unsigned char *) FUN18(VAR20);
        }
      else
        {
          VAR53
            VAR54;

          
          VAR54=VAR13/3;
          if (VAR54 > 65536)
            FUN10(VAR31,"");
          if (FUN16(VAR6,VAR54,VAR5) == VAR24)
            FUN10(VAR51,"");
          for (VAR18=0; VAR18 < (VAR17) VAR6->VAR55; VAR18++)
            VAR6->VAR56[VAR18].VAR57=FUN19((unsigned char)
              FUN20(VAR6));
          for (VAR18=0; VAR18 < (VAR17) VAR6->VAR55; VAR18++)
            VAR6->VAR56[VAR18].VAR58=FUN19((unsigned char)
              FUN20(VAR6));
          for (VAR18=0; VAR18 < (VAR17) VAR6->VAR55; VAR18++)
            VAR6->VAR56[VAR18].VAR59=FUN19((unsigned char)
              FUN20(VAR6));
          VAR6->VAR45=VAR47;
        }
    }
  if ((VAR6->VAR37 == 1) && (VAR6->VAR60 != VAR61))
    FUN10(VAR31, "");
  VAR8=VAR62;
  VAR13=FUN11(VAR6);
  if (VAR13 != 0)
    {
      unsigned char
        *VAR63;

      
      if (VAR6->VAR23 != VAR24)
        (void) FUN2(VAR39,FUN3(),
          "",(double)
          ((VAR10) VAR13));
      VAR63=(unsigned char *) FUN17((VAR53) VAR13,
        sizeof(*VAR63));
       if (VAR63 == (unsigned char *) NULL)
         FUN10(VAR51,"");
       VAR19=FUN7(VAR6,(VAR53) VAR13,VAR63);

      if ((VAR19 != (VAR17) VAR13) ||


           (FUN9((char *) VAR63,"",4) != 0))
         {
           VAR63=(unsigned char *) FUN18(VAR63);
          FUN10(VAR31,"");
        }
      FUN21(VAR6,VAR63,(VAR53) VAR13,&VAR8,
        VAR5);
      VAR63=(unsigned char *) FUN18(VAR63);
    }
  
  VAR13=FUN22(&VAR16,VAR6);
  if (VAR13 == 8)
    {
      VAR13=FUN11(VAR6);
      VAR13=FUN11(VAR6);
    }
  VAR11=FUN23(VAR6);
  VAR9=VAR24;
  if ((VAR3->VAR64 == 1) && (VAR3->VAR65 == 0) &&
      (VAR8 != VAR24))
    {
      if (VAR6->VAR23 != VAR24)
        (void) FUN2(VAR39,FUN3(),
          "");
      VAR9=VAR62;
    }
  if (VAR13 == 0)
    {
      if (VAR6->VAR23 != VAR24)
        (void) FUN2(VAR39,FUN3(),
          "");
    }
  else
    {
      if (FUN24(VAR6,VAR3,&VAR16,VAR9,VAR5) !=
          VAR62)
        {
          (void) FUN25(VAR6);
          VAR6=FUN6(VAR6);
          return((VAR1 *) NULL);
        }

      
      FUN26(VAR6,VAR11+VAR13,VAR66);
    }
  
  if (VAR3->VAR67 != VAR24)
    {
      (void) FUN25(VAR6);
      return(FUN27(VAR6));
    }
  
  if (VAR6->VAR23 != VAR24)
    (void) FUN2(VAR39,FUN3(),
      "");
  if ((VAR8 != VAR24) || (FUN28(VAR6) == 1))
    VAR8=(VAR7) FUN29(VAR3,VAR6,
      &VAR16,VAR5);
  if ((VAR8 == VAR24) && (FUN28(VAR6) == 1) &&
      (VAR13 != 0))
    {
      FUN26(VAR6,VAR11,VAR66);
      VAR14=FUN24(VAR6,VAR3,&VAR16,VAR24,VAR5);
      if (VAR14 != VAR62)
        {
          (void) FUN25(VAR6);
          VAR6=FUN6(VAR6);
          return((VAR1 *) NULL);
        }
    }
  if ((VAR8 == VAR24) && (FUN28(VAR6) > 1))
    {
      VAR1
        *VAR68;

      FUN30(VAR6,VAR69,VAR5);
      VAR6->VAR70.VAR71=VAR72;
      VAR6->VAR70.VAR45=VAR46;
      VAR68=FUN31(VAR6,VAR73,VAR5);
      FUN32(&VAR6,VAR68);
    }
  (void) FUN25(VAR6);
  return(FUN27(VAR6));
}