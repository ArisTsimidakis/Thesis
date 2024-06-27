int FUN1(VAR1* VAR2, VAR1* VAR3, int* VAR4)
{
    mp_int   VAR5, VAR6;
    int      VAR7;

    
    if ((VAR7 = FUN2(&VAR5, &VAR6, NULL, NULL, NULL, NULL)) != VAR8) {
        return VAR7;
    }

    if ((VAR7 = FUN3(VAR2, &VAR5)) != VAR8) {
        goto VAR9;
    }

    if ((VAR7 = FUN3(VAR3, &VAR6)) != VAR8) {
        goto VAR9;
    }

    VAR7 = FUN4(&VAR5, &VAR6, VAR4);

VAR9:
  
  FUN5(&VAR6);
  FUN5(&VAR5);

  return VAR7;
}