static int FUN1(VAR1 *VAR2,
                                VAR3 *VAR4,
                                VAR5 *VAR6,
                                VAR7 **VAR8) {
  const VAR9 *VAR10;
  value_list_t VAR11 = VAR12;

  VAR5 *VAR13;
  VAR7 **VAR14;

  size_t VAR15;
  _Bool VAR16;
  oid_t VAR17;

  VAR10 = FUN2(VAR4->VAR18);
  if (!VAR10) {
    FUN3("", VAR4->VAR18);
    return (-1);
  }
  assert(VAR10->VAR19 == VAR4->VAR20);
  assert(VAR4->VAR20 > 0);

  VAR13 = VAR6;

  VAR14 = calloc(VAR4->VAR20, sizeof(*VAR14));
  if (VAR14 == NULL)
    return (-1);
  for (VAR15 = 0; VAR15 < VAR4->VAR20; VAR15++)
    VAR14[VAR15] = VAR8[VAR15];

  VAR11.VAR20 = VAR4->VAR20;
  VAR11.VAR21 = malloc(sizeof(*VAR11.VAR21) * VAR11.VAR20);
  if (VAR11.VAR21 == NULL) {
    FUN3("");
    FUN4(VAR14);
    return (-1);
  }

  FUN5(VAR11.VAR2, VAR2->VAR22, sizeof(VAR11.VAR2));
  FUN5(VAR11.VAR23, "", sizeof(VAR11.VAR23));

  VAR11.VAR24 = VAR2->VAR24;

  VAR16 = 1;
  while (VAR16) {
    _Bool VAR25 = 0;

    
    if (VAR6 != NULL) {
      if (VAR13 == NULL) {
        VAR16 = 0;
        continue;
      }

      memcpy(&VAR17, &VAR13->VAR26,
             sizeof(VAR17));
    } else 
    {
      VAR7 *VAR27 = VAR14[0];
      if (VAR27 == NULL) {
        VAR16 = 0;
        continue;
      }

      memcpy(&VAR17, &VAR27->VAR26, sizeof(VAR17));
    }

    
    for (VAR15 = 0; VAR15 < VAR4->VAR20; VAR15++) {
      while (
          (VAR14[VAR15] != NULL) &&
          (FUN6(&VAR14[VAR15]->VAR26, &VAR17) < 0))
        VAR14[VAR15] = VAR14[VAR15]->VAR28;

      if (VAR14[VAR15] == NULL) {
        VAR16 = 0;
        break;
      } else if (FUN6(&VAR14[VAR15]->VAR26,
                                   &VAR17) > 0) {
        
        VAR25 = 1;
        break;
      }
    } 

    if (!VAR16)
      break;

    
    if (VAR25) {
      if (VAR6 != NULL)
        VAR13 = VAR13->VAR28;
      else
        VAR14[0] = VAR14[0]->VAR28;

      continue;
    }


#if VAR29
    for (VAR15 = 1; VAR15 < VAR4->VAR20; VAR15++) {
      assert(VAR14[VAR15] != NULL);
      assert(FUN6(&VAR14[VAR15 - 1]->VAR26,
                               &VAR14[VAR15]->VAR26) == 0);
    }
    assert((VAR13 == NULL) ||
           (FUN6(&VAR13->VAR26,
                              &VAR14[0]->VAR26) == 0));
#endif

    FUN5(VAR11.VAR18, VAR4->VAR18, sizeof(VAR11.VAR18));

    {
      char VAR30[VAR31];

      if (VAR13 == NULL)
        FUN7(VAR30, sizeof(VAR30), &VAR17);
      else
        FUN5(VAR30, VAR13->VAR32, sizeof(VAR30));

      if (VAR4->VAR33 == NULL)
        FUN5(VAR11.VAR34, VAR30, sizeof(VAR11.VAR34));
      else
        FUN8(VAR11.VAR34, sizeof(VAR11.VAR34), "",
                  VAR4->VAR33, VAR30);
    }

    for (VAR15 = 0; VAR15 < VAR4->VAR20; VAR15++)
      VAR11.VAR21[VAR15] = VAR14[VAR15]->VAR35;

    
    if (VAR11.VAR34[0] != '')
      FUN9(&VAR11);

    if (VAR6 != NULL)
      VAR13 = VAR13->VAR28;
    else
      VAR14[0] = VAR14[0]->VAR28;
  } 

  FUN4(VAR11.VAR21);
  FUN4(VAR14);

  return (0);
}