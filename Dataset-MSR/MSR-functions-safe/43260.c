void CLASS FUN1 (int VAR1)
{
  int VAR2, VAR3, VAR4[4];

  for (VAR2=2; VAR2 < VAR5-2; VAR2++) {
    if (!FUN2(VAR2)) continue;
    for (VAR3=1; VAR3 < VAR6-1; VAR3+=4) {
      VAR4[0] = FUN3(VAR2-1,VAR3-1);
      VAR4[1] = FUN3(VAR2-1,VAR3+1);
      VAR4[2] = FUN3(VAR2+1,VAR3-1);
      VAR4[3] = FUN3(VAR2+1,VAR3+1);
      FUN3(VAR2,VAR3) = FUN4(VAR4);
    }
    for (VAR3=2; VAR3 < VAR6-2; VAR3+=4)
      if (FUN2(VAR2-2) || FUN2(VAR2+2))
	FUN3(VAR2,VAR3) = (FUN3(VAR2,VAR3-2) + FUN3(VAR2,VAR3+2)) >> 1;
      else {
	VAR4[0] = FUN3(VAR2,VAR3-2);
	VAR4[1] = FUN3(VAR2,VAR3+2);
	VAR4[2] = FUN3(VAR2-2,VAR3);
	VAR4[3] = FUN3(VAR2+2,VAR3);
	FUN3(VAR2,VAR3) = FUN4(VAR4);
      }
  }
}