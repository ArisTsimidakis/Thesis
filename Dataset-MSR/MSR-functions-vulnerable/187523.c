OMX_ERRORTYPE  VAR1::FUN1(
        OMX_IN OMX_HANDLETYPE            VAR2,
        OMX_INOUT VAR3** VAR4,
        OMX_IN OMX_U32                   VAR5,
        OMX_IN OMX_PTR                   VAR6,
        OMX_IN OMX_U32                   VAR7)
{
 (void)VAR2, (void)VAR5;
    OMX_ERRORTYPE VAR8 = VAR9;
 unsigned   VAR10 = 0;

    FUN2("");
 if (VAR7 != VAR11.VAR12) {
        FUN3("",
 (unsigned int)VAR7, (unsigned int)VAR11.VAR12);
 return VAR13;
 }

 if (!VAR14) {
        FUN2("", VAR15,
 (unsigned int)VAR11.VAR12, (unsigned int)VAR11.VAR16);
        VAR14 = (VAR3*) \
                        calloc( (sizeof(VAR3)), VAR11.VAR16);
 if (VAR14 == NULL) {
            FUN3("");
 return VAR17;
 }

        FUN4("", VAR14);
        VAR18 = (struct VAR19 *) calloc(sizeof (struct VAR19), VAR11.VAR16);

 if (VAR18 == NULL) {
            FUN3("");
 return VAR17;
 }
#ifdef VAR20
        VAR21 = (struct VAR22 *) calloc(sizeof (struct VAR22), VAR11.VAR16);
 if (VAR21 == NULL) {
            FUN3("");
 return VAR17;
 }
#endif
 for (VAR10=0; VAR10< VAR11.VAR16; VAR10++) {
            VAR18[VAR10].VAR23 = -1;
#ifdef VAR20
            VAR21[VAR10].VAR24 =-1;
            VAR21[VAR10].VAR25.VAR23 =-1;
            VAR21[VAR10].VAR26.VAR27 = 0;
#endif
 }
 }

 for (VAR10=0; VAR10< VAR11.VAR16; VAR10++) {
 if (FUN5(&VAR28,VAR10)) {
 break;
 }
 }
 if (VAR10 < VAR11.VAR16) {

 *VAR4 = (VAR14 + VAR10);
 (*VAR4)->VAR29             = sizeof(VAR3);
 (*VAR4)->VAR30.VAR30 = VAR31;
 (*VAR4)->VAR32         = VAR11.VAR12;
 (*VAR4)->VAR33       = VAR6;
 (*VAR4)->VAR34   = VAR35;
 
 (*VAR4)->VAR36 = (VAR37)&VAR18[VAR10];

#ifdef VAR20
#ifdef VAR38
        VAR21[VAR10].VAR24 = FUN6(VAR11.VAR12,
 &VAR21[VAR10].VAR26,
 &VAR21[VAR10].VAR25,0);
#else
        VAR21[VAR10].VAR24 = FUN6(VAR11.VAR12,
 &VAR21[VAR10].VAR26,
 &VAR21[VAR10].VAR25,VAR39);
#endif
 if (VAR21[VAR10].VAR24 < 0) {
            FUN3("");
 return VAR17;
 }

        VAR18[VAR10].VAR23 = VAR21[VAR10].VAR25.VAR23;
#else
        VAR18[VAR10].VAR23 = open (VAR40,VAR41);

 if (VAR18[VAR10].VAR23 == 0) {
            VAR18[VAR10].VAR23 = open (VAR40,VAR41);
 }

 if (VAR18[VAR10].VAR23 < 0) {
            FUN3("");
 return VAR17;
 }
#endif

         VAR18[VAR10].VAR42 = VAR11.VAR12;
         VAR18[VAR10].VAR43 = 0;
 

        VAR18[VAR10].VAR44 = (VAR45 *)VAR46;


         if(!VAR47) {
             VAR18[VAR10].VAR44 = (unsigned char *)FUN7(NULL,
                 VAR18[VAR10].VAR42,VAR48|VAR49,
                 VAR50,VAR18[VAR10].VAR23,0);
         if (VAR18[VAR10].VAR44 == VAR51) {
                 FUN3("", VAR52);


             close(VAR18[VAR10].VAR23);
 #ifdef VAR20
             FUN8(&VAR21[VAR10]);
#endif
 return VAR17;
 }
 } else {

             
             
             VAR18[VAR10].VAR44 = malloc(sizeof(VAR53) + sizeof(VAR54*));








             (*VAR4)->VAR32 = sizeof(VAR53) + sizeof(VAR54*);
         }
 
 (*VAR4)->VAR55           = (VAR45 *)VAR18[VAR10].VAR44;
        FUN4("", VAR18[VAR10].VAR44);
        FUN9(&VAR28,VAR10);
 
 if (!VAR56 && (FUN10(&VAR18[VAR10],VAR35,VAR10) != true)) {
            FUN3("");
 return VAR17;
 }
 } else {
        FUN3(""
 "", VAR10);
        VAR8 = VAR17;
 }

 return VAR8;
}