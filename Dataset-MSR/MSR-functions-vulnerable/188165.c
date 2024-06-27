status_t VAR1::FUN1(
        OMX_U32 VAR2, const VAR3<VAR4> &VAR5,
        VAR6::VAR7 *VAR8, OMX_U32 VAR9) {
 if (VAR5 == NULL || VAR8 == NULL) {
        FUN2("");
 return VAR10;

     }
 
     VAR11::VAR12 FUN3(VAR13);

    if (VAR9 > VAR5->FUN4()) {


         return VAR10;
     }
 

    VAR14 *VAR15 = new FUN5(VAR5, VAR2);




















































 
     VAR16 *VAR17;
 
     OMX_ERRORTYPE VAR18 = FUN6(
             VAR19, &VAR17, VAR2, VAR15,

            VAR9, static_cast<VAR20 *>(VAR5->FUN7()));


 
     if (VAR18 != VAR21) {
         FUN8(VAR22, VAR18, FUN9(

                VAR2, (VAR23)VAR9, VAR5->FUN7()));


 
         delete VAR15;
         VAR15 = NULL;

 *VAR8 = 0;

 return FUN10(VAR18);
 }

    FUN11(VAR17->VAR24, VAR15);

 *VAR8 = FUN12(VAR17);

    FUN13(VAR2, *VAR8);

    VAR3<VAR25> FUN14(FUN15());
 if (VAR26 != NULL && VAR2 == VAR27) {
        VAR26->FUN16(VAR17);
 }

    FUN17(VAR22, FUN18(
 *VAR8, VAR2, "", VAR9, VAR5->FUN4(), VAR5->FUN7()));
 return VAR28;
}