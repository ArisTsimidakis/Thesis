status_t VAR1::FUN1(VAR2 *VAR3, int VAR4) {
    FUN2("", (long long)*VAR3, VAR4);
 uint32_t VAR5[2];
 if (VAR6->FUN3(*VAR3, VAR5, 8) < 8) {
 return VAR7;
 }
 uint64_t VAR8 = FUN4(VAR5[0]);
 int32_t VAR9 = FUN4(VAR5[1]);
 off64_t VAR10 = *VAR3 + 8;

 if (VAR8 == 1) {
 if (VAR6->FUN3(*VAR3 + 8, &VAR8, 8) < 8) {
 return VAR7;
 }
        VAR8 = FUN5(VAR8);
        VAR10 += 8;

 if (VAR8 < 16) {
 
 return VAR11;
 }
 } else if (VAR8 == 0) {
 if (VAR4 == 0) {
 
 off64_t VAR12;
 if (VAR6->FUN6(&VAR12) == VAR13) {
                VAR8 = (VAR12 - *VAR3);
 } else {
 
                FUN7("");
 return VAR11;
 }
 } else {
 
 *VAR3 += 4;
 return VAR13;
 }
 } else if (VAR8 < 8) {
 
        FUN7("" VAR14, VAR8);
 return VAR11;
 }

 char VAR15[5];
 FUN8(VAR9, VAR15);
    FUN2("", VAR15, (long long)*VAR3, VAR4);

 if (VAR16) {
 static const char VAR17[] = "";
 const char *VAR18 = &VAR17[sizeof(VAR17) - 1 - 2 * VAR4];
        printf("" VAR14 "", VAR18, VAR15, VAR8);

 char VAR19[256];
 size_t VAR20 = VAR8;
 if (VAR20 > sizeof(VAR19)) {
            VAR20 = sizeof(VAR19);
 }
 if (VAR6->FUN3(*VAR3, VAR19, VAR20)
 < (VAR21)VAR20) {
 return VAR7;
 }

        FUN9(VAR19, VAR20);
 }

 VAR22 FUN10(&VAR23, VAR9);

 off64_t VAR24 = *VAR3 + VAR8 - VAR10;

 if (VAR9 != FUN11('', '', '', '')
 && VAR9 != FUN11('', '', '', '')
 && VAR23.FUN12() == 5 && FUN13(VAR23)) {
 off64_t VAR25 = *VAR3 + VAR8;
 *VAR3 = VAR10;
 while (*VAR3 < VAR25) {
 status_t VAR26 = FUN1(VAR3, VAR4 + 1);
 if (VAR26 != VAR13) {
 return VAR26;
 }
 }

 if (*VAR3 != VAR25) {
 return VAR11;
 }

 return VAR13;
 }

 switch(VAR9) {
 case FUN11('', '', '', ''):
 case FUN11('', '', '', ''):
 case FUN11('', '', '', ''):
 case FUN11('', '', '', ''):
 case FUN11('', '', '', ''):
 case FUN11('', '', '', ''):
 case FUN11('', '', '', ''):
 case FUN11('', '', '', ''):
 case FUN11('', '', '', ''):
 case FUN11('', '', '', ''):
 case FUN11('', '', '', ''):
 case FUN11('', '', '', ''):
 case FUN11('', '', '', ''):
 case FUN11('', '', '', ''):
 case FUN11('', '', '', ''):
 {
 if (VAR9 == FUN11('', '', '', '') && !VAR27) {
 
                VAR27 = true;
                VAR28 = *VAR3;
 }

 if (VAR9 == FUN11('', '', '', '')) {
                FUN2("" VAR14 "", VAR8);

 if (VAR6->FUN14()
 & (VAR29::VAR30
 | VAR29::VAR31)) {
                    VAR32<VAR33> VAR34 =
 new FUN15(VAR6);

 if (VAR34->FUN16(*VAR3, VAR8) == VAR13) {
                        VAR6 = VAR34;
 }
 }

 if (VAR35 == NULL)
 return VAR11;

                VAR35->VAR36 = new FUN17(VAR6);
 }

 bool VAR37 = false;
 if (VAR9 == FUN11('', '', '', '')) {
                VAR37 = true;

 VAR38 *VAR39 = new VAR38;
                VAR39->VAR40 = NULL;
 if (VAR35) {
                    VAR35->VAR40 = VAR39;
 } else {
                    VAR41 = VAR39;
 }
                VAR35 = VAR39;

                VAR39->VAR42 = new VAR43;
                VAR39->VAR44 = false;
                VAR39->VAR45 = false;
                VAR39->VAR46 = 0;
                VAR39->VAR42->FUN18(VAR47, "");
 }

 off64_t VAR25 = *VAR3 + VAR8;
 *VAR3 = VAR10;
 while (*VAR3 < VAR25) {
 status_t VAR26 = FUN1(VAR3, VAR4 + 1);
 if (VAR26 != VAR13) {
 return VAR26;
 }
 }

 if (*VAR3 != VAR25) {
 return VAR11;

             }
 
             if (VAR37) {










                 if (VAR35->VAR45) {
                     VAR38 *VAR48 = VAR41;
 
 if (VAR48 == VAR35) {
 delete VAR48;
                        VAR41 = VAR35 = NULL;
 } else {
 while (VAR48 && VAR48->VAR40 != VAR35) {
                            VAR48 = VAR48->VAR40;
 }
                        VAR48->VAR40 = NULL;
 delete VAR35;
                        VAR35 = VAR48;
 }

 return VAR13;
 }

 status_t VAR26 = FUN19(VAR35);

 if (VAR26 != VAR13) {
 return VAR26;
 }
 } else if (VAR9 == FUN11('', '', '', '')) {
                VAR49 = VAR13;

 if (!VAR50) {
 return VAR51; 
 } else {
 return VAR13;
 }
 }
 break;
 }

 case FUN11('', '', '', ''):
 {
 *VAR3 += VAR8;

 
 uint8_t VAR52;
 if (VAR6->FUN3(VAR10, &VAR52, 1) < 1) {
 return VAR7;
 }

 uint32_t VAR53;
 if (!VAR6->FUN20(VAR10 + 4, &VAR53)) {
 return VAR7;
 }

 if (VAR53 != 1) {
 
                FUN21("", VAR53);
 } else if (VAR54 == 0) {
                FUN21("");
 } else {
 off64_t VAR55 = VAR10 + 8;
 uint64_t VAR56;
 int64_t VAR57;

 if (VAR52 == 1) {
 if (!VAR6->FUN22(VAR55, &VAR56) ||
 !VAR6->FUN22(VAR55 + 8, (VAR58*)&VAR57)) {
 return VAR7;
 }
 } else if (VAR52 == 0) {
 uint32_t VAR59;
 int32_t VAR60;
 if (!VAR6->FUN20(VAR55, &VAR59) ||
 !VAR6->FUN20(VAR55 + 4, (VAR61*)&VAR60)) {
 return VAR7;
 }
                    VAR56 = VAR59;
                    VAR57 = VAR60;
 } else {
 return VAR7;
 }

 uint64_t VAR62 = VAR54 / 2;
                VAR56 = (VAR56 * 1000000 + VAR62)/ VAR54;
                VAR57 = (VAR57 * 1000000 + VAR62) / VAR54;

 int64_t VAR63;
 int32_t VAR64;
 if (!VAR35) {
 return VAR11;
 }
 if (VAR35->VAR42->FUN23(VAR65, &VAR63) &&
                        VAR35->VAR42->FUN24(VAR66, &VAR64)) {

 int64_t VAR67 = (VAR57  * VAR64 + 500000) / 1000000;
                    VAR35->VAR42->FUN25(VAR68, VAR67);

 int64_t VAR69 = VAR63 - (VAR56 + VAR57);
 if (VAR69 < 0) {
 
 
 
                        VAR69 = 0;
 }
 int64_t VAR70 = (VAR69 * VAR64 + 500000) / 1000000;
                    VAR35->VAR42->FUN25(VAR71, VAR70);
 }
 }
 break;
 }

 case FUN11('', '', '', ''):
 {
 *VAR3 += VAR8;

 uint32_t VAR72;
 if (VAR6->FUN3(VAR10, &VAR72, 4) < 4) {
 return VAR7;
 }
            VAR72 = FUN4(VAR72);
            FUN2("", VAR72);

 if (VAR35 == NULL)
 return VAR11;

            VAR35->VAR42->FUN18(VAR47, FUN26(VAR72));
 uint32_t VAR73 = 0;
 uint32_t VAR74 = 0;
 if (FUN27(VAR72, &VAR73, &VAR74)) {
                VAR35->VAR42->FUN25(VAR75, VAR73);
                VAR35->VAR42->FUN25(VAR66, VAR74);
 }
 break;
 }

 case FUN11('', '', '', ''):
 {
 *VAR3 += VAR8;

 if (VAR8 < 32) {
 return VAR11;
 }

 
 
 
 char VAR76[4];
            memset(VAR76, 0, 4);
 if (VAR6->FUN3(VAR10 + 4, VAR76 + 1, 3) < 3) {
 return VAR7;
 }
 uint32_t VAR77 = FUN4(*((VAR78*)VAR76));
 if (VAR77 > 1) {
 
 return VAR11;
 }

            memset(VAR76, 0, 4);
 if (VAR6->FUN3(VAR10 + 7, VAR76 + 3, 1) < 1) {
 return VAR7;
 }
 uint32_t VAR79 = FUN4(*((VAR78*)VAR76));

 if ((VAR77 == 0 && VAR79 != 0) ||
 (VAR77 != 0 && VAR79 == 0)) {
 
 return VAR11;
 } else if (VAR79 != 0 &&
                    VAR79 != 8 &&
                    VAR79 != 16) {
 
 return VAR11;
 }

 uint8_t VAR80[16];

 if (VAR6->FUN3(VAR10 + 8, &VAR80, 16) < 16) {
 return VAR7;
 }

 if (VAR35 == NULL)
 return VAR11;

            VAR35->VAR42->FUN25(VAR81, VAR77);
            VAR35->VAR42->FUN25(VAR82, VAR79);
            VAR35->VAR42->FUN28(VAR83, '', VAR80, 16);
 break;
 }

 case FUN11('', '', '', ''):
 {
 *VAR3 += VAR8;

 status_t VAR26;
 if ((VAR26 = FUN29(VAR10, VAR24)) != VAR13) {
 return VAR26;
 }

 break;
 }

 case FUN11('', '', '', ''):
 {
 *VAR3 += VAR8;

 PsshInfo VAR84;

 if (VAR6->FUN3(VAR10 + 4, &VAR84.VAR85, 16) < 16) {
 return VAR7;
 }

 uint32_t VAR86 = 0;
 if (VAR6->FUN3(VAR10 + 20, &VAR86, 4) < 4) {
 return VAR7;
 }
            VAR84.VAR87 = FUN4(VAR86);
            FUN2("", VAR84.VAR87);
 if (VAR8 < 20 || VAR84.VAR87 > VAR8 - 20) {
 
 return VAR11;
 }

            VAR84.VAR88 = new (VAR89::VAR90) VAR91[VAR84.VAR87];
 if (VAR84.VAR88 == NULL) {
 return VAR11;
 }
            FUN2("", VAR84.VAR88);
 ssize_t VAR92 = (VAR21) VAR84.VAR87;
 if (VAR6->FUN3(VAR10 + 24, VAR84.VAR88, VAR92) < VAR92) {
 return VAR7;
 }
            VAR93.FUN30(VAR84);

 break;
 }

 case FUN11('', '', '', ''):
 {
 *VAR3 += VAR8;

 if (VAR24 < 4 || VAR35 == NULL) {
 return VAR11;
 }

 uint8_t VAR52;
 if (VAR6->FUN3(
                        VAR10, &VAR52, sizeof(VAR52))
 < (VAR21)sizeof(VAR52)) {
 return VAR7;
 }

 off64_t VAR94;

 if (VAR52 == 1) {
                VAR94 = VAR10 + 4 + 16;
 } else if (VAR52 == 0) {
                VAR94 = VAR10 + 4 + 8;
 } else {
 return VAR7;
 }

 uint32_t VAR46;
 if (VAR6->FUN3(
                        VAR94, &VAR46, sizeof(VAR46))
 < (VAR21)sizeof(VAR46)) {
 return VAR7;
 }

 if (!VAR46) {
                FUN7("");
 return VAR11;
 }

            VAR35->VAR46 = FUN4(VAR46);

 
 
 int64_t VAR63 = 0;
 if (VAR52 == 1) {
 if (VAR6->FUN3(
                            VAR94 + 4, &VAR63, sizeof(VAR63))
 < (VAR21)sizeof(VAR63)) {
 return VAR7;
 }
 if (VAR63 != -1) {
                    VAR63 = FUN5(VAR63);
 }
 } else {
 uint32_t VAR95;
 if (VAR6->FUN3(
                            VAR94 + 4, &VAR95, sizeof(VAR95))
 < (VAR21)sizeof(VAR95)) {
 return VAR7;
 }
 if (VAR95 != 0xffffffff) {
                    VAR63 = FUN4(VAR95);
 }
 }
 if (VAR63 != 0 && VAR35->VAR46 != 0) {
                VAR35->VAR42->FUN31(
                        VAR65, (VAR63 * 1000000) / VAR35->VAR46);
 }

 uint8_t VAR96[2];
 off64_t VAR97;
 if (VAR52 == 1) {
                VAR97 = VAR94 + 4 + 8;
 } else if (VAR52 == 0) {
                VAR97 = VAR94 + 4 + 4;
 } else {
 return VAR7;
 }

 if (VAR6->FUN3(VAR97, &VAR96, sizeof(VAR96))
 < (VAR21)sizeof(VAR96)) {
 return VAR7;
 }

 
 
 
 char VAR98[4];
            VAR98[0] = ((VAR96[0] >> 2) & 0x1f) + 0x60;
            VAR98[1] = ((VAR96[0] & 0x3) << 3 | (VAR96[1] >> 5)) + 0x60;
            VAR98[2] = (VAR96[1] & 0x1f) + 0x60;
            VAR98[3] = '';

            VAR35->VAR42->FUN18(
                    VAR99, VAR98);

 break;
 }

 case FUN11('', '', '', ''):
 {
 if (VAR24 < 8) {
 return VAR11;
 }

 uint8_t VAR19[8];
 if (VAR24 < (VAR2)sizeof(VAR19)) {
 return VAR11;
 }

 if (VAR6->FUN3(
                        VAR10, VAR19, 8) < 8) {
 return VAR7;
 }

 if (FUN32(VAR19) != 0) {
 
 return VAR11;
 }

 uint32_t VAR53 = FUN32(&VAR19[4]);

 if (VAR53 > 1) {
 
 
 
 
 const char *VAR100;

 if (VAR35 == NULL)
 return VAR11;

                FUN33(VAR35->VAR42->FUN34(VAR47, &VAR100));
 if (FUN35(VAR100, VAR101) &&
                        FUN35(VAR100, "")) {
 
                    VAR35->VAR45 = true;
 *VAR3 += VAR8;
 break;
 }
 }
 off64_t VAR25 = *VAR3 + VAR8;
 *VAR3 = VAR10 + 8;
 for (uint32_t VAR102 = 0; VAR102 < VAR53; ++VAR102) {
 status_t VAR26 = FUN1(VAR3, VAR4 + 1);
 if (VAR26 != VAR13) {
 return VAR26;
 }
 }

 if (*VAR3 != VAR25) {
 return VAR11;
 }
 break;
 }

 case FUN11('', '', '', ''):
 case FUN11('', '', '', ''):
 case FUN11('', '', '', ''):
 case FUN11('', '', '', ''):
 {
 uint8_t VAR19[8 + 20];
 if (VAR24 < (VAR21)sizeof(VAR19)) {
 
 return VAR11;
 }

 if (VAR6->FUN3(
                        VAR10, VAR19, sizeof(VAR19)) < (VAR21)sizeof(VAR19)) {
 return VAR7;
 }

 uint16_t data_ref_index VAR103 = FUN36(&VAR19[6]);
 uint32_t VAR73 = FUN36(&VAR19[16]);

 uint16_t VAR104 = FUN36(&VAR19[18]);
 uint32_t VAR74 = FUN32(&VAR19[24]) >> 16;

 if (VAR35 == NULL)
 return VAR11;

 if (VAR9 != FUN11('', '', '', '')) {
 
                VAR35->VAR42->FUN18(VAR47, FUN26(VAR9));
 FUN27(VAR9, &VAR73, &VAR74);
 }
            FUN2("",
                   VAR15, VAR73, VAR104, VAR74);
            VAR35->VAR42->FUN25(VAR75, VAR73);
            VAR35->VAR42->FUN25(VAR66, VAR74);

 off64_t VAR25 = *VAR3 + VAR8;
 *VAR3 = VAR10 + sizeof(VAR19);
 while (*VAR3 < VAR25) {
 status_t VAR26 = FUN1(VAR3, VAR4 + 1);
 if (VAR26 != VAR13) {
 return VAR26;
 }
 }

 if (*VAR3 != VAR25) {
 return VAR11;
 }
 break;
 }

 case FUN11('', '', '', ''):
 case FUN11('', '', '', ''):
 case FUN11('', '', '', ''):
 case FUN11('', '', '', ''):
 case FUN11('', '', '', ''):
 case FUN11('', '', '', ''):
 case FUN11('', '', '', ''):
 case FUN11('', '', '', ''):
 {
            VAR105 = true;

 uint8_t VAR19[78];
 if (VAR24 < (VAR21)sizeof(VAR19)) {
 
 return VAR11;
 }

 if (VAR6->FUN3(
                        VAR10, VAR19, sizeof(VAR19)) < (VAR21)sizeof(VAR19)) {
 return VAR7;
 }

 uint16_t data_ref_index VAR103 = FUN36(&VAR19[6]);
 uint16_t VAR106 = FUN36(&VAR19[6 + 18]);
 uint16_t VAR107 = FUN36(&VAR19[6 + 20]);

 
 
 
 
 if (VAR106 == 0)  VAR106  = 352;
 if (VAR107 == 0) VAR107 = 288;

 
 

 if (VAR35 == NULL)
 return VAR11;

 if (VAR9 != FUN11('', '', '', '')) {
 
                VAR35->VAR42->FUN18(VAR47, FUN26(VAR9));
 }
            VAR35->VAR42->FUN25(VAR108, VAR106);
            VAR35->VAR42->FUN25(VAR109, VAR107);

 off64_t VAR25 = *VAR3 + VAR8;
 *VAR3 = VAR10 + sizeof(VAR19);
 while (*VAR3 < VAR25) {
 status_t VAR26 = FUN1(VAR3, VAR4 + 1);
 if (VAR26 != VAR13) {
 return VAR26;
 }
 }

 if (*VAR3 != VAR25) {
 return VAR11;
 }
 break;
 }

 case FUN11('', '', '', ''):
 case FUN11('', '', '', ''):
 {
 if ((VAR35 == NULL) || (VAR35->VAR36 == NULL))
 return VAR11;

 status_t VAR26 =
                VAR35->VAR36->FUN37(
                        VAR9, VAR10, VAR24);

 *VAR3 += VAR8;

 if (VAR26 != VAR13) {
 return VAR26;
 }

 break;
 }

 case FUN11('', '', '', ''):
 {
 if ((VAR35 == NULL) || (VAR35->VAR36 == NULL))
 return VAR11;

 status_t VAR26 =
                VAR35->VAR36->FUN38(
                        VAR10, VAR24);

 *VAR3 += VAR8;

 if (VAR26 != VAR13) {
 return VAR26;
 }

 break;
 }

 case FUN11('', '', '', ''):
 case FUN11('', '', '', ''):
 {
 if ((VAR35 == NULL) || (VAR35->VAR36 == NULL))
 return VAR11;

 status_t VAR26 =
                VAR35->VAR36->FUN39(
                        VAR9, VAR10, VAR24);

 *VAR3 += VAR8;

 if (VAR26 != VAR13) {
 return VAR26;
 }

 size_t VAR110;
            VAR26 = VAR35->VAR36->FUN40(&VAR110);

 if (VAR26 != VAR13) {
 return VAR26;
 }

 if (VAR110 != 0) {
 
 
 
 
 if (VAR110 > VAR111 - 10 * 2) {
                    FUN7("", VAR110);
 return VAR11;
 }
                VAR35->VAR42->FUN25(VAR112, VAR110 + 10 * 2);
 } else {
 
 uint32_t VAR106, VAR107;
 if (!VAR35->VAR42->FUN24(VAR108, (VAR78*)&VAR106) ||
 !VAR35->VAR42->FUN24(VAR109,(VAR78*) &VAR107)) {
                    FUN7("");
                    VAR106 = 1920;
                    VAR107 = 1080;
 } else {
 
 
 
 if (VAR106 > 32768 || VAR107 > 32768) {
                        FUN7("", VAR106, VAR107);
 return VAR11;
 }
 }

 const char *VAR100;
                FUN33(VAR35->VAR42->FUN34(VAR47, &VAR100));
 if (!strcmp(VAR100, VAR113)) {
 
 
                    VAR110 = ((VAR106 + 15) / 16) * ((VAR107 + 15) / 16) * 192;
 } else {
 
 
                    VAR110 = VAR106 * VAR107 * 3 / 2;
 }
                VAR35->VAR42->FUN25(VAR112, VAR110);
 }

 
 
 const char *VAR100;
            FUN33(VAR35->VAR42->FUN34(VAR47, &VAR100));
 
 if (!FUN41("", VAR100, 6)) {
 size_t VAR114 = VAR35->VAR36->FUN42();
 int64_t VAR115;
 if (VAR35->VAR42->FUN23(VAR65, &VAR115)) {
 if (VAR115 > 0) {
 int32_t VAR116 = (VAR114 * 1000000LL +
 (VAR115 >> 1)) / VAR115;
                        VAR35->VAR42->FUN25(VAR117, VAR116);
 }
 }
 }

 break;
 }

 case FUN11('', '', '', ''):
 {
 if ((VAR35 == NULL) || (VAR35->VAR36 == NULL))
 return VAR11;

 *VAR3 += VAR8;

 status_t VAR26 =
                VAR35->VAR36->FUN43(
                        VAR10, VAR24);

 if (VAR26 != VAR13) {
 return VAR26;
 }

 break;
 }

 case FUN11('', '', '', ''):
 {
 if ((VAR35 == NULL) || (VAR35->VAR36 == NULL))
 return VAR11;

 *VAR3 += VAR8;

 status_t VAR26 =
                VAR35->VAR36->FUN44(
                        VAR10, VAR24);

 if (VAR26 != VAR13) {
 return VAR26;
 }

 break;
 }

 case FUN11('', '', '', ''):
 {
 if ((VAR35 == NULL) || (VAR35->VAR36 == NULL))
 return VAR11;

 *VAR3 += VAR8;

 status_t VAR26 =
                VAR35->VAR36->FUN45(
                        VAR10, VAR24);

 if (VAR26 != VAR13) {
 return VAR26;
 }

 break;
 }

 
 case FUN11(0xA9, '', '', ''):
 {
 *VAR3 += VAR8;

 
 
 
 
 
 if (VAR24 < 8) {
 return VAR11;
 }

 
 
 
 char VAR19[18];

 
 
 off64_t VAR118 = VAR24 - 5;
 if (VAR118 >= (VAR2) sizeof(VAR19)) {
 return VAR11;
 }

 if (VAR6->FUN3(
                        VAR10 + 4, VAR19, VAR118) < VAR118) {
 return VAR7;
 }

            VAR19[VAR118] = '';
            VAR119->FUN18(VAR120, VAR19);
 break;
 }

 case FUN11('', '', '', ''):
 {
 *VAR3 += VAR8;

 if (VAR24 < 4) {
 return VAR11;
 }

 uint8_t VAR19[256];
 if (VAR24 > (VAR2)sizeof(VAR19)) {
 return VAR121;
 }

 if (VAR6->FUN3(
                        VAR10, VAR19, VAR24) < VAR24) {
 return VAR7;
 }

 if (FUN32(VAR19) != 0) {
 
 return VAR11;
 }

 if (VAR35 == NULL)
 return VAR11;

            VAR35->VAR42->FUN28(
                    VAR122, VAR123, &VAR19[4], VAR24 - 4);

 if (VAR23.FUN12() >= 2
 && VAR23[VAR23.FUN12() - 2] == FUN11('', '', '', '')) {
 
 
 
 

 status_t VAR26 = FUN46(
 &VAR19[4], VAR24 - 4);

 if (VAR26 != VAR13) {
 return VAR26;
 }
 }
 if (VAR23.FUN12() >= 2
 && VAR23[VAR23.FUN12() - 2] == FUN11('', '', '', '')) {
 
                VAR124 FUN47(&VAR19[4], VAR24 - 4);

 uint8_t VAR125;
 if (VAR126.FUN48(&VAR125) == VAR13) {
 if (VAR125 >= 0x60 && VAR125 <= 0x65) {
                        VAR35->VAR42->FUN18(VAR47, VAR127);
 }
 }
 }
 break;
 }

 case FUN11('', '', '', ''):
 {
 *VAR3 += VAR8;

            VAR32<VAR128> VAR19 = new FUN49(VAR24);

 if (VAR19->FUN50() == NULL) {
                FUN7("");
 return VAR129;
 }

 if (VAR6->FUN3(
                        VAR10, VAR19->FUN50(), VAR24) < VAR24) {
 return VAR7;
 }

 if (VAR35 == NULL)
 return VAR11;

            VAR35->VAR42->FUN28(
                    VAR130, VAR131, VAR19->FUN50(), VAR24);

 break;
 }
 case FUN11('', '', '', ''):
 {
            VAR32<VAR128> VAR19 = new FUN49(VAR24);

 if (VAR19->FUN50() == NULL) {
                FUN7("");
 return VAR129;
 }

 if (VAR6->FUN3(
                        VAR10, VAR19->FUN50(), VAR24) < VAR24) {
 return VAR7;
 }

 if (VAR35 == NULL)
 return VAR11;

            VAR35->VAR42->FUN28(
                    VAR132, VAR133, VAR19->FUN50(), VAR24);

 *VAR3 += VAR8;
 break;
 }

 case FUN11('', '', '', ''):
 {
 *VAR3 += VAR8;
 
 char VAR19[23];
 if (VAR24 != 7 &&
                VAR24 != 23) {
                FUN7("", (long long)VAR24);
 return VAR11;
 }

 if (VAR6->FUN3(
                    VAR10, VAR19, VAR24) < VAR24) {
 return VAR7;
 }

 if (VAR35 == NULL)
 return VAR11;

            VAR35->VAR42->FUN28(VAR134, VAR135, VAR19, VAR24);

 break;
 }

 case FUN11('', '', '', ''):
 {
 off64_t VAR25 = *VAR3 + VAR8;
 *VAR3 = VAR10;
 bool VAR136 = FUN51(VAR23, 2);
 if (!VAR136) {
 uint8_t VAR19[4];
 if (VAR24 < (VAR2)sizeof(VAR19)) {
 *VAR3 = VAR25;
 return VAR11;
 }

 if (VAR6->FUN3(
                            VAR10, VAR19, 4) < 4) {
 *VAR3 = VAR25;
 return VAR7;
 }

 if (FUN32(VAR19) != 0) {
 

 
 
 
 
 *VAR3 = VAR25;
 return VAR13;
 }
 *VAR3 += sizeof(VAR19);
 }

 while (*VAR3 < VAR25) {
 status_t VAR26 = FUN1(VAR3, VAR4 + 1);
 if (VAR26 != VAR13) {
 return VAR26;
 }
 }

 if (*VAR3 != VAR25) {
 return VAR11;
 }
 break;
 }

 case FUN11('', '', '', ''):
 case FUN11('', '', '', ''):
 case FUN11('', '', '', ''):
 {
 *VAR3 += VAR8;

 if (VAR23.FUN12() == 6 && FUN13(VAR23)) {
 status_t VAR26 = FUN52(VAR10, VAR24);

 if (VAR26 != VAR13) {
 return VAR26;
 }
 }

 break;
 }

 case FUN11('', '', '', ''):
 {
 *VAR3 += VAR8;

 if (VAR24 < 32) {
 return VAR11;
 }

 uint8_t VAR137[32];
 if (VAR6->FUN3(
                        VAR10, VAR137, sizeof(VAR137))
 < (VAR21)sizeof(VAR137)) {
 return VAR7;
 }

 uint64_t VAR138;
 uint64_t VAR63 = 0;
 if (VAR137[0] == 1) {
                VAR138 = FUN53(&VAR137[4]);
                VAR54 = FUN32(&VAR137[20]);
                VAR63 = FUN53(&VAR137[24]);
 if (VAR63 == 0xffffffffffffffff) {
                    VAR63 = 0;
 }
 } else if (VAR137[0] != 0) {
 return VAR11;
 } else {
                VAR138 = FUN32(&VAR137[4]);
                VAR54 = FUN32(&VAR137[12]);
 uint32_t VAR139 = FUN32(&VAR137[16]);
 if (VAR139 == 0xffffffff) {
                    VAR139 = 0;
 }
                VAR63 = VAR139;
 }
 if (VAR63 != 0 && VAR54 != 0) {
                VAR119->FUN31(VAR65, VAR63 * 1000000 / VAR54);
 }

 String8 VAR140;
            FUN54(VAR138, &VAR140);

            VAR119->FUN18(VAR141, VAR140.FUN55());

 break;
 }

 case FUN11('', '', '', ''):
 {
 *VAR3 += VAR8;

 if (VAR24 < 8) {
 return VAR11;
 }

 uint8_t VAR142[4];
 if (VAR6->FUN3(
                        VAR10, VAR142, sizeof(VAR142))
 < (VAR21)sizeof(VAR142)) {
 return VAR7;
 }

 uint64_t VAR63 = 0;
 if (VAR142[0] == 1) {
 
 if (VAR24 < 12) {
 return VAR11;
 }
                VAR6->FUN22(VAR10 + 4, &VAR63);
 if (VAR63 == 0xffffffffffffffff) {
                    VAR63 = 0;
 }
 } else if (VAR142[0] == 0) {
 
 uint32_t VAR139;
                VAR6->FUN20(VAR10 + 4, &VAR139);
 if (VAR139 == 0xffffffff) {
                    VAR139 = 0;
 }
                VAR63 = VAR139;
 } else {
 return VAR11;
 }

 if (VAR63 != 0 && VAR54 != 0) {
                VAR119->FUN31(VAR65, VAR63 * 1000000 / VAR54);
 }

 break;
 }

 case FUN11('', '', '', ''):
 {
            FUN2("", VAR50);

            VAR143 = true;

 if (!VAR50) {
 *VAR3 += VAR8;
 break;
 }

 if (VAR8 < 8) {
 return VAR11;
 }

 return FUN56(VAR3, VAR10);
 }

 case FUN11('', '', '', ''):
 {
 *VAR3 += VAR8;

 if (FUN51(VAR23, 3)) {
 break;
 }

 uint32_t VAR19;
 if (VAR6->FUN3(
                        VAR10 + 8, &VAR19, 4) < 4) {
 return VAR7;
 }

 uint32_t VAR144 = FUN4(VAR19);
 
 
 
 if (VAR144 == FUN11('', '', '', '') || VAR144 == FUN11('', '', '', '')) {
 if (VAR35 != NULL) {
                    VAR35->VAR42->FUN18(VAR47, VAR101);
 }
 }

 break;
 }

 case FUN11('', '', '', ''):
 {
 *VAR3 += VAR8;

 if (FUN51(VAR23, 3)) {
                FUN57(VAR10, VAR24);
 }
 break;
 }

 case FUN11('', '', '', ''):
 {
 *VAR3 += VAR8;

 if (VAR24 < 24) {
 return VAR7;
 }
 Trex VAR145;
 if (!VAR6->FUN20(VAR10 + 4, &VAR145.VAR146) ||
 !VAR6->FUN20(VAR10 + 8, &VAR145.VAR147) ||
 !VAR6->FUN20(VAR10 + 12, &VAR145.VAR148) ||
 !VAR6->FUN20(VAR10 + 16, &VAR145.VAR149) ||
 !VAR6->FUN20(VAR10 + 20, &VAR145.VAR150)) {
 return VAR7;
 }
            VAR151.FUN58(VAR145);
 break;
 }

 case FUN11('', '', '', ''):
 {
 if (VAR35 == NULL)
 return VAR11;

 uint32_t VAR144;
 const void *VAR88;
 size_t VAR152 = 0;
 if (!VAR35->VAR42->FUN59(
                    VAR153, &VAR144, &VAR88, &VAR152)) {
                VAR152 = 0;
 }

 if ((VAR8 > VAR111) || (VAR111 - VAR8 <= VAR152)) {
 return VAR11;
 }

 VAR91 *VAR19 = new (VAR89::VAR90) VAR91[VAR152 + VAR8];
 if (VAR19 == NULL) {
 return VAR11;
 }

 if (VAR152 > 0) {
                memcpy(VAR19, VAR88, VAR152);
 }

 if ((VAR154)(VAR6->FUN3(*VAR3, VAR19 + VAR152, VAR8))
 < VAR8) {
 delete[] VAR19;
                VAR19 = NULL;

 
 *VAR3 += VAR8;
 return VAR7;
 }

            VAR35->VAR42->FUN28(
                    VAR153, 0, VAR19, VAR152 + VAR8);

 delete[] VAR19;

 *VAR3 += VAR8;
 break;
 }

 case FUN11('', '', '', ''):
 {
 *VAR3 += VAR8;

 if (VAR119 != NULL) {
                FUN2("" VAR155 "" VAR155,
                      VAR24, VAR10);

 if (VAR24 < 0 || static_cast<VAR58>(VAR24) >= VAR111 - 1) {
 return VAR11;
 }
                VAR32<VAR128> VAR19 = new FUN49(VAR24 + 1);
 if (VAR19->FUN50() == NULL) {
                    FUN7("");
 return VAR129;
 }
 if (VAR6->FUN3(
                    VAR10, VAR19->FUN50(), VAR24) != (VAR21)VAR24) {
 return VAR7;
 }
 const int VAR156 = 16;
 if (VAR24 <= VAR156) {
 return VAR11;
 }

                VAR119->FUN28(
                    VAR157, VAR43::VAR158,
                    VAR19->FUN50() + VAR156, VAR24 - VAR156);
 }

 break;
 }

 case FUN11('', '', '', ''):
 case FUN11('', '', '', ''):
 case FUN11('', '', '', ''):
 case FUN11('', '', '', ''):
 case FUN11('', '', '', ''):
 case FUN11('', '', '', ''):
 {
 *VAR3 += VAR8;

 status_t VAR26 = FUN60(VAR10, VAR24, VAR4);

 if (VAR26 != VAR13) {
 return VAR26;
 }

 break;
 }

 case FUN11('', '', '', ''):
 {
 *VAR3 += VAR8;

 if (VAR24 < 6) {
 return VAR11;
 }

            FUN61(VAR10 + 6);

 break;
 }

 case FUN11('', '', '', ''):
 {
            VAR159.FUN62();
            VAR160.FUN62();
            VAR161.FUN62();
 *VAR3 += VAR8;
 break;
 }

 case FUN11('', '', '', ''):
 {
            FUN63(VAR10, VAR24);
 *VAR3 += VAR8;
 return VAR51; 
 }

 default:
 {
 
 
 if (FUN51(VAR23, 3)) {
                FUN64(VAR9, VAR10, VAR24);
 }

 *VAR3 += VAR8;
 break;
 }
 }

 return VAR13;
}