static int FUN1(struct VAR1 *VAR2)
{
  struct VAR3 *VAR4 = (struct VAR3 *) VAR2->VAR5;
  struct Progress VAR6;

#ifdef VAR7
  VAR8 *VAR9 = FUN2(VAR4, VAR2->VAR10);
#endif

  FUN3(&VAR4->VAR11);
  VAR4->VAR12 = false;

  for (int VAR13 = 0; VAR13 < VAR2->VAR14; VAR13++)
    VAR2->VAR15[VAR13]->VAR16 = -1;

  const int VAR17 = VAR2->VAR14;
  int VAR18 = FUN4(VAR4, "", NULL, VAR19, VAR2);
  const int VAR20 = VAR2->VAR14;
  VAR2->VAR14 = VAR17;

  if (VAR4->VAR21 == 2)
  {
    if (VAR18 == 0)
    {
      VAR4->VAR21 = 1;

      FUN5(1, "");
    }

    if (VAR18 == -2 && VAR4->VAR21 == 2)
    {
      VAR4->VAR21 = 0;

      FUN5(1, "");
      snprintf(VAR4->VAR22, sizeof(VAR4->VAR22), "",
               FUN6(""));
    }
  }

  if (!VAR2->VAR23)
  {
    FUN7(&VAR6, FUN6(""),
                       VAR24, VAR25, VAR20 - VAR17);
  }

  if (VAR18 == 0)
  {
    int VAR13, VAR26;
    for (VAR13 = 0, VAR26 = 0; VAR13 < VAR17; VAR13++)
    {
      if (VAR2->VAR15[VAR13]->VAR16 == -1)
      {
        VAR2->VAR15[VAR13]->VAR26 = true;
        VAR26++;
      }
    }
    if (VAR26 > 0)
    {
      FUN8(
          FUN9("",
                   "", VAR26),
          VAR26);
    }

    bool VAR27 = false;
    for (VAR13 = VAR17; VAR13 < VAR20; VAR13++)
    {
      if (!VAR2->VAR23)
        FUN10(&VAR6, VAR13 + 1 - VAR17, -1);
#ifdef VAR7
      void *VAR5 = FUN11(VAR9, VAR2->VAR15[VAR13]->VAR5, strlen(VAR2->VAR15[VAR13]->VAR5));
      if (VAR5)
      {
        char *VAR28 = FUN12(VAR2->VAR15[VAR13]->VAR5);
        int VAR16 = VAR2->VAR15[VAR13]->VAR16;
        int VAR29 = VAR2->VAR15[VAR13]->VAR29;
        
        struct VAR30 *VAR31 = FUN13((unsigned char *) VAR5);
        FUN14(VAR9, &VAR5);
        FUN15(&VAR2->VAR15[VAR13]);
        VAR2->VAR15[VAR13] = VAR31;
        VAR2->VAR15[VAR13]->VAR16 = VAR16;
        VAR2->VAR15[VAR13]->VAR29 = VAR29;
        VAR2->VAR15[VAR13]->VAR5 = VAR28;
        VAR18 = 0;
        VAR27 = true;
      }
      else
#endif
          if ((VAR18 = FUN16(VAR4, VAR2->VAR15[VAR13])) < 0)
        break;
#ifdef VAR7
      else
      {
        FUN17(VAR9, VAR2->VAR15[VAR13]->VAR5, strlen(VAR2->VAR15[VAR13]->VAR5),
                          VAR2->VAR15[VAR13], 0);
      }
#endif

      
       const bool VAR32 =

          (FUN18(VAR4->VAR33, VAR2->VAR15[VAR13]->VAR5) == 0);


       VAR2->VAR15[VAR13]->VAR34 = false;
       VAR2->VAR15[VAR13]->read = false;
       if (VAR27)
      {
        if (VAR32)
          VAR2->VAR15[VAR13]->read = true;
        else if (VAR35)
          VAR2->VAR15[VAR13]->VAR34 = true;
      }
      else
      {
        if (VAR32)
          VAR2->VAR15[VAR13]->read = true;
      }

      VAR2->VAR14++;
    }

    if (VAR13 > VAR17)
      FUN19(VAR2, VAR13 - VAR17);
  }

#ifdef VAR7
  FUN20(VAR9);
#endif

  if (VAR18 < 0)
  {
    for (int VAR13 = VAR2->VAR14; VAR13 < VAR20; VAR13++)
      FUN15(&VAR2->VAR15[VAR13]);
    return VAR18;
  }

  
  if (VAR36)
    FUN21(VAR4->VAR33, VAR37, (void *) VAR2);

  FUN22();
  return (VAR20 - VAR17);
}