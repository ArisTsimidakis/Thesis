int FUN1(
    VAR1* VAR2,
    VAR1** VAR3)
{
  VAR1* copy;
  VAR1* VAR4;

  VAR5* VAR6;
  VAR7* VAR8;
  VAR7* VAR9;

  int VAR10;

  *VAR3 = NULL;

  FUN2(FUN3(
      VAR2->VAR11,
      VAR2->VAR12,
      NULL,
      &copy));

   switch(VAR2->VAR11)
   {
     case VAR13:

      ((VAR14*) copy)->VAR15 = VAR16;


       break;
 
     case VAR17:

      ((VAR18*) copy)->VAR15 = NULL;


























       break;
 
     case VAR19:

      VAR8 = (VAR7*) VAR2;
      VAR9 = (VAR7*) copy;

      FUN4(
        FUN1(VAR8->VAR20, &VAR9->VAR20),
        FUN5(copy));

      for (VAR10 = 0; VAR10 < VAR21; VAR10++)
        VAR9->VAR22[VAR10] = VAR8->VAR22[VAR10];

      break;

    case VAR23:

      VAR6 = ((VAR24*) VAR2)->VAR25;

      while (VAR6 != NULL)
      {
        FUN4(
            FUN1(VAR6->VAR2, &VAR4),
            FUN5(copy));

        FUN4(
            FUN6(copy, VAR4),
            FUN7(VAR4);
            FUN5(copy));

        VAR6 = VAR6->VAR26;
      }

      break;

    case VAR27:

      FUN1(
        ((VAR28 *) VAR2)->VAR29,
        &VAR4);

      ((VAR28 *)copy)->VAR29 = VAR4;

      break;

    case VAR30:

      FUN1(
        ((VAR31 *) VAR2)->VAR29,
        &VAR4);

      ((VAR31 *)copy)->VAR29 = VAR4;

      break;

    default:
      assert(VAR32);

  }

  *VAR3 = copy;

  return VAR33;
}