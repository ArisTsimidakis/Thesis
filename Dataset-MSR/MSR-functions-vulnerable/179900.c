static void FUN1(const VAR1* VAR2,
                                   int VAR3,
                                   int (*VAR4)[2],
                                   int VAR5) {
  int VAR6;
  int VAR7;
  int VAR8;

  if (VAR2->VAR9 & VAR10)
    FUN2();

  for (VAR8 = 0; VAR8 < VAR3; VAR8++) {
    VAR6 = VAR4[VAR8][0];
    VAR7 = VAR4[VAR8][1];

    if (VAR7 < 0) {
      if (VAR8 >= 3)
        continue;
      else {
        
        VAR7 = open("", VAR8 == 0 ? VAR11 : VAR12);
        VAR6 = VAR7;

        if (VAR7 == -1) {
        FUN3(VAR5, -VAR13);
          FUN4("");
          FUN5(127);
        }
      }
    }

    if (VAR8 == VAR7)
      FUN6(VAR7, 0);
    else
      FUN7(VAR7, VAR8);

    if (VAR8 <= 2)
      FUN8(VAR8, 0);

    if (VAR6 != -1)
      FUN9(VAR6);
  }

  for (VAR8 = 0; VAR8 < VAR3; VAR8++) {
    VAR7 = VAR4[VAR8][1];

    if (VAR7 >= 0 && VAR8 != VAR7)
      close(VAR7);
  }

  if (VAR2->VAR14 != NULL && FUN10(VAR2->VAR14)) {
    FUN3(VAR5, -VAR13);
    FUN4("");
     FUN5(127);
   }
 






















   if ((VAR2->VAR9 & VAR15) && FUN11(VAR2->VAR16)) {
     FUN3(VAR5, -VAR13);
     FUN4("");
    FUN5(127);
  }

  if ((VAR2->VAR9 & VAR17) && setuid(VAR2->VAR18)) {
    FUN3(VAR5, -VAR13);
    FUN4("");
    FUN5(127);
  }

  if (VAR2->VAR19 != NULL) {
    VAR20 = VAR2->VAR19;
  }

  execvp(VAR2->VAR21, VAR2->VAR22);
  FUN3(VAR5, -VAR13);
  FUN4("");
  FUN5(127);
}