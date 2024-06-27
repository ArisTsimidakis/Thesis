static VAR1 *FUN1(const VAR2 *VAR3,
  VAR4 *VAR5)
{
  char
    VAR6[VAR7],
    *VAR8;

  const char
    *VAR9;

  VAR10
    *VAR11;

  VAR1
    *VAR12;

  VAR13
    VAR14;

  VAR15
    VAR16;

  VAR17
    VAR18,
    VAR19;

  
  assert(VAR3 != (const VAR2 *) NULL);
  assert(VAR3->VAR20 == VAR21);
  if (VAR3->VAR22 != VAR23)
    (void) FUN2(VAR24,FUN3(),"",
      VAR3->VAR25);
  assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR20 == VAR21);
  VAR12=FUN4(VAR3);
  (void) FUN5(VAR12,"");
  VAR8=FUN6(VAR3,VAR12,VAR3->VAR25);
  (void) FUN7(VAR12,"",VAR8);
  VAR8=FUN8(VAR8);
  VAR9=FUN9(VAR12,"");
  VAR11=FUN10(VAR3,(VAR10 *) NULL);
  VAR11->VAR26=FUN11(VAR9);
  VAR16.VAR19=0;
  VAR16.VAR27=0.0;
  VAR14=FUN12(VAR12,VAR11,&VAR16);
  if ((VAR12->VAR28 == 0) && (VAR12->VAR29 == 0))
    {
      VAR12->VAR28=(VAR17) (VAR16.VAR19+VAR11->VAR30+0.5);
      VAR12->VAR29=(VAR17) FUN13(VAR16.VAR18+VAR11->VAR30+0.5);
    }
  else
    if (((VAR12->VAR28 == 0) || (VAR12->VAR29 == 0)) ||
        (FUN14(VAR3->VAR31) < VAR32))
      {
        double
          VAR33,
          VAR34;

        
        for ( ; ; VAR11->VAR31*=2.0)
        {
          (void) FUN15(VAR6,VAR7,"",
            -VAR16.VAR35.VAR36,VAR16.VAR27);
          if (VAR11->VAR37 == VAR38)
            (void) FUN16(&VAR11->VAR6,VAR6);
          VAR14=FUN12(VAR12,VAR11,&VAR16);
          (void) VAR14;
          VAR19=(VAR17) FUN13(VAR16.VAR19+VAR11->VAR30+0.5);
          VAR18=(VAR17) FUN13(VAR16.VAR18+VAR11->VAR30+0.5);
          if ((VAR12->VAR28 != 0) && (VAR12->VAR29 != 0))
            {
              if ((VAR19 >= VAR12->VAR28) && (VAR18 >= VAR12->VAR29))
                break;
            }
          else
            if (((VAR12->VAR28 != 0) && (VAR19 >= VAR12->VAR28)) ||
                ((VAR12->VAR29 != 0) && (VAR18 >= VAR12->VAR29)))
              break;
        }
        VAR33=VAR11->VAR31;
        for (VAR34=1.0; (VAR33-VAR34) > 0.5; )
        {
          VAR11->VAR31=(VAR34+VAR33)/2.0;
          (void) FUN15(VAR6,VAR7,"",
            -VAR16.VAR35.VAR36,VAR16.VAR27);
          if (VAR11->VAR37 == VAR38)
            (void) FUN16(&VAR11->VAR6,VAR6);
          VAR14=FUN12(VAR12,VAR11,&VAR16);
          VAR19=(VAR17) FUN13(VAR16.VAR19+VAR11->VAR30+0.5);
          VAR18=(VAR17) FUN13(VAR16.VAR18+VAR11->VAR30+0.5);
          if ((VAR12->VAR28 != 0) && (VAR12->VAR29 != 0))
            {
              if ((VAR19 < VAR12->VAR28) && (VAR18 < VAR12->VAR29))
                VAR34=VAR11->VAR31+0.5;
              else
                VAR33=VAR11->VAR31-0.5;
            }
          else
            if (((VAR12->VAR28 != 0) && (VAR19 < VAR12->VAR28)) ||
                ((VAR12->VAR29 != 0) && (VAR18 < VAR12->VAR29)))
              VAR34=VAR11->VAR31+0.5;
            else
              VAR33=VAR11->VAR31-0.5;
        }
        VAR11->VAR31=(VAR34+VAR33)/2.0-0.5;
      }
  VAR14=FUN12(VAR12,VAR11,&VAR16);
  if (VAR14 == VAR23)
    {
      FUN17(VAR5,&VAR12->VAR5);
      VAR12=FUN18(VAR12);
      return((VAR1 *) NULL);
    }
  if (VAR12->VAR28 == 0)
    VAR12->VAR28=(VAR17) (VAR16.VAR19+VAR11->VAR30+0.5);
  if (VAR12->VAR28 == 0)
    VAR12->VAR28=(VAR17) (VAR11->VAR31+VAR11->VAR30+0.5);
  if (VAR12->VAR29 == 0)
    VAR12->VAR29=(VAR17) (VAR16.VAR27-VAR16.VAR39+
       VAR11->VAR30+0.5);
   if (VAR12->VAR29 == 0)
     VAR12->VAR29=(VAR17) (VAR11->VAR31+VAR11->VAR30+0.5);












   if (VAR11->VAR37 == VAR38)
     {
       (void) FUN15(VAR6,VAR7,"",
        -VAR16.VAR35.VAR36+VAR11->VAR30/2.0,VAR16.VAR27+
        VAR11->VAR30/2.0);
      (void) FUN16(&VAR11->VAR6,VAR6);
    }
  if (VAR11->VAR40 == VAR41)
    {
      if (VAR11->VAR40 == VAR41)
        (void) FUN15(VAR6,VAR7,"",
          VAR12->VAR28-(VAR16.VAR35.VAR42+VAR11->VAR30/2.0),
          VAR16.VAR27+VAR11->VAR30/2.0);
      (void) FUN16(&VAR11->VAR6,VAR6);
    }
  if (FUN19(VAR12) == VAR23)
    {
      FUN17(VAR5,&VAR12->VAR5);
      VAR12=FUN18(VAR12);
      return((VAR1 *) NULL);
    }
  (void) FUN20(VAR12,VAR11);
  if (VAR3->VAR31 == 0.0)
    {
      char
        VAR31[VAR7];

      (void) FUN15(VAR31,VAR7,"",
        VAR11->VAR31);
      (void) FUN7(VAR12,"",VAR31);
    }
  VAR11=FUN21(VAR11);
  return(FUN22(VAR12));
}