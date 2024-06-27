status_t VAR1::FUN1(
 const void *VAR2, size_t VAR3) {
    VAR4 FUN2(VAR2, VAR3);

 uint8_t VAR5;
 if (VAR6.FUN3(&VAR5) != VAR7) {
 return VAR8;
 }

 if (VAR5 == 0xe1) {
 
 if (VAR9 == NULL)
 return VAR8;

        VAR9->VAR10->FUN4(VAR11, VAR12);
 return VAR7;
 }

 if (VAR5  == 0x6b) {
 
 
 
        FUN5("");
 return VAR13;
 }

 const VAR14 *VAR15;
 size_t VAR16;
 if (VAR6.FUN6(
 (const void **)&VAR15, &VAR16) != VAR7) {
 return VAR8;
 }

 if (VAR17) {
        printf("", VAR16);
        FUN7(VAR15, VAR16);
 }

 if (VAR16 == 0) {
 
 
 

 return VAR7;
 }

 if (VAR16 < 2) {
 return VAR8;
 }

 static uint32_t VAR18[] = {
 96000, 88200, 64000, 48000, 44100, 32000, 24000, 22050,
 16000, 12000, 11025, 8000, 7350
 };

 VAR19 FUN8(VAR15, VAR16);
 uint32_t VAR20 = VAR21.FUN9(5);

 if (VAR20 == 31) { 
        VAR20 = 32 + VAR21.FUN9(6);
 }

 if (VAR9 == NULL)
 return VAR8;

 
    VAR9->VAR10->FUN10(VAR22, VAR20);

 uint32_t VAR23 = VAR21.FUN9(4);

 int32_t VAR24 = 0;
 int32_t VAR25 = 0;
 if (VAR23 == 15) {
 if (VAR21.FUN11() < 28) return VAR8;
        VAR24 = VAR21.FUN9(24);
        VAR25 = VAR21.FUN9(4);
 } else {
 if (VAR21.FUN11() < 4) return VAR8;
        VAR25 = VAR21.FUN9(4);

 if (VAR23 == 13 || VAR23 == 14) {
 return VAR8;
 }

        VAR24 = VAR18[VAR23];
 }

 if (VAR20 == VAR26 || VAR20 == VAR27) {
 if (VAR21.FUN11() < 4) return VAR8;
 uint32_t VAR28 = VAR21.FUN9(4);
 int32_t extSampleRate VAR29;
 if (VAR28 == 15) {
 if (VAR16 < 8) {
 return VAR8;
 }
 if (VAR21.FUN11() < 24) return VAR8;
            VAR30 = VAR21.FUN9(24);
 } else {
 if (VAR28 == 13 || VAR28 == 14) {
 return VAR8;
 }
            VAR30 = VAR18[VAR28];
 }
 
 
 }

 switch (VAR25) {
 
 case 0:
 case 1:// VAR31
 case 2:// FL VAR32
 case 3:// VAR31, FL VAR32
 case 4:// VAR31, FL VAR32, VAR33
 case 5:// VAR31, FL VAR32, SL VAR34
 case 6:// VAR31, FL VAR32, SL VAR34, VAR35
 
 break;
 case 11:// VAR31, FL VAR32, SL VAR34, VAR33, VAR35
            VAR25 = 7;
 break;
 case 7: 
 case 12:// VAR31, FL  VAR32,  SL VAR34, RL VAR36, VAR35
 case 14:// VAR31, FL  VAR32,  SL VAR34, VAR35, FHL VAR37
            VAR25 = 8;
 break;
 default:
 return VAR13;
 }

 {
 if (VAR20 == VAR26 || VAR20 == VAR27) {
 if (VAR21.FUN11() < 5) return VAR8;
            VAR20 = VAR21.FUN9(5);

 if (VAR20 == VAR38) {
 if (VAR21.FUN11() < 6) return VAR8;
                VAR20 = 32 + VAR21.FUN9(6);
 }
 }
 if (VAR20 == VAR39 || VAR20 == VAR40 ||
                VAR20 == VAR41 || VAR20 == VAR42 ||
                VAR20 == VAR43) {
 if (VAR21.FUN11() < 2) return VAR8;
 const int32_t frameLengthFlag VAR29 = VAR21.FUN9(1);

 const int32_t VAR44 = VAR21.FUN9(1);

 if (VAR44 ) {
 if (VAR21.FUN11() < 14) return VAR8;
 const int32_t coreCoderDelay VAR29 = VAR21.FUN9(14);
 }

 int32_t VAR45 = -1;
 if (VAR21.FUN11() > 0) {
                VAR45 = VAR21.FUN9(1);
 } else {
 switch (VAR20) {
 
 case VAR39:
                    VAR45 = 0;
 break;
 case VAR40:
 case VAR42:
 case VAR43:
 case VAR41:
                    VAR45 = 1;
 break;
 default:
 return VAR8;
 break;
 }
                FUN12("",
                        VAR45, VAR20);
 }

 if (VAR25 == 0) {
 int32_t VAR46 = 0;
 int32_t VAR47 = 0;
 if (VAR21.FUN11() < 32) {
 return VAR8;
 }
 const int32_t ElementInstanceTag VAR29 = VAR21.FUN9(4);
 const int32_t Profile VAR29 = VAR21.FUN9(2);
 const int32_t SamplingFrequencyIndex VAR29 = VAR21.FUN9(4);
 const int32_t VAR48 = VAR21.FUN9(4);
 const int32_t VAR49 = VAR21.FUN9(4);
 const int32_t VAR50 = VAR21.FUN9(4);
 const int32_t VAR51 = VAR21.FUN9(2);
 const int32_t NumAssocDataElements VAR29 = VAR21.FUN9(3);
 const int32_t NumValidCcElements VAR29 = VAR21.FUN9(4);

 const int32_t VAR52 = VAR21.FUN9(1);

 if (VAR52 != 0) {
 if (VAR21.FUN11() < 4) return VAR8;
 const int32_t MonoMixdownElementNumber VAR29 = VAR21.FUN9(4);
 }

 if (VAR21.FUN11() < 1) return VAR8;
 const int32_t VAR53 = VAR21.FUN9(1);
 if (VAR53 != 0) {
 if (VAR21.FUN11() < 4) return VAR8;
 const int32_t StereoMixdownElementNumber VAR29 = VAR21.FUN9(4);
 }

 if (VAR21.FUN11() < 1) return VAR8;
 const int32_t VAR54 = VAR21.FUN9(1);
 if (VAR54 != 0) {
 if (VAR21.FUN11() < 3) return VAR8;
 const int32_t MatrixMixdownIndex VAR29 = VAR21.FUN9(2);
 const int32_t PseudoSurroundEnable VAR29 = VAR21.FUN9(1);
 }

 int VAR55;
 for (VAR55=0; VAR55 < VAR48; VAR55++) {
 if (VAR21.FUN11() < 5) return VAR8;
 const int32_t VAR56 = VAR21.FUN9(1);
 const int32_t FrontElementTagSelect VAR29 = VAR21.FUN9(4);
                    VAR47 += VAR56 ? 2 : 1;
 }

 for (VAR55=0; VAR55 < VAR49; VAR55++) {
 if (VAR21.FUN11() < 5) return VAR8;
 const int32_t VAR57 = VAR21.FUN9(1);
 const int32_t SideElementTagSelect VAR29 = VAR21.FUN9(4);
                    VAR47 += VAR57 ? 2 : 1;
 }

 for (VAR55=0; VAR55 < VAR50; VAR55++) {
 if (VAR21.FUN11() < 5) return VAR8;
 const int32_t VAR58 = VAR21.FUN9(1);
 const int32_t BackElementTagSelect VAR29 = VAR21.FUN9(4);
                    VAR47 += VAR58 ? 2 : 1;
 }
                VAR46 = VAR47;

 for (VAR55=0; VAR55 < VAR51; VAR55++) {
 if (VAR21.FUN11() < 4) return VAR8;
 const int32_t LfeElementTagSelect VAR29 = VAR21.FUN9(4);
                    VAR47 += 1;
 }
                FUN13("", VAR47);
                FUN13("", VAR46);
                VAR25 = VAR47;
 }
 }
 }

 if (VAR25 == 0) {
 return VAR13;
 }

 if (VAR9 == NULL)
 return VAR8;

 int32_t VAR59;
    FUN14(VAR9->VAR10->FUN15(VAR60, &VAR59));

 if (VAR59 != VAR24) {
        FUN13(""
 "", VAR59, VAR24);
 }

    VAR9->VAR10->FUN10(VAR60, VAR24);

 int32_t VAR61;
    FUN14(VAR9->VAR10->FUN15(VAR62, &VAR61));

 if (VAR61 != VAR25) {
        FUN13(""
 "", VAR61, VAR25);
 }

    VAR9->VAR10->FUN10(VAR62, VAR25);

 return VAR7;
}