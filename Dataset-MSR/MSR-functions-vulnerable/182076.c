static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)




 {
   register VAR6
     VAR7;

  VAR8
    VAR9;

  VAR10
    VAR11,
    VAR12;

  
  if (VAR4->VAR13 & VAR14
       && (VAR4->VAR13 & VAR15
           || VAR4->VAR16 & VAR17))
     {












       VAR12 = FUN2(VAR4->VAR18);
       VAR11 = FUN2(VAR4->VAR19);
 
      
      for (VAR7 = 1; (VAR7 < (VAR6) VAR4->VAR20) && VAR12 && VAR11; VAR7++)
      {
        VAR9 = (VAR8) ((VAR12 + 3) / 4) * ((VAR11 + 3) / 4) * VAR5;
        (void) FUN3(VAR2, VAR9, VAR21);

        VAR12 = FUN2(VAR12);
         VAR11 = FUN2(VAR11);
       }
     }


 }