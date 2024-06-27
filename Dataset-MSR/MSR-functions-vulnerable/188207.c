status_t VAR1::FUN1(
 uint32_t VAR2, const VAR3 &VAR4, VAR3 *VAR5, uint32_t VAR6) {
 switch (VAR2) {
 case VAR7:
 {
            FUN2(VAR8, VAR4, VAR5);
            node_id VAR9 = (VAR10)VAR4.FUN3();
 pid_t VAR11 = (VAR12)VAR4.FUN3();
            VAR5->FUN4(FUN5(VAR9, VAR11));

 return VAR13;
 }

 case VAR14:
 {
            FUN2(VAR8, VAR4, VAR5);

 VAR15<VAR16> VAR17;
            FUN6(&VAR17);

            VAR5->FUN4(VAR17.FUN7());
 for (VAR15<VAR16>::iterator VAR18 = VAR17.FUN8();
                 VAR18 != VAR17.FUN9(); ++VAR18) {
 VAR16 &VAR19 = *VAR18;

                VAR5->FUN10(VAR19.VAR20);
                VAR5->FUN4(VAR19.VAR21.FUN7());
 for (VAR15<VAR22>::iterator VAR23 = VAR19.VAR21.FUN8();
                     VAR23 != VAR19.VAR21.FUN9(); ++VAR23) {
                    VAR5->FUN10(*VAR23);
 }
 }

 return VAR24;
 }

 case VAR25:
 {
            FUN2(VAR8, VAR4, VAR5);

 const char *VAR26 = VAR4.FUN11();

            VAR27<VAR28> VAR29 =
                VAR30<VAR28>(VAR4.FUN12());

            node_id VAR9;

 status_t VAR31 = FUN13(VAR26, VAR29, &VAR9);
            VAR5->FUN4(VAR31);
 if (VAR31 == VAR13) {
                VAR5->FUN4((VAR32)VAR9);
 }

 return VAR24;
 }

 case VAR33:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();

            VAR5->FUN4(FUN14(VAR9));

 return VAR24;
 }

 case VAR34:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();

            OMX_COMMANDTYPE VAR35 =
 static_cast<VAR36>(VAR4.FUN3());

            OMX_S32 VAR37 = VAR4.FUN3();
            VAR5->FUN4(FUN15(VAR9, VAR35, VAR37));

 return VAR24;
 }

 case VAR38:
 case VAR39:
 case VAR40:
 case VAR41:
 case VAR42:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();
            OMX_INDEXTYPE VAR43 = static_cast<VAR44>(VAR4.FUN3());

 
             size_t VAR45 = VAR4.FUN16();
 

            status_t VAR31 = VAR46;

            void *VAR47 = calloc(VAR45, 1);

            if (VAR47) {

                VAR31 = VAR4.read(VAR47, VAR45);

                if (VAR31 != VAR13) {

                    FUN17(0x534e4554, "");




























                 } else {

                    switch (VAR2) {

                        case VAR38:

                            VAR31 = FUN18(VAR9, VAR43, VAR47, VAR45);

                            break;

                        case VAR39:

                            VAR31 = FUN19(VAR9, VAR43, VAR47, VAR45);

                            break;

                        case VAR40:

                            VAR31 = FUN20(VAR9, VAR43, VAR47, VAR45);

                            break;

                        case VAR41:

                            VAR31 = FUN21(VAR9, VAR43, VAR47, VAR45);

                            break;

                        case VAR42:

                        {

                            InternalOptionType VAR48 =

                                (VAR49)VAR4.FUN3();










































































 

                            VAR31 = FUN22(VAR9, VAR43, VAR48, VAR47, VAR45);

                            break;














                         }



                        default:

                            FUN23();
                     }




                 }
             }
 
            VAR5->FUN4(VAR31);

 if ((VAR2 == VAR38 || VAR2 == VAR40) && VAR31 == VAR13) {

                 VAR5->write(VAR47, VAR45);
             }
 

            free(VAR47);






             VAR47 = NULL;
 
             return VAR24;
 }

 case VAR50:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();
            OMX_STATETYPE VAR51 = VAR52;

 status_t VAR31 = FUN24(VAR9, &VAR51);
            VAR5->FUN4(VAR51);
            VAR5->FUN4(VAR31);

 return VAR24;
 }

 case VAR53:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();
            OMX_U32 VAR54 = VAR4.FUN3();
            OMX_BOOL VAR55 = (VAR56)VAR4.FUN3();

 status_t VAR31 = FUN25(VAR9, VAR54, VAR55);
            VAR5->FUN4(VAR31);

 return VAR24;
 }

 case VAR57:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();
            OMX_U32 VAR54 = VAR4.FUN3();

            OMX_U32 VAR58 = 0;
 status_t VAR31 = FUN26(VAR9, VAR54, &VAR58);
            VAR5->FUN4(VAR31);
            VAR5->FUN4(VAR58);

 return VAR24;
 }

 case VAR59:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();
            OMX_U32 VAR54 = VAR4.FUN3();
            VAR27<VAR60> VAR47 =
                VAR30<VAR60>(VAR4.FUN12());
            OMX_U32 VAR61 = VAR4.FUN3();

            buffer_id VAR62;
 status_t VAR31 = FUN27(VAR9, VAR54, VAR47, &VAR62, VAR61);
            VAR5->FUN4(VAR31);

 if (VAR31 == VAR13) {
                VAR5->FUN4((VAR32)VAR62);
 }

 return VAR24;
 }

 case VAR63:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();
            OMX_U32 VAR54 = VAR4.FUN3();
            VAR27<VAR64> VAR65 = new FUN28();
            VAR4.read(*VAR65);

            buffer_id VAR62;
 status_t VAR31 = FUN29(
                    VAR9, VAR54, VAR65, &VAR62);
            VAR5->FUN4(VAR31);

 if (VAR31 == VAR13) {
                VAR5->FUN4((VAR32)VAR62);
 }

 return VAR24;
 }

 case VAR66:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();
            OMX_U32 VAR54 = VAR4.FUN3();
            VAR27<VAR64> VAR65 = new FUN28();
            VAR4.read(*VAR65);
            buffer_id VAR62 = (VAR67)VAR4.FUN3();

 status_t VAR31 = FUN30(
                    VAR9, VAR54, VAR65, VAR62);
            VAR5->FUN4(VAR31);

 return VAR24;
 }

 case VAR68:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();
            OMX_U32 VAR54 = VAR4.FUN3();

            VAR27<VAR69> VAR70;
 MetadataBufferType VAR48 = VAR71;
 status_t VAR31 = FUN31(VAR9, VAR54, &VAR70, &VAR48);

 if ((VAR31 != VAR13) && (VAR48 == VAR71)) {
                FUN17(0x534e4554, "");
 }

            VAR5->FUN4(VAR48);
            VAR5->FUN4(VAR31);

 if (VAR31 == VAR13) {
                VAR5->FUN32(VAR72::FUN33(VAR70));
 }

 return VAR24;
 }

 case VAR73:
 {
            FUN2(VAR8, VAR4, VAR5);

            VAR27<VAR69> VAR70;
            VAR27<VAR74> VAR75;
 status_t VAR31 = FUN34(
 &VAR70, &VAR75);

            VAR5->FUN4(VAR31);

 if (VAR31 == VAR13) {
                VAR5->FUN32(VAR72::FUN33(VAR70));
                VAR5->FUN32(VAR72::FUN33(VAR75));
 }

 return VAR24;
 }

 case VAR76:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();
            OMX_U32 VAR54 = VAR4.FUN3();

            VAR27<VAR74> VAR75 =
                    VAR30<VAR74>(VAR4.FUN12());

 MetadataBufferType VAR48 = VAR71;
 status_t VAR31 = FUN35(VAR9, VAR54, VAR75, &VAR48);

 if ((VAR31 != VAR13) && (VAR48 == VAR71)) {
                FUN17(0x534e4554, "");
 }

            VAR5->FUN4(VAR48);
            VAR5->FUN4(VAR31);
 return VAR24;
 }

 case VAR77:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();

 status_t VAR31 = FUN36(VAR9);
            VAR5->FUN4(VAR31);

 return VAR24;
 }

 case VAR78:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();
            OMX_U32 VAR54 = VAR4.FUN3();
            OMX_BOOL VAR55 = (VAR56)VAR4.FUN3();

 MetadataBufferType VAR48 = VAR71;
 status_t VAR31 = FUN37(VAR9, VAR54, VAR55, &VAR48);

            VAR5->FUN4(VAR48);
            VAR5->FUN4(VAR31);

 return VAR24;
 }

 case VAR79:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();
            OMX_U32 VAR54 = VAR4.FUN3();
            OMX_BOOL VAR55 = (VAR56)VAR4.FUN3();
            OMX_U32 VAR80 = VAR4.FUN3();
            OMX_U32 VAR81 = VAR4.FUN3();

 status_t VAR31 = FUN38(
                    VAR9, VAR54, VAR55, VAR80, VAR81);
            VAR5->FUN4(VAR31);

 return VAR24;
 }

 case VAR82:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();
            OMX_U32 VAR54 = VAR4.FUN3();
            OMX_BOOL VAR83 = (VAR56)VAR4.FUN3();
            OMX_U32 VAR84 = VAR4.FUN3();

 VAR85 *VAR86 = NULL;
 status_t VAR31 = FUN39(
                    VAR9, VAR54, VAR83, VAR84, &VAR86);
            VAR5->FUN4(VAR31);
 if(VAR31 == VAR13){
                VAR5->FUN40(VAR86);
 }

 return VAR24;
 }

 case VAR87:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();
            OMX_U32 VAR54 = VAR4.FUN3();
 if (!FUN41(VAR9) || VAR54 != 0 ) {
                FUN42("");
                VAR5->FUN4(VAR88);
 return VAR24;
 }

 size_t VAR45 = VAR4.FUN16();

            buffer_id VAR62;
 void *VAR89;
 status_t VAR31 = FUN43(
                    VAR9, VAR54, VAR45, &VAR62, &VAR89);
            VAR5->FUN4(VAR31);

 if (VAR31 == VAR13) {
                VAR5->FUN4((VAR32)VAR62);
                VAR5->FUN44((VAR90)VAR89);
 }

 return VAR24;
 }

 case VAR91:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();
            OMX_U32 VAR54 = VAR4.FUN3();
            VAR27<VAR60> VAR47 =
                VAR30<VAR60>(VAR4.FUN12());
            OMX_U32 VAR61 = VAR4.FUN3();

            buffer_id VAR62;
 status_t VAR31 = FUN45(
                    VAR9, VAR54, VAR47, &VAR62, VAR61);

            VAR5->FUN4(VAR31);

 if (VAR31 == VAR13) {
                VAR5->FUN4((VAR32)VAR62);
 }

 return VAR24;
 }

 case VAR92:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();
            OMX_U32 VAR54 = VAR4.FUN3();
            buffer_id VAR62 = (VAR67)VAR4.FUN3();
            VAR5->FUN4(FUN46(VAR9, VAR54, VAR62));

 return VAR24;
 }

 case VAR93:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();
            buffer_id VAR62 = (VAR67)VAR4.FUN3();
 bool VAR94 = VAR4.FUN3();
 int VAR95 = VAR94 ? ::FUN47(VAR4.FUN48()) : -1;
            VAR5->FUN4(FUN49(VAR9, VAR62, VAR95));

 return VAR24;
 }

 case VAR96:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();
            buffer_id VAR62 = (VAR67)VAR4.FUN3();
            OMX_U32 VAR97 = VAR4.FUN3();
            OMX_U32 VAR98 = VAR4.FUN3();
            OMX_U32 VAR6 = VAR4.FUN3();
            OMX_TICKS VAR99 = VAR4.FUN16();
 bool VAR94 = VAR4.FUN3();
 int VAR95 = VAR94 ? ::FUN47(VAR4.FUN48()) : -1;
            VAR5->FUN4(FUN50(
                    VAR9, VAR62, VAR97, VAR98, VAR6, VAR99, VAR95));

 return VAR24;
 }

 case VAR100:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();
 const char *VAR101 = VAR4.FUN11();

            OMX_INDEXTYPE VAR43;
 status_t VAR31 = FUN51(VAR9, VAR101, &VAR43);

            VAR5->FUN4(VAR31);

 if (VAR31 == VAR13) {
                VAR5->FUN4(VAR43);
 }

 return VAR13;
 }

 default:
 return VAR102::FUN1(VAR2, VAR4, VAR5, VAR6);
 }
}