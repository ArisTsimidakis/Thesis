status_t VAR1::FUN1(
 uint32_t VAR2, const VAR3 &VAR4, VAR3 *VAR5, uint32_t VAR6) {
 switch (VAR2) {
 case VAR7:
 {
            FUN2(VAR8, VAR4, VAR5);
            VAR5->FUN3(FUN4());
 return VAR9;
 }

 case VAR10:
 {
            FUN2(VAR8, VAR4, VAR5);
 uint8_t VAR11[16];
            VAR4.read(VAR11, sizeof(VAR11));
 String8 VAR12 = VAR4.FUN5();
            VAR5->FUN3(FUN6(VAR11, VAR12));

 return VAR9;
 }

 case VAR13:
 {
            FUN2(VAR8, VAR4, VAR5);
 uint8_t VAR11[16];
            VAR4.read(VAR11, sizeof(VAR11));
            VAR5->FUN3(FUN7(VAR11));
 return VAR9;
 }

 case VAR14:
 {
            FUN2(VAR8, VAR4, VAR5);
            VAR5->FUN3(FUN8());
 return VAR9;
 }

 case VAR15:
 {
            FUN2(VAR8, VAR4, VAR5);
 VAR16<VAR17> VAR18;
 status_t VAR19 = FUN9(VAR18);
            FUN10(VAR5, VAR18);
            VAR5->FUN3(VAR19);
 return VAR9;
 }

 case VAR20:
 {
            FUN2(VAR8, VAR4, VAR5);
 VAR16<VAR17> VAR18;
            FUN11(VAR4, VAR18);
            VAR5->FUN3(FUN12(VAR18));
 return VAR9;
 }

 case VAR21:
 {
            FUN2(VAR8, VAR4, VAR5);
 VAR16<VAR17> VAR18, VAR22;

            FUN11(VAR4, VAR18);
            FUN11(VAR4, VAR22);
 String8 VAR12 = VAR4.FUN5();
 VAR23::KeyType VAR24 = (VAR23::VAR25)VAR4.FUN13();

 VAR26<VAR27, VAR27> VAR28;
 uint32_t VAR29 = VAR4.FUN13();
 for (size_t VAR30 = 0; VAR30 < VAR29; ++VAR30) {
 String8 VAR31, VAR32;
                VAR31 = VAR4.FUN5();
                VAR32 = VAR4.FUN5();
                VAR28.FUN14(VAR31, VAR32);
 }

 
             VAR16<VAR17> VAR33;
             String8 VAR34;

            VAR23::KeyRequestType VAR35;


 
             status_t VAR19 = FUN15(VAR18, VAR22, VAR12,
                     VAR24, VAR28, VAR33, VAR34,
 &VAR35);

            FUN10(VAR5, VAR33);
            VAR5->FUN16(VAR34);
            VAR5->FUN3(static_cast<VAR36>(VAR35));
            VAR5->FUN3(VAR19);
 return VAR9;
 }

 case VAR37:
 {
            FUN2(VAR8, VAR4, VAR5);
 VAR16<VAR17> VAR18, VAR38, VAR39;
            FUN11(VAR4, VAR18);
            FUN11(VAR4, VAR38);
 uint32_t VAR19 = FUN17(VAR18, VAR38, VAR39);
            FUN10(VAR5, VAR39);
            VAR5->FUN3(VAR19);
 return VAR9;
 }

 case VAR40:
 {
            FUN2(VAR8, VAR4, VAR5);
 VAR16<VAR17> VAR39;
            FUN11(VAR4, VAR39);
            VAR5->FUN3(FUN18(VAR39));
 return VAR9;
 }

 case VAR41:
 {
            FUN2(VAR8, VAR4, VAR5);
 VAR16<VAR17> VAR18, VAR39;
            FUN11(VAR4, VAR18);
            FUN11(VAR4, VAR39);
            VAR5->FUN3(FUN19(VAR18, VAR39));
 return VAR9;
 }

 case VAR42:
 {
            FUN2(VAR8, VAR4, VAR5);
 VAR16<VAR17> VAR18;
            FUN11(VAR4, VAR18);
 VAR26<VAR27, VAR27> VAR43;
 status_t VAR19 = FUN20(VAR18, VAR43);
 size_t VAR29 = VAR43.FUN21();
            VAR5->FUN3(VAR29);
 for (size_t VAR30 = 0; VAR30 < VAR29; ++VAR30) {
                VAR5->FUN16(VAR43.FUN22(VAR30));
                VAR5->FUN16(VAR43.FUN23(VAR30));
 }
            VAR5->FUN3(VAR19);
 return VAR9;
 }

 case VAR44:
 {
            FUN2(VAR8, VAR4, VAR5);
 String8 VAR45 = VAR4.FUN5();
 String8 VAR46 = VAR4.FUN5();

 VAR16<VAR17> VAR33;
 String8 VAR34;
 status_t VAR19 = FUN24(VAR45, VAR46,
                                                  VAR33, VAR34);
            FUN10(VAR5, VAR33);
            VAR5->FUN16(VAR34);
            VAR5->FUN3(VAR19);
 return VAR9;
 }

 case VAR47:
 {
            FUN2(VAR8, VAR4, VAR5);
 VAR16<VAR17> VAR38;
 VAR16<VAR17> VAR48;
 VAR16<VAR17> VAR49;
            FUN11(VAR4, VAR38);
 status_t VAR19 = FUN25(VAR38, VAR48, VAR49);
            FUN10(VAR5, VAR48);
            FUN10(VAR5, VAR49);
            VAR5->FUN3(VAR19);
 return VAR9;
 }

 case VAR50:
 {
            FUN2(VAR8, VAR4, VAR5);
 status_t VAR19 = FUN26();
            VAR5->FUN3(VAR19);
 return VAR9;
 }

 case VAR51:
 {
            FUN2(VAR8, VAR4, VAR5);
 VAR52<VAR16<VAR17> > VAR53;
 status_t VAR19 = FUN27(VAR53);
 size_t VAR29 = VAR53.FUN21();
            VAR5->FUN3(VAR29);
 VAR52<VAR16<VAR17> >::iterator VAR54 = VAR53.FUN28();
 while(VAR54 != VAR53.FUN29()) {
 size_t VAR55 = VAR54->FUN21();
                VAR5->FUN3(VAR55);
                VAR5->write(VAR54->FUN30(), VAR54->FUN21());
                VAR54++;
 }
            VAR5->FUN3(VAR19);
 return VAR9;
 }

 case VAR56:
 {
            FUN2(VAR8, VAR4, VAR5);
 VAR16<VAR17> VAR57, VAR58;
            FUN11(VAR4, VAR57);
 status_t VAR19 = FUN31(VAR57, VAR58);
            FUN10(VAR5, VAR58);
            VAR5->FUN3(VAR19);
 return VAR9;
 }

 case VAR59:
 {
            FUN2(VAR8, VAR4, VAR5);
 VAR16<VAR17> VAR60;
            FUN11(VAR4, VAR60);
            VAR5->FUN3(FUN32(VAR60));
 return VAR9;
 }

 case VAR61:
 {
            FUN2(VAR8, VAR4, VAR5);
            VAR5->FUN3(FUN33());
 return VAR9;
 }

 case VAR62:
 {
            FUN2(VAR8, VAR4, VAR5);
 String8 VAR63 = VAR4.FUN5();
 String8 VAR32;
 status_t VAR19 = FUN34(VAR63, VAR32);
            VAR5->FUN16(VAR32);
            VAR5->FUN3(VAR19);
 return VAR9;
 }

 case VAR64:
 {
            FUN2(VAR8, VAR4, VAR5);
 String8 VAR63 = VAR4.FUN5();
 VAR16<VAR17> VAR32;
 status_t VAR19 = FUN35(VAR63, VAR32);
            FUN10(VAR5, VAR32);
            VAR5->FUN3(VAR19);
 return VAR9;
 }

 case VAR65:
 {
            FUN2(VAR8, VAR4, VAR5);
 String8 VAR63 = VAR4.FUN5();
 String8 VAR32 = VAR4.FUN5();
            VAR5->FUN3(FUN36(VAR63, VAR32));
 return VAR9;
 }

 case VAR66:
 {
            FUN2(VAR8, VAR4, VAR5);
 String8 VAR63 = VAR4.FUN5();
 VAR16<VAR17> VAR32;
            FUN11(VAR4, VAR32);
            VAR5->FUN3(FUN37(VAR63, VAR32));
 return VAR9;
 }

 case VAR67:
 {
            FUN2(VAR8, VAR4, VAR5);
 VAR16<VAR17> VAR18;
            FUN11(VAR4, VAR18);
 String8 VAR68 = VAR4.FUN5();
            VAR5->FUN3(FUN38(VAR18, VAR68));
 return VAR9;
 }

 case VAR69:
 {
            FUN2(VAR8, VAR4, VAR5);
 VAR16<VAR17> VAR18;
            FUN11(VAR4, VAR18);
 String8 VAR68 = VAR4.FUN5();
            VAR5->FUN3(FUN39(VAR18, VAR68));
 return VAR9;
 }

 case VAR70:
 {
            FUN2(VAR8, VAR4, VAR5);
 VAR16<VAR17> VAR18, VAR71, VAR72, VAR73, VAR74;
            FUN11(VAR4, VAR18);
            FUN11(VAR4, VAR71);
            FUN11(VAR4, VAR72);
            FUN11(VAR4, VAR73);
 uint32_t VAR19 = FUN40(VAR18, VAR71, VAR72, VAR73, VAR74);
            FUN10(VAR5, VAR74);
            VAR5->FUN3(VAR19);
 return VAR9;
 }

 case VAR75:
 {
            FUN2(VAR8, VAR4, VAR5);
 VAR16<VAR17> VAR18, VAR71, VAR72, VAR73, VAR74;
            FUN11(VAR4, VAR18);
            FUN11(VAR4, VAR71);
            FUN11(VAR4, VAR72);
            FUN11(VAR4, VAR73);
 uint32_t VAR19 = FUN41(VAR18, VAR71, VAR72, VAR73, VAR74);
            FUN10(VAR5, VAR74);
            VAR5->FUN3(VAR19);
 return VAR9;
 }

 case VAR76:
 {
            FUN2(VAR8, VAR4, VAR5);
 VAR16<VAR17> VAR18, VAR71, VAR77, VAR78;
            FUN11(VAR4, VAR18);
            FUN11(VAR4, VAR71);
            FUN11(VAR4, VAR77);
 uint32_t VAR19 = FUN42(VAR18, VAR71, VAR77, VAR78);
            FUN10(VAR5, VAR78);
            VAR5->FUN3(VAR19);
 return VAR9;
 }

 case VAR79:
 {
            FUN2(VAR8, VAR4, VAR5);
 VAR16<VAR17> VAR18, VAR71, VAR77, VAR78;
            FUN11(VAR4, VAR18);
            FUN11(VAR4, VAR71);
            FUN11(VAR4, VAR77);
            FUN11(VAR4, VAR78);
 bool VAR80;
 uint32_t VAR19 = FUN43(VAR18, VAR71, VAR77, VAR78, VAR80);
            VAR5->FUN3(VAR80);
            VAR5->FUN3(VAR19);
 return VAR9;
 }

 case VAR81:
 {
            FUN2(VAR8, VAR4, VAR5);
 VAR16<VAR17> VAR18, VAR77, VAR49, VAR78;
            FUN11(VAR4, VAR18);
 String8 VAR68 = VAR4.FUN5();
            FUN11(VAR4, VAR77);
            FUN11(VAR4, VAR49);
 uint32_t VAR19 = FUN44(VAR18, VAR68, VAR77, VAR49, VAR78);
            FUN10(VAR5, VAR78);
            VAR5->FUN3(VAR19);
 return VAR9;
 }

 case VAR82: {
        FUN2(VAR8, VAR4, VAR5);
        VAR83<VAR84> VAR85 =
            VAR86<VAR84>(VAR4.FUN45());
        VAR5->FUN3(FUN46(VAR85));
 return VAR87;
 } break;

 default:
 return VAR88::FUN1(VAR2, VAR4, VAR5, VAR6);
 }
}