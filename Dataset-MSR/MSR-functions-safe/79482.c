void FUN1(void)
{
  char VAR1[VAR2];
  char VAR3[VAR4];
  char *VAR5 = NULL, *VAR6 = NULL;
  int VAR7, VAR8 = 0, VAR9, VAR10, VAR11 = 0, VAR12;
  struct VAR13 *VAR14 = NULL;
  struct Context VAR15;
  struct VAR16 *VAR17 = NULL;
  struct Account VAR18;
  struct VAR19 *VAR20 = NULL;

  if (!VAR21)
  {
    FUN2(FUN3(""));
    return;
  }

  VAR5 = VAR6 = FUN4(strlen(VAR21) + 7, sizeof(char));
  if (FUN5(VAR21) == VAR22)
  {
    strcpy(VAR5, "");
    VAR6 = strchr(VAR5, '');
  }
  strcpy(VAR6, VAR21);

  VAR12 = FUN6(VAR5, &VAR18);
  FUN7(&VAR5);
  if (VAR12)
  {
    FUN2(FUN3(""), VAR21);
    return;
  }

  VAR14 = FUN8(NULL, &VAR18);
  if (!VAR14)
    return;

  VAR20 = FUN4(1, sizeof(struct VAR19));
  VAR20->VAR14 = VAR14;

  if (FUN9(VAR20) < 0)
  {
    FUN10(VAR20->VAR14);
    FUN7(&VAR20);
    return;
  }

  VAR14->VAR23 = VAR20;

  FUN11(FUN3(""));

  
  FUN12(VAR1, "", sizeof(VAR1));
  VAR12 = FUN13(VAR20, VAR1, sizeof(VAR1));
  if (VAR12 == -1)
    goto VAR24;
  if (VAR12 == -2)
  {
    FUN2("", VAR20->VAR25);
    goto VAR26;
  }

  sscanf(VAR1, "", &VAR9, &VAR10);

  
  if (VAR9 > 0 && VAR27)
  {
    FUN12(VAR1, "", sizeof(VAR1));
    VAR12 = FUN13(VAR20, VAR1, sizeof(VAR1));
    if (VAR12 == -1)
      goto VAR24;
    if (VAR12 == 0)
      sscanf(VAR1, "", &VAR8);
  }

  if (VAR9 <= VAR8)
  {
    FUN11(FUN3(""));
    goto VAR26;
  }

  if (FUN14(FUN15(VAR28), VAR29, &VAR15) == NULL)
    goto VAR26;

  VAR7 = FUN16(VAR30, FUN3(""));

  snprintf(VAR3, sizeof(VAR3),
           FUN17("",
                    "", VAR10),
           VAR10);
  FUN11("", VAR3);

  for (int VAR31 = VAR8 + 1; VAR31 <= VAR9; VAR31++)
  {
    VAR17 = FUN18(&VAR15, NULL, VAR32);
    if (!VAR17)
      VAR12 = -3;
    else
    {
      snprintf(VAR1, sizeof(VAR1), "", VAR31);
      VAR12 = FUN19(VAR20, VAR1, NULL, VAR33, VAR17->VAR34);
      if (VAR12 == -3)
        VAR11 = 1;

      if (VAR12 == 0 && FUN20(&VAR15, VAR17) != 0)
      {
        VAR11 = 1;
        VAR12 = -3;
      }

      FUN21(&VAR15, &VAR17);
    }

    if (VAR12 == 0 && VAR7 == VAR35)
    {
      
      snprintf(VAR1, sizeof(VAR1), "", VAR31);
      VAR12 = FUN13(VAR20, VAR1, sizeof(VAR1));
    }

    if (VAR12 == -1)
    {
      FUN22(&VAR15, NULL);
      goto VAR24;
    }
    if (VAR12 == -2)
    {
      FUN2("", VAR20->VAR25);
      break;
    }
    if (VAR12 == -3)
    {
      FUN2(FUN3(""));
      break;
    }

    
    FUN11(FUN17("",
                          "", VAR9 - VAR8),
                 VAR3, VAR31 - VAR8, VAR9 - VAR8);
  }

  FUN22(&VAR15, NULL);

  if (VAR11)
  {
    
    FUN12(VAR1, "", sizeof(VAR1));
    if (FUN13(VAR20, VAR1, sizeof(VAR1)) == -1)
      goto VAR24;
  }

VAR26:
  
  FUN12(VAR1, "", sizeof(VAR1));
  if (FUN13(VAR20, VAR1, sizeof(VAR1)) == -1)
    goto VAR24;
  FUN23(VAR14);
  FUN7(&VAR20);
  return;

VAR24:
  FUN2(FUN3(""));
  FUN23(VAR14);
  FUN7(&VAR20);
}