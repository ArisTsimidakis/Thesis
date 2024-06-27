static VAR1 *FUN1(const VAR2 *VAR3,VAR4 *VAR5)
{
  VAR1
    *VAR6;

  VAR7
    VAR8;

  
  assert(VAR3 != (const VAR2 *) NULL);
  assert(VAR3->VAR9 == VAR10);
  if (VAR3->VAR11 != VAR12)
    (void) FUN2(VAR13,FUN3(),"",
      VAR3->VAR14);
  assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR9 == VAR10);
  VAR6=FUN4(VAR3);
  VAR8=FUN5(VAR3,VAR6,VAR15,VAR5);
  if (VAR8 == VAR12)
    {
      VAR6=FUN6(VAR6);
      return((VAR1 *) NULL);
    }
  
  VAR6->VAR16=VAR17;
  if (VAR6->VAR18 == 0)
    VAR6->VAR18=2592;
  if (VAR6->VAR19 == 0)
    VAR6->VAR19=3508;
  VAR6->VAR20=8;
  if (FUN7(VAR6,2) == VAR12)
    FUN8(VAR21,"");
  
  VAR6->VAR22[0].VAR23=VAR24;
  VAR6->VAR22[0].VAR25=VAR24;
  VAR6->VAR22[0].VAR26=VAR24;
  VAR6->VAR22[1].VAR23=(VAR27) 0;
  VAR6->VAR22[1].VAR25=(VAR27) 0;
  VAR6->VAR22[1].VAR26=(VAR27) 0;
  if (VAR3->VAR28 != VAR12)
    {
       (void) FUN9(VAR6);
       return(FUN10(VAR6));
     }












   VAR8=FUN11(VAR6);
   if (VAR8 == VAR12)
     FUN8(VAR29,"");
  if (FUN12(VAR6) != VAR12)
    FUN13(VAR5,VAR29,"",
      VAR6->VAR14);
  (void) FUN9(VAR6);
  return(FUN10(VAR6));
}