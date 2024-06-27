static VAR1 FUN1(const VAR2 *VAR3,
  VAR4 *VAR5)
{
  char
    VAR6[VAR7];

  VAR8
    *VAR9;

  VAR4
    *VAR10;

  VAR2
    *VAR11;

  int
    VAR12;

  VAR1
    VAR13;

  register VAR14
    VAR15;

  VAR14
    VAR16;

  VAR17
    *VAR18;

  VAR19
    *VAR20,
    VAR21;

  unsigned char
    *VAR22;

  
  assert(VAR3 != (const VAR2 *) NULL);
  assert(VAR3->VAR23 == VAR24);
  assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR23 == VAR24);
  if (VAR5->VAR25 != VAR26)
    (void) FUN2(VAR27,FUN3(),"",VAR5->VAR6);
  VAR13=FUN4(VAR3,VAR5,VAR28,&VAR5->VAR29);
  if (VAR13 == VAR26)
    return(VAR13);
  VAR10=FUN5(VAR5,0,0,VAR30,&VAR5->VAR29);
  if (VAR10 == (VAR4 *) NULL)
    {
      (void) FUN6(VAR5);
      return(VAR26);
    }
  VAR10->VAR31=VAR32;
  VAR9=(VAR8 *) NULL;
  VAR12=FUN7(VAR6);
  if (VAR12 != -1)
    VAR9=FUN8(VAR12,"");
  if ((VAR12 == -1) || (VAR9 == (VAR8 *) NULL))
    {
      FUN9(&VAR5->VAR29,VAR33,
        "",VAR6);
      return(VAR26);
    }
  (void) FUN10(VAR10->VAR6,VAR7,"",
    VAR6);
   (void) FUN11(VAR10,VAR34);
   VAR11=FUN12((VAR2 *) NULL);
   FUN13(VAR11,VAR9);

  (void) FUN11(VAR5,VAR34);
   (void) FUN14(VAR5,1);


   VAR11->VAR35=VAR36;
   VAR11->VAR37=VAR34;
   (void) FUN15(VAR11,"","");
  VAR13=FUN16(VAR11,VAR10);
  (void) FUN17(VAR9);
  VAR11=FUN18(VAR11);
  if (VAR13 == VAR26)
    {
      FUN19(&VAR5->VAR29,&VAR10->VAR29);
      VAR10=FUN20(VAR10);
      (void) fclose(VAR9);
      (void) FUN21(VAR6);
      return(VAR26);
    }
  VAR18=FUN22(VAR6,"");
  if (VAR18 == (VAR17 *) NULL)
    {
      VAR10=FUN20(VAR10);
      (void) fclose(VAR9);
      (void) FUN21(VAR6);
      FUN9(&VAR5->VAR29,VAR33,"",
        VAR3->VAR6);
      return(VAR26);
    }
  
  if (FUN23(VAR18,VAR38,&VAR20) != 1)
    {
      FUN24(VAR18);
      VAR10=FUN20(VAR10);
      (void) fclose(VAR9);
      (void) FUN21(VAR6);
      return(VAR26);
    }
  VAR21=VAR20[0];
  for (VAR15=1; VAR15 < (VAR14) FUN25(VAR18); VAR15++)
    if (VAR20[VAR15] > VAR21)
      VAR21=VAR20[VAR15];
  VAR22=(unsigned char *) FUN26((VAR39) VAR21,
    sizeof(*VAR22));
  if (VAR22 == (unsigned char *) NULL)
    {
      FUN24(VAR18);
      VAR10=FUN20(VAR10);
      (void) fclose(VAR9);
      (void) FUN21(VAR6);
      FUN27(VAR40,"",
        VAR3->VAR6);
    }
  
  for (VAR15=0; VAR15 < (VAR14) FUN25(VAR18); VAR15++)
  {
    VAR16=(VAR14) FUN28(VAR18,(VAR41) VAR15,VAR22,VAR21);
    if (FUN29(VAR5,(VAR39) VAR16,VAR22) != VAR16)
      VAR13=VAR26;
  }
  VAR22=(unsigned char *) FUN30(VAR22);
  FUN24(VAR18);
  VAR10=FUN20(VAR10);
  (void) fclose(VAR9);
  (void) FUN21(VAR6);
  (void) FUN6(VAR5);
  return(VAR13);
}