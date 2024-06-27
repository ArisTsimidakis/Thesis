static VAR1 *FUN1(const VAR2 *VAR3,VAR4 *VAR5)
{
#VAR6 FUN2(VAR7,VAR8) \
{ \
  if (VAR9 != NULL) \
    VAR9=FUN3(VAR9); \
  if (VAR10 != NULL) \
    VAR10=FUN4(VAR10); \
  FUN5(VAR7,VAR8); \
}

  VAR1 *VAR11,*VAR9;
  VAR2 *VAR10;
  MagickBooleanType VAR12;

  VAR13
    VAR14;

  size_t VAR15;
  unsigned char VAR16,VAR17,VAR18;
  CUTHeader  VAR19;
  CUTPalHeader VAR20;
  ssize_t VAR21;
  ssize_t VAR22,VAR23;
  ssize_t VAR24;
  unsigned char *VAR25=NULL,*VAR26;
  register VAR27 *VAR28;

  
  assert(VAR3 != (const VAR2 *) NULL);
  assert(VAR3->VAR29 == VAR30);
  if (VAR3->VAR31 != VAR32)
    (void) FUN6(VAR33,FUN7(),"",
      VAR3->VAR34);
  assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR29 == VAR30);
  VAR11=FUN8(VAR3,VAR5);
  VAR12=FUN9(VAR3,VAR11,VAR35,VAR5);
  if (VAR12 == VAR32)
    {
      VAR11=FUN10(VAR11);
      return((VAR1 *) NULL);
    }
  
  VAR9=NULL;
  VAR10=NULL;
  VAR19.VAR36=FUN11(VAR11);
  VAR19.VAR37=FUN11(VAR11);
  VAR19.VAR38=FUN11(VAR11);

  if (VAR19.VAR36==0 || VAR19.VAR37==0 || VAR19.VAR38!=0)
    VAR39:  FUN2(VAR40,"");

  
  VAR15=FUN11(VAR11);
  VAR16=(unsigned char) FUN12(VAR11);
  VAR18=VAR16 & 0x7F;
  VAR24=0;
  while((int) VAR18!=0)  
    {
      VAR22=1;
      if((int) VAR16<0x80) VAR22=(VAR41) VAR18;
      VAR14=FUN13(VAR11,FUN14(VAR11)+VAR22,VAR42);
      if (VAR14 < 0)
        FUN2(VAR40,"");
      if(FUN15(VAR11) != VAR32) goto VAR39;  
      VAR15-=VAR22+1;
      VAR24+=(VAR41) VAR18;

      VAR16=(unsigned char) FUN12(VAR11);
      if(FUN15(VAR11) != VAR32)  goto VAR39;  
      VAR18=VAR16 & 0x7F;
    }
  if(VAR15!=1) goto VAR39;  
  VAR22=0;        
  if(VAR24==(int) VAR19.VAR36)   VAR22=8;
  if(2*VAR24==(int) VAR19.VAR36) VAR22=4;
  if(8*VAR24==(int) VAR19.VAR36) VAR22=1;
  if(VAR22==0) goto VAR39;    
  VAR21=VAR22;

  VAR11->VAR43=VAR19.VAR36;
  VAR11->VAR44=VAR19.VAR37;
  VAR11->VAR21=8;
  VAR11->VAR45=(VAR46) (FUN16(1UL*VAR22)+1);

  if (VAR3->VAR47 != VAR32) goto VAR48;
  VAR12=FUN17(VAR11,VAR11->VAR43,VAR11->VAR44,VAR5);
  if (VAR12 == VAR32)
    return(FUN10(VAR11));

  
  if ((VAR10=FUN18(VAR3)) == NULL) goto VAR49;


  VAR22=(VAR41) strlen(VAR10->VAR34);
  VAR23=VAR22;
  while(--VAR22>0)
    {
      if(VAR10->VAR34[VAR22]=='')
        {
          break;
        }
      if(VAR10->VAR34[VAR22]=='' || VAR10->VAR34[VAR22]=='' ||
         VAR10->VAR34[VAR22]=='' )
        {
          VAR22=VAR23;
          break;
        }
    }

  (void) FUN19(VAR10->VAR34+VAR22,"",(VAR46)
    (VAR50-VAR22));
  if((VAR10->VAR51=FUN20(VAR10->VAR34,""))==NULL)
    {
      (void) FUN19(VAR10->VAR34+VAR22,"",(VAR46)
        (VAR50-VAR22));
      if((VAR10->VAR51=FUN20(VAR10->VAR34,""))==NULL)
        {
          VAR10->VAR34[VAR22]='';
          if((VAR10->VAR51=FUN20(VAR10->VAR34,""))==NULL)
            {
              VAR10=FUN4(VAR10);
              VAR10=NULL;
              goto VAR49;
            }
        }
    }

  if( (VAR9=FUN8(VAR10,VAR5))==NULL ) goto VAR49;
  VAR12=FUN9(VAR10,VAR9,VAR35,VAR5);
  if (VAR12 == VAR32)
    {
    VAR52:
      VAR9=FUN3(VAR9);
      VAR9=NULL;
      goto VAR49;
    }


  if(VAR9!=NULL)
    {
      (void) FUN21(VAR9,2,(unsigned char *) VAR20.VAR53);
      if(FUN22(VAR20.VAR53,"",2) != 0) goto VAR52;
      VAR20.VAR54=FUN11(VAR9);
      VAR20.VAR55=FUN11(VAR9);
      VAR20.VAR56=(char) FUN12(VAR9);
      VAR20.VAR57=(char) FUN12(VAR9);
      VAR20.VAR58=FUN11(VAR9);
      VAR20.VAR59=FUN11(VAR9);
      VAR20.VAR60=FUN11(VAR9);
      VAR20.VAR61=FUN11(VAR9);
      VAR20.VAR62=FUN11(VAR9);
      VAR20.VAR63=FUN11(VAR9);
      (void) FUN21(VAR9,20,(unsigned char *) VAR20.VAR64);
      if (FUN15(VAR11))
        FUN2(VAR40,"");

      if(VAR20.VAR60<1) goto VAR52;
      VAR11->VAR45=VAR20.VAR60+1;
      if (FUN23(VAR11,VAR11->VAR45,VAR5) == VAR32) goto VAR65;

      if(VAR20.VAR61==0) VAR20.VAR61=(unsigned int) VAR66;  
      if(VAR20.VAR62==0) VAR20.VAR62=(unsigned int) VAR66;
      if(VAR20.VAR63==0) VAR20.VAR63=(unsigned int) VAR66;

      for(VAR22=0;VAR22<=(int) VAR20.VAR60;VAR22++)
        {      
          VAR23=(VAR41) FUN14(VAR9);
          if((VAR23 % 512)>512-6)
            {
              VAR23=((VAR23 / 512)+1)*512;
              VAR14=FUN13(VAR9,VAR23,VAR42);
              if (VAR14 < 0)
                FUN5(VAR40,"");
            }
          VAR11->VAR67[VAR22].VAR68=(VAR27) FUN11(VAR9);
          if (VAR66 != (VAR27) VAR20.VAR61)
            {
              VAR11->VAR67[VAR22].VAR68=FUN24(((double)
                VAR11->VAR67[VAR22].VAR68*VAR66+(VAR20.VAR61>>1))/
                VAR20.VAR61);
            }
          VAR11->VAR67[VAR22].VAR69=(VAR27) FUN11(VAR9);
          if (VAR66 != (VAR27) VAR20.VAR62)
            {
              VAR11->VAR67[VAR22].VAR69=VAR70
                (((double) VAR11->VAR67[VAR22].VAR69*VAR66+(VAR20.VAR62>>1))/VAR20.VAR62);
            }
          VAR11->VAR67[VAR22].VAR71=(VAR27) FUN11(VAR9);
          if (VAR66 != (VAR27) VAR20.VAR63)
            {
              VAR11->VAR67[VAR22].VAR71=VAR70
                (((double)VAR11->VAR67[VAR22].VAR71*VAR66+(VAR20.VAR63>>1))/VAR20.VAR63);
            }

        }
      if (FUN15(VAR11))
        FUN2(VAR40,"");
    }



 VAR49:
  if(VAR9==NULL)
    {

      VAR11->VAR45=256;
      if (FUN23(VAR11,VAR11->VAR45,VAR5) == VAR32)
        {
        VAR65:
          FUN2(VAR72,"");
            }

      for (VAR22=0; VAR22 < (VAR41)VAR11->VAR45; VAR22++)
        {
          VAR11->VAR67[VAR22].VAR68=FUN25((unsigned char) VAR22);
          VAR11->VAR67[VAR22].VAR69=FUN25((unsigned char) VAR22);
          VAR11->VAR67[VAR22].VAR71=FUN25((unsigned char) VAR22);
        }
    }


  
   VAR25=(unsigned char *) FUN26((VAR46) VAR24,
     sizeof(*VAR25));  
   if(VAR25==NULL) goto VAR65;


 
   VAR14=FUN13(VAR11,6 ,VAR42);
   if (VAR14 < 0)
    {
      if (VAR9 != NULL)
        VAR9=FUN3(VAR9);
      if (VAR10 != NULL)
        VAR10=FUN4(VAR10);
      VAR25=(unsigned char *) FUN27(VAR25);
      FUN5(VAR40,"");
    }
  for (VAR22=0; VAR22 < (int) VAR19.VAR37; VAR22++)
  {
      VAR15=FUN11(VAR11);

      VAR26=VAR25;
      VAR23=VAR24;

      VAR16=(unsigned char) FUN12(VAR11);
      VAR18=VAR16 & 0x7F;

      while ((int) VAR18 != 0)
      {
          if((VAR41) VAR18>VAR23)
            {    
              VAR18=(unsigned char) VAR23;
              if(VAR23==0)
                {
                  break;
                }
            }

          if((int) VAR16>0x80)
            {
              VAR17=(unsigned char) FUN12(VAR11);
              (void) memset(VAR26,(int) VAR17,(VAR46) VAR18);
            }
          else {
            (void) FUN21(VAR11,(VAR46) VAR18,VAR26);
          }

          VAR26+=(int) VAR18;
          VAR23-=(int) VAR18;

          if (FUN15(VAR11) != VAR32) goto VAR48;  
          VAR16=(unsigned char) FUN12(VAR11);
          VAR18=VAR16 & 0x7F;
        }

      FUN28(VAR11,VAR21,VAR25,VAR22,VAR5);
    }
  (void) FUN29(VAR11,VAR5);


  

  if(VAR9==NULL)
    {    
      if ((VAR11->VAR73 == VAR74) &&
          (FUN30(VAR11,VAR5) != VAR32))
        {
          if(FUN31(VAR11,VAR5)==2)
            {
              for (VAR22=0; VAR22 < (VAR41)VAR11->VAR45; VAR22++)
                {
                  register VAR27
                    VAR75;
                  VAR75=FUN25((unsigned char) VAR22);
                  if(VAR11->VAR67[VAR22].VAR68!=VAR75) goto VAR48;
                  if(VAR11->VAR67[VAR22].VAR69!=VAR75) goto VAR48;
                  if(VAR11->VAR67[VAR22].VAR71!=VAR75) goto VAR48;
                }

              VAR11->VAR67[1].VAR68=VAR11->VAR67[1].VAR69=
                VAR11->VAR67[1].VAR71=VAR66;
              for (VAR22=0; VAR22 < (VAR41)VAR11->VAR44; VAR22++)
                {
                  VAR28=FUN32(VAR11,0,VAR22,VAR11->VAR43,1,VAR5);
                  if (VAR28 == (VAR27 *) NULL)
                    break;
                  for (VAR23=0; VAR23 < (VAR41)VAR11->VAR43; VAR23++)
                    {
                      if (FUN33(VAR11,VAR28) == FUN25(1))
                        {
                          FUN34(VAR11,VAR66,VAR28);
                          FUN35(VAR11,VAR66,VAR28);
                          FUN36(VAR11,VAR66,VAR28);
                        }
                      VAR28+=FUN37(VAR11);
                    }
                  if (FUN38(VAR11,VAR5) == VAR32) goto VAR48;
                }
            }
        }
    }

 VAR48:
  if (VAR25 != NULL)
    VAR25=(unsigned char *) FUN27(VAR25);
  if (VAR9 != NULL)
    VAR9=FUN3(VAR9);
  if (VAR10 != NULL)
    VAR10=FUN4(VAR10);
  if (FUN15(VAR11) != VAR32)
    FUN39(VAR5,VAR40,"",
      VAR11->VAR34);
  (void) FUN40(VAR11);
  return(FUN41(VAR11));
}