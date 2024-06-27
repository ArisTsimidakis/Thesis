static VAR1 FUN1(const VAR2 *VAR3,VAR4 *VAR5)
{
  VAR6
     VAR7;
 
   const char


     *VAR8;
 
   const double
    VAR9 = VAR10/2.0;

  VAR1
    VAR11;

  VAR12
    VAR13;

  register const VAR14
    *VAR15;

  register const VAR16
    *VAR17;

  register VAR18
    VAR19;

  register VAR18
    VAR20;

  register unsigned char
    *VAR21;

  VAR18
    VAR22,
    VAR23;

  VAR24
    VAR25;

  
  assert(VAR3 != (const VAR2 *) NULL);
  assert(VAR3->VAR26 == VAR27);
  assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR26 == VAR27);
  if (VAR5->VAR28 != VAR29)
    (void) FUN2(VAR30,FUN3(),"",VAR5->VAR31);
  VAR11=FUN4(VAR3,VAR5,VAR32,&VAR5->VAR33);
  if (VAR11 == VAR29)
    return(VAR11);
  
  if ((VAR5->VAR34 > 65535L) || (VAR5->VAR35 > 65535L))
    FUN5(VAR36,"");
  (void) FUN6(VAR5,VAR37);
  VAR7=VAR5->VAR7;
  if (VAR3->VAR7 != VAR38)
     VAR7=VAR3->VAR7;
   VAR13=FUN7(5UL);
   VAR25.VAR39=0;

  VAR8=FUN8(VAR5,"");

  if (VAR8 != (const char *) NULL)

    VAR25.VAR39=(unsigned char) FUN9(strlen(VAR8),255);






   VAR25.VAR40=0;
   VAR25.VAR41=0;
   VAR25.VAR42=0;
  VAR25.VAR43=0;
  VAR25.VAR44=0;
  VAR25.VAR45=0;
  VAR25.VAR46=(unsigned short) VAR5->VAR34;
  VAR25.VAR47=(unsigned short) VAR5->VAR35;
  VAR25.VAR48=8;
  VAR25.VAR49=0;
  if ((VAR3->VAR50 != VAR51) &&
      (VAR3->VAR50 != VAR52) &&
      (VAR3->VAR50 != VAR53) &&
      (VAR5->VAR54 == VAR29) &&
      (FUN10(VAR5,&VAR5->VAR33) != VAR29))
    VAR25.VAR55=VAR7 == VAR56 ? VAR57 :
      VAR58;
  else
    if ((VAR5->VAR59 == VAR60) || (VAR5->VAR61 > 256))
      {
        
        VAR25.VAR55=VAR7 == VAR56 ? VAR62 : VAR63;
        if (VAR3->VAR64 == 5)
          {
            VAR25.VAR48=16;
            if (VAR5->VAR54 != VAR29)
              VAR25.VAR49=1;  
          }
        else
          {
            VAR25.VAR48=24;
            if (VAR5->VAR54 != VAR29)
              {
                VAR25.VAR48=32;
                VAR25.VAR49=8;  
              }
          }
      }
    else
      {
        
        VAR25.VAR55=VAR7 == VAR56 ? VAR65 :
          VAR66;
        VAR25.VAR40=1;
        VAR25.VAR42=(unsigned short) VAR5->VAR61;
        if (VAR3->VAR64 == 5)
          VAR25.VAR43=16;
        else
          VAR25.VAR43=24;
      }
  VAR8=FUN11(VAR5,"");
  if (VAR8 != (const char *) NULL)
    {
      VAR67
        VAR68;

      VAR68=(VAR67) FUN12(VAR69,
        VAR29,VAR8);
      if (VAR68 == VAR70 || VAR68 == VAR71)
        VAR25.VAR49|=(1UL << 4);
      if (VAR68 == VAR72 || VAR68 == VAR71)
        VAR25.VAR49|=(1UL << 5);
    }
  
  (void) FUN13(VAR5,VAR25.VAR39);
  (void) FUN13(VAR5,VAR25.VAR40);
  (void) FUN13(VAR5,(unsigned char) VAR25.VAR55);
  (void) FUN14(VAR5,VAR25.VAR41);
  (void) FUN14(VAR5,VAR25.VAR42);
  (void) FUN13(VAR5,VAR25.VAR43);
  (void) FUN14(VAR5,VAR25.VAR44);
  (void) FUN14(VAR5,VAR25.VAR45);
  (void) FUN14(VAR5,VAR25.VAR46);
  (void) FUN14(VAR5,VAR25.VAR47);
   (void) FUN13(VAR5,VAR25.VAR48);
   (void) FUN13(VAR5,VAR25.VAR49);
   if (VAR25.VAR39 != 0)

    (void) FUN15(VAR5,VAR25.VAR39,(unsigned char *) VAR8);


   if (VAR25.VAR40 != 0)
     {
       unsigned char
        VAR73,
        *VAR74;

      
      VAR74=(unsigned char *) FUN16((VAR75)
        VAR25.VAR42,(VAR25.VAR43/8)*sizeof(
        *VAR74));
      if (VAR74 == (unsigned char *) NULL)
        FUN5(VAR76,"");
      VAR21=VAR74;
      for (VAR20=0; VAR20 < (VAR18) VAR5->VAR61; VAR20++)
      {
        if (VAR3->VAR64 == 5)
          {
            VAR73=(unsigned char) FUN17(VAR5->VAR77[VAR20].VAR73,
              VAR13);
            *VAR21++=((unsigned char) FUN17(VAR5->VAR77[VAR20].VAR78,
              VAR13)) | ((VAR73 & 0x07) << 5);
            *VAR21++=(((VAR5->VAR54 != VAR29) && (
              (double) VAR5->VAR77[VAR20].VAR79 < VAR9)) ? 0x80 : 0) |
              ((unsigned char) FUN17(VAR5->VAR77[VAR20].VAR80,
              VAR13) << 2) | ((VAR73 & 0x18) >> 3);
          }
        else
          {
            *VAR21++=FUN18(VAR5->VAR77[VAR20].VAR78);
            *VAR21++=FUN18(VAR5->VAR77[VAR20].VAR73);
            *VAR21++=FUN18(VAR5->VAR77[VAR20].VAR80);
          }
      }
      (void) FUN15(VAR5,(VAR75) ((VAR25.VAR43/8)*
        VAR25.VAR42),VAR74);
      VAR74=(unsigned char *) FUN19(VAR74);
    }
  
  for (VAR23=(VAR18) (VAR5->VAR35-1); VAR23 >= 0; VAR23--)
  {
    VAR17=FUN20(VAR5,0,VAR23,VAR5->VAR34,1,&VAR5->VAR33);
    if (VAR17 == (const VAR16 *) NULL)
      break;
    VAR15=FUN21(VAR5);
    if (VAR7 == VAR56)
      {
        VAR19=0;
        VAR22=0;
        while (VAR19 < (VAR18) VAR5->VAR34)
        {
          VAR20=1;
          while ((VAR20 < 128) && (VAR22 + VAR20 < 128) &&
                 ((VAR19 + VAR20) < (VAR18) VAR5->VAR34))
          {
            if (VAR25.VAR55 == VAR65)
              {
                if (FUN22(VAR15+VAR20) != FUN22(VAR15+(VAR20-1)))
                  break;
              }
            else
              if (VAR25.VAR55 == VAR57)
                {
                  if (FUN23(VAR5,VAR17+VAR20) != FUN23(VAR5,VAR17+(VAR20-1)))
                    break;
                }
              else
                {
                  if ((FUN24(VAR17+VAR20) != FUN24(VAR17+(VAR20-1))) ||
                      (FUN25(VAR17+VAR20) != FUN25(VAR17+(VAR20-1))) ||
                      (FUN26(VAR17+VAR20) != FUN26(VAR17+(VAR20-1))))
                    break;
                  if ((VAR5->VAR54 != VAR29) &&
                      (FUN27(VAR17+VAR20) != FUN27(VAR17+(VAR20-1))))
                    break;
                }
            VAR20++;
          }
          if (VAR20 < 3)
            {
              VAR22+=VAR20;
              VAR17+=VAR20;
              VAR15+=VAR20;
            }
          if ((VAR20 >= 3) || (VAR22 == 128) ||
              ((VAR19 + VAR20) == (VAR18) VAR5->VAR34))
            {
              if (VAR22 > 0)
                {
                  (void) FUN13(VAR5,(unsigned char) (--VAR22));
                  while (VAR22 >= 0)
                  {
                    FUN28(VAR5,VAR25.VAR55,VAR15-(VAR22+1),
                      VAR17-(VAR22+1),VAR13,VAR9);
                    VAR22--;
                  }
                  VAR22=0;
                }
            }
          if (VAR20 >= 3)
            {
              (void) FUN13(VAR5,(unsigned char) ((VAR20-1) | 0x80));
              FUN28(VAR5,VAR25.VAR55,VAR15,VAR17,VAR13,VAR9);
              VAR17+=VAR20;
              VAR15+=VAR20;
            }
          VAR19+=VAR20;
        }
      }
    else
      {
        for (VAR19=0; VAR19 < (VAR18) VAR5->VAR34; VAR19++)
          FUN28(VAR5,VAR25.VAR55,VAR15+VAR19,VAR17++,VAR13,VAR9);
      }
    if (VAR5->VAR81 == (VAR4 *) NULL)
      {
        VAR11=FUN29(VAR5,VAR82,(VAR83) VAR23,
          VAR5->VAR35);
        if (VAR11 == VAR29)
          break;
      }
  }
  (void) FUN30(VAR5);
  return(VAR84);
}