FUN1(const char * VAR1, size_t VAR2,
		  VAR3 * VAR4, struct VAR5 ** VAR6)
{
  struct VAR7 * VAR8;
  struct VAR5 * VAR9;
  size_t VAR10;
  int VAR11;
  int VAR12;

  VAR10 = * VAR4;
  VAR8 = NULL;

  VAR11 = FUN2(VAR1, VAR2,
					   &VAR10, "");
  if (VAR11 != VAR13) {
    VAR12 = VAR11;
    goto VAR14;
  }

  VAR11 = FUN3(VAR1, VAR2, &VAR10);
  if (VAR11 != VAR13) {
    VAR12 = VAR11;
    goto VAR14;
  }

  VAR11 = FUN4(VAR1, VAR2, &VAR10, &VAR8);
  switch (VAR11) {
  case VAR13:
    
    break;
  case VAR15:
    VAR11 = FUN5(VAR1, VAR2, &VAR10);
    if ((VAR11 != VAR13) && (VAR11 != VAR15)) {
      VAR12 = VAR11;
      goto VAR14;
    }
    break;
  default:
    VAR12 = VAR11;
    goto VAR14;
  }

  VAR11 = FUN6(VAR1, VAR2, &VAR10);
  if (VAR11 != VAR13) {
    VAR12 = VAR11;
    goto VAR14;
  }

  VAR9 = FUN7(VAR8);
  if (VAR9 == NULL) {
    VAR12 = VAR16;
    goto VAR14;
  }

  * VAR6 = VAR9;
  * VAR4 = VAR10;

  return VAR13;

 VAR14:
  if (VAR8 != NULL)
    FUN8(VAR8);
  return VAR12;
}