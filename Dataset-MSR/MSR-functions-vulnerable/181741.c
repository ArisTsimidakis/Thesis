static VAR1 *FUN1(const VAR2 *VAR3,
  VAR4 *VAR5)
{
  VAR1
    *VAR6;

  VAR7
    VAR8;

  VAR9
    VAR10,
    VAR11;

  VAR12
    VAR13;

  
  assert(VAR3 != (const VAR2 *) NULL);
  assert(VAR3->VAR14 == VAR15);
  if (VAR3->VAR16 != VAR17)
    (void) FUN2(VAR18,FUN3(),"",
      VAR3->VAR19);
  assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR14 == VAR15);
  VAR6=FUN4(VAR3);
  VAR11=0;
  if (*VAR3->VAR19 != '')
    VAR11=FUN5(VAR3->VAR19);
  if (VAR11 < 2)
    VAR11=8;
  VAR8=VAR20;
   VAR10=VAR11*VAR11;
   VAR6->VAR21=(VAR9) (VAR11*VAR10);
   VAR6->VAR22=(VAR9) (VAR11*VAR10);












   for (VAR13=0; VAR13 < (VAR12) VAR6->VAR22; VAR13+=(VAR12) VAR11)
   {
     VAR12
      VAR23,
      VAR24,
      VAR25;

    register VAR26
      *restrict VAR27;
 
     if (VAR8 == VAR17)
       continue;

    VAR27=FUN6(VAR6,0,VAR13,VAR6->VAR21,(VAR9) VAR11,

      VAR5);


     if (VAR27 == (VAR26 *) NULL)
       {
         VAR8=VAR17;
        continue;
      }
    VAR23=VAR13/(VAR12) VAR11;
    for (VAR24=0; VAR24 < (VAR12) VAR10; VAR24++)
    {
      for (VAR25=0; VAR25 < (VAR12) VAR10; VAR25++)
      {
        FUN7(VAR27,FUN8((VAR28)
          (VAR29*VAR25/(VAR10-1.0))));
        FUN9(VAR27,FUN8((VAR28)
          (VAR29*VAR24/(VAR10-1.0))));
        FUN10(VAR27,FUN8((VAR28)
          (VAR29*VAR23/(VAR10-1.0))));
        FUN11(VAR27,VAR30);
        VAR27++;
      }
    }
    if (FUN12(VAR6,VAR5) == VAR17)
      VAR8=VAR17;
  }
  return(FUN13(VAR6));
}