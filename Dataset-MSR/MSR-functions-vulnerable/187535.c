void VAR1::FUN1(VAR2 ) {
 if (VAR3 || VAR4 != VAR5) {
 return;
 }

    VAR6* VAR7[VAR8];
    UINT VAR9[VAR8] = {0};
    UINT VAR10[VAR8] = {0};

 VAR11<VAR12 *> &VAR13 = FUN2(0);
 VAR11<VAR12 *> &VAR14 = FUN2(1);

 while ((!VAR13.FUN3() || VAR15) && !VAR14.FUN3()) {
 if (!VAR13.FUN3()) {
            INT_PCM VAR16[2048 * VAR17];
 VAR12 *VAR18 = *VAR13.FUN4();
            VAR19 *VAR20 = VAR18->VAR21;

            VAR15 = (VAR20->VAR22 & VAR23) != 0;

 if (VAR24 == 0 && !(VAR20->VAR22 & VAR25)) {
                FUN5("");
                VAR20->VAR22 |= VAR25;
 }
 if ((VAR20->VAR22 & VAR25) != 0) {
 VAR12 *VAR18 = *VAR13.FUN4();
                VAR19 *VAR20 = VAR18->VAR21;

                VAR7[0] = VAR20->VAR26 + VAR20->VAR27;
                VAR9[0] = VAR20->VAR28;

                AAC_DECODER_ERROR VAR29 =
                    FUN6(VAR30,
                                         VAR7,
                                         VAR9);

 if (VAR29 != VAR31) {
                    FUN7("", VAR29);
                    VAR3 = true;
                    FUN8(VAR32, VAR33, VAR29, NULL);
 return;
 }

                VAR24++;
                VAR34++; 

                VAR18->VAR35 = false;
                VAR13.FUN9(VAR13.FUN4());
                VAR36 = NULL;
                VAR18 = NULL;
                FUN10(VAR20);
                VAR20 = NULL;

                FUN11();
 
 
 if (VAR37->VAR38 && VAR37->VAR39) {
                    FUN12("",
                        VAR37->VAR38,
                        VAR37->VAR39);

                    FUN8(VAR40, 1, 0, NULL);
                    VAR4 = VAR41;
 }
 return;
 }

 if (VAR20->VAR28 == 0) {
                VAR18->VAR35 = false;
                VAR13.FUN9(VAR13.FUN4());
                VAR36 = NULL;
                VAR18 = NULL;
                FUN10(VAR20);
                VAR20 = NULL;
 continue;
 }

 if (VAR42) {
 size_t VAR43 = 0;
 
 

 const VAR44 *VAR45 = VAR20->VAR26 + VAR20->VAR27;

 bool VAR46 = false;
 if (VAR20->VAR28 < 7) {
                    FUN5(""
 "", VAR20->VAR28);
                    FUN13(VAR45, VAR20->VAR28);
                    VAR46 = true;
 } else {
 bool VAR47 = (VAR45[1] & 1);

 unsigned VAR48 =
 ((VAR45[3] & 3) << 11)
 | (VAR45[4] << 3)
 | (VAR45[5] >> 5);

 if (VAR20->VAR28 < VAR48) {
                        FUN5(""
 ""
 "",
                                VAR20->VAR28, VAR48);
                        FUN13(VAR45, VAR20->VAR28);

                         VAR46 = true;
                     } else {
                         VAR43 = (VAR47 ? 7 : 9);










 

                        VAR7[0] = (VAR6 *)VAR45 + VAR43;

                        VAR9[0] = VAR48 - VAR43;



                        VAR20->VAR27 += VAR43;

                        VAR20->VAR28 -= VAR43;






                     }
                 }
 
 if (VAR46) {
                    VAR3 = true;
                    FUN8(VAR32, VAR49, VAR50, NULL);
 return;
 }

 
                VAR51.FUN14(VAR9[0]);
 if (VAR36 != VAR20) {
                    VAR52.FUN14(VAR20->VAR53);
                    VAR36 = VAR20;
 } else {
 int64_t VAR54 = VAR52.FUN15();
                    VAR54 += VAR37->VAR55 *
 1000000ll / VAR37->VAR56;
                    VAR52.FUN14(VAR54);
 }
 } else {
                VAR7[0] = VAR20->VAR26 + VAR20->VAR27;
                VAR9[0] = VAR20->VAR28;
                VAR36 = VAR20;
                VAR52.FUN14(VAR20->VAR53);
                VAR51.FUN14(VAR20->VAR28);
 }

 
            VAR10[0] = VAR9[0];

            INT VAR57 = VAR37->VAR38;
            INT VAR58 = VAR37->VAR39;

            FUN16(VAR30,
                            VAR7,
                            VAR9,
                            VAR10);

 
            VAR59.FUN17(VAR37);
            VAR59.update();

            UINT VAR60 = VAR9[0] - VAR10[0];
            VAR20->VAR28 -= VAR60;
            VAR20->VAR27 += VAR60;

            AAC_DECODER_ERROR VAR29;
 int VAR61 = 0;
 do {
 if (FUN18() <
 (VAR37->VAR62 * VAR37->VAR39)) {
                    FUN19("");
 break;
 }

 int VAR63 = VAR37->VAR64;
                VAR29 = FUN20(VAR30,
                                           VAR16,
 2048 * VAR17,
 0 );

                VAR63 = VAR37->VAR64 - VAR63;
                VAR61++;

 if (VAR29 == VAR65) {
 break;
 }
                VAR66.FUN14(VAR63);

 if (VAR29 != VAR31) {
                    FUN7("", VAR29);
 }

 if (VAR10[0] != 0) {
                    FUN5("");
                    VAR3 = true;
                    FUN8(VAR32, VAR33, 0, NULL);
 return;
 }

 size_t VAR67 =
                    VAR37->VAR62 * sizeof(VAR68) * VAR37->VAR39;

 if (VAR29 == VAR31) {
 if (!FUN21(VAR16,
                            VAR37->VAR62 * VAR37->VAR39)) {
                        VAR3 = true;
                        FUN8(VAR32, VAR33, VAR29, NULL);
 return;
 }
 } else {
                    FUN7("", VAR29);

                    memset(VAR16, 0, VAR67); 

 if (!FUN21(VAR16,
                            VAR37->VAR62 * VAR37->VAR39)) {
                        VAR3 = true;
                        FUN8(VAR32, VAR33, VAR29, NULL);
 return;
 }

 
 if (VAR20) {
                        VAR20->VAR28 = 0;
 }

                    FUN22(VAR30, VAR69, 1);

 
 
                    VAR51.FUN23();
 int VAR70 = 0;
 for (int VAR71 = 0; VAR71 < VAR61; VAR71++) {
                        VAR70 += VAR66.FUN24(VAR66.FUN25() - VAR61 + VAR71);
 }
                    VAR51.FUN14(VAR70);

 
 }

 
 if (VAR24 <= 2 || VAR34 > 1) { 
 if (VAR37->VAR38 != VAR57 ||
                        VAR37->VAR39 != VAR58) {
                        FUN12("",
                              VAR57, VAR37->VAR38,
                              VAR58, VAR37->VAR39);

                        FUN8(VAR40, 1, 0, NULL);
                        VAR4 = VAR41;

 if (VAR20 && VAR20->VAR28 == 0) {
                            VAR18->VAR35 = false;
                            VAR24++;
                            VAR13.FUN9(VAR13.FUN4());
                            VAR36 = NULL;
                            VAR18 = NULL;
                            FUN10(VAR20);
                            VAR20 = NULL;
 }
 return;
 }
 } else if (!VAR37->VAR38 || !VAR37->VAR39) {
                    FUN7("");
                    VAR3 = true;
                    FUN8(VAR32, VAR33, VAR29, NULL);
 return;
 }
 if (VAR20 && VAR20->VAR28 == 0) {
                    VAR18->VAR35 = false;
                    VAR24++;
                    VAR13.FUN9(VAR13.FUN4());
                    VAR36 = NULL;
                    VAR18 = NULL;
                    FUN10(VAR20);
                    VAR20 = NULL;
 } else {
                    FUN19("", VAR20 ? VAR20->VAR28 : 0);
 }
 } while (VAR29 == VAR31);
 }

 int32_t VAR72 = VAR37->VAR72 * VAR37->VAR39;

 if (!VAR15 && VAR73 < VAR72) {
 
 int32_t VAR74 = VAR72 - VAR73;
 int32_t VAR75 = FUN26();
 if (VAR75 > VAR74) {
                VAR75 = VAR74;
 }
 int32_t VAR76 = FUN27(0, VAR75);
            VAR73 += VAR76;
 continue;
 }

 if (VAR15) {
 while (VAR73 > 0) {
 
                INT_PCM VAR16[2048 * VAR17];
 
 
                 VAR59.FUN17(VAR37);
                 VAR59.update();

                AAC_DECODER_ERROR VAR29 =
                    FUN20(VAR30,
                                           VAR16,
 2048 * VAR17,
                                           VAR77);
 if (VAR29 != VAR31) {
                    FUN7("", VAR29);
 }

 int32_t VAR78 = VAR37->VAR62 * VAR37->VAR39;
 if (VAR78 > VAR73) {
                    VAR78 = VAR73;
 }
                FUN21(VAR16, VAR78);
                VAR73 -= VAR78;
 }
 }

 while (!VAR14.FUN3()
 && FUN26()
 >= VAR37->VAR62 * VAR37->VAR39) {
 VAR12 *VAR79 = *VAR14.FUN4();
            VAR19 *VAR80 = VAR79->VAR21;

 if (VAR80->VAR27 != 0) {
                FUN5("");
                VAR3 = true;
                FUN8(VAR32, VAR33, 0, NULL);
 return;
 }

            VAR81 *VAR82 =
 reinterpret_cast<VAR81 *>(VAR80->VAR26 + VAR80->VAR27);
 int VAR83 = VAR37->VAR39 * sizeof(VAR68);
 if (VAR80->VAR27
 + VAR37->VAR62 * VAR83
 > VAR80->VAR84) {
                FUN5("");
                VAR3 = true;
                FUN8(VAR32, VAR33, 0, NULL);
 return;

 }

 int VAR85 = FUN26();
 int VAR86 = VAR80->VAR84 / sizeof(VAR68);
 if (VAR86 > VAR85) {
                VAR86 = VAR85;
 }
 int64_t VAR54 = 0;
 if (VAR85) {

 int VAR87 = VAR86 / (VAR37->VAR62 * VAR37->VAR39);
                VAR86 = VAR87 * (VAR37->VAR62 * VAR37->VAR39);

                FUN19("",
                        VAR86, VAR85, VAR87);
 VAR88 *VAR89 = &VAR52.FUN28(0);
                VAR54 = *VAR89;
 VAR90 *VAR91 = &VAR51.FUN28(0);
 for (int VAR71 = 0; VAR71 < VAR87; VAR71++) {
 int32_t VAR92 = VAR66.FUN24(0);
                    VAR66.FUN29(0);
                    FUN19("", VAR92, *VAR91);
 if (*VAR91 > VAR92) {
 
 *VAR91 -= VAR92;
 *VAR89 += VAR37->VAR55 *
 1000000ll / VAR37->VAR56;
                        FUN19("",
 (long long) *VAR89, *VAR91);
 } else {
 
 if (VAR52.FUN25() > 0) {
                            VAR52.FUN29(0);
                            VAR89 = &VAR52.FUN28(0);
                            VAR51.FUN29(0);
                            VAR91 = &VAR51.FUN28(0);
                            FUN19("",
 (long long) *VAR89, *VAR91);
 }
 
 
 
 
 
                        VAR87 = VAR71 + 1;
                        VAR86 = VAR87 * VAR37->VAR62 * VAR37->VAR39;
 break;
 }
 }

                FUN19("", VAR86);
 int32_t VAR93 = FUN27(VAR82, VAR86);
 if (VAR93 != VAR86) {
                    FUN5("");
                    VAR3 = true;
                    FUN8(VAR32, VAR33, 0, NULL);
 return;
 }
 }

            VAR80->VAR28 = VAR86 * sizeof(VAR68);

 if (VAR15 && !VAR14.FUN3() && FUN26() == 0) {
                VAR80->VAR22 = VAR23;
                VAR94 = true;
 } else {
                VAR80->VAR22 = 0;
 }

            VAR80->VAR53 = VAR54;

            VAR34++;
            VAR79->VAR35 = false;
            VAR14.FUN9(VAR14.FUN4());
            VAR79 = NULL;
            FUN19("", VAR80->VAR53, VAR80->VAR28);
            FUN30(VAR80);
            VAR80 = NULL;
 }

 if (VAR15) {
 int VAR95 = FUN26();
 if (!VAR14.FUN3()
 && VAR95 < VAR37->VAR62 * VAR37->VAR39) {
 if (!VAR94) {
 
                    VAR94 = true;
 VAR12 *VAR79 = *VAR14.FUN4();
                    VAR19 *VAR80 = VAR79->VAR21;

                    VAR81 *VAR82 = reinterpret_cast<VAR81 *>(VAR80->VAR26
 + VAR80->VAR27);
 int32_t VAR93 = FUN27(VAR82, VAR95);
 if (VAR93 < 0) {
                        VAR93 = 0;
 }
                    VAR80->VAR28 = VAR93;
                    VAR80->VAR22 = VAR23;

                    VAR80->VAR53 = VAR52.FUN24(0);
                    VAR52.FUN31();
                    VAR51.FUN31();
                    VAR66.FUN31();

                    VAR34++;
                    VAR79->VAR35 = false;
                    VAR14.FUN9(VAR14.FUN4());
                    VAR79 = NULL;
                    FUN30(VAR80);
                    VAR80 = NULL;
 }
 break; 
 }
 }
 }
}