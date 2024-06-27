FUN1(VAR1* VAR2, const VAR3* VAR4, const VAR3* VAR5,
	    const VAR3* VAR6, const VAR3* VAR7, VAR8* VAR9, OnigOptionType VAR10)
{
  int VAR11;
  VAR3 *VAR12, *VAR13;
  OnigMatchArg VAR14;
  const VAR3 *VAR15 = VAR6;
#ifdef VAR16
  const VAR3 *VAR17 = VAR7;
#endif

#ifdef VAR18
  fprintf(VAR19,
     "",
     (int )VAR4, (int )(VAR5 - VAR4), (int )(VAR6 - VAR4), (int )(VAR7 - VAR4));
#endif

  if (VAR9
#ifdef VAR20
      && !FUN2(VAR10)
#endif
      ) {
    VAR11 = FUN3(VAR9, VAR2->VAR21 + 1);
    if (VAR11) goto VAR22;
  }

  if (VAR6 > VAR5 || VAR6 < VAR4) goto VAR23;

  if (FUN4(VAR10, VAR24)) {
    if (! FUN5(VAR2->VAR25, VAR4, VAR5)) {
      VAR11 = VAR26;
      goto VAR22;
    }
  }


#ifdef VAR16
#ifdef VAR27
#VAR28 FUN6(VAR29) \
  VAR11 = FUN7(VAR2, VAR4, VAR5, (VAR29), VAR12, VAR13, &VAR14); \
  if (VAR11 != VAR30) {\
    if (VAR11 >= 0) {\
      if (! FUN8(VAR2->VAR31)) {\
        goto VAR32;\
      }\
    }\
    else goto VAR33;  \
  }
#else
#VAR28 FUN6(VAR29) \
  VAR11 = FUN7(VAR2, VAR4, VAR5, (VAR29), VAR12, VAR13, &VAR14); \
  if (VAR11 != VAR30) {\
    if (VAR11 >= 0) {\
      goto VAR32;\
    }\
    else goto VAR33;  \
  }
#endif 
#else
#ifdef VAR27
#VAR28 FUN6(VAR34) \
  VAR11 = FUN7(VAR2, VAR4, VAR5, VAR12, VAR13, &VAR14);\
  if (VAR11 != VAR30) {\
    if (VAR11 >= 0) {\
      if (! FUN8(VAR2->VAR31)) {\
        goto VAR32;\
      }\
    }\
    else goto VAR33;  \
  }
#else
#VAR28 FUN6(VAR34) \
  VAR11 = FUN7(VAR2, VAR4, VAR5, VAR12, VAR13, &VAR14);\
  if (VAR11 != VAR30) {\
    if (VAR11 >= 0) {\
      goto VAR32;\
    }\
    else goto VAR33;  \
  }
#endif 
#endif 


  
  if (VAR2->VAR35 != 0 && VAR4 < VAR5) {
    VAR3 *VAR36, *VAR37;

    if (VAR2->VAR35 & VAR38) {
      
    VAR39:
      if (VAR7 > VAR6)
        VAR7 = VAR6 + 1;
      else
        VAR7 = VAR6;
    }
    else if (VAR2->VAR35 & VAR40) {
      
      if (VAR7 > VAR6) {
        if (VAR6 != VAR4) goto VAR23;
        VAR7 = VAR4 + 1;
      }
      else {
        if (VAR7 <= VAR4) {
          VAR6 = VAR4;
          VAR7 = VAR4;
        }
        else
          goto VAR23;
      }
    }
    else if (VAR2->VAR35 & VAR41) {
      VAR36 = VAR37 = (VAR3* )VAR5;

    VAR42:
      if ((VAR43 )(VAR37 - VAR4) < VAR2->VAR44)
	goto VAR23;

      if (VAR7 > VAR6) {
        if ((VAR43 )(VAR36 - VAR6) > VAR2->VAR45) {
          VAR6 = VAR36 - VAR2->VAR45;
          if (VAR6 < VAR5)
            VAR6 = FUN9(VAR2->VAR25, VAR4, VAR6);
        }
        if ((VAR43 )(VAR37 - (VAR7 - 1)) < VAR2->VAR44) {
          VAR7 = VAR37 - VAR2->VAR44 + 1;
        }

        if (VAR6 > VAR7) goto VAR23;
        
      }
      else {
        if ((VAR43 )(VAR36 - VAR7) > VAR2->VAR45) {
          VAR7 = VAR36 - VAR2->VAR45;
        }
        if ((VAR43 )(VAR37 - VAR6) < VAR2->VAR44) {
          VAR6 = VAR37 - VAR2->VAR44;
          VAR6 = FUN10(VAR2->VAR25, VAR4, VAR6);
        }
        if (VAR7 > VAR6) goto VAR23;
      }
    }
    else if (VAR2->VAR35 & VAR46) {
      VAR3* VAR47 = FUN11(VAR2->VAR25, VAR4, VAR5, 1);

      VAR37 = (VAR3* )VAR5;
      if (FUN12(VAR2->VAR25, VAR47, VAR5)) {
        VAR36 = VAR47;

#ifdef VAR48
        VAR47 = FUN11(VAR2->VAR25, VAR4, VAR47, 1);
        if (FUN13(VAR47) &&
            FUN14(VAR2->VAR25, VAR47, VAR5)) {
          VAR36 = VAR47;
        }
#endif
        if (VAR36 > VAR4 && VAR6 <= VAR36) {
          goto VAR42;
        }
      }
      else {
        VAR36 = (VAR3* )VAR5;
        goto VAR42;
      }
    }
    else if ((VAR2->VAR35 & VAR49)) {
      goto VAR39;
    }
  }
  else if (VAR4 == VAR5) { 
    static const VAR3* VAR50 = (VAR3* )"";

#ifdef VAR18
    fprintf(VAR19, "");
#endif

    if (VAR2->VAR51 == 0) {
      VAR6 = VAR5 = VAR4 = VAR50;
      VAR12 = (VAR3* )VAR6;
      VAR13 = (VAR3* )NULL;

      FUN15(VAR14, VAR2, VAR10, VAR9, VAR6);
#ifdef VAR52
      VAR14.VAR53 = (void* )0;
      VAR14.VAR54 = 0;   
#endif
      FUN6(VAR5);
      goto VAR55;
    }
    goto VAR23;
  }

#ifdef VAR18
  fprintf(VAR19, "",
	  (int )(VAR5 - VAR4), (int )(VAR6 - VAR4), (int )(VAR7 - VAR4));
#endif

  FUN15(VAR14, VAR2, VAR10, VAR9, VAR15);
#ifdef VAR52
  {
    int VAR56 = (FUN16(VAR6, VAR7) - VAR4);
    FUN17(VAR14, VAR5 - VAR4, VAR56, VAR2->VAR57);
  }
#endif

  VAR12 = (VAR3* )VAR6;
  if (VAR7 > VAR6) {   
    if (VAR12 > VAR4)
      VAR13 = FUN18(VAR2->VAR25, VAR4, VAR12);
    else
      VAR13 = (VAR3* )NULL;

    if (VAR2->VAR58 != VAR59) {
      VAR3 *VAR60, *VAR61, *VAR62, *VAR63;

      VAR60 = (VAR3* )VAR7;
      if (VAR2->VAR64 != 0) {
        if (VAR2->VAR64 == VAR65)
          VAR60 = (VAR3* )VAR5;
        else {
          VAR60 += VAR2->VAR64;
          if (VAR60 > VAR5) VAR60 = (VAR3* )VAR5;
        }
      }

      if ((VAR5 - VAR6) < VAR2->VAR51)
        goto VAR55;

      if (VAR2->VAR64 != VAR65) {
        do {
          if (! FUN19(VAR2, VAR4, VAR5, VAR12, VAR60,
                                     &VAR61, &VAR62, &VAR63)) goto VAR55;
          if (VAR12 < VAR61) {
            VAR12    = VAR61;
            VAR13 = VAR63;
          }
          while (VAR12 <= VAR62) {
            FUN6(VAR17);
            VAR13 = VAR12;
            VAR12 += FUN20(VAR2->VAR25, VAR12);
          }
        } while (VAR12 < VAR7);
        goto VAR55;
      }
      else { 
        if (! FUN19(VAR2, VAR4, VAR5, VAR12, VAR60,
                                   &VAR61, &VAR62, (VAR3** )NULL)) goto VAR55;

        if ((VAR2->VAR35 & VAR66) != 0) {
          do {
            FUN6(VAR17);
            VAR13 = VAR12;
            VAR12 += FUN20(VAR2->VAR25, VAR12);

            if ((VAR2->VAR35 & (VAR67 | VAR68)) == 0) {
              while (!FUN12(VAR2->VAR25, VAR13, VAR5) && VAR12 < VAR7) {
                VAR13 = VAR12;
                VAR12 += FUN20(VAR2->VAR25, VAR12);
              }
            }
          } while (VAR12 < VAR7);
          goto VAR55;
        }
      }
    }

    do {
      FUN6(VAR17);
      VAR13 = VAR12;
      VAR12 += FUN20(VAR2->VAR25, VAR12);
    } while (VAR12 < VAR7);

    if (VAR12 == VAR7) { 
      FUN6(VAR17);
    }
  }
  else {  
#ifdef VAR16
    if (VAR15 < VAR5)
      VAR15 += FUN20(VAR2->VAR25, VAR15); 
#endif

    if (VAR2->VAR58 != VAR59) {
      VAR3 *VAR61, *VAR62, *VAR69, *VAR70;

      if (VAR7 < VAR5)
        VAR69 = FUN10(VAR2->VAR25, VAR4, VAR7);
      else
        VAR69 = (VAR3* )VAR5;

      if (VAR2->VAR64 != VAR65 &&
          (VAR5 - VAR7) >= VAR2->VAR51) {
        do {
          VAR70 = VAR12 + VAR2->VAR64;
          if (VAR70 > VAR5) VAR70 = (VAR3* )VAR5;
          if (FUN21(VAR2, VAR4, VAR5, VAR70, VAR7, VAR69,
                                    &VAR61, &VAR62) <= 0)
            goto VAR55;

          if (VAR12 > VAR62)
            VAR12 = VAR62;

          while (VAR12 >= VAR61) {
            VAR13 = FUN18(VAR2->VAR25, VAR4, VAR12);
            FUN6(VAR15);
            VAR12 = VAR13;
          }
        } while (VAR12 >= VAR7);
        goto VAR55;
      }
      else { 
        if ((VAR5 - VAR7) < VAR2->VAR51) goto VAR55;

        VAR70 = VAR12;
        if (VAR2->VAR64 != 0) {
          if (VAR2->VAR64 == VAR65)
            VAR70 = (VAR3* )VAR5;
          else {
            VAR70 += VAR2->VAR64;
            if (VAR70 > VAR5) VAR70 = (VAR3* )VAR5;
            else
              VAR70 = FUN10(VAR2->VAR25,
                                                        VAR6, VAR70);
          }
        }
        if (FUN21(VAR2, VAR4, VAR5, VAR70, VAR7, VAR69,
                                  &VAR61, &VAR62) <= 0) goto VAR55;
      }
    }

    do {
      VAR13 = FUN18(VAR2->VAR25, VAR4, VAR12);
      FUN6(VAR15);
      VAR12 = VAR13;
    } while (VAR12 >= VAR7);
  }

 VAR55:
#ifdef VAR27
  if (FUN8(VAR2->VAR31)) {
    if (VAR14.VAR71 >= 0) {
      VAR12 = VAR14.VAR72;
      goto VAR32;
    }
  }
#endif
  VAR11 = VAR30;

 VAR33:
  FUN22(VAR14);

  
  if (FUN23(VAR2->VAR31) && VAR9
#ifdef VAR20
      && !FUN2(VAR10)
#endif
      ) {
    FUN24(VAR9);
  }

#ifdef VAR73
  if (VAR11 != VAR30)
    fprintf(VAR19, "", VAR11);
#endif
  return VAR11;

 VAR23:
  VAR11 = VAR30;
 VAR22:
#ifdef VAR73
  if (VAR11 != VAR30)
    fprintf(VAR19, "", VAR11);
#endif
  return VAR11;

 VAR32:
  FUN22(VAR14);
  return VAR12 - VAR4;
}