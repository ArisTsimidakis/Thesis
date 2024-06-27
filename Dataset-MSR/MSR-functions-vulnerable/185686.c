VAR1 FUN1() {

    FUN2(

        VAR2, VAR3,

        FUN3(VAR2::FUN4(),

                        FUN5().FUN6(123, 456),

                        FUN7(1, 2, 3)));

    FUN2(VAR4, VAR5,

                      FUN8(VAR4::FUN4(), VAR3,

                                 FUN9(12, 34, 56, 78)));

    FUN2(

        VAR6, VAR7,

        VAR6::FUN10(

            VAR6::FUN4(),

            VAR6::VAR8{

                VAR3, VAR5, VAR9,

                FUN11(), 0.789f, VAR10::VAR11}));

    return FUN12(VAR3, VAR5, VAR7);




























   }