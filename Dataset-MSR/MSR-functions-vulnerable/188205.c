void VAR1::FUN1(OMX_U32 VAR2) {
    FUN2(VAR2);

 if (VAR3 != VAR4) {
 return;
 }

 VAR5<VAR6 *> &VAR7 = FUN3(VAR8);
 VAR5<VAR6 *> &VAR9 = FUN3(VAR10);

 

 if (VAR11 && !VAR12) {
        FUN4();
 }

 while (!VAR9.FUN5()) {
 VAR6 *VAR13;
        VAR14 *VAR15;

 VAR6 *VAR16;
        VAR14 *VAR17;
 size_t VAR18;

        VAR13 = NULL;
        VAR15 = NULL;

 if (!VAR12) {
 if (!VAR7.FUN5()) {
                VAR13 = *VAR7.FUN6();
                VAR15 = VAR13->VAR19;
 } else {
 break;
 }
 }

        VAR16 = *VAR9.FUN6();
        VAR17 = VAR16->VAR19;
        VAR17->VAR20 = 0;
        VAR17->VAR21 = 0;
        VAR17->VAR22 = 0;

 if (VAR15 != NULL && (VAR15->VAR20 & VAR23)) {
            VAR11 = true;
 if (VAR15->VAR24 == 0) {
                VAR7.FUN7(VAR7.FUN6());
                VAR13->VAR25 = false;
                FUN8(VAR15);
                VAR15 = NULL;
                FUN4();
 }
 }

 
 
 if (VAR26 && !VAR12) {
 bool VAR27 = false;
            FUN9(&VAR27, VAR28, VAR29);

            FUN10(FUN11(), (VAR30)VAR31);
 return;
 }

 
 {
 size_t VAR32;
            VAR18 = 0;
 for (VAR32 = 0; VAR32 < VAR33; VAR32++) {
 if (!VAR34[VAR32]) {
                    VAR18 = VAR32;
 break;
 }
 }
 if (VAR15 != NULL) {
                VAR34[VAR18] = true;
                VAR35[VAR18] = VAR15->VAR21;
 }
 }

 {
 ivd_video_decode_ip_t VAR36;
 ivd_video_decode_op_t VAR37;

             WORD32 VAR38, VAR39;
             size_t VAR40, VAR41;
 

            FUN12(&VAR36, &VAR37, VAR15, VAR17, VAR18);










             
             FUN13(VAR42, VAR36.VAR43, VAR36.VAR44);
 
 if (VAR36.VAR44 > 0) {
 char *VAR45 = (char *)VAR36.VAR43;
 }

            FUN14(&VAR46, NULL);
 
            FUN15(VAR47, VAR46, VAR38);

            IV_API_CALL_STATUS_T VAR48;
            VAR48 = FUN16(VAR49, (void *)&VAR36, (void *)&VAR37);

 bool VAR50 = (VAR51 == VAR37.VAR52);
 bool VAR53 = (VAR54 == (VAR37.VAR52 & 0xFF));

            FUN14(&VAR47, NULL);
 
            FUN15(VAR46, VAR47, VAR39);

            FUN17("", VAR39, VAR38,
                   VAR37.VAR55);
 if (VAR37.VAR56 && !VAR57) {
                VAR57 = true;
 }

 if ((VAR15 != NULL) && (1 != VAR37.VAR56)) {
 
                VAR34[VAR18] = false;
 }

 
 
 if (VAR50 && !VAR57) {
 bool VAR27 = false;
                FUN9(&VAR27, VAR37.VAR58, VAR37.VAR59);

 
                 FUN10(FUN11(), (VAR30)VAR31);
 

                FUN12(&VAR36, &VAR37, VAR15, VAR17, VAR18);



                FUN16(VAR49, (void *)&VAR36, (void *)&VAR37);






                 return;
             }
 
 
 
 if (VAR60 && !VAR37.VAR61) {
                VAR60 = false;
                FUN18();
                FUN19();
 continue;
 }

 if (VAR50 || VAR53) {
                VAR60 = true;
 if (VAR57) {
                    FUN4();
 }

 if (VAR50) {
                    VAR28 = VAR37.VAR58;
                    VAR29 = VAR37.VAR59;
                    VAR26 = true;
 }
 continue;
 }

 if ((0 < VAR37.VAR58) && (0 < VAR37.VAR59)) {
 uint32_t VAR62 = VAR37.VAR58;
 uint32_t VAR63 = VAR37.VAR59;
 bool VAR27 = false;
                FUN9(&VAR27, VAR62, VAR63);

 if (VAR27) {
                    FUN18();
 return;
 }
 }

 if (VAR37.VAR61) {
 size_t VAR64;
                VAR17->VAR24 = (VAR65 * VAR66 * 3) / 2;

                VAR64 = FUN20(VAR35, VAR34);
                VAR17->VAR21 = VAR35[VAR64];
                VAR34[VAR64] = false;

 
                VAR67 = VAR67 && !(VAR68 == VAR37.VAR69);

 if (VAR67) {
                    VAR37.VAR61 = false;
 } else {
                    FUN17("",
 (long long)VAR17->VAR21, VAR65, VAR66);
                    FUN13(VAR70, VAR17->VAR71, VAR17->VAR24);
                    VAR16->VAR25 = false;
                    VAR9.FUN7(VAR9.FUN6());
                    VAR16 = NULL;
                    FUN21(VAR17);
                    VAR17 = NULL;
 }
 } else {
 
                VAR12 = false;

 
 if (VAR11) {
                    VAR17->VAR24 = 0;
                    VAR17->VAR20 |= VAR23;

                    VAR16->VAR25 = false;
                    VAR9.FUN7(VAR9.FUN6());
                    VAR16 = NULL;
                    FUN21(VAR17);
                    VAR17 = NULL;
                    FUN19();
 }
 }
 }

 
 if (VAR15 != NULL) {
            VAR13->VAR25 = false;
            VAR7.FUN7(VAR7.FUN6());
            VAR13 = NULL;
            FUN8(VAR15);
            VAR15 = NULL;
 }
 }
}