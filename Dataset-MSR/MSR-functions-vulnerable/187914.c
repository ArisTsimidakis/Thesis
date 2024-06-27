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

 void *VAR46 = malloc(VAR45);
            VAR4.read(VAR46, VAR45);

 status_t VAR31;
 switch (VAR2) {
 case VAR38:
                    VAR31 = FUN17(VAR9, VAR43, VAR46, VAR45);
 break;
 case VAR39:
                    VAR31 = FUN18(VAR9, VAR43, VAR46, VAR45);
 break;
 case VAR40:
                    VAR31 = FUN19(VAR9, VAR43, VAR46, VAR45);
 break;
 case VAR41:
                    VAR31 = FUN20(VAR9, VAR43, VAR46, VAR45);
 break;
 case VAR42:
 {
 InternalOptionType VAR47 =
 (VAR48)VAR4.FUN3();

                    VAR31 = FUN21(VAR9, VAR43, VAR47, VAR46, VAR45);
 break;
 }

 default:
                    FUN22();
 }

            VAR5->FUN4(VAR31);

 if ((VAR2 == VAR38 || VAR2 == VAR40) && VAR31 == VAR13) {
                VAR5->write(VAR46, VAR45);
 }

            free(VAR46);
            VAR46 = NULL;

 return VAR24;
 }

 case VAR49:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();
            OMX_STATETYPE VAR50 = VAR51;

 status_t VAR31 = FUN23(VAR9, &VAR50);
            VAR5->FUN4(VAR50);
            VAR5->FUN4(VAR31);

 return VAR24;
 }

 case VAR52:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();
            OMX_U32 VAR53 = VAR4.FUN3();
            OMX_BOOL VAR54 = (VAR55)VAR4.FUN3();

 status_t VAR31 = FUN24(VAR9, VAR53, VAR54);
            VAR5->FUN4(VAR31);

 return VAR24;
 }

 case VAR56:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();
            OMX_U32 VAR53 = VAR4.FUN3();

            OMX_U32 VAR57 = 0;
 status_t VAR31 = FUN25(VAR9, VAR53, &VAR57);
            VAR5->FUN4(VAR31);
            VAR5->FUN4(VAR57);

 return VAR24;
 }

 case VAR58:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();
            OMX_U32 VAR53 = VAR4.FUN3();
            VAR27<VAR59> VAR46 =
                VAR30<VAR59>(VAR4.FUN12());
            OMX_U32 VAR60 = VAR4.FUN3();

            buffer_id VAR61;
 status_t VAR31 = FUN26(VAR9, VAR53, VAR46, &VAR61, VAR60);
            VAR5->FUN4(VAR31);

 if (VAR31 == VAR13) {
                VAR5->FUN4((VAR32)VAR61);
 }

 return VAR24;
 }

 case VAR62:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();
            OMX_U32 VAR53 = VAR4.FUN3();
            VAR27<VAR63> VAR64 = new FUN27();
            VAR4.read(*VAR64);

            buffer_id VAR61;
 status_t VAR31 = FUN28(
                    VAR9, VAR53, VAR64, &VAR61);
            VAR5->FUN4(VAR31);

 if (VAR31 == VAR13) {
                VAR5->FUN4((VAR32)VAR61);
 }

 return VAR24;
 }

 case VAR65:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();
            OMX_U32 VAR53 = VAR4.FUN3();
            VAR27<VAR63> VAR64 = new FUN27();
            VAR4.read(*VAR64);
            buffer_id VAR61 = (VAR66)VAR4.FUN3();

 status_t VAR31 = FUN29(
                    VAR9, VAR53, VAR64, VAR61);
            VAR5->FUN4(VAR31);

 return VAR24;
 }

 case VAR67:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();

             OMX_U32 VAR53 = VAR4.FUN3();
 
             VAR27<VAR68> VAR69;

            MetadataBufferType VAR47;


             status_t VAR31 = FUN30(VAR9, VAR53, &VAR69, &VAR47);
 








             VAR5->FUN4(VAR47);
             VAR5->FUN4(VAR31);
 
 if (VAR31 == VAR13) {
                VAR5->FUN31(VAR70::FUN32(VAR69));
 }

 return VAR24;
 }

 case VAR71:
 {
            FUN2(VAR8, VAR4, VAR5);

            VAR27<VAR68> VAR69;
            VAR27<VAR72> VAR73;
 status_t VAR31 = FUN33(
 &VAR69, &VAR73);

            VAR5->FUN4(VAR31);

 if (VAR31 == VAR13) {
                VAR5->FUN31(VAR70::FUN32(VAR69));
                VAR5->FUN31(VAR70::FUN32(VAR73));
 }

 return VAR24;
 }

 case VAR74:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();
            OMX_U32 VAR53 = VAR4.FUN3();


             VAR27<VAR72> VAR73 =
                     VAR30<VAR72>(VAR4.FUN12());
 

            MetadataBufferType VAR47;


             status_t VAR31 = FUN34(VAR9, VAR53, VAR73, &VAR47);
 








             VAR5->FUN4(VAR47);
             VAR5->FUN4(VAR31);
             return VAR24;
 }

 case VAR75:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();

 status_t VAR31 = FUN35(VAR9);
            VAR5->FUN4(VAR31);

 return VAR24;
 }

 case VAR76:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();

             OMX_U32 VAR53 = VAR4.FUN3();
             OMX_BOOL VAR54 = (VAR55)VAR4.FUN3();
 

            MetadataBufferType VAR47;


             status_t VAR31 = FUN36(VAR9, VAR53, VAR54, &VAR47);










             VAR5->FUN4(VAR47);
             VAR5->FUN4(VAR31);
 
 return VAR24;
 }

 case VAR77:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();
            OMX_U32 VAR53 = VAR4.FUN3();
            OMX_BOOL VAR54 = (VAR55)VAR4.FUN3();
            OMX_U32 VAR78 = VAR4.FUN3();
            OMX_U32 VAR79 = VAR4.FUN3();

 status_t VAR31 = FUN37(
                    VAR9, VAR53, VAR54, VAR78, VAR79);
            VAR5->FUN4(VAR31);

 return VAR24;
 }

 case VAR80:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();
            OMX_U32 VAR53 = VAR4.FUN3();
            OMX_BOOL VAR81 = (VAR55)VAR4.FUN3();
            OMX_U32 VAR82 = VAR4.FUN3();

 VAR83 *VAR84 = NULL;
 status_t VAR31 = FUN38(
                    VAR9, VAR53, VAR81, VAR82, &VAR84);
            VAR5->FUN4(VAR31);
 if(VAR31 == VAR13){
                VAR5->FUN39(VAR84);
 }

 return VAR24;
 }

 case VAR85:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();
            OMX_U32 VAR53 = VAR4.FUN3();
 if (!FUN40(VAR9) || VAR53 != 0 ) {
                FUN41("");
                VAR5->FUN4(VAR86);
 return VAR24;
 }

 size_t VAR45 = VAR4.FUN16();

            buffer_id VAR61;
 void *VAR87;
 status_t VAR31 = FUN42(
                    VAR9, VAR53, VAR45, &VAR61, &VAR87);
            VAR5->FUN4(VAR31);

 if (VAR31 == VAR13) {
                VAR5->FUN4((VAR32)VAR61);
                VAR5->FUN43((VAR88)VAR87);
 }

 return VAR24;
 }

 case VAR89:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();
            OMX_U32 VAR53 = VAR4.FUN3();
            VAR27<VAR59> VAR46 =
                VAR30<VAR59>(VAR4.FUN12());
            OMX_U32 VAR60 = VAR4.FUN3();

            buffer_id VAR61;
 status_t VAR31 = FUN44(
                    VAR9, VAR53, VAR46, &VAR61, VAR60);

            VAR5->FUN4(VAR31);

 if (VAR31 == VAR13) {
                VAR5->FUN4((VAR32)VAR61);
 }

 return VAR24;
 }

 case VAR90:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();
            OMX_U32 VAR53 = VAR4.FUN3();
            buffer_id VAR61 = (VAR66)VAR4.FUN3();
            VAR5->FUN4(FUN45(VAR9, VAR53, VAR61));

 return VAR24;
 }

 case VAR91:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();
            buffer_id VAR61 = (VAR66)VAR4.FUN3();
 bool VAR92 = VAR4.FUN3();
 int VAR93 = VAR92 ? ::FUN46(VAR4.FUN47()) : -1;
            VAR5->FUN4(FUN48(VAR9, VAR61, VAR93));

 return VAR24;
 }

 case VAR94:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();
            buffer_id VAR61 = (VAR66)VAR4.FUN3();
            OMX_U32 VAR95 = VAR4.FUN3();
            OMX_U32 VAR96 = VAR4.FUN3();
            OMX_U32 VAR6 = VAR4.FUN3();
            OMX_TICKS VAR97 = VAR4.FUN16();
 bool VAR92 = VAR4.FUN3();
 int VAR93 = VAR92 ? ::FUN46(VAR4.FUN47()) : -1;
            VAR5->FUN4(FUN49(
                    VAR9, VAR61, VAR95, VAR96, VAR6, VAR97, VAR93));

 return VAR24;
 }

 case VAR98:
 {
            FUN2(VAR8, VAR4, VAR5);

            node_id VAR9 = (VAR10)VAR4.FUN3();
 const char *VAR99 = VAR4.FUN11();

            OMX_INDEXTYPE VAR43;
 status_t VAR31 = FUN50(VAR9, VAR99, &VAR43);

            VAR5->FUN4(VAR31);

 if (VAR31 == VAR13) {
                VAR5->FUN4(VAR43);
 }

 return VAR13;
 }

 default:
 return VAR100::FUN1(VAR2, VAR4, VAR5, VAR6);
 }
}