status_t VAR1::VAR2::FUN1() {
    VAR3<VAR4> VAR5;
 String8 VAR6;
 float VAR7;
    VAR3<VAR8> VAR9;
 bool VAR10 = false;

    FUN2(VAR11 != NULL);

 if (VAR12) {
        VAR10 = FUN3(
                VAR11, &VAR6, &VAR7, &VAR9);
 if (!VAR10 ||
                FUN4(
                    VAR6.FUN5(), VAR13)) {
            FUN6("", VAR6.FUN5());
 return VAR14;
 }
 } else if (VAR15) {
 if (!VAR11->FUN7(&VAR6, &VAR7, &VAR9)) {
 return VAR14;
 }
        VAR10 = !FUN4(
                VAR6.FUN5(), VAR13);
 }

 if (VAR10) {
 
        VAR16.FUN8();
        VAR11 = VAR17;
        VAR18 = new FUN9(VAR11);
        VAR18->FUN10(true);
 if (VAR19) {
            VAR18->FUN11(VAR20);
 }
        VAR5 = VAR18;
 } else {
        VAR5 = VAR4::FUN12(VAR11,
                VAR6.FUN13() ? NULL : VAR6.FUN5());
 }

 if (VAR5 == NULL) {
 return VAR14;
 }

 if (VAR5->FUN14()) {
        FUN15(VAR11);
 }

    VAR21 = VAR5->FUN16();
 if (VAR21 != NULL) {
 int64_t VAR22;
 if (VAR21->FUN17(VAR23, &VAR22)) {
            VAR24 = VAR22;
 }

 if (!VAR12) {
 
 
 
 const char *VAR25;
 if (VAR21->FUN18(VAR26, &VAR25)
 && !FUN19(VAR25, "", 9)) {
                VAR12 = true;
 }
 }
 }

 int32_t VAR27 = 0;

 size_t VAR28 = VAR5->FUN20();
 if (VAR28 == 0) {
 return VAR14;
 }

 
     for (size_t VAR29 = 0; VAR29 < VAR28; ++VAR29) {
         VAR3<VAR30> VAR31 = VAR5->FUN21(VAR29);






 
         VAR3<VAR32> VAR33 = VAR5->FUN22(VAR29);
 
 const char *VAR34;
        FUN2(VAR33->FUN18(VAR26, &VAR34));

 
 
 
 
 if (!FUN19(VAR34, "", 6)) {
 if (VAR35.VAR36 == NULL) {
                VAR35.VAR37 = VAR29;
                VAR35.VAR36 = VAR31;
                VAR35.VAR38 =
 new FUN23(VAR35.VAR36->FUN24());

 if (!FUN4(VAR34, VAR39)) {
                    VAR40 = true;
 } else {
                    VAR40 = false;
 }
 }
 } else if (!FUN19(VAR34, "", 6)) {
 if (VAR41.VAR36 == NULL) {
                VAR41.VAR37 = VAR29;
                VAR41.VAR36 = VAR31;
                VAR41.VAR38 =
 new FUN23(VAR41.VAR36->FUN24());

 
 int32_t VAR42;
 if (VAR33->FUN25(VAR43, &VAR42)
 && VAR42) {
                    VAR44 = true;
 if (VAR19) {
                        VAR5->FUN11(VAR20);
 }
 }

             }
         }
 

        if (VAR31 != NULL) {

            VAR45.FUN26(VAR31);

            int64_t VAR46;

            if (VAR33->FUN17(VAR23, &VAR46)) {

                if (VAR46 > VAR24) {

                    VAR24 = VAR46;

                }

            }



            int32_t VAR47;

            if (VAR27 >= 0 && VAR33->FUN25(VAR48, &VAR47)) {

                VAR27 += VAR47;

            } else {

                VAR27 = -1;










             }
         }
























     }
 
     VAR49 = VAR27;

 return VAR50;
}