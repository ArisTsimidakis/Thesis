void VAR1::FUN1(VAR2 ) {
 if (VAR3 || VAR4 != VAR5) {
 return;
 }

 VAR6<VAR7 *> &VAR8 = FUN2(0);
 VAR6<VAR7 *> &VAR9 = FUN2(1);

 while ((!VAR8.FUN3() || (VAR10 && !VAR11)) && !VAR9.FUN3()) {
 VAR7 *VAR12 = NULL;
        VAR13 *VAR14 = NULL;
 if (!VAR8.FUN3()) {
            VAR12 = *VAR8.FUN4();
            VAR14 = VAR12->VAR15;
 }

 VAR7 *VAR16 = *VAR9.FUN4();
        VAR13 *VAR17 = VAR16->VAR15;
        VAR17->VAR18 = 0;

 if (VAR14) {
 if (VAR14->VAR19 == 0 && VAR14->VAR20) {
                VAR21 = VAR14->VAR22;
                VAR23 = 0;
 }

 if (VAR14->VAR18 & VAR24) {
                VAR10 = true;
 }

            VAR25->VAR26 =
                VAR14->VAR27 + VAR14->VAR19;

            VAR25->VAR28 = VAR14->VAR20;
 } else {
            VAR25->VAR26 = NULL;
            VAR25->VAR28 = 0;
 }
        VAR25->VAR29 = 0;
        VAR25->VAR30 = 0;

        VAR25->VAR31 = VAR32 / sizeof(VAR33);
 if ((VAR34)VAR17->VAR35 < VAR25->VAR31) {
            FUN5("",
                VAR17->VAR35, VAR25->VAR31);
            FUN6(0x534e4554, "");
            FUN7(VAR36, VAR37, VAR38, NULL);
            VAR3 = true;
 return;
 }

        VAR25->VAR39 =
 reinterpret_cast<VAR33 *>(VAR17->VAR27);

        ERROR_CODE VAR40;
 if ((VAR40 = FUN8(VAR25, VAR41))
 != VAR42) {
            FUN9("", VAR40);

 if (VAR40 != VAR43
 && VAR40 != VAR44) {
                FUN5("", VAR40);

                FUN7(VAR36, VAR37, VAR40, NULL);
                VAR3 = true;
 return;
 }

 if (VAR25->VAR31 == 0) {
                VAR25->VAR31 = VAR32 / sizeof(VAR33);
 }

 if (VAR40 == VAR43 && VAR10) {
 if (!VAR45) {
 
 
                    VAR17->VAR19 = 0;
                    VAR17->VAR20 = VAR46 * VAR47 * sizeof(VAR33);

 if (!FUN10(VAR17, 0, VAR17->VAR20)) {
 return;
 }

 }
                VAR17->VAR18 = VAR24;
                VAR11 = true;
 } else {
 
 

 
 
 
                FUN11(VAR45, "");
 if (!FUN10(VAR17, 0, VAR25->VAR31 * sizeof(VAR33))) {
 return;
 }

 if (VAR14) {
                    VAR25->VAR30 = VAR14->VAR20;
 }
 }
 } else if (VAR25->VAR48 != VAR49
 || VAR25->VAR50 != VAR47) {
            VAR49 = VAR25->VAR48;
            VAR47 = VAR25->VAR50;

            FUN7(VAR51, 1, 0, NULL);
            VAR4 = VAR52;
 return;
 }

 if (VAR45) {
            VAR45 = false;
 
 
 
            VAR17->VAR19 =
                VAR46 * VAR47 * sizeof(VAR33);

            VAR17->VAR20 =
                VAR25->VAR31 * sizeof(VAR33) - VAR17->VAR19;
 } else if (!VAR11) {
            VAR17->VAR19 = 0;
            VAR17->VAR20 = VAR25->VAR31 * sizeof(VAR33);
 }

        VAR17->VAR22 =
            VAR21 + (VAR23 * 1000000ll) / VAR49;

 if (VAR14) {
            FUN12(VAR14->VAR20, VAR25->VAR30);

            VAR14->VAR19 += VAR25->VAR30;
            VAR14->VAR20 -= VAR25->VAR30;


 if (VAR14->VAR20 == 0) {
                VAR12->VAR53 = false;
                VAR8.FUN13(VAR8.FUN4());
                VAR12 = NULL;
                FUN14(VAR14);
                VAR14 = NULL;
 }
 }

        VAR23 += VAR25->VAR31 / VAR47;

        VAR16->VAR53 = false;
        VAR9.FUN13(VAR9.FUN4());
        VAR16 = NULL;
        FUN15(VAR17);
        VAR17 = NULL;
 }
}