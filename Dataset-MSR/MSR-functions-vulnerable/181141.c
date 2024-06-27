static VAR1 FUN1(const VAR2 *VAR3,VAR4 *VAR5)
{
  VAR1
    VAR6;

  VAR7
    VAR8,
    *VAR9,
    VAR10;

  VAR11
    *VAR12;

  VAR13
    VAR14;

  register const VAR15
    *VAR16;

  register const VAR17
    *VAR18;

  register VAR19
    VAR20,
    VAR21;

  register unsigned char
    *VAR22;

  VAR23
    VAR24;

  VAR19
    VAR25;

  unsigned char
    *VAR26,
    *VAR27;

  
  assert(VAR3 != (const VAR2 *) NULL);
  assert(VAR3->VAR28 == VAR29);
  assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR28 == VAR29);
  if (VAR5->VAR30 != VAR31)
    (void) FUN2(VAR32,FUN3(),"",VAR5->VAR33);
  VAR6=FUN4(VAR3,VAR5,VAR34,&VAR5->VAR35);
  if (VAR6 == VAR31)
    return(VAR6);
  (void) FUN5(VAR5,VAR36);
  VAR9=(VAR7 *) NULL;
  if ((FUN6(VAR3->VAR37,"") == 0) ||
      ((FUN7(VAR5) != (VAR4 *) NULL) &&
       (VAR3->VAR38 != VAR31)))
    {
      
      (void) FUN8(VAR5,0x3ADE68B1L);
      VAR9=(VAR7 *) FUN9(1024UL,
        sizeof(*VAR9));
      if (VAR9 == (VAR7 *) NULL)
        FUN10(VAR39,"");
      for (VAR10=0; VAR10 < 1024; VAR10++)
        (void) FUN8(VAR5,0x00000000L);
    }
  VAR10=0;
  do
  {
    if (VAR9 != (VAR7 *) NULL)
      VAR9[VAR10]=FUN11(VAR5);
    
    VAR14.VAR40=0x0a;
    VAR14.VAR41=5;
    VAR14.VAR42=VAR3->VAR43 == VAR44 ? 0 : 1;
    VAR14.VAR45=8;
    if ((VAR5->VAR46 == VAR47) &&
        (FUN12(VAR5,&VAR5->VAR35) != VAR31))
      VAR14.VAR45=1;
    VAR14.VAR48=0;
    VAR14.VAR49=0;
    VAR14.VAR50=(unsigned short) (VAR5->VAR51-1);
    VAR14.VAR52=(unsigned short) (VAR5->VAR53-1);
    switch (VAR5->VAR54)
    {
      case VAR55:
      case VAR56:
      default:
      {
        VAR14.VAR57=(unsigned short) VAR5->VAR58;
        VAR14.VAR59=(unsigned short) VAR5->VAR60;
        break;
      }
      case VAR61:
      {
        VAR14.VAR57=(unsigned short)
          (2.54*VAR5->VAR58+0.5);
        VAR14.VAR59=(unsigned short)
          (2.54*VAR5->VAR60+0.5);
        break;
      }
    }
    VAR14.VAR62=0;
    VAR14.VAR63=1;
    if ((VAR5->VAR46 == VAR64) || (VAR5->VAR65 > 256))
      {
        VAR14.VAR63=3;
        if (VAR5->VAR66 != VAR31)
          VAR14.VAR63++;
      }
    VAR14.VAR67=(unsigned short) (((VAR23) VAR5->VAR51*
      VAR14.VAR45+7)/8);
    VAR14.VAR68=1;
    VAR14.VAR69=0x0c;
    
    (void) FUN13(VAR5,VAR14.VAR40);
    (void) FUN13(VAR5,VAR14.VAR41);
    (void) FUN13(VAR5,VAR14.VAR42);
    (void) FUN13(VAR5,VAR14.VAR45);
    (void) FUN14(VAR5,VAR14.VAR48);
    (void) FUN14(VAR5,VAR14.VAR49);
    (void) FUN14(VAR5,VAR14.VAR50);
    (void) FUN14(VAR5,VAR14.VAR52);
    (void) FUN14(VAR5,VAR14.VAR57);
    (void) FUN14(VAR5,VAR14.VAR59);
    
    VAR26=(unsigned char *) FUN9(256UL,
      3*sizeof(*VAR26));
    if (VAR26 == (unsigned char *) NULL)
      FUN10(VAR39,"");
    (void) memset(VAR26,0,3*256*sizeof(*VAR26));
    VAR22=VAR26;
    if ((VAR5->VAR46 == VAR47) && (VAR5->VAR65 <= 256))
      for (VAR20=0; VAR20 < (VAR19) VAR5->VAR65; VAR20++)
      {
        *VAR22++=FUN15(VAR5->VAR70[VAR20].VAR71);
        *VAR22++=FUN15(VAR5->VAR70[VAR20].VAR72);
        *VAR22++=FUN15(VAR5->VAR70[VAR20].VAR73);
      }
    (void) FUN16(VAR5,3*16,(const unsigned char *) VAR26);
    (void) FUN13(VAR5,VAR14.VAR62);
    (void) FUN13(VAR5,VAR14.VAR63);
    (void) FUN14(VAR5,VAR14.VAR67);
    (void) FUN14(VAR5,VAR14.VAR68);
    for (VAR20=0; VAR20 < 58; VAR20++)
      (void) FUN13(VAR5,'');
     VAR24=(VAR23) VAR14.VAR67;
     VAR12=FUN17(VAR24,VAR14.VAR63*sizeof(*VAR27));
     if (VAR12 == (VAR11 *) NULL)

      FUN10(VAR39,"");








     VAR27=(unsigned char *) FUN18(VAR12);
     VAR22=VAR27;
     if ((VAR5->VAR46 == VAR64) || (VAR5->VAR65 > 256))
      {
        
        for (VAR25=0; VAR25 < (VAR19) VAR5->VAR53; VAR25++)
        {
          VAR22=VAR27;
          for (VAR20=0; VAR20 < VAR14.VAR63; VAR20++)
          {
            VAR18=FUN19(VAR5,0,VAR25,VAR5->VAR51,1,&VAR5->VAR35);
            if (VAR18 == (const VAR17 *) NULL)
              break;
            switch ((int) VAR20)
            {
              case 0:
              {
                for (VAR21=0; VAR21 < (VAR19) VAR14.VAR67; VAR21++)
                {
                  *VAR22++=FUN15(FUN20(VAR18));
                  VAR18++;
                }
                break;
              }
              case 1:
              {
                for (VAR21=0; VAR21 < (VAR19) VAR14.VAR67; VAR21++)
                {
                  *VAR22++=FUN15(FUN21(VAR18));
                  VAR18++;
                }
                break;
              }
              case 2:
              {
                for (VAR21=0; VAR21 < (VAR19) VAR14.VAR67; VAR21++)
                {
                  *VAR22++=FUN15(FUN22(VAR18));
                  VAR18++;
                }
                break;
              }
              case 3:
              default:
              {
                for (VAR21=(VAR19) VAR14.VAR67; VAR21 != 0; VAR21--)
                {
                  *VAR22++=FUN15((VAR74)
                    (FUN23(VAR18)));
                  VAR18++;
                }
                break;
              }
            }
          }
          if (FUN24(&VAR14,VAR27,VAR5) == VAR31)
            break;
          if (VAR5->VAR75 == (VAR4 *) NULL)
            {
              VAR6=FUN25(VAR5,VAR76,(VAR7) VAR25,
                VAR5->VAR53);
              if (VAR6 == VAR31)
                break;
            }
        }
      }
    else
      {
        if (VAR14.VAR45 > 1)
          for (VAR25=0; VAR25 < (VAR19) VAR5->VAR53; VAR25++)
          {
            VAR18=FUN19(VAR5,0,VAR25,VAR5->VAR51,1,&VAR5->VAR35);
            if (VAR18 == (const VAR17 *) NULL)
              break;
            VAR16=FUN26(VAR5);
            VAR22=VAR27;
            for (VAR21=0; VAR21 < (VAR19) VAR5->VAR51; VAR21++)
              *VAR22++=(unsigned char) FUN27(VAR16+VAR21);
            if (FUN24(&VAR14,VAR27,VAR5) == VAR31)
              break;
            if (VAR5->VAR75 == (VAR4 *) NULL)
              {
                VAR6=FUN25(VAR5,VAR76,(VAR7) VAR25,
                VAR5->VAR53);
                if (VAR6 == VAR31)
                  break;
              }
          }
        else
          {
            register unsigned char
              VAR77,
              VAR78;

            
            for (VAR25=0; VAR25 < (VAR19) VAR5->VAR53; VAR25++)
            {
              VAR18=FUN19(VAR5,0,VAR25,VAR5->VAR51,1,&VAR5->VAR35);
              if (VAR18 == (const VAR17 *) NULL)
                break;
              VAR16=FUN26(VAR5);
              VAR77=0;
              VAR78=0;
              VAR22=VAR27;
              for (VAR21=0; VAR21 < (VAR19) VAR5->VAR51; VAR21++)
              {
                VAR78<<=1;
                if (FUN28(VAR5,VAR18) >= (VAR79/2.0))
                  VAR78|=0x01;
                VAR77++;
                if (VAR77 == 8)
                  {
                    *VAR22++=VAR78;
                    VAR77=0;
                    VAR78=0;
                  }
                VAR18++;
              }
              if (VAR77 != 0)
                *VAR22++=VAR78 << (8-VAR77);
              if (FUN24(&VAR14,VAR27,VAR5) == VAR31)
                break;
              if (VAR5->VAR75 == (VAR4 *) NULL)
                {
                  VAR6=FUN25(VAR5,VAR76,(VAR7)
                    VAR25,VAR5->VAR53);
                  if (VAR6 == VAR31)
                    break;
                }
            }
          }
        (void) FUN13(VAR5,VAR14.VAR69);
        (void) FUN16(VAR5,3*256,VAR26);
      }
    VAR12=FUN29(VAR12);
    VAR26=(unsigned char *) FUN30(VAR26);
    if (VAR9 == (VAR7 *) NULL)
      break;
    if (VAR10 >= 1023)
      break;
    if (FUN7(VAR5) == (VAR4 *) NULL)
      break;
    VAR5=FUN31(VAR5);
    VAR6=FUN25(VAR5,VAR80,VAR10++,
      FUN32(VAR5));
    if (VAR6 == VAR31)
      break;
  } while (VAR3->VAR38 != VAR31);
  if (VAR9 != (VAR7 *) NULL)
    {
      
      VAR9[VAR10+1]=0;
      VAR8=FUN33(VAR5,0L,VAR81);
      if (VAR8 < 0)
        FUN10(VAR82,"");
      (void) FUN8(VAR5,0x3ADE68B1L);
      for (VAR20=0; VAR20 <= (VAR19) VAR10; VAR20++)
        (void) FUN8(VAR5,(unsigned int) VAR9[VAR20]);
      VAR9=(VAR7 *) FUN30(VAR9);
    }
  if (VAR6 == VAR31)
    {
      char
        *VAR83;

      VAR83=FUN34(VAR84);
      (void) FUN35(&VAR5->VAR35,FUN3(),
        VAR85,"","",VAR5->VAR33,VAR83);
      VAR83=FUN36(VAR83);
    }
  (void) FUN37(VAR5);
  return(VAR86);
}