static VAR1 *FUN1(const VAR2 *VAR3,VAR4 *VAR5)
{
  VAR1 *VAR6, *VAR7=NULL,
   *VAR8;
  register VAR9 *VAR10;

  unsigned int VAR11;
  MATHeader VAR12;
  size_t VAR13;
  size_t VAR14;
  VAR15 *VAR16;
  VAR2 *VAR17;
  int VAR18;
  ssize_t VAR19;
  unsigned char *VAR20 = NULL;
  double VAR21, VAR22;
  unsigned VAR23, VAR24;
  unsigned VAR25;
  int VAR26;
  int VAR27;
  MagickOffsetType VAR28=0x80;

  unsigned int (*VAR29)(VAR1 *VAR6);
  unsigned short (*VAR30)(VAR1 *VAR6);
  void (*VAR31)(VAR1 * VAR6, size_t VAR32, double *VAR33);
  void (*VAR34)(VAR1 * VAR6, size_t VAR32, float *VAR33);


  assert(VAR3 != (const VAR2 *) NULL);
  assert(VAR3->VAR35 == VAR36);
  assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR35 == VAR36);
  VAR26 = FUN2(VAR37,FUN3(),"");

  
  VAR6 = FUN4(VAR3,VAR5);
  VAR7 = (VAR1 *) NULL;

  VAR11 = FUN5(VAR3, VAR6, VAR38, VAR5);
  if (VAR11 == VAR39)
    {
      VAR6=FUN6(VAR6);
      return((VAR1 *) NULL);
    }
  
  VAR16=(VAR15 *) NULL;
  VAR17=(VAR2 *) NULL;
  if (FUN7(VAR6,124,(unsigned char *) &VAR12.VAR40) != 124)
    FUN8(VAR41,"");
  if (FUN9(VAR12.VAR40,"",6) != 0)
    {
      VAR6=FUN10(VAR3,VAR6,VAR5);
      if (VAR6 == NULL)
        {
          if ((VAR6 != VAR7) && (VAR7 != (VAR1 *) NULL))
            VAR7=FUN11(VAR7);
          if (VAR17 != (VAR2 *) NULL)
            VAR17=FUN12(VAR17);
          return((VAR1 *) NULL);
        }
      goto VAR42;
    }
  VAR12.VAR43 = FUN13(VAR6);
  if(FUN7(VAR6,2,(unsigned char *) &VAR12.VAR44) != 2)
    FUN8(VAR41,"");

  if (VAR26)
    (void) FUN2(VAR37,FUN3(),"",
      VAR12.VAR44[0],VAR12.VAR44[1]);
  if (!FUN9(VAR12.VAR44, "", 2))
  {
    VAR29 = VAR45;
    VAR30 = VAR46;
    VAR31 = VAR47;
    VAR34 = VAR48;
    VAR6->VAR49 = VAR50;
  }
  else if (!FUN9(VAR12.VAR44, "", 2))
  {
    VAR29 = VAR51;
    VAR30 = VAR52;
    VAR31 = VAR53;
    VAR34 = VAR54;
    VAR6->VAR49 = VAR55;
  }
  else
    {
VAR56:
      if ((VAR6 != VAR7) && (VAR7 != (VAR1 *) NULL))
        VAR7=FUN11(VAR7);
      if (VAR17 != (VAR2 *) NULL)
        VAR17=FUN12(VAR17);
      FUN8(VAR41,"");
     }
 
   VAR28 = FUN14(VAR6);

  while(!FUN15(VAR6)) 


   {
     VAR25 = 1;

    if (VAR28 != (unsigned int) VAR28)


       break;
     if(FUN16(VAR6,VAR28,VAR57) != VAR28) break;
     

    VAR12.VAR58 = FUN17(VAR6);
     if(FUN15(VAR6)) break;
     VAR12.VAR59 = FUN17(VAR6);
     if(FUN15(VAR6)) break;

    if((VAR60) (VAR12.VAR59+VAR28) > FUN18(VAR6))


       goto VAR56;
     VAR28 += (VAR61) VAR12.VAR59 + 4 + 4;
 
    if (VAR17 != (VAR2 *) NULL)
      VAR17=FUN12(VAR17);
    VAR17=FUN19(VAR3);
    if ((VAR6 != VAR7) && (VAR7 != (VAR1 *) NULL))
      VAR7=FUN11(VAR7);
    VAR7 = VAR6;
#if FUN20(VAR62)
    if(VAR12.VAR58 == VAR63)
    {
      VAR7 = FUN21(VAR6,&VAR12.VAR59,VAR17,VAR5);
      if(VAR7==NULL) continue;
      VAR12.VAR58 = FUN17(VAR7); 
    }
#endif

    if (VAR12.VAR58 != VAR64)
      {
        VAR17=FUN12(VAR17);
#if FUN20(VAR62)
        if (VAR7 != VAR6)
          FUN22(&VAR7);
#endif
        continue;  
      }

    VAR12.VAR65 = FUN17(VAR7);
    VAR12.VAR66 = FUN17(VAR7);

    VAR12.VAR67 = FUN17(VAR7);
    VAR12.VAR68 = VAR12.VAR67 & 0xFF;
    VAR12.VAR69 = (VAR12.VAR67>>8) & 0xFF;

    VAR12.VAR70 = FUN17(VAR7);
    if(VAR6!=VAR7)
      VAR12.VAR71 = FUN17(VAR7);  
    VAR12.VAR71 = FUN17(VAR7);
    VAR12.VAR72 = FUN17(VAR7);
    VAR12.VAR73 = FUN17(VAR7);
    VAR12.VAR74 = FUN17(VAR7);


    switch(VAR12.VAR72)
    {
      case  8: VAR24=VAR23=1; break;      
      case 12: VAR24=VAR23 = FUN17(VAR7);  
           (void) FUN17(VAR7);
         if(VAR23!=3)
           {
             if (VAR17 != (VAR2 *) NULL)
               VAR17=FUN12(VAR17);
             if ((VAR6 != VAR7) && (VAR7 != (VAR1 *) NULL))
               VAR7=FUN11(VAR7);
             FUN8(VAR75,
               "");
           }
         break;
      case 16: VAR24=VAR23 = FUN17(VAR7);  
         if(VAR23!=3 && VAR23!=1)
           {
             if (VAR17 != (VAR2 *) NULL)
               VAR17=FUN12(VAR17);
             if ((VAR6 != VAR7) && (VAR7 != (VAR1 *) NULL))
               VAR7=FUN11(VAR7);
             FUN8(VAR75,
               "");
           }
          VAR25 = FUN17(VAR7);
          if (VAR25 == 0)
            {
              if (VAR17 != (VAR2 *) NULL)
                VAR17=FUN12(VAR17);
              if ((VAR6 != VAR7) && (VAR7 != (VAR1 *) NULL))
                VAR7=FUN11(VAR7);
              FUN8(VAR41,"");
            }
          if (FUN23(VAR76,VAR25) == VAR39)
            {
              if (VAR17 != (VAR2 *) NULL)
                VAR17=FUN12(VAR17);
              if ((VAR6 != VAR7) && (VAR7 != (VAR1 *) NULL))
                VAR7=FUN11(VAR7);
              FUN8(VAR77,"");
            }
         break;
      default:
        if (VAR17 != (VAR2 *) NULL)
          VAR17=FUN12(VAR17);
        if ((VAR6 != VAR7) && (VAR7 != (VAR1 *) NULL))
          VAR7=FUN11(VAR7);
        FUN8(VAR75, "");
    }

    VAR12.VAR78 = FUN24(VAR7);
    VAR12.VAR79 = FUN24(VAR7);

    if (VAR26) (void)FUN2(VAR37,FUN3(),
          "",VAR12.VAR68);
    if (VAR12.VAR68 != VAR80 &&
        VAR12.VAR68 != VAR81 &&    
        VAR12.VAR68 != VAR82 &&    
        VAR12.VAR68 != VAR83 &&
        VAR12.VAR68 != VAR84 &&    
        VAR12.VAR68 != VAR85 &&
        VAR12.VAR68 != VAR86 &&    
        VAR12.VAR68 != VAR87 &&
        VAR12.VAR68 != VAR88 &&    
        VAR12.VAR68 != VAR89 &&
        VAR12.VAR68 != VAR90)    
      {
        if ((VAR7 != (VAR1*) NULL) && (VAR7 != VAR6))
          {
            FUN25(VAR7);
            FUN22(&VAR7);
          }
        if (VAR17 != (VAR2 *) NULL)
          VAR17=FUN12(VAR17);
        FUN8(VAR75,"");
      }

    switch (VAR12.VAR79)
    {
      case 0:
        VAR13 = FUN17(VAR7);  
        VAR13 = 4 * (((VAR91) VAR13 + 3 + 1) / 4);
        (void) FUN16(VAR7, VAR13, VAR92);
        break;
      case 1:
      case 2:
      case 3:
      case 4:
        (void) FUN7(VAR7, 4, (unsigned char *) &VAR13); 
        break;
      default:
        goto VAR56;
    }

    VAR14 = FUN17(VAR7);    
    if (VAR26)
      (void) FUN2(VAR37,FUN3(),
        "",(double) VAR14);

    
    if (FUN7(VAR7, 4, (unsigned char *) &VAR13) != 4)
      goto VAR56;

    VAR93:
    switch (VAR14)
    {
      case VAR94:
      case VAR95:
        VAR27 = 8;
        if(VAR12.VAR69 & VAR96)
          VAR6->VAR97 = 1;
        else
          VAR6->VAR97 = 8;         
        VAR19 = (VAR98) VAR12.VAR73;
        break;
      case VAR99:
      case VAR100:
        VAR27 = 16;
        VAR6->VAR97 = 16;        
        VAR19 = (VAR98) (2 * VAR12.VAR73);
        break;
      case VAR101:
      case VAR102:
        VAR27 = 32;
        VAR6->VAR97 = 32;        
        VAR19 = (VAR98) (4 * VAR12.VAR73);
        break;
      case VAR103:
      case VAR104:
        VAR27 = 64;
        VAR6->VAR97 = 64;        
        VAR19 = (VAR98) (8 * VAR12.VAR73);
        break;
      case VAR105:
        VAR27 = 32;
        VAR6->VAR97 = 32;        
        (void) FUN26(VAR17,"","");
        if (VAR12.VAR69 & VAR106)
          {              
          }
        VAR19 = (VAR98) (4 * VAR12.VAR73);
        break;
      case VAR107:
        VAR27 = 64;
        VAR6->VAR97 = 64;        
        (void) FUN26(VAR17,"","");
FUN27(4127)
        if (sizeof(double) != 8)
VAR108
          {
            if (VAR17 != (VAR2 *) NULL)
              VAR17=FUN12(VAR17);
            if ((VAR6 != VAR7) && (VAR7 != (VAR1 *) NULL))
              VAR7=FUN11(VAR7);
            FUN8(VAR75, "");
          }
        if (VAR12.VAR69 & VAR106)
          {                         
          }
        VAR19 = (VAR98) (8 * VAR12.VAR73);
        break;
      default:
        if ((VAR6 != VAR7) && (VAR7 != (VAR1 *) NULL))
          VAR7=FUN11(VAR7);
        if (VAR17)
          VAR17=FUN12(VAR17);
        FUN8(VAR75, "");
    }
    (void) VAR27;
    VAR6->VAR109 = VAR12.VAR73;
    VAR6->VAR110 = VAR12.VAR74;
    VAR6->VAR111 = FUN28(VAR6->VAR97);
    if (VAR6->VAR109 == 0 || VAR6->VAR110 == 0)
      goto VAR56;
    if((unsigned int)VAR19*VAR12.VAR74 > VAR12.VAR59)
      goto VAR56;
    
    if ((VAR12.VAR72 == 8) &&
        ((VAR12.VAR69 & VAR106) == 0))
      {
        VAR6->VAR112=VAR113;
        FUN29(VAR6,VAR114,VAR5);
      }


    
    if (VAR3->VAR115)
    {
      size_t VAR116 = VAR6->VAR109;
      VAR6->VAR109 = VAR6->VAR110;
      VAR6->VAR110 = VAR116;
      goto VAR117; 
    }
    VAR11=FUN30(VAR6,VAR6->VAR109,VAR6->VAR110,VAR5);
    if (VAR11 == VAR39)
      {
        if (VAR17 != (VAR2 *) NULL)
          VAR17=FUN12(VAR17);
        if ((VAR6 != VAR7) && (VAR7 != (VAR1 *) NULL))
          VAR7=FUN11(VAR7);
        return(FUN6(VAR6));
      }
    (void) FUN31(VAR6,VAR5);
    VAR16=FUN32(VAR17,VAR6);
    if (VAR16 == (VAR15 *) NULL)
      {
        if (VAR17 != (VAR2 *) NULL)
          VAR17=FUN12(VAR17);
        if ((VAR6 != VAR7) && (VAR7 != (VAR1 *) NULL))
          VAR7=FUN11(VAR7);
        FUN8(VAR77,"");
      }

  
    VAR20 = (unsigned char *) FUN33((VAR91) (VAR19),sizeof(double));    
    if (VAR20 == NULL)
      {
        if (VAR17 != (VAR2 *) NULL)
          VAR17=FUN12(VAR17);
        if ((VAR6 != VAR7) && (VAR7 != (VAR1 *) NULL))
          VAR7=FUN11(VAR7);
        if (VAR16 != (VAR15 *) NULL)
          VAR16=FUN34(VAR16);
        FUN8(VAR77,"");
      }
    (void) memset(VAR20,0,VAR19*sizeof(double));

    VAR21 = 0;
    VAR22 = 0;
    if (VAR14==VAR107 || VAR14==VAR105)        
      {
        FUN35(VAR7,VAR3->VAR49,VAR12.VAR73,VAR12.VAR74,
          VAR14,VAR19,VAR20,&VAR16->VAR118,
          &VAR16->VAR119);
      }

    
    if(VAR23==1) VAR23=0; 
    
    do
    {
      for (VAR18 = 0; VAR18 < (VAR98) VAR12.VAR74; VAR18++)
      {
        VAR10=FUN36(VAR6,0,VAR12.VAR74-VAR18-1,VAR6->VAR109,1,VAR5);
        if (VAR10 == (VAR9 *) NULL)
          {
            if (VAR26) (void)FUN2(VAR37,FUN3(),
              "", (unsigned)(VAR12.VAR74-VAR18-1));
            goto VAR117;    
          }
        if(FUN7(VAR7,VAR19,(unsigned char *)VAR20) != (VAR98) VAR19)
           {
             if (VAR26) (void)FUN2(VAR37,FUN3(),
               "", (unsigned)(VAR12.VAR74-VAR18-1));


             goto VAR120;
           }
         if((VAR14==VAR94 || VAR14==VAR95) && (VAR12.VAR69 & VAR96))
        {
          FUN37((unsigned char *)VAR20,VAR19);
          if(FUN38(VAR6,(VAR121 *) NULL,VAR16,VAR122[VAR23],VAR20,VAR5) <= 0)
            {
VAR123:
              if (VAR26) (void)FUN2(VAR37,FUN3(),
                "", (unsigned)(VAR12.VAR74-VAR18-1));
              break;
            }
        }
        else
        {
          if(FUN38(VAR6,(VAR121 *) NULL,VAR16,VAR122[VAR23],VAR20,VAR5) <= 0)
            goto VAR123;


          if (VAR23<=1 &&       
             (VAR14==VAR94 || VAR14==VAR99 || VAR14==VAR101 || VAR14==VAR103))
            FUN39(VAR6,VAR10,VAR12.VAR73);
        }

        if (!FUN40(VAR6,VAR5))
          {
            if (VAR26) (void)FUN2(VAR37,FUN3(),
              "", (unsigned)(VAR12.VAR74-VAR18-1));
            goto VAR120;
          }
      }
    } while(VAR23-- >= 2);
VAR120:
    if (VAR18 != (long) VAR12.VAR74)
      goto VAR42;

    
    if (VAR12.VAR69 & VAR106)
    {        
      VAR14 = FUN17(VAR7);    
      VAR18 = FUN17(VAR7);           

      if (VAR14==VAR107 || VAR14==VAR105)
      {
        FUN35(VAR7,  VAR3->VAR49, VAR12.VAR73, VAR12.VAR74, VAR14, VAR19, VAR20, &VAR21, &VAR22);
      }

      if (VAR14==VAR107)
        for (VAR18 = 0; VAR18 < (VAR98) VAR12.VAR74; VAR18++)
        {
          FUN41(VAR7, VAR19, (double *)VAR20);
          if (FUN15(VAR6) != VAR39)
            break;
          FUN42(VAR6, (double *)VAR20, VAR18, VAR21, VAR22,
            VAR5);
        }

      if (VAR14==VAR105)
        for (VAR18 = 0; VAR18 < (VAR98) VAR12.VAR74; VAR18++)
        {
          FUN43(VAR7, VAR19, (float *)VAR20);
          if (FUN15(VAR6) != VAR39)
            break;
          FUN44(VAR6,(float *)VAR20,VAR18,VAR21,VAR22,
            VAR5);
        }
    }

      
    if ((VAR12.VAR72 == 8) &&
        ((VAR12.VAR69 & VAR106) == 0))
      VAR6->VAR112=VAR113;
    if (VAR6->VAR97 == 1)
      VAR6->VAR112=VAR124;

    if(VAR7==VAR6)
        VAR7 = NULL;    

      
    VAR8 = FUN45(VAR6, 90.0, VAR5);
    if (VAR8 != (VAR1 *) NULL)
    {
        
      VAR8->VAR125.VAR126=0;
      VAR8->VAR125.VAR127=0;
      VAR8->VAR111 = VAR6->VAR111;
      FUN46(VAR8);
      VAR8->VAR128=FUN47(VAR6->VAR128);
      FUN48(&VAR6,VAR8);
      FUN22(&VAR6);
    }

VAR117:

    if(VAR7!=NULL)
      if(VAR7!=VAR6)
      {
        FUN22(&VAR7);
        if(VAR17)
        {
          if(VAR17->VAR129)
          {
            fclose(VAR17->VAR129);
            VAR17->VAR129 = NULL;
            (void) FUN49(VAR17->VAR130);
          }
        }
      }
    if (FUN15(VAR6) != VAR39)
      break;

      
    FUN50(VAR3,VAR6,VAR5);
    if (VAR6->VAR131 == (VAR1 *) NULL) break;
    VAR6=FUN51(VAR6);
    VAR6->VAR109=VAR6->VAR110=0;
    VAR6->VAR111=0;

      
    FUN52(VAR20);
    VAR20 = NULL;
    if (VAR16 != (VAR15 *) NULL)
      VAR16=FUN34(VAR16);

    if(--VAR25>0)
    {
      VAR23 = VAR24;
      if(VAR7==NULL) VAR7 = VAR6;
      if(!FUN15(VAR6) && FUN14(VAR6)<VAR28)
        goto VAR93;
    }
    if ((VAR7!=NULL) && (VAR7!=VAR6))   
      {

        FUN22(&VAR7);
        if(VAR17)
        {
          if(VAR17->VAR129)
          {
            fclose(VAR17->VAR129);
            VAR17->VAR129 = NULL;
            (void) FUN49(VAR17->VAR130);
          }
        }
      }

    if (VAR17)
      VAR17=FUN12(VAR17);
  }

