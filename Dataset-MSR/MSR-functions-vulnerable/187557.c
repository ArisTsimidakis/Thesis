status_t VAR1::FUN1(
        OMX_U32 VAR2, const VAR3<VAR4>& VAR5,
        VAR6::VAR7 *VAR8) {

 
    OMX_PARAM_PORTDEFINITIONTYPE VAR9;
 FUN2(&VAR9);
    VAR9.VAR10 = VAR2;
    OMX_ERRORTYPE VAR11 = FUN3(VAR12, VAR13, &VAR9);
 if (VAR11 != VAR14) {
        OMX_INDEXTYPE VAR15 = VAR13;
        FUN4(VAR16, VAR11, "",
                FUN5(VAR15), VAR15, FUN6(VAR2), VAR2);

         return VAR17;
     }
 

    VAR18 *VAR19 = new FUN7(VAR5);


 
     VAR20 *VAR21 = NULL;
     VAR22* VAR23 = const_cast<VAR22*>(
 reinterpret_cast<const VAR22*>(VAR5->VAR24));

    VAR11 = FUN8(
            VAR12,
 &VAR21,
            VAR2,
            VAR19,
            VAR9.VAR25,
            VAR23);

 if (VAR11 != VAR14) {
        FUN4(VAR26, VAR11, FUN9(VAR2, "", VAR9.VAR25, VAR23));
 delete VAR19;
        VAR19 = NULL;
 *VAR8 = 0;
 return FUN10(VAR11);
 }

    FUN11(VAR21->VAR27, VAR23);
    FUN11(VAR21->VAR28, VAR19);

 *VAR8 = FUN12(VAR21);

    FUN13(VAR2, *VAR8);
    FUN14(VAR29, FUN15(
 *VAR8, VAR2, "", VAR9.VAR25, VAR23));
 return VAR30;
}