MagickExport VAR1 FUN1(const VAR2 *VAR3,
  VAR4 *VAR5,const char *VAR6,VAR7 *VAR8)
{
#define VAR9  ""

  VAR7
    *VAR10;

  VAR2
    *VAR11;

  VAR1
    VAR12;

  VAR13
    VAR14;

  VAR15
    VAR16;

  VAR17
    VAR18;

  VAR19
    VAR20;

  register VAR4
    *VAR21;

  assert(VAR3 != (const VAR2 *) NULL);
  assert(VAR3->VAR22 == VAR23);
  assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR22 == VAR23);
  if (VAR5->VAR24 != VAR25)
    (void) FUN2(VAR26,FUN3(),"",VAR5->VAR6);
  assert(VAR8 != (VAR7 *) NULL);
  VAR11=FUN4(VAR3);
  *VAR11->VAR27='';
  VAR5=FUN5(VAR5);
  if (VAR6 != (const char *) NULL)
    for (VAR21=VAR5; VAR21 != (VAR4 *) NULL; VAR21=FUN6(VAR21))
      (void) FUN7(VAR21->VAR6,VAR6,VAR28);
  (void) FUN7(VAR11->VAR6,VAR5->VAR6,VAR28);
  VAR10=FUN8();
  (void) FUN9(VAR11,(unsigned int) FUN10(VAR5),
    VAR10);
  VAR10=FUN11(VAR10);
  if (*VAR11->VAR27 == '')
     (void) FUN7(VAR11->VAR27,VAR5->VAR27,VAR28);
   VAR21=VAR5;
   for ( ; FUN6(VAR21) != (VAR4 *) NULL; VAR21=FUN6(VAR21))

    if (VAR21->VAR29 >= FUN6(VAR21)->VAR29)
















       {
         register VAR30
           VAR31;

        
        VAR31=(VAR30) VAR5->VAR29;
        for (VAR21=VAR5; VAR21 != (VAR4 *) NULL; VAR21=FUN6(VAR21))
           VAR21->VAR29=(VAR32) VAR31++;
         break;
       }


   
  VAR20=VAR33;
  VAR16=(VAR15) NULL;
  VAR14=0;
  VAR18=FUN10(VAR5);
  for (VAR21=VAR5; VAR21 != (VAR4 *) NULL; VAR21=FUN6(VAR21))
  {
    if (VAR18 != 1)
      VAR16=FUN12(VAR21,(VAR15) NULL,
        VAR21->VAR34);
    VAR20&=FUN13(VAR11,VAR21,VAR8);
    if (VAR18 != 1)
      (void) FUN12(VAR21,VAR16,VAR21->VAR34);
    if (VAR11->VAR35 != VAR25)
      break;
    if (VAR18 != 1)
      {
        VAR12=FUN14(VAR21,VAR9,VAR14++,VAR18);
        if (VAR12 == VAR25)
          break;
      }
  }
  VAR11=FUN15(VAR11);
  return(VAR20 != 0 ? VAR33 : VAR25);
}