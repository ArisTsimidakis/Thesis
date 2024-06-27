bool FUN1(const VAR1::VAR2& VAR3,

            PP_Module VAR4,

            PP_GetInterface_Func VAR5,

            const VAR6::VAR7& VAR8,

            VAR9* VAR10) {

    VAR11.FUN2(new VAR12);

    VAR13.FUN2(new VAR6::VAR14::FUN3(

        VAR4, VAR5, VAR10));



    if (!VAR13->FUN4(VAR11.FUN5(),

                                          VAR3,

                                          true,  

                                          VAR8)) {

      VAR13.FUN2();

      VAR11.FUN2();

      return false;

    }



    return true;

  }