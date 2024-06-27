static VAR1 FUN1(VAR2 *VAR3,VAR4 *VAR5,
  int VAR6,VAR7 *VAR8)
{
  register VAR9
    VAR10;

  VAR11
    VAR12;

  VAR13
    VAR14,
    VAR15;

   












   if (VAR5->VAR16 & VAR17
       && (VAR5->VAR16 & VAR18
           || VAR5->VAR19 & VAR20))
     {

      if (FUN2(VAR3) != VAR21)

        {

          FUN3(VAR8,VAR22,"",

            VAR3->VAR23);

          return(VAR21);

        }
       VAR15 = FUN4(VAR5->VAR24);
       VAR14 = FUN4(VAR5->VAR25);
 
      
      for (VAR10 = 1; (VAR10 < (VAR9) VAR5->VAR26) && VAR15 && VAR14; VAR10++)
      {
        VAR12 = (VAR11) ((VAR15 + 3) / 4) * ((VAR14 + 3) / 4) * VAR6;
        (void) FUN5(VAR3, VAR12, VAR27);

        VAR15 = FUN4(VAR15);
        VAR14 = FUN4(VAR14);
      }
    }
  return(VAR28);
}