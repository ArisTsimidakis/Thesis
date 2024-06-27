static VAR1 FUN1(const VAR2 *VAR3,
  VAR4 *VAR5)
{
  char
    VAR6[VAR7];

  VAR4
    *VAR8;

  VAR2
    *VAR9;

  VAR1
    VAR10;

  register VAR11
    VAR12;

  VAR13
    VAR14,
    VAR15,
    VAR16,
    VAR17;

  VAR11
    VAR18;

  unsigned char
    *VAR19;

  
  assert(VAR3 != (const VAR2 *) NULL);
  assert(VAR3->VAR20 == VAR21);
  assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR20 == VAR21);
  if (VAR5->VAR22 != VAR23)
    (void) FUN2(VAR24,FUN3(),"",VAR5->VAR25);
  VAR10=FUN4(VAR3,VAR5,VAR26,&VAR5->VAR27);
  if (VAR10 == VAR23)
    return(VAR10);
  
  VAR18=FUN5(VAR5,"");
  (void) VAR18;
  VAR18=FUN5(VAR5,"");
  VAR18=FUN5(VAR5,"");
  VAR18=FUN5(VAR5,"");
  VAR18=FUN5(VAR5,"");
  VAR18=FUN5(VAR5,"");
  VAR18=FUN5(VAR5,"");
  VAR16=0;
  VAR17=0;
  switch (VAR5->VAR28)
  {
    case VAR29:
    {
      VAR16=180;
      VAR17=270;
      break;
    }
    case VAR30:
    {
      VAR16=180;
      VAR17=90;
      break;
    }
    case VAR31:
    {
      VAR17=90;
      break;
    }
    case VAR32:
    {
      VAR16=270;
      break;
    }
    case VAR33:
    {
      VAR16=270;
      VAR17=180;
      break;
    }
    case VAR34:
    {
      VAR16=90;
      VAR17=180;
      break;
    }
    case VAR35:
    {
      VAR16=90;
      break;
    }
    default:
    {
      VAR17=270;
      break;
    }
  }
  (void) FUN6(VAR6,sizeof(VAR6),"",
    (long) VAR16,(long) VAR17);
  VAR18=FUN5(VAR5,VAR6);
  (void) FUN6(VAR6,sizeof(VAR6),"",
    (unsigned long) VAR5->VAR36,(unsigned long) VAR5->VAR37);
  VAR18=FUN5(VAR5,VAR6);
  VAR14=200;
  if (VAR3->VAR14 != (char *) NULL)
    {
      VAR38
        VAR39;

      (void) FUN7(VAR3->VAR14,&VAR39);
      VAR14=(VAR13) FUN8(VAR39.VAR40+0.5);
    }
  (void) FUN6(VAR6,sizeof(VAR6),"",
    (unsigned long) VAR14);
  VAR18=FUN5(VAR5,VAR6);
  VAR18=FUN5(VAR5,"");
  (void) FUN9(VAR6,'',128);
  for (VAR12=0; VAR12 < 5; VAR12++)
    (void) FUN10(VAR5,128,(unsigned char *) VAR6);
  
  VAR9=FUN11(VAR3);
  (void) FUN12(VAR9->VAR25,"",VAR7);
  (void) FUN12(VAR9->VAR41,"",VAR7);
   VAR8=FUN13(VAR5,0,0,VAR42,&VAR5->VAR27);
   if (VAR8 == (VAR4 *) NULL)
     {


       (void) FUN14(VAR5);
       return(VAR23);
     }
  VAR19=(unsigned char *) FUN15(VAR9,VAR8,&VAR15,
    &VAR5->VAR27);
   VAR8=FUN16(VAR8);
   if (VAR19 == (unsigned char *) NULL)
     {


       (void) FUN14(VAR5);
       return(VAR23);
     }
  VAR9=FUN17(VAR9);
  if (FUN10(VAR5,VAR15,VAR19) != (VAR11) VAR15)
    VAR10=VAR23;
  VAR19=(unsigned char *) FUN18(VAR19);
  (void) FUN14(VAR5);
  return(VAR10);
}