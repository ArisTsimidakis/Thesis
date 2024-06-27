static VAR1 FUN1(VAR2 *VAR3,VAR2 *VAR4,
  VAR5 *VAR6,VAR7 *VAR8,size_t VAR9,
  VAR10 *VAR11)
{
  VAR12
    VAR13;

  register VAR12
    VAR14;

  register VAR15
    *VAR16;

  VAR12
    VAR17;

  unsigned char
    *VAR18;

  VAR19
     *VAR20,
     *VAR21;
 

  VAR20=(VAR19 *) FUN2(VAR9,sizeof(*VAR20));




   if (VAR20 == (VAR19 *) NULL)
     FUN3(VAR22,"",
       VAR3->VAR23);
  VAR21=VAR20;
  VAR18=(unsigned char *) VAR20;  
  VAR17=FUN4(VAR3,VAR9,(unsigned char *) VAR20);
  if (VAR17 != (VAR12) VAR9)
    FUN3(VAR24,"",
      VAR3->VAR23);
  for (VAR13=0; VAR13 < (VAR12) VAR4->VAR25; VAR13++)
  {
    VAR16=FUN5(VAR4,0,VAR13,VAR4->VAR26,1,VAR11);
    if (VAR16 == (VAR15 *) NULL)
      break;
    if (VAR6->VAR27 == VAR28)
      {
        for (VAR14=0; VAR14 < (VAR12) VAR4->VAR26; VAR14++)
        {
          FUN6(VAR4,FUN7(*VAR18),VAR16);
          FUN8(VAR4,FUN7((unsigned char)
            VAR8->VAR29),VAR16);
          VAR18++;
          VAR16+=FUN9(VAR4);
        }
      }
    else
      if (VAR6->VAR27 == VAR30)
        {
          for (VAR14=0; VAR14 < (VAR12) VAR4->VAR26; VAR14++)
          {
            FUN10(VAR4,FUN7(VAR20->VAR31),VAR16);
            FUN11(VAR4,FUN7(VAR20->VAR32),VAR16);
            FUN12(VAR4,FUN7(VAR20->VAR33),VAR16);
            FUN8(VAR4,VAR20->VAR29 == 255U ? VAR34 :
              FUN7((unsigned char) VAR8->VAR29),VAR16);
            VAR20++;
            VAR16+=FUN9(VAR4);
          }
        }
     if (FUN13(VAR4,VAR11) == VAR35)
       break;
  }
  VAR21=(VAR19 *) FUN14(VAR21);
  return VAR36;
}