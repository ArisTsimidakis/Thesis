void VAR1::FUN1(VAR2 ) {
 if (VAR3) {
 return;
 }

 VAR4<VAR5 *> &VAR6 = FUN2(0);
 VAR4<VAR5 *> &VAR7 = FUN2(1);

 if (!VAR8) {
 
 
 

 if (VAR7.FUN3()) {
 return;
 }

 if (VAR9 != FUN4(VAR10, NULL, NULL, NULL, NULL)) {
            FUN5("");
            FUN6(VAR11, VAR12, 0, NULL);
            VAR3 = true;
 return;
 }

        OMX_U32 VAR13  = FUN7(VAR10, VAR14);
 if (VAR15 != VAR13) {
            FUN8("", VAR15, VAR13);
 }

        AACENC_InfoStruct VAR16;
 if (VAR9 != FUN9(VAR10, &VAR16)) {
            FUN5("");
            FUN6(VAR11, VAR12, 0, NULL);
            VAR3 = true;
 return;
 }

 
         VAR5 *VAR17 = *VAR7.FUN10();
         VAR18 *VAR19 = VAR17->VAR20;


















         VAR19->VAR21 = VAR16.VAR22;
         VAR19->VAR23 = VAR24;
 
 VAR25 *VAR26 = VAR19->VAR27 + VAR19->VAR28;
        memcpy(VAR26, VAR16.VAR29, VAR16.VAR22);

        VAR7.FUN11(VAR7.FUN10());
        VAR17->VAR30 = false;
        FUN12(VAR19);

        VAR8 = true;
 }

 size_t VAR31 =
        VAR32 * VAR33 * sizeof(VAR34);

 
 if (VAR35 == VAR36 && VAR31 > 512) {
        VAR31 = 512;
 }

 for (;;) {
 

 while (VAR37 < VAR31) {
 
 
 
 

 if (VAR38 || VAR6.FUN3()) {
 return;
 }

 VAR5 *VAR39 = *VAR6.FUN10();
            VAR18 *VAR40 = VAR39->VAR20;

 const void *VAR41 = VAR40->VAR27 + VAR40->VAR28;

 size_t copy = VAR31 - VAR37;
 if (copy > VAR40->VAR21) {
                copy = VAR40->VAR21;
 }

 if (VAR42 == NULL) {
                VAR42 = new VAR34[VAR31 / sizeof(VAR34)];
 }

 if (VAR37 == 0) {
                VAR43 = VAR40->VAR44;
 }

            memcpy((VAR25 *)VAR42 + VAR37, VAR41, copy);
            VAR37 += copy;

            VAR40->VAR28 += copy;
            VAR40->VAR21 -= copy;

 
 
            VAR40->VAR44 +=
 (copy * 1000000ll / VAR45)
 / (VAR32 * sizeof(VAR34));

 if (VAR40->VAR21 == 0) {
 if (VAR40->VAR23 & VAR46) {
                    VAR38 = true;

 
                    memset((VAR25 *)VAR42 + VAR37,
 0,
                           VAR31 - VAR37);

                    VAR37 = VAR31;
 }

                VAR6.FUN11(VAR6.FUN10());
                VAR39->VAR30 = false;
                FUN13(VAR40);

                VAR41 = NULL;
                VAR40 = NULL;
                VAR39 = NULL;
 }
 }

 
 
 

 if (VAR7.FUN3()) {
 return;
 }

 VAR5 *VAR17 = *VAR7.FUN10();
        VAR18 *VAR19 = VAR17->VAR20;

 VAR25 *VAR47 = (VAR25 *)VAR19->VAR27 + VAR19->VAR28;
 size_t VAR48 = VAR19->VAR49 - VAR19->VAR28;

        AACENC_InArgs VAR50;
        AACENC_OutArgs VAR51;
        memset(&VAR50, 0, sizeof(VAR50));
        memset(&VAR51, 0, sizeof(VAR51));
        VAR50.VAR52 = VAR31 / sizeof(VAR34);

 void* VAR53[] = { (unsigned char *)VAR42 };
        INT   VAR54[] = { VAR55 };
        INT   VAR56[] = { (VAR57)VAR31 };
        INT   VAR58[] = { sizeof(VAR34) };

        AACENC_BufDesc VAR59;
        VAR59.VAR60           = sizeof(VAR53) / sizeof(void*);
        VAR59.VAR61              = (void**)&VAR53;
        VAR59.VAR62 = VAR54;
        VAR59.VAR63          = VAR56;
        VAR59.VAR64        = VAR58;

 void* VAR65[] = { VAR47 };
        INT   VAR66[] = { VAR67 };
        INT   VAR68[] = { 0 };
        INT   VAR69[] = { sizeof(VAR70) };

        AACENC_BufDesc VAR71;
        VAR71.VAR60           = sizeof(VAR65) / sizeof(void*);
        VAR71.VAR61              = (void**)&VAR65;
        VAR71.VAR62 = VAR66;
        VAR71.VAR63          = VAR68;
        VAR71.VAR64        = VAR69;

 
        AACENC_ERROR VAR72 = VAR9;
 size_t VAR73 = 0;

 do {
            memset(&VAR51, 0, sizeof(VAR51));

            VAR65[0] = VAR47;
            VAR68[0] = VAR48 - VAR73;

            VAR72 = FUN4(VAR10,
 &VAR59,
 &VAR71,
 &VAR50,
 &VAR51);

 if (VAR72 == VAR9) {
                VAR47 += VAR51.VAR74;
                VAR73 += VAR51.VAR74;

 if (VAR51.VAR52 > 0) {
 int VAR75 = VAR50.VAR52 - VAR51.VAR52;
 if (VAR75 > 0) {
                        memmove(VAR42,
 &VAR42[VAR51.VAR52],
 sizeof(VAR34) * VAR75);
 }
                    VAR50.VAR52 -= VAR51.VAR52;
 }
 }
 } while (VAR72 == VAR9 && VAR50.VAR52 > 0);

        VAR19->VAR21 = VAR73;

        VAR19->VAR23 = VAR76;

 if (VAR38) {
 
 
            VAR19->VAR23 = VAR46;
 }

        VAR19->VAR44 = VAR43;

#if 0
        FUN14("",
              VAR73, VAR43, VAR19->VAR23);

        FUN15(VAR19->VAR27 + VAR19->VAR28, VAR19->VAR21);
#endif

        VAR7.FUN11(VAR7.FUN10());
        VAR17->VAR30 = false;
        FUN12(VAR19);

        VAR19 = NULL;
        VAR17 = NULL;

        VAR37 = 0;
 }
}