FUN1(VAR1 *VAR2, int VAR3)
 {
     VAR4 *VAR5, *VAR6;
     int VAR7, VAR8;
     if (VAR3 < 0 || VAR3 >= VAR2->VAR9)

        return;


     VAR5 = VAR2->VAR10 + VAR2->VAR11;
     VAR6 = VAR5 + 4 + VAR3 * 8;
     VAR7 = FUN2(VAR6 + 0);
     VAR8 = FUN2(VAR6 + 2);
     VAR2->VAR12 = VAR2->VAR11 + FUN3(VAR6 + 4);








     VAR2->VAR13 = (VAR7 == 3 && VAR8 == 0);


 }