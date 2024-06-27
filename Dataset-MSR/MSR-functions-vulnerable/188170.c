void VAR1::FUN1(VAR2 ) {
 if (VAR3 || VAR4 != VAR5) {
 return;
 }

 VAR6<VAR7 *> &VAR8 = FUN2(0);
 VAR6<VAR7 *> &VAR9 = FUN2(1);

 while (!VAR8.FUN3() && VAR9.FUN4() == VAR10) {
 VAR7 *VAR11 = *VAR8.FUN5();
        VAR12 *VAR13 = VAR11->VAR14;
 if (VAR13 == NULL) {
            VAR8.FUN6(VAR8.FUN5());
            VAR11->VAR15 = false;
 continue;
 }

 VAR16 *VAR17 = FUN7(1);

        VAR12 *VAR18 =
            VAR17->VAR19.FUN8(VAR20 & 1).VAR14;

 if (VAR13->VAR21 == 0) {
            VAR8.FUN6(VAR8.FUN5());
            VAR11->VAR15 = false;
            FUN9(VAR13);

 ++VAR22;

 if (VAR13->VAR23 & VAR24) {
                VAR18->VAR21 = 0;
                VAR18->VAR23 = VAR24;

 VAR6<VAR7 *>::iterator VAR25 = VAR9.FUN5();
 while ((*VAR25)->VAR14 != VAR18) {
 ++VAR25;
 }

 VAR7 *VAR26 = *VAR25;
                VAR26->VAR15 = false;
                VAR9.FUN6(VAR25);
                VAR26 = NULL;

                FUN10(VAR18);
                VAR18 = NULL;
 }
 return;
 }

 VAR27 *VAR28 = VAR13->VAR29 + VAR13->VAR30;
 VAR31 *VAR32 = (VAR31 *)VAR28;
 bool VAR33 = *VAR32 == 0xB0010000;
 if (VAR33) {
 FUN11(VAR34);
            VAR35 = false;
 }

 if (!VAR35) {
 VAR27 *VAR36[1];
 int32_t VAR37 = 0;

            VAR36[0] = NULL;

 if ((VAR13->VAR23 & VAR38) || VAR33) {
                VAR36[0] = VAR28;
                VAR37 = VAR13->VAR21;
 }

            MP4DecodingMode VAR39 =
 (VAR40 == VAR41) ? VAR42 : VAR43;

 Bool VAR44 = FUN12(
                    VAR34, VAR36, &VAR37, 1,
                    FUN13(), FUN14(), VAR39);

 if (!VAR44) {
                FUN15("");

                FUN16(VAR45, VAR46, 0, NULL);
                VAR3 = true;
 return;
 }

            MP4DecodingMode VAR47 = FUN17(VAR34);
 if (VAR39 != VAR47) {
                FUN16(VAR45, VAR46, 0, NULL);
                VAR3 = true;
 return;
 }

 FUN18((VAR48 *) VAR34, 0);

 bool VAR49 = false;
 if (VAR13->VAR23 & VAR38) {
                VAR11->VAR15 = false;
                VAR8.FUN6(VAR8.FUN5());
                VAR11 = NULL;
                FUN9(VAR13);
                VAR13 = NULL;
 } else if (VAR33) {
                VAR49 = true;
 }

            VAR35 = true;

 if (VAR39 == VAR42 && FUN19()) {
 return;
 }

 if (!VAR49) {
 continue;
 }
 }

 if (!VAR50) {
 VAR16 *VAR17 = FUN7(1);
            VAR12 *VAR18 = VAR17->VAR19.FUN8(1).VAR14;


             OMX_U32 VAR51 = sizeof(VAR52) * VAR34->VAR53;
             if ((VAR18->VAR54 < VAR51) ||
                     (VAR18->VAR54 - VAR51 < VAR51 / 2)) {

                FUN20("",

                        VAR18->VAR54);




                 FUN21(0x534e4554, "");
                 FUN16(VAR45, VAR46, 0, NULL);
                 VAR3 = true;
 return;
 }
 FUN22(VAR34, VAR18->VAR29);
            VAR50 = true;
 }

 uint32_t VAR55 = (VAR13->VAR30 == 0);

 
 
 uint32_t VAR56 = 0xFFFFFFFF;
 if (VAR55) {
            VAR57.FUN23(VAR58, VAR13->VAR59);
            VAR56 = VAR58;
            VAR58++;
 }

 int32_t VAR60 = VAR13->VAR21;
 int32_t VAR61 = VAR60;

        OMX_U32 VAR62;
        OMX_U64 VAR51 = (VAR63)VAR64 * (VAR63)VAR65;
 if (VAR51 > ((VAR63)VAR66 / 3) * 2) {
            FUN20("");
            FUN16(VAR45, VAR46, 0, NULL);
            VAR3 = true;
 return;
 }
        VAR62 = (VAR2)(VAR51 + (VAR51 / 2));

 if (VAR18->VAR54 < VAR62) {
            FUN21(0x534e4554, "");
            FUN20("");
            FUN16(VAR45, VAR46, 0, NULL);
            VAR3 = true;
 return;
 }
 
 
 
 if (FUN24(
                    VAR34, &VAR28, &VAR56, &VAR61,
 &VAR55,
                    VAR18->VAR29) != VAR67) {
            FUN20("");

            FUN16(VAR45, VAR46, 0, NULL);
            VAR3 = true;
 return;
 }

 
 
 if (FUN19()) {
 return;
 }

 
        VAR18->VAR59 = VAR57.FUN25(VAR56);
        VAR57.FUN26(VAR56);

        VAR13->VAR30 += VAR60;
        VAR13->VAR21 = 0;
 if (VAR13->VAR23 & VAR24) {
            VAR18->VAR23 = VAR24;
 } else {
            VAR18->VAR23 = 0;
 }

 if (VAR13->VAR21 == 0) {
            VAR11->VAR15 = false;
            VAR8.FUN6(VAR8.FUN5());
            VAR11 = NULL;
            FUN9(VAR13);
            VAR13 = NULL;
 }

 ++VAR22;

        VAR18->VAR30 = 0;
        VAR18->VAR21 = VAR62;

 VAR6<VAR7 *>::iterator VAR25 = VAR9.FUN5();
 while ((*VAR25)->VAR14 != VAR18) {
 ++VAR25;
 }

 VAR7 *VAR26 = *VAR25;
        VAR26->VAR15 = false;
        VAR9.FUN6(VAR25);
        VAR26 = NULL;

        FUN10(VAR18);
        VAR18 = NULL;

 ++VAR20;
 }
}