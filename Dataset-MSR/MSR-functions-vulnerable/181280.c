FUN1(VAR1* VAR2, const VAR3* VAR4, const VAR3* VAR5, VAR3* VAR6,
		     VAR3* VAR7, VAR3** VAR8, VAR3** VAR9, VAR3** VAR10)
{
  VAR3 *VAR11, *VAR12 = (VAR3* )NULL;

#ifdef VAR13
  fprintf(VAR14, "",
	  (int )VAR4, (int )VAR5, (int )VAR6, (int )VAR7);
#endif

  VAR11 = VAR6;
  if (VAR2->VAR15 > 0) {
    if (FUN2(VAR2->VAR16)) {
      VAR11 += VAR2->VAR15;
     }
     else {
       VAR3 *VAR17 = VAR11 + VAR2->VAR15;




       while (VAR11 < VAR17) VAR11 += FUN3(VAR2->VAR16, VAR11);
     }
   }

 VAR18:
  switch (VAR2->VAR19) {
  case VAR20:
    VAR11 = FUN4(VAR2->VAR16, VAR2->VAR21, VAR2->VAR22, VAR11, VAR5, VAR7);
    break;
  case VAR23:
    VAR11 = FUN5(VAR2->VAR16, VAR2->VAR24,
                       VAR2->VAR21, VAR2->VAR22, VAR11, VAR5, VAR7);
    break;

  case VAR25:
    VAR11 = FUN6(VAR2, VAR2->VAR21, VAR2->VAR22, VAR11, VAR5, VAR7);
    break;

  case VAR26:
    VAR11 = FUN7(VAR2, VAR2->VAR21, VAR2->VAR22, VAR11, VAR5, VAR7);
    break;

  case VAR27:
    VAR11 = FUN8(VAR2->VAR16, VAR2->VAR28, VAR11, VAR7);
    break;
  }

  if (VAR11 && VAR11 < VAR7) {
    if (VAR11 - VAR2->VAR15 < VAR6) {
    VAR29:
      VAR12 = VAR11;
      VAR11 += FUN3(VAR2->VAR16, VAR11);
      goto VAR18;
    }

    if (VAR2->VAR30) {
      VAR3* VAR31;

      switch (VAR2->VAR30) {
      case VAR32:
        if (!FUN9(VAR11)) {
          VAR31 = FUN10(VAR2->VAR16,
                                            (VAR12 ? VAR12 : VAR4), VAR11);
          if (!FUN11(VAR2->VAR16, VAR31, VAR5))
            goto VAR29;
        }
        break;

      case VAR33:
        if (FUN12(VAR11)) {
#ifndef VAR34
          VAR31 = (VAR3* )FUN10(VAR2->VAR16,
                                                     (VAR12 ? VAR12 : VAR4), VAR11);
          if (VAR31 && FUN11(VAR2->VAR16, VAR31, VAR5))
            goto VAR29;
#endif
        }
        else if (! FUN11(VAR2->VAR16, VAR11, VAR5)
#ifdef VAR35
                 && ! FUN13(VAR2->VAR16, VAR11, VAR5)
#endif
                 )
          goto VAR29;
        break;
      }
    }

    if (VAR2->VAR36 == 0) {
      *VAR8 = VAR11;
      if (VAR10) {
        if (*VAR8 > VAR6)
          *VAR10 = FUN10(VAR2->VAR16, VAR6, VAR11);
        else
          *VAR10 = FUN10(VAR2->VAR16,
                                                 (VAR12 ? VAR12 : VAR4), VAR11);
      }
    }
    else {
      if (VAR2->VAR36 != VAR37) {
        *VAR8 = VAR11 - VAR2->VAR36;
        if (*VAR8 > VAR6) {
          *VAR8 = FUN14(VAR2->VAR16, VAR6,
                                          *VAR8, (const VAR3** )VAR10);
          if (VAR10 && FUN15(*VAR10))
            *VAR10 = FUN10(VAR2->VAR16,
                                                   (VAR12 ? VAR12 : VAR6), *VAR8);
        }
        else {
          if (VAR10)
            *VAR10 = FUN10(VAR2->VAR16,
                                                   (VAR12 ? VAR12 : VAR4), *VAR8);
        }
      }
    }
    
    *VAR9 = VAR11 - VAR2->VAR15;

#ifdef VAR13
    fprintf(VAR14,
    "",
	    (int )(*VAR8 - VAR4), (int )(*VAR9 - VAR4), VAR2->VAR15, VAR2->VAR36);
#endif
    return 1; 
  }

  return 0; 
}