VAR42:
  FUN52(VAR20);
  if (VAR16 != (VAR15 *) NULL)
    VAR16=FUN34(VAR16);
  FUN25(VAR6);


  {
    VAR1 *VAR132;
    ssize_t VAR133=0;

    
    VAR132=VAR6;
    VAR6=NULL;
    while (VAR132 != (VAR1 *) NULL)
      {
        VAR1 *VAR134=VAR132;
        if ((VAR132->VAR110 == 0) || (VAR132->VAR109 == 0)) {
          VAR132=VAR132->VAR135;
          if (VAR134 == VAR7)
            VAR7=(VAR1 *) NULL;
          FUN22(&VAR134);
        } else {
          VAR6=VAR132;
          VAR132=VAR132->VAR135;
        }
      }

    
    for (VAR132=VAR6; VAR132 != (VAR1 *) NULL; VAR132=VAR132->VAR131)
      VAR132->VAR133=VAR133++;
  }

  if(VAR17 != NULL)  
  {
    if(VAR17->VAR129)
    {
      fclose(VAR17->VAR129);
      VAR17->VAR129 = NULL;
      (void) FUN49(VAR17->VAR130);
    }
    FUN12(VAR17);
    VAR17 = NULL;
  }
  if (VAR26) (void)FUN2(VAR37,FUN3(),"");
  if ((VAR6 != VAR7) && (VAR7 != (VAR1 *) NULL))
    VAR7=FUN11(VAR7);
  if (VAR6 == (VAR1 *) NULL)
    FUN8(VAR41,"")
  return(VAR6);
}