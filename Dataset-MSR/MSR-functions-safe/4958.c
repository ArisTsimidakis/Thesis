FUN1 (VAR1 * VAR2)
{
  guint8 VAR3 = 0;
  guint32 VAR4 = 0, VAR5 = 0;
  guint64 VAR6 = 0, VAR7 = 0;
  VAR8 *VAR9 = NULL;
  VAR10 *VAR11 = NULL;

  
  for (VAR3 = 0; VAR3 < VAR2->VAR12; VAR3++) {
    VAR10 *VAR13 = VAR2->VAR14[VAR3];

    VAR4 = FUN2 (VAR2, VAR13,
        VAR2->VAR15.VAR7);

    
    if (VAR4 == -1)
      continue;

    
    if (!VAR11) {
      VAR11 = VAR13;
      continue;
    }

    
    if (VAR13->VAR16 == VAR17) {
      VAR11 = VAR13;
      break;
    }
  }

  if (FUN3 (!VAR11)) {
    FUN4 (VAR2, "");
    goto VAR18;
  }

  if (FUN3 (!VAR11->VAR19)) {
    FUN4 (VAR2, "");
    goto VAR18;
  }

  
  if (VAR11->VAR16 == VAR17) {
    VAR5 = FUN5 (VAR2, VAR11,
        VAR11->VAR19 - 1);
  } else {
    VAR5 = VAR11->VAR19 - 10;
  }

  
  VAR9 = &VAR11->VAR20[VAR11->VAR21];
  
  while (VAR11->VAR22[VAR5].VAR23 < VAR9->VAR24) {
    FUN4 (VAR2, "",
        VAR11->VAR21);
    if (FUN3 (!VAR11->VAR21)) {
      
      goto VAR18;
    }
    VAR11->VAR21--;
    VAR9 = &VAR11->VAR20[VAR11->VAR21];
  }
  
  VAR6 = (VAR11->VAR22[VAR5].VAR23 - VAR9->VAR24) + VAR9->VAR25;
  VAR7 = VAR11->VAR22[VAR11->VAR19].VAR23;
  VAR7 = (VAR7 - VAR9->VAR24) + VAR9->VAR25;

  FUN4 (VAR2, ""
      "" VAR26 "", VAR11->VAR19,
      VAR5, FUN6 (VAR6));

  
  FUN7 (&VAR2->VAR15, VAR27, VAR7);
  FUN4 (VAR2, "" VAR26,
      FUN6 (VAR7));

  if (FUN3 (VAR7 < VAR2->VAR15.VAR28)) {
    FUN4 (VAR2, "");
    goto VAR18;
  }

  
  for (VAR3 = 0; VAR3 < VAR2->VAR12; VAR3++) {
    guint32 VAR29 = 0;
    guint64 VAR24 = 0, VAR30 = 0;
    VAR10 *VAR13 = VAR2->VAR14[VAR3];

    VAR4 = FUN2 (VAR2, VAR13, VAR6);
    FUN4 (VAR2, "", VAR4);

    
    if (VAR4 == -1)
      continue;

    
    VAR9 = &VAR13->VAR20[VAR4];
    VAR30 = VAR6 - VAR9->VAR25;

    
    VAR24 = VAR9->VAR24 + VAR30;

    
    VAR29 = FUN8 (VAR2, VAR13, VAR24);
    FUN4 (VAR2, "" VAR26 "",
        FUN6 (VAR24), VAR29);

    
    VAR5 = FUN5 (VAR2, VAR13, VAR29);

    
    VAR13->VAR31 = VAR13->VAR19 - 1;
    
    VAR13->VAR32 =
        (VAR13->VAR22[VAR5].VAR23 - VAR9->VAR24) + VAR9->VAR25;
    
    FUN9 (VAR2, VAR13, VAR5);
    FUN4 (VAR2, ""
        VAR26 "", VAR5,
        FUN6 (VAR13->VAR32), VAR13->VAR19, VAR13->VAR31);
  }

  return VAR33;

VAR18:
  return VAR34;
}