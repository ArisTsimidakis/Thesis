void VAR1::FUN1(OMX_U32 VAR2) {
 
 if (VAR3 == NULL) {
 if (VAR4 != FUN2()) {
            FUN3("");
            FUN4(VAR5,
                   VAR6,
 0, 
                   NULL); 
 return;
 }
 }

 vpx_codec_err_t VAR7;
 VAR8<VAR9 *> &VAR10 = FUN5(VAR11);
 VAR8<VAR9 *> &VAR12 = FUN5(VAR13);

 while (!VAR10.FUN6() && !VAR12.FUN6()) {
 VAR9 *VAR14 = *VAR10.FUN7();
        VAR15 *VAR16 = VAR14->VAR17;

 VAR9 *VAR18 = *VAR12.FUN7();
        VAR15 *VAR19 = VAR18->VAR17;

 if (VAR16->VAR20 & VAR21) {
            VAR10.FUN8(VAR10.FUN7());
            VAR14->VAR22 = false;
            FUN9(VAR16);

            VAR19->VAR23 = 0;
            VAR19->VAR20 = VAR21;

            VAR12.FUN8(VAR12.FUN7());
            VAR18->VAR22 = false;
            FUN10(VAR19);
 return;
 }

 const VAR24 *VAR25 =
            VAR16->VAR26 + VAR16->VAR27;

 size_t VAR28 = VAR29 * VAR30 * 3 / 2;
 if (VAR31) {
            VAR25 = FUN11(
                    VAR32, VAR28,
                    VAR25, VAR16->VAR23,
                    VAR29, VAR30);
 if (VAR25 == NULL) {
                FUN3("");
                FUN4(VAR5, VAR6, 0, 0);
 return;
 }
 } else {
 if (VAR16->VAR23 < VAR28) {
                FUN12(0x534e4554, "");
                FUN4(VAR5, VAR6, 0, 0);
 return;
 } else if (VAR16->VAR23 > VAR28) {
                FUN13("");
 }

 if (VAR33 == VAR34) {
 FUN14(
                        VAR25, VAR32, VAR29, VAR30);

                VAR25 = VAR32;
 }
 }
 vpx_image_t VAR35;
        FUN15(&VAR35, VAR36, VAR29, VAR30,
                     VAR37, (VAR24 *)VAR25);

 vpx_enc_frame_flags_t VAR38 = 0;
 if (VAR39 > 0) {
            VAR38 = FUN16();
 }
 if (VAR40) {
            VAR38 |= VAR41;
            VAR40 = false;
 }

 if (VAR42) {
            VAR43->VAR44 = VAR45/1000;
 vpx_codec_err_t VAR46 = FUN17(VAR3,
                                                           VAR43);
 if (VAR46 != VAR47) {
                FUN3("",
                      FUN18(VAR46));
                FUN4(VAR5,
                       VAR6,
 0, 
                       NULL); 
 }
            VAR42 = false;
 }

 uint32_t VAR48;

         if (VAR16->VAR49 > VAR50) {
             VAR48 = (VAR51)(VAR16->VAR49 - VAR50);
         } else {

            VAR48 = (VAR51)(((VAR52)1000000 << 16) / VAR53);






         }
         VAR50 = VAR16->VAR49;
         VAR7 = FUN19(
                VAR3,
 &VAR35,
                VAR16->VAR49, 
                VAR48, 
                VAR38, 
                VAR54); 
 if (VAR7 != VAR47) {
            FUN3("");
            FUN4(VAR5,
                   VAR6,
 0, 
                   NULL); 
 return;
 }

 vpx_codec_iter_t VAR55 = NULL;
 const VAR56* VAR57;

 while ((VAR57 = FUN20(
                        VAR3, &VAR55))) {
 if (VAR57->VAR58 == VAR59) {
                VAR19->VAR49 = VAR57->VAR60.VAR61.VAR62;
                VAR19->VAR20 = 0;
 if (VAR57->VAR60.VAR61.VAR38 & VAR63)
                    VAR19->VAR20 |= VAR64;
                VAR19->VAR27 = 0;
                VAR19->VAR23 = VAR57->VAR60.VAR61.VAR65;
 if (VAR19->VAR23 > VAR19->VAR66) {
                    FUN12(0x534e4554, "");
                    FUN4(VAR5, VAR6, 0, 0);
 return;
 }
                memcpy(VAR19->VAR26,
                       VAR57->VAR60.VAR61.VAR67,
                       VAR57->VAR60.VAR61.VAR65);
                VAR18->VAR22 = false;
                VAR12.FUN8(VAR12.FUN7());
                FUN10(VAR19);
 }
 }

        VAR14->VAR22 = false;
        VAR10.FUN8(VAR10.FUN7());
        FUN9(VAR16);

     }
 }