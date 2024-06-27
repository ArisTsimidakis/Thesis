static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, int VAR5)
{
  void *VAR6 = NULL;
  char VAR7[VAR8];
  char VAR9[VAR10];
  struct Progress VAR11;
  struct VAR12 *VAR13 = (struct VAR12 *) VAR2->VAR14;
  struct VAR15 *VAR16 = NULL;
  struct VAR17 *VAR18 = VAR2->VAR19[VAR5];
   unsigned short VAR20 = 1;
 
   

  VAR4->VAR21 = FUN2(VAR13->VAR20, VAR18->VAR14);


   if (VAR4->VAR21)
     return 0;
 
  
  VAR16 = &VAR13->VAR16[VAR18->VAR22 % VAR23];

  if (VAR16->VAR9)
  {
    if (VAR16->VAR22 == VAR18->VAR22)
    {
      
      VAR4->VAR21 = fopen(VAR16->VAR9, "");
      if (VAR4->VAR21)
        return 0;

      FUN3(VAR16->VAR9);
      return -1;
    }
    else
    {
      
      unlink(VAR16->VAR9);
      FUN4(&VAR16->VAR9);
    }
  }

  while (true)
  {
    if (FUN5(VAR2) < 0)
      return -1;

    
    if (VAR18->VAR24 < 0)
    {
      FUN6(
          FUN7(""));
      return -1;
    }

    FUN8(&VAR11, FUN7(""), VAR25,
                        VAR26, VAR18->VAR27->VAR28 + VAR18->VAR27->VAR29 - 1);
 
     

    VAR4->VAR21 = FUN9(VAR13->VAR20, VAR18->VAR14);


     if (!VAR4->VAR21)
     {
       
      VAR20 = 0;
      FUN10(VAR9, sizeof(VAR9));
      VAR4->VAR21 = FUN11(VAR9, "");
      if (!VAR4->VAR21)
      {
        FUN3(VAR9);
        return -1;
      }
    }

    snprintf(VAR7, sizeof(VAR7), "", VAR18->VAR24);

    const int VAR30 = FUN12(VAR13, VAR7, &VAR11, VAR31, VAR4->VAR21);
    if (VAR30 == 0)
      break;

    FUN13(&VAR4->VAR21);

    
    if (!VAR20)
      unlink(VAR9);

    if (VAR30 == -2)
    {
      FUN6("", VAR13->VAR32);
      return -1;
    }

    if (VAR30 == -3)
    {
      FUN6(FUN7(""));
      return -1;
    }
  }

  
   if (VAR20)

    FUN14(VAR13->VAR20, VAR18->VAR14);


   else
   {
     VAR16->VAR22 = VAR18->VAR22;
    VAR16->VAR9 = FUN15(VAR9);
  }
  FUN16(VAR4->VAR21);
  VAR6 = VAR18->VAR14;

  
  if (VAR2->VAR33 && VAR18->VAR34->VAR35)
    FUN17(VAR2->VAR33, VAR18->VAR34->VAR35, VAR18);
  FUN18(VAR2, VAR18);
  FUN19(&VAR18->VAR34);
  VAR18->VAR34 = FUN20(VAR4->VAR21, VAR18, 0, 0);
  if (VAR2->VAR33 && VAR18->VAR34->VAR35)
    FUN21(VAR2->VAR33, VAR18->VAR34->VAR35, VAR18);
  FUN22(VAR2, VAR18);

  VAR18->VAR14 = VAR6;
  VAR18->VAR36 = 0;
  fgets(VAR7, sizeof(VAR7), VAR4->VAR21);
  while (!FUN23(VAR4->VAR21))
  {
    VAR2->VAR19[VAR5]->VAR36++;
    fgets(VAR7, sizeof(VAR7), VAR4->VAR21);
  }

  VAR18->VAR27->VAR28 = FUN24(VAR4->VAR21) - VAR18->VAR27->VAR29;

  
  if (!VAR37)
    VAR18->VAR38 = FUN25(VAR18->VAR27);

  FUN26();
  FUN16(VAR4->VAR21);

  return 0;
}