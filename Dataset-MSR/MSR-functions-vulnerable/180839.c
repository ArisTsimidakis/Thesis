static int FUN1(VAR1 *VAR2, VAR3 *VAR4) {
  struct VAR5 *VAR6;
  struct VAR5 *VAR7 = NULL;
  struct VAR8 *VAR9;

  const VAR10 *VAR11;

  size_t VAR12 = VAR4->VAR13 + 1;
  
  oid_t VAR14[VAR12];
  
  _Bool VAR15[VAR12];

  int VAR16;
  size_t VAR17;

  
  VAR18 *VAR19;
  VAR18 *VAR20;
  VAR21 **VAR22;
  VAR21 **VAR23;

  FUN2("", VAR2->VAR24,
        VAR4->VAR24);

  if (VAR2->VAR25 == NULL) {
    FUN2("");
    return (-1);
  }

  VAR11 = FUN3(VAR4->VAR26);
  if (!VAR11) {
    FUN4("", VAR4->VAR26);
    return (-1);
  }

  if (VAR11->VAR27 != VAR4->VAR13) {
    FUN4(""
          "",
          VAR4->VAR26, VAR11->VAR27, VAR4->VAR13);
    return (-1);
  }
  assert(VAR4->VAR13 > 0);

  
  memcpy(VAR14, VAR4->VAR28, VAR4->VAR13 * sizeof(VAR29));
  if (VAR4->VAR30.VAR31.VAR32 > 0)
    memcpy(VAR14 + VAR4->VAR13, &VAR4->VAR30.VAR31, sizeof(VAR29));
  else 
    VAR12--;

  for (VAR17 = 0; VAR17 < VAR12; VAR17++)
    VAR15[VAR17] = 1;

  
  VAR22 = calloc(VAR4->VAR13, sizeof(*VAR22));
  VAR23 = calloc(VAR4->VAR13, sizeof(*VAR23));
  if ((VAR22 == NULL) || (VAR23 == NULL)) {
    FUN4("");
    FUN5(VAR22);
    FUN5(VAR23);
    return (-1);
  }

  VAR19 = NULL;
  VAR20 = NULL;

  VAR16 = 0;
  while (VAR16 == 0) {
    int VAR33;

    VAR6 = FUN6(VAR34);
    if (VAR6 == NULL) {
      FUN4("");
      VAR16 = -1;
      break;
    }

    VAR33 = 0;
    for (VAR17 = 0; VAR17 < VAR12; VAR17++) {
      
      if (!VAR15[VAR17])
        continue;
      VAR33++;
      FUN7(VAR6, VAR14[VAR17].VAR31, VAR14[VAR17].VAR32);
    }

     if (VAR33 == 0) {
       
       FUN2("");


       VAR16 = 0;
       break;
     }
 
     VAR7 = NULL;


     VAR16 = FUN8(VAR2->VAR25, VAR6, &VAR7);
     if ((VAR16 != VAR35) || (VAR7 == NULL)) {
       char *VAR36 = NULL;

      FUN9(VAR2->VAR25, NULL, NULL, &VAR36);

      FUN10(VAR37, &VAR2->VAR38,
                 "",
                 VAR2->VAR24, (VAR36 == NULL) ? "" : VAR36);

      if (VAR7 != NULL)
         FUN11(VAR7);
       VAR7 = NULL;
 

      

      VAR6 = NULL;
       FUN5(VAR36);
       FUN12(VAR2);
 
      VAR16 = -1;
      break;
    }

    VAR16 = 0;
    assert(VAR7 != NULL);
    FUN13(VAR39, &VAR2->VAR38,
              "",
              VAR2->VAR24);

    VAR9 = VAR7->VAR40;
    if (VAR9 == NULL) {
      VAR16 = -1;
      break;
    }

    for (VAR9 = VAR7->VAR40, VAR17 = 0; (VAR9 != NULL);
         VAR9 = VAR9->VAR41, VAR17++) {
      
      while ((VAR17 < VAR12) && !VAR15[VAR17])
        VAR17++;

      
      if ((VAR4->VAR30.VAR31.VAR32 > 0) && (VAR17 == VAR4->VAR13)) {
        if ((VAR9->VAR26 == VAR42) ||
            (FUN14(
                 VAR4->VAR30.VAR31.VAR31, VAR4->VAR30.VAR31.VAR32, VAR9->VAR24,
                 VAR9->VAR43, VAR4->VAR30.VAR31.VAR32) != 0)) {
          FUN2("",
                VAR2->VAR24, VAR4->VAR24);
          VAR15[VAR17] = 0;
          continue;
        }

        
        if (FUN15(&VAR19, &VAR20,
                                    VAR7, VAR2, VAR4) != 0) {
          FUN4("",
                VAR2->VAR24);
          VAR16 = -1;
          break;
        }
      } else 
      {
        VAR21 *VAR44;
        oid_t VAR45;
        oid_t VAR46;
        int VAR47;

        FUN16(&VAR45, VAR9->VAR24, VAR9->VAR43);

        
        VAR47 = FUN17(&VAR46, &VAR45, VAR4->VAR28 + VAR17);
        if (VAR47 != 0) {
          FUN2(""
                "",
                VAR2->VAR24, VAR4->VAR24, VAR17);
          VAR15[VAR17] = 0;
          continue;
        }

        
        if ((VAR23[VAR17] != NULL) &&
            (FUN18(&VAR46, &VAR23[VAR17]->VAR46) <= 0)) {
          FUN2(""
                "",
                VAR2->VAR24, VAR4->VAR24, VAR17);
          VAR15[VAR17] = 0;
          continue;
        }

        VAR44 = calloc(1, sizeof(*VAR44));
        if (VAR44 == NULL) {
          FUN4("");
          VAR16 = -1;
          break;
        }

        VAR44->VAR48 =
            FUN19(VAR9, VAR11->VAR11[VAR17].VAR26, VAR4->VAR49,
                                      VAR4->VAR50, VAR2->VAR24, VAR4->VAR24);
        memcpy(&VAR44->VAR46, &VAR46, sizeof(VAR44->VAR46));
        VAR44->VAR51 = NULL;

        if (VAR23[VAR17] == NULL)
          VAR22[VAR17] = VAR44;
        else
          VAR23[VAR17]->VAR51 = VAR44;
        VAR23[VAR17] = VAR44;
      }

      
      memcpy(VAR14[VAR17].VAR31, VAR9->VAR24, sizeof(VAR31) * VAR9->VAR43);
      VAR14[VAR17].VAR32 = VAR9->VAR43;

    } 

    if (VAR7 != NULL)
      FUN11(VAR7);
    VAR7 = NULL;
  } 

  if (VAR7 != NULL)
     FUN11(VAR7);
   VAR7 = NULL;
 

  if (VAR6 != NULL)

    FUN11(VAR6);

  VAR6 = NULL;
 
   if (VAR16 == 0)
     FUN20(VAR2, VAR4, VAR19, VAR22);

  
  while (VAR19 != NULL) {
    VAR18 *VAR51 = VAR19->VAR51;
    FUN5(VAR19);
    VAR19 = VAR51;
  }

  for (VAR17 = 0; VAR17 < VAR4->VAR13; VAR17++) {
    while (VAR22[VAR17] != NULL) {
      VAR21 *VAR51 = VAR22[VAR17]->VAR51;
      FUN5(VAR22[VAR17]);
      VAR22[VAR17] = VAR51;
    }
  }

  FUN5(VAR22);
  FUN5(VAR23);

  return (0);
}