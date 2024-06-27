static VAR1 *FUN1(const VAR2 *VAR3,
  VAR4 *VAR5)
{
  VAR1
    *VAR6;

  register VAR7
    VAR8;

  register VAR9
    *VAR10;

  VAR7
    VAR11;

  assert(VAR3 != (const VAR2 *) NULL);
  assert(VAR3->VAR12 == VAR13);
  if (VAR3->VAR14 != VAR15)
    (void) FUN2(VAR16,FUN3(),"",
      VAR3->VAR17);
  assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR12 == VAR13);
  VAR6=FUN4(VAR3);
  {
    VAR18
      VAR19;

    VAR20
      VAR21;

    FUN5(NULL);
     VAR19=(VAR18) FUN6(VAR22);
     VAR21=(VAR20) FUN6(VAR23);
     FUN7();

    if ( VAR19 == NULL )


       FUN8(VAR24,"");
     {
       VAR25
        VAR26;

      VAR27
        VAR28;

      VAR18
        VAR29,
        VAR30;

      VAR31
        VAR32,
        VAR33;

      VAR34
        *VAR35,
        *VAR36;

      
      VAR33=FUN9(NULL);
      VAR30=(VAR18) FUN10(VAR33,VAR19);
       FUN11(VAR19,sizeof(VAR27),(VAR37) &VAR28);
       if ((VAR6->VAR38 == 0) || (VAR6->VAR39 == 0))
         {

          VAR6->VAR39=VAR28.VAR40;
           VAR6->VAR38=VAR28.VAR41;














         }
       
      (void) FUN12(&VAR26,0,sizeof(VAR25));
      VAR26.VAR42.VAR43=sizeof(VAR44);
      VAR26.VAR42.VAR45=(VAR46) VAR6->VAR38;
      VAR26.VAR42.VAR47=(-1)*(VAR46) VAR6->VAR39;
      VAR26.VAR42.VAR48=1;
      VAR26.VAR42.VAR49=32;
      VAR26.VAR42.VAR50=VAR51;
      VAR32=FUN13(NULL);
      if (VAR32 == 0)
        FUN8(VAR24,"");
      VAR29=FUN14(VAR32,&VAR26,VAR52,(void **) &VAR36,
        NULL,0);
      FUN15(NULL,VAR32);
      if (VAR29 == 0)
        FUN8(VAR24,"");
      
      VAR32=FUN9(NULL);
      if (VAR32 == 0)
        {
          FUN16(VAR29);
          FUN8(VAR24,"");
        }
      VAR30=(VAR18) FUN10(VAR32,VAR29);
      if (VAR30 == 0)
        {
          FUN17(VAR32);
          FUN16(VAR29);
          FUN8(VAR24,"");
        }
      if (VAR21 != NULL)
      {
        
        FUN18(VAR32, VAR21, VAR53);
        FUN19(VAR32);
      }
      
      FUN20(VAR32,0,0,(int) VAR6->VAR38,(int) VAR6->VAR39,VAR33,0,0,VAR54);
      
      VAR35=VAR36;
      for (VAR11=0; VAR11 < (VAR7) VAR6->VAR39; VAR11++)
      {
        VAR10=FUN21(VAR6,0,VAR11,VAR6->VAR38,1,VAR5);
        if (VAR10 == (VAR9 *) NULL)
          break;
        for (VAR8=0; VAR8 < (VAR7) VAR6->VAR38; VAR8++)
        {
          FUN22(VAR10,FUN23(VAR35->VAR55));
          FUN24(VAR10,FUN23(VAR35->VAR56));
          FUN25(VAR10,FUN23(VAR35->VAR57));
          FUN26(VAR10,VAR58);
          VAR35++;
          VAR10++;
        }
        if (FUN27(VAR6,VAR5) == VAR15)
          break;
      }
      FUN17(VAR32);
      FUN16(VAR29);
    }
  }
  (void) FUN28(VAR6);
  return(FUN29(VAR6));
}