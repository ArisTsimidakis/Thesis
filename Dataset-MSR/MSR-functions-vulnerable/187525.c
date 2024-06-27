OMX_ERRORTYPE  VAR1::FUN1(
        OMX_IN OMX_HANDLETYPE            VAR2,
        OMX_INOUT VAR3** VAR4,
        OMX_IN OMX_U32                   VAR5,
        OMX_IN OMX_PTR                   VAR6,
        OMX_IN OMX_U32                   VAR7,
        OMX_IN VAR8*                   VAR9)
{
 (void) VAR2;
    OMX_ERRORTYPE VAR10 = VAR11;

 unsigned   VAR12 = 0;
 unsigned char *VAR13 = NULL;

    FUN2("",(unsigned int)VAR5,VAR6,(unsigned int)VAR7,VAR9);
 if (VAR7 != VAR14.VAR15) {
        FUN3(""
 "", (unsigned int)VAR7, (unsigned int)VAR14.VAR15);
 return VAR16;
 }

 if (!VAR17) {
        VAR18 = true;
        VAR17 = (VAR3*) \
                        calloc( (sizeof(VAR3)), VAR14.VAR19);
 if (VAR17 == NULL) {
            FUN3("");
 return VAR20;
 }
        FUN4("", VAR17);


        VAR21 = (struct VAR22 *) calloc(sizeof (struct VAR22), VAR14.VAR19);
 if (VAR21 == NULL) {
            FUN3("");
 return VAR20;
 }
#ifdef VAR23
        VAR24 = (struct VAR25 *) calloc(sizeof (struct VAR25), VAR14.VAR19);
 if (VAR24 == NULL) {
            FUN3("");
 return VAR20;
 }
#endif

 for (VAR12=0; VAR12< VAR14.VAR19; VAR12++) {
            VAR21[VAR12].VAR26 = -1;
#ifdef VAR23
            VAR24[VAR12].VAR27 =-1;
            VAR24[VAR12].VAR28.VAR26 =-1;
            VAR24[VAR12].VAR29.VAR30 = 0;
#endif
 }

 }

 for (VAR12=0; VAR12< VAR14.VAR19; VAR12++) {
 if (FUN5(&VAR31,VAR12)) {
 break;
 }
 }

 if (VAR12 < VAR14.VAR19) {

 *VAR4 = (VAR17 + VAR12);
        FUN6(&VAR31,VAR12);

 (*VAR4)->VAR32           = (VAR8 *)VAR9;
 (*VAR4)->VAR33             = sizeof(VAR3);
 (*VAR4)->VAR34.VAR34 = VAR35;
 (*VAR4)->VAR36         = VAR14.VAR15;
 (*VAR4)->VAR37       = VAR6;
 (*VAR4)->VAR38   = VAR39;

 if (!VAR40) {
#ifdef VAR23
#ifdef VAR41
            VAR24[VAR12].VAR27 = FUN7(VAR14.VAR15,
 &VAR24[VAR12].VAR29,
 &VAR24[VAR12].VAR28,0);
#else
            VAR24[VAR12].VAR27 = FUN7(VAR14.VAR15,
 &VAR24[VAR12].VAR29,
 &VAR24[VAR12].VAR28,VAR42);
#endif
 if (VAR24[VAR12].VAR27 < 0) {
                FUN3("");
 return VAR20;
 }
            VAR21[VAR12].VAR26 = VAR24[VAR12].VAR28.VAR26;
#else
            VAR21[VAR12].VAR26 = open (VAR43,VAR44);
 if (VAR21[VAR12].VAR26 == 0) {
                VAR21[VAR12].VAR26 = open (VAR43,VAR44);
 }

 if (VAR21[VAR12] .VAR26 < 0) {
                FUN3("");
 return VAR20;
 }
#endif

             VAR21[VAR12].VAR45 = VAR14.VAR15;
             VAR21[VAR12].VAR46 = 0;
 

            VAR21[VAR12].VAR9 = (VAR8 *)VAR47;


             if(!VAR48) {
                 VAR21[VAR12].VAR9 = (unsigned char *)FUN8(
                     NULL,VAR21[VAR12].VAR45,VAR49|VAR50,
                    VAR51,VAR21[VAR12].VAR26,0);

 
             if (VAR21[VAR12].VAR9 == VAR52) {
                     FUN3("");


                 close(VAR21[VAR12].VAR26);
 #ifdef VAR23
                 FUN9(&VAR24[VAR12]);
#endif
 return VAR20;
 }
 }

 } else {
            VAR53 *VAR54 = reinterpret_cast<VAR53 *>((*VAR4)->VAR37);
            FUN4("", VAR54->VAR55, (unsigned)VAR54->VAR46);

 if (VAR54) {
                VAR21[VAR12].VAR26 = VAR54->VAR55;
                VAR21[VAR12].VAR46 = VAR54->VAR46;
                VAR21[VAR12].VAR45 = VAR14.VAR15;
                VAR21[VAR12].VAR9 = (unsigned char *)VAR9;
                FUN4("",
 (unsigned int)VAR54->VAR55, (unsigned int)VAR54->VAR46);
 } else {
                FUN3("");
 return VAR16;
 }
 }

        FUN4("",
 (*VAR4), (*VAR4)->VAR32, VAR21[VAR12].VAR9);
 if ( FUN10(&VAR21[VAR12],VAR39,VAR12) != true) {
            FUN3("");
 return VAR20;
 }
 } else {
        FUN3(""
 "", VAR12);
        VAR10 = VAR20;
 }

 return VAR10;
}