FUN1(struct VAR1 *VAR2)
{
  int VAR3, VAR4, VAR5, VAR6, VAR7;
  unsigned char VAR8[VAR9], VAR10, VAR11;
  unsigned int VAR12;
  struct huffman_code VAR13;
  struct VAR14 *VAR14 = (struct VAR14 *)(VAR2->VAR15->VAR16);
  struct VAR17 *VAR18 = &(VAR14->VAR18);

  FUN2(VAR2);

  
  FUN3(VAR18);

  
  if (!FUN4(VAR2, VAR18, 1))
    goto VAR19;
  if ((VAR14->VAR20 = FUN5(VAR18, 1)) != 0)
  {
    FUN6(VAR18, 1);
    if (!FUN4(VAR2, VAR18, 7))
      goto VAR19;
    VAR11 = FUN5(VAR18, 7);
    FUN6(VAR18, 7);

    
    if (VAR11 & 0x20)
    {
      if (!FUN4(VAR2, VAR18, 8))
        goto VAR19;
      VAR14->VAR21 = (FUN5(VAR18, 8) + 1) << 20;
      FUN6(VAR18, 8);
    }

    if (VAR11 & 0x40)
    {
      if (!FUN4(VAR2, VAR18, 8))
        goto VAR19;
      VAR14->VAR22 = VAR14->VAR23.VAR24 = FUN5(VAR18, 8);
      FUN6(VAR18, 8);
    }
    else
      VAR14->VAR22 = 2;

    if (VAR11 & 0x20)
    {
      VAR12 = (VAR11 & 0x1F) + 1;
      if(VAR12 > 16)
        VAR12 = 16 + (VAR12 - 16) * 3;

      if (VAR12 == 1)
      {
        FUN7(&VAR2->VAR25, VAR26,
                          "");
        return (VAR27);
      }

      
      VAR28.FUN8(&VAR14->VAR23, &VAR29);

      VAR14->VAR30.VAR2 = VAR2;
      VAR14->VAR30.VAR31 = &VAR32;
      VAR28.FUN9(&VAR14->VAR33);
       VAR14->VAR33.VAR34 = &VAR14->VAR30;
       VAR28.FUN10(&VAR14->VAR23);
 












       if (!VAR28.FUN11(&VAR14->VAR23,
         VAR14->VAR21, &VAR29))
       {
        FUN7(&VAR2->VAR25, VAR35,
                          "");
        return (VAR27);
      }
      if (!VAR28.FUN12(&VAR14->VAR33))
      {
        FUN7(&VAR2->VAR25, VAR26,
                          "");
        return (VAR27);
      }
      VAR28.FUN13(&VAR14->VAR23, VAR12);
      VAR14->VAR36 = 1;
    }
    else
    {
      if (!VAR14->VAR36) {
        FUN7(&VAR2->VAR25, VAR26,
                          "");
        return (VAR27);
      }
      if (!VAR28.FUN12(&VAR14->VAR33))
      {
        FUN7(&VAR2->VAR25, VAR26,
                          "");
        return (VAR27);
      }
    }
  }
  else
  {
    FUN6(VAR18, 1);

    
    if (!FUN4(VAR2, VAR18, 1))
      goto VAR19;
    if (!FUN5(VAR18, 1))
      memset(VAR14->VAR37, 0, sizeof(VAR14->VAR37));
    FUN6(VAR18, 1);

    memset(&VAR8, 0, sizeof(VAR8));
    for (VAR3 = 0; VAR3 < VAR9;)
    {
      if (!FUN4(VAR2, VAR18, 4))
        goto VAR19;
      VAR8[VAR3++] = FUN5(VAR18, 4);
      FUN6(VAR18, 4);
      if (VAR8[VAR3-1] == 0xF)
      {
        if (!FUN4(VAR2, VAR18, 4))
          goto VAR19;
        VAR10 = FUN5(VAR18, 4);
        FUN6(VAR18, 4);
        if (VAR10)
        {
          VAR3--;
          for (VAR4 = 0; VAR4 < VAR10 + 2 && VAR3 < VAR9; VAR4++)
            VAR8[VAR3++] = 0;
        }
      }
    }

    memset(&VAR13, 0, sizeof(VAR13));
    VAR7 = FUN14(VAR2, &VAR13, VAR8, VAR9, VAR38);
    if (VAR7 != VAR39) {
      free(VAR13.VAR40);
      free(VAR13.VAR41);
      return (VAR7);
    }

    for (VAR3 = 0; VAR3 < VAR42;)
    {
      if ((VAR5 = FUN15(VAR2, &VAR13)) < 0) {
        free(VAR13.VAR40);
        free(VAR13.VAR41);
        return (VAR27);
      }
      if (VAR5 < 16)
      {
        VAR14->VAR37[VAR3] = (VAR14->VAR37[VAR3] + VAR5) & 0xF;
        VAR3++;
      }
      else if (VAR5 < 18)
      {
        if (VAR3 == 0)
        {
          free(VAR13.VAR40);
          free(VAR13.VAR41);
          FUN7(&VAR2->VAR25, VAR26,
                            "");
          return (VAR27);
        }

        if(VAR5 == 16) {
          if (!FUN4(VAR2, VAR18, 3)) {
            free(VAR13.VAR40);
            free(VAR13.VAR41);
            goto VAR19;
          }
          VAR6 = FUN5(VAR18, 3) + 3;
          FUN6(VAR18, 3);
        } else {
          if (!FUN4(VAR2, VAR18, 7)) {
            free(VAR13.VAR40);
            free(VAR13.VAR41);
            goto VAR19;
          }
          VAR6 = FUN5(VAR18, 7) + 11;
          FUN6(VAR18, 7);
        }

        for (VAR4 = 0; VAR4 < VAR6 && VAR3 < VAR42; VAR4++)
        {
          VAR14->VAR37[VAR3] = VAR14->VAR37[VAR3-1];
          VAR3++;
        }
      }
      else
      {
        if(VAR5 == 18) {
          if (!FUN4(VAR2, VAR18, 3)) {
            free(VAR13.VAR40);
            free(VAR13.VAR41);
            goto VAR19;
          }
          VAR6 = FUN5(VAR18, 3) + 3;
          FUN6(VAR18, 3);
        } else {
          if (!FUN4(VAR2, VAR18, 7)) {
            free(VAR13.VAR40);
            free(VAR13.VAR41);
            goto VAR19;
          }
          VAR6 = FUN5(VAR18, 7) + 11;
          FUN6(VAR18, 7);
        }

        for(VAR4 = 0; VAR4 < VAR6 && VAR3 < VAR42; VAR4++)
          VAR14->VAR37[VAR3++] = 0;
      }
    }
    free(VAR13.VAR40);
    free(VAR13.VAR41);

    VAR7 = FUN14(VAR2, &VAR14->VAR43, &VAR14->VAR37[0], VAR44,
                VAR38);
    if (VAR7 != VAR39)
      return (VAR7);
    VAR7 = FUN14(VAR2, &VAR14->VAR45, &VAR14->VAR37[VAR44],
                VAR46, VAR38);
    if (VAR7 != VAR39)
      return (VAR7);
    VAR7 = FUN14(VAR2, &VAR14->VAR47,
                &VAR14->VAR37[VAR44 + VAR46],
                VAR48, VAR38);
    if (VAR7 != VAR39)
      return (VAR7);
    VAR7 = FUN14(VAR2, &VAR14->VAR49,
                &VAR14->VAR37[VAR44 + VAR46 +
                VAR48], VAR50, VAR38);
    if (VAR7 != VAR39)
      return (VAR7);
  }

  if (!VAR14->VAR21 || !VAR14->VAR51.VAR52)
  {
    
    void *VAR53;
    unsigned int VAR54;

    if (VAR14->VAR55 >= VAR56)
      VAR54 = VAR56;
    else
      VAR54 = FUN16((unsigned int)VAR14->VAR55) << 1;
    VAR53 = realloc(VAR14->VAR51.VAR52, VAR54);
    if (VAR53 == NULL) {
      FUN7(&VAR2->VAR25, VAR35,
                        "");
      return (VAR27);
    }
    VAR14->VAR51.VAR52 = (unsigned char *)VAR53;
    VAR14->VAR21 = VAR54;
    memset(VAR14->VAR51.VAR52, 0, VAR14->VAR21);
    VAR14->VAR51.VAR57 = VAR14->VAR21 - 1;
  }

  VAR14->VAR58 = 0;
  return (VAR39);
VAR19:
  FUN7(&VAR2->VAR25, VAR26,
                    "");
  VAR14->VAR59 = 0;
  return (VAR27);
}