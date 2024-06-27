static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
#define MaxDirectoryStack  16
#define VAR6  ""
#define EXIF_NUM_FORMATS  12
#define TAG_EXIF_OFFSET  0x8769
#define TAG_INTEROP_OFFSET  0xa005

  typedef struct VAR7
  {
    unsigned char
      *VAR8;

    VAR9
      VAR10;
  } VAR11;

  VAR11
    VAR12[VAR13];

  VAR14
    VAR15;

  VAR9
    VAR10,
    VAR16,
    VAR17;

  VAR18
    *VAR19;

  VAR20
    VAR21,
    VAR22,
    VAR23;

  static int
    VAR24[] = {0, 1, 1, 2, 4, 8, 1, 1, 2, 4, 8, 4, 8};

  unsigned char
    *VAR8,
    *VAR25;

  
  VAR16=FUN2(VAR5);
  VAR25=FUN3(VAR5);
  if (VAR16 < 16)
    return(VAR26);
  VAR21=(VAR20) FUN4(VAR27,VAR25);
  if ((VAR21 != 0x4949) && (VAR21 != 0x4D4D))
    {
      while (VAR16 != 0)
      {
        if (FUN5(&VAR25,&VAR16) != 0x45)
          continue;
        if (FUN5(&VAR25,&VAR16) != 0x78)
          continue;
        if (FUN5(&VAR25,&VAR16) != 0x69)
          continue;
        if (FUN5(&VAR25,&VAR16) != 0x66)
          continue;
        if (FUN5(&VAR25,&VAR16) != 0x00)
          continue;
        if (FUN5(&VAR25,&VAR16) != 0x00)
          continue;
        break;
      }
      if (VAR16 < 16)
        return(VAR26);
      VAR21=(VAR20) FUN4(VAR27,VAR25);
    }
  VAR15=VAR27;
  if (VAR21 == 0x4949)
    VAR15=VAR27;
  else
    if (VAR21 == 0x4D4D)
      VAR15=VAR28;
    else
      return(VAR26);
  if (FUN4(VAR15,VAR25+2) != 0x002a)
    return(VAR26);
  
  VAR23=(VAR20) FUN6(VAR15,VAR25+4);
  if ((VAR23 < 0) || ((VAR9) VAR23 >= VAR16))
    return(VAR26);
  VAR8=VAR25+VAR23;
  VAR22=0;
  VAR10=0;
  VAR19=FUN7((int (*)(const void *,const void *)) NULL,
    (void *(*)(void *)) NULL,(void *(*)(void *)) NULL);
  do
  {
    if (VAR22 > 0)
      {
        VAR22--;
        VAR8=VAR12[VAR22].VAR8;
        VAR10=VAR12[VAR22].VAR10;
      }
    if ((VAR8 < VAR25) || (VAR8 > (VAR25+VAR16-2)))
      break;
    
    VAR17=FUN4(VAR15,VAR8);
    for ( ; VAR10 < VAR17; VAR10++)
    {
      register unsigned char
        *VAR29,
        *VAR30;

      VAR9
        VAR31;

      VAR20
        VAR32,
        VAR33,
        VAR34;

      VAR30=(unsigned char *) (VAR8+2+(12*VAR10));
      if (VAR30 > (VAR25+VAR16-12))
        break;  
      if (FUN8(VAR19,VAR30) == VAR30)
        break;
      (void) FUN9(VAR19,VAR30,VAR30);
      VAR34=(VAR20) FUN4(VAR15,VAR30);
      VAR33=(VAR20) FUN4(VAR15,VAR30+2);
      if ((VAR33 < 0) || ((VAR33-1) >= VAR35))
        break;
      VAR32=(VAR20) FUN6(VAR15,VAR30+4);
      if (VAR32 < 0)
        break;  
      VAR31=(VAR9) VAR32*VAR24[VAR33];
      if ((VAR20) VAR31 < VAR32)
        break;  
      if (VAR31 <= 4)
        VAR29=VAR30+8;
      else
        {
          
           VAR23=(VAR20) FUN6(VAR15,VAR30+8);

          if ((VAR20) (VAR23+VAR31) < VAR23)

            continue;  

          if ((VAR9) (VAR23+VAR31) > VAR16)


             continue;




           VAR29=(unsigned char *) (VAR25+VAR23);
         }
       switch (VAR34)
      {
        case 0x011a:
        {
          (void) FUN10(VAR15,(VAR9) (VAR3->VAR36+0.5),VAR29);
          (void) FUN10(VAR15,1UL,VAR29+4);
          break;
        }
        case 0x011b:
        {
          (void) FUN10(VAR15,(VAR9) (VAR3->VAR37+0.5),VAR29);
          (void) FUN10(VAR15,1UL,VAR29+4);
          break;
        }
        case 0x0112:
        {
          if (VAR31 == 4)
            {
              (void) FUN10(VAR15,(VAR9) VAR3->VAR38,VAR29);
              break;
            }
          (void) FUN11(VAR15,(unsigned short) VAR3->VAR38,
            VAR29);
          break;
        }
        case 0x0128:
        {
          if (VAR31 == 4)
            {
              (void) FUN10(VAR15,(VAR9) (VAR3->VAR39+1),VAR29);
              break;
            }
          (void) FUN11(VAR15,(unsigned short) (VAR3->VAR39+1),VAR29);
          break;
        }
        default:
          break;
      }
      if ((VAR34 == VAR40) || (VAR34 == VAR41))
        {
          VAR23=(VAR20) FUN6(VAR15,VAR29);
          if (((VAR9) VAR23 < VAR16) && (VAR22 < (VAR13-2)))
            {
              VAR12[VAR22].VAR8=VAR8;
              VAR10++;
              VAR12[VAR22].VAR10=VAR10;
              VAR22++;
              VAR12[VAR22].VAR8=VAR25+VAR23;
              VAR12[VAR22].VAR10=0;
              VAR22++;
              if ((VAR8+2+(12*VAR17)) > (VAR25+VAR16))
                break;
              VAR23=(VAR20) FUN6(VAR15,VAR8+2+(12*
                VAR17));
              if ((VAR23 != 0) && ((VAR9) VAR23 < VAR16) &&
                  (VAR22 < (VAR13-2)))
                {
                  VAR12[VAR22].VAR8=VAR25+VAR23;
                  VAR12[VAR22].VAR10=0;
                  VAR22++;
                }
            }
          break;
        }
    }
  } while (VAR22 > 0);
  VAR19=FUN12(VAR19);
  return(VAR42);
}