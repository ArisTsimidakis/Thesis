bool VAR1::FUN1(

    const VAR2::VAR3& VAR4,

    VAR5::VAR6* VAR7,

    VAR8* VAR9,

    VAR10<VAR5::VAR11>* VAR12) {

  

  VAR10<VAR5::VAR11> VAR13;

  if (!FUN2(VAR4, VAR14,

                        VAR15, VAR7, &VAR13)) {

    return false;

  }



  

  VAR2::VAR3 FUN3(VAR16);

  VAR17.FUN4(VAR4);



  SECURITY_ATTRIBUTES VAR18;

  VAR18.VAR19 = sizeof(VAR18);

  VAR18.VAR20 = NULL;

  VAR18.VAR21 = VAR22;



  

  

  ScopedHandle VAR23;

  VAR23.FUN5(FUN6(FUN7(VAR17).FUN8(),

                        VAR24 | VAR25,

                        0,

                        &VAR18,

                        VAR26,

                        VAR27 | VAR28 |

                            VAR29,

                        NULL));

  if (!VAR23.FUN9())

    return false;



  *VAR9 = VAR23.FUN10();

  *VAR12 = VAR13.FUN10();

  return true;

}