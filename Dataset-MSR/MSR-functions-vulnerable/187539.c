void VAR1::FUN1(OMX_U32 VAR2) {
    FUN2(VAR2);

 if (VAR3) {
 return;
 }
 if (VAR4 != VAR5) {
 return;
 }

 
     if (NULL == VAR6) {
         if (VAR7 != FUN3()) {






             return;
         }
     }
 if (FUN4() != VAR8) {
 
        VAR8 = FUN4();
        FUN5(VAR8);
 }

 VAR9<VAR10 *> &VAR11 = FUN6(VAR12);
 VAR9<VAR10 *> &VAR13 = FUN6(VAR14);

 

 if (VAR15 && !VAR16) {
        FUN7();
 }

 while (!VAR13.FUN8()) {
 VAR10 *VAR17;
        VAR18 *VAR19;

 VAR10 *VAR20;
        VAR18 *VAR21;
 size_t VAR22;

        VAR17 = NULL;
        VAR19 = NULL;

 if (!VAR16) {
 if (!VAR11.FUN8()) {
                VAR17 = *VAR11.FUN9();
                VAR19 = VAR17->VAR23;
 } else {
 break;
 }
 }

        VAR20 = *VAR13.FUN9();
        VAR21 = VAR20->VAR23;
        VAR21->VAR24 = 0;
        VAR21->VAR25 = 0;
        VAR21->VAR26 = 0;

 if (VAR19 != NULL && (VAR19->VAR24 & VAR27)) {
            VAR15 = true;
 if (VAR19->VAR28 == 0) {
                VAR11.FUN10(VAR11.FUN9());
                VAR17->VAR29 = false;
                FUN11(VAR19);
                VAR19 = NULL;
                FUN7();
 }
 }

 
 {
 size_t VAR30;
            VAR22 = 0;
 for (VAR30 = 0; VAR30 < VAR31; VAR30++) {
 if (!VAR32[VAR30]) {
                    VAR22 = VAR30;
 break;
 }
 }
 if (VAR19 != NULL) {
                VAR32[VAR22] = true;
                VAR33[VAR22] = VAR19->VAR25;
 }
 }

 {
 ivd_video_decode_ip_t VAR34;
 ivd_video_decode_op_t VAR35;
            WORD32 VAR36, VAR37;
 size_t VAR38, VAR39;

 if (!FUN12(&VAR34, &VAR35, VAR19, VAR21, VAR22)) {
                FUN13("");
                FUN14(VAR40, VAR41, 0, NULL);
                VAR3 = true;
 return;
 }

            FUN15(&VAR42, NULL);
 
            FUN16(VAR43, VAR42, VAR36);


             IV_API_CALL_STATUS_T VAR44;
             VAR44 = FUN17(VAR6, (void *)&VAR34, (void *)&VAR35);
 






































             bool VAR45 = (VAR46 == (VAR35.VAR47 & 0xFF));
 
             FUN15(&VAR43, NULL);
 
            FUN16(VAR42, VAR43, VAR37);

            FUN18("", VAR37, VAR36,
                   VAR35.VAR48);
 if (VAR35.VAR49 && !VAR50) {
                VAR50 = true;
 }

 if ((VAR19 != NULL) && (1 != VAR35.VAR49)) {
 
                VAR32[VAR22] = false;
 }

 
 
 if (VAR51 && !VAR35.VAR52) {
                VAR51 = false;
                FUN19();
                FUN20();
 continue;
 }

 if (VAR45) {
                VAR51 = true;
 if (VAR50) {
                    FUN7();
 }
 continue;
 }

 if ((0 < VAR35.VAR53) && (0 < VAR35.VAR54)) {
 uint32_t VAR55 = VAR35.VAR53;
 uint32_t VAR56 = VAR35.VAR54;
 bool VAR57 = false;
                FUN21(&VAR57, VAR55, VAR56);

 if (VAR57) {
                    FUN19();
 return;
 }
 }

 if (VAR35.VAR52) {
                VAR21->VAR28 = (FUN4() * FUN22() * 3) / 2;

                VAR21->VAR25 = VAR33[VAR35.VAR58];
                VAR32[VAR35.VAR58] = false;

                VAR20->VAR29 = false;
                VAR13.FUN10(VAR13.FUN9());
                VAR20 = NULL;
                FUN23(VAR21);
                VAR21 = NULL;
 } else {
 
                VAR16 = false;

 
 if (VAR15) {
                    VAR21->VAR28 = 0;
                    VAR21->VAR24 |= VAR27;

                    VAR20->VAR29 = false;
                    VAR13.FUN10(VAR13.FUN9());
                    VAR20 = NULL;
                    FUN23(VAR21);
                    VAR21 = NULL;
                    FUN20();
 }
 }
 }

 
 if (VAR19 != NULL) {
            VAR17->VAR29 = false;
            VAR11.FUN10(VAR11.FUN9());
            VAR17 = NULL;
            FUN11(VAR19);
            VAR19 = NULL;
 }
 }
}