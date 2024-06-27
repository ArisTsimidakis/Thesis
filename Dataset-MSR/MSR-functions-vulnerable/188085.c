int FUN1(effect_handle_t VAR1, uint32_t VAR2, uint32_t VAR3,
 void *VAR4, VAR5 *VAR6, void *VAR7) {

 VAR8 * VAR9 = (VAR8 *)VAR1;
 int VAR10;

 if (VAR9 == NULL || VAR9->VAR11 == VAR12) {
 return -VAR13;
 }



 switch (VAR2) {
 case VAR14:
 if (VAR7 == NULL || VAR6 == NULL || *VAR6 != sizeof(int)) {
 return -VAR13;
 }
 *(int *) VAR7 = FUN2(VAR9);
 break;
 case VAR15:
 if (VAR4 == NULL || VAR3 != sizeof(VAR16)
 || VAR7 == NULL || VAR6 == NULL || *VAR6 != sizeof(int)) {
 return -VAR13;
 }
 *(int *) VAR7 = FUN3(VAR9,
 (VAR16 *) VAR4);
 break;
 case VAR17:
 if (VAR7 == NULL || VAR6 == NULL ||
 *VAR6 != sizeof(VAR16)) {
 return -VAR13;
 }
 FUN4(VAR9, (VAR16 *)VAR7);
 break;
 case VAR18:
 FUN5(VAR9);
 break;
 case VAR19:
 if (VAR7 == NULL || VAR6 == NULL || *VAR6 != sizeof(int)) {
 return -VAR13;
 }
 if (VAR9->VAR11 != VAR20) {
 return -VAR21;
 }
        VAR9->VAR11 = VAR22;
        FUN6("");
 *(int *)VAR7 = 0;
 break;
 case VAR23:
 if (VAR7 == NULL || VAR6 == NULL || *VAR6 != sizeof(int)) {
 return -VAR13;
 }
 if (VAR9->VAR11 != VAR22) {
 return -VAR21;
 }
        VAR9->VAR11 = VAR20;
        FUN6("");
 *(int *)VAR7 = 0;
 break;
 case VAR24: {
 if (VAR4 == NULL ||
            VAR3 != (int)(sizeof(VAR25) + sizeof(VAR5)) ||
            VAR7 == NULL || VAR6 == NULL ||
 *VAR6 < (int)(sizeof(VAR25) + sizeof(VAR5) + sizeof(VAR5))) {
 return -VAR13;
 }
        memcpy(VAR7, VAR4, sizeof(VAR25) + sizeof(VAR5));
 VAR25 *VAR26 = (VAR25 *)VAR7;
        VAR26->VAR27 = 0;
 *VAR6 = sizeof(VAR25) + sizeof(VAR5);
 if (VAR26->VAR28 != sizeof(VAR5)) {
            VAR26->VAR27 = -VAR13;
 break;
 }
 switch (*(VAR5 *)VAR26->VAR29) {
 case VAR30:
            FUN6("" VAR31, VAR9->VAR32);
 *((VAR5 *)VAR26->VAR29 + 1) = VAR9->VAR32;
            VAR26->VAR33 = sizeof(VAR5);
 *VAR6 += sizeof(VAR5);
 break;
 case VAR34:
            FUN6("" VAR31, VAR9->VAR35);
 *((VAR5 *)VAR26->VAR29 + 1) = VAR9->VAR35;
            VAR26->VAR33 = sizeof(VAR5);
 *VAR6 += sizeof(VAR5);
 break;
 case VAR36:
            FUN6("" VAR31, VAR9->VAR37);
 *((VAR5 *)VAR26->VAR29 + 1) = VAR9->VAR37;
            VAR26->VAR33 = sizeof(VAR5);
 *VAR6 += sizeof(VAR5);
 break;
 default:
            VAR26->VAR27 = -VAR13;
 }
 } break;
 case VAR38: {
 if (VAR4 == NULL ||
            VAR3 != (int)(sizeof(VAR25) + sizeof(VAR5) + sizeof(VAR5)) ||
            VAR7 == NULL || VAR6 == NULL || *VAR6 != sizeof(VAR39)) {
 return -VAR13;
 }
 *(VAR39 *)VAR7 = 0;
 VAR25 *VAR26 = (VAR25 *)VAR4;
 if (VAR26->VAR28 != sizeof(VAR5) || VAR26->VAR33 != sizeof(VAR5)) {
 *(VAR39 *)VAR7 = -VAR13;

             break;
         }
         switch (*(VAR5 *)VAR26->VAR29) {

        case VAR30:

            VAR9->VAR32 = *((VAR5 *)VAR26->VAR29 + 1);

            FUN6("" VAR31, VAR9->VAR32);

            break;






















         case VAR34:
             VAR9->VAR35 = *((VAR5 *)VAR26->VAR29 + 1);
             FUN6("" VAR31, VAR9->VAR35);
             break;

        case VAR40:

            VAR9->VAR41 = *((VAR5 *)VAR26->VAR29 + 1);

            FUN6("" VAR31, VAR9->VAR41);

            break;
















         case VAR36:
             VAR9->VAR37 = *((VAR5 *)VAR26->VAR29 + 1);
             FUN6("" VAR31, VAR9->VAR37);
 break;
 default:
 *(VAR39 *)VAR7 = -VAR13;
 }
 } break;
 case VAR42:
 case VAR43:
 case VAR44:
 break;


 case VAR45: {
 uint32_t VAR46 = VAR9->VAR32;
 if (VAR7 == NULL || VAR6 == NULL || *VAR6 != VAR46) {
            FUN6("" VAR31 "" VAR31,
 *VAR6, VAR46);
 return -VAR13;
 }
 if (VAR9->VAR11 == VAR22) {
 const uint32_t VAR47 = FUN7(VAR9);

 
 
 if ((VAR9->VAR48 == VAR9->VAR49) &&
 (VAR9->VAR50.VAR51 != 0) &&
 (VAR47 > VAR52)) {
                    FUN6("");
                    VAR9->VAR50.VAR51 = 0;
                    memset(VAR7, 0x80, VAR46);
 } else {
 int32_t VAR53 = VAR9->VAR41;
                VAR53 -= VAR47;

                 if (VAR53 < 0) {
                     VAR53 = 0;
                 }

                const uint32_t VAR54 =

                    VAR9->VAR55.VAR56.VAR57 * VAR53 / 1000;

                int32_t VAR58 = VAR9->VAR49 - VAR46 - VAR54;




 


















                 if (VAR58 < 0) {
                     uint32_t VAR59 = -VAR58;
                     if (VAR59 > VAR46) {
                        VAR59 = VAR46;
 }
                    memcpy(VAR7,
                           VAR9->VAR60 + VAR61 + VAR58,
                           VAR59);
                    VAR7 = (char *)VAR7 + VAR59;
                    VAR46 -= VAR59;
                    VAR58 = 0;
 }
                memcpy(VAR7,
                       VAR9->VAR60 + VAR58,
                       VAR46);
 }

            VAR9->VAR48 = VAR9->VAR49;
 } else {
            memset(VAR7, 0x80, VAR46);
 }

 } break;

 case VAR62: {
 if (VAR7 == NULL || VAR6 == NULL ||
 *VAR6 < (sizeof(VAR39) * VAR63)) {
 if (VAR6 == NULL) {
                FUN6("");
 } else {
                FUN6("" VAR31
 "" VAR31,
 *VAR6,
 FUN8(sizeof(VAR39)) * VAR63);
 }
            FUN9(0x534e4554, "");
 return -VAR13;
 }
 uint16_t VAR64 = 0;
 float VAR65 = 0.0f;
 uint8_t VAR66 = 0;
 
 
 const int32_t VAR67 = FUN7(VAR9);
 if (VAR67 > VAR68) {
            FUN6("" VAR69 "", VAR67);
 for (uint32_t VAR70=0 ; VAR70<VAR9->VAR71 ; VAR70++) {
                VAR9->VAR72[VAR70].VAR73 = false;
                VAR9->VAR72[VAR70].VAR74 = 0;
                VAR9->VAR72[VAR70].VAR75 = 0;
 }
            VAR9->VAR76 = 0;
 } else {
 
 
 
 for (uint32_t VAR70=0 ; VAR70 < VAR9->VAR71 ; VAR70++) {
 if (VAR9->VAR72[VAR70].VAR73) {
 if (VAR9->VAR72[VAR70].VAR74 > VAR64) {
                        VAR64 = VAR9->VAR72[VAR70].VAR74;
 }
                    VAR65 += VAR9->VAR72[VAR70].VAR75;
                    VAR66++;
 }
 }
 }
 float VAR77 = VAR66 == 0 ? 0.0f : FUN10(VAR65 / VAR66);
 VAR39* VAR78 = (VAR39*)VAR7;
 
 if (VAR77 < 0.000016f) {
            VAR78[VAR79] = -9600; 
 } else {
            VAR78[VAR79] = (VAR39) (2000 * FUN11(VAR77 / 32767.0f));
 }
 if (VAR64 == 0) {
            VAR78[VAR80] = -9600; 
 } else {
            VAR78[VAR80] = (VAR39) (2000 * FUN11(VAR64 / 32767.0f));
 }
        FUN6("" VAR81 "" VAR69 "" VAR69 "",
                VAR64, VAR78[VAR80],
                VAR77, VAR78[VAR79]);
 }
 break;

 default:
        FUN12("" VAR31, VAR2);
 return -VAR13;
 }

 return 0;
}