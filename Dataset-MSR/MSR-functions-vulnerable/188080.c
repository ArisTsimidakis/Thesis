int FUN1(VAR1 *VAR2,
 void *VAR3,
 VAR4 *VAR5,
 void *VAR6){
 int VAR7 = 0;
 int VAR8 = 0;
 VAR9 *VAR10 = (VAR9 *)VAR3;
 int32_t VAR11 = *VAR10++;
 int32_t VAR12;
 char *VAR13;

 

 switch (VAR11) {
 case VAR14:
 case VAR15:
 case VAR16:
 case VAR17:
 case VAR18:
 if (*VAR5 < sizeof(VAR19)) {
            FUN2("", *VAR5);
 return -VAR20;
 }
 *VAR5 = sizeof(VAR19);
 break;

 case VAR21:
 if (*VAR5 < 2 * sizeof(VAR19)) {
            FUN2("", *VAR5);
 return -VAR20;
 }
 *VAR5 = 2 * sizeof(VAR19);
 break;
 case VAR22:
 if (*VAR5 < 2 * sizeof(VAR9)) {
            FUN2("", *VAR5);
 return -VAR20;
 }
 *VAR5 = 2 * sizeof(VAR9);
 break;

 case VAR23:
 if (*VAR5 < sizeof(VAR9)) {
            FUN2("", *VAR5);
 return -VAR20;
 }
 *VAR5 = sizeof(VAR9);
 break;

 case VAR24:
 break;

 case VAR25:
 if (*VAR5 < (2 + VAR26) * sizeof(VAR27)) {
            FUN2("", *VAR5);
 return -VAR20;
 }
 *VAR5 = (2 + VAR26) * sizeof(VAR27);
 break;

 default:
        FUN2("", VAR11);
 return -VAR20;
 }

 switch (VAR11) {
 case VAR14:
 *(VAR27 *)VAR6 = (VAR27)VAR26;
 
 break;

 case VAR21:
 *(VAR19 *)VAR6 = -1500;
 *((VAR19 *)VAR6 + 1) = 1500;
 
 
 break;

 
     case VAR17:
         VAR12 = *VAR10;

        if (VAR12 >= VAR26) {


             VAR7 = -VAR20;








             break;
         }
         *(VAR19 *)VAR6 = (VAR19)FUN3(VAR2, VAR12);
 
 
 break;

 
     case VAR23:
         VAR12 = *VAR10;

        if (VAR12 >= VAR26) {


             VAR7 = -VAR20;








             break;
         }
         *(VAR9 *)VAR6 = FUN4(VAR2, VAR12);
 
 
 break;

 
     case VAR22:
         VAR12 = *VAR10;

        if (VAR12 >= VAR26) {


             VAR7 = -VAR20;








             break;
         }
         FUN5(VAR2, VAR12, (VAR4 *)VAR6, ((VAR4 *)VAR6 + 1));
 
 
 break;

 case VAR18:
        VAR12 = *VAR10;
 *(VAR27 *)VAR6 = (VAR27)FUN6(VAR2, VAR12);
 
 
 break;

 case VAR15:
 *(VAR27 *)VAR6 = (VAR27)FUN7(VAR2);
 
 break;

 case VAR16:
 *(VAR27 *)VAR6 = (VAR27)FUN8();
 
 break;

 case VAR24:
        VAR12 = *VAR10;
 if (VAR12 >= FUN8()) {
 
            VAR7 = -VAR20;
 break;
 }
        VAR13 = (char *)VAR6;
        strncpy(VAR13, FUN9(VAR12), *VAR5 - 1);
        VAR13[*VAR5 - 1] = 0;
 *VAR5 = strlen(VAR13) + 1;
 
 
 break;

 case VAR25: {
 VAR19 *VAR28 = (VAR19 *)VAR6;
        FUN2("");
        VAR28[0] = (VAR19)FUN7(VAR2);
        VAR28[1] = (VAR19)VAR26;
 for (int VAR29 = 0; VAR29 < VAR26; VAR29++) {
            VAR28[2 + VAR29] = (VAR19)FUN3(VAR2, VAR29);
 }
 } break;

 default:
        FUN2("", VAR11);
        VAR7 = -VAR20;
 break;
 }

 
 return VAR7;
} 















int FUN10 (VAR1 *VAR2, void *VAR3, void *VAR6){
 int VAR7 = 0;
 int32_t VAR30;
 int32_t VAR31;
 int32_t VAR32;
 VAR9 *VAR10 = (VAR9 *)VAR3;
 int32_t VAR11 = *VAR10++;


 
 switch (VAR11) {
 case VAR15:
        VAR30 = (VAR9)(*(VAR27 *)VAR6);

 
 if ((VAR30 >= FUN8())||(VAR30 < 0)) {
            VAR7 = -VAR20;
 break;
 }
 FUN11(VAR2, VAR30);
 break;
 case VAR17:
        VAR31 = *VAR10;
        VAR32 = (VAR9)(*(VAR19 *)VAR6);
 
 if (VAR31 >= VAR26) {
            VAR7 = -VAR20;
 break;
 }
 FUN12(VAR2, VAR31, VAR32);
 break;
 case VAR25: {
 
 VAR19 *VAR28 = (VAR19 *)VAR6;
 if ((int)VAR28[0] >= FUN8()) {
            VAR7 = -VAR20;
 break;
 }
 if (VAR28[0] >= 0) {
 FUN11(VAR2, (int)VAR28[0]);
 } else {
 if ((int)VAR28[1] != VAR26) {
                VAR7 = -VAR20;
 break;
 }
 for (int VAR29 = 0; VAR29 < VAR26; VAR29++) {
 FUN12(VAR2, VAR29, (int)VAR28[2 + VAR29]);
 }
 }
 } break;
 default:
        FUN2("", VAR11);
        VAR7 = -VAR20;
 break;
 }

 
 return VAR7;
} 






















int FUN13(VAR1 *VAR2,
 void *VAR3,
 VAR4 *VAR5,
 void *VAR6){
 int VAR7 = 0;
 int VAR8 = 0;
 VAR9 *VAR10 = (VAR9 *)VAR3;
 int32_t VAR11 = *VAR10++;;
 char *VAR13;

 

 switch (VAR11){
 case VAR33:
 case VAR34:
 case VAR35:
 if (*VAR5 != sizeof(VAR19)){
                FUN2("", *VAR5);
 return -VAR20;
 }
 *VAR5 = sizeof(VAR19);
 break;

 case VAR36:
 case VAR37:
 if (*VAR5 < sizeof(VAR9)){
                FUN2("", *VAR5);
 return -VAR20;
 }
 *VAR5 = sizeof(VAR9);
 break;

 default:
            FUN2("", VAR11);
 return -VAR20;
 }

 switch (VAR11){
 case VAR33:
            VAR7 = FUN14(VAR2, (VAR19 *)(VAR6));
 
 
 break;

 case VAR34:
 *(VAR19 *)VAR6 = 0;
 
 
 break;

 case VAR35:
 FUN15(VAR2, (VAR19 *)VAR6);
 
 
 break;

 case VAR36:
            VAR7 = FUN16(VAR2, (VAR4 *)VAR6);
            FUN2("",
 *(VAR4 *)VAR6);
 break;

 case VAR37:
 *(VAR9 *)VAR6 = VAR2->VAR38->VAR39;
 
 
 break;

 default:
            FUN2("", VAR11);
            VAR7 = -VAR20;
 break;
 }

 
 return VAR7;
} 

















int FUN17 (VAR1 *VAR2, void *VAR3, void *VAR6){
 int      VAR7 = 0;
 int16_t  VAR32;
 int16_t  VAR40;
 uint32_t VAR41;
 uint32_t VAR42;
 VAR9 *VAR10 = (VAR9 *)VAR3;
 int32_t VAR11 = *VAR10++;

 

 switch (VAR11){
 case VAR33:
            VAR32 = *(VAR19 *)VAR6;
 
 
            VAR7 = FUN18(VAR2, (VAR19)VAR32);
 
 break;

 case VAR36:
            VAR41 = *(VAR4 *)VAR6;
 
 
            VAR7 = FUN19(VAR2, VAR41);
 
 break;

 case VAR37:
            VAR42 = *(VAR4 *)VAR6;
            VAR7 = FUN20(VAR2, VAR42);
            VAR7 = FUN21(VAR2, VAR2->VAR38->VAR43);
 
 break;

 case VAR35:
            VAR40 = *(VAR19 *)VAR6;
 
 
            VAR7 = FUN21(VAR2, (VAR19)VAR40);
 
 break;

 default:
            FUN2("", VAR11);
 break;
 }

 
 return VAR7;
} 



VAR44 FUN22(LVM_INT32 VAR45)
{
    LVM_INT16   VAR46;
    LVM_INT16   VAR47;
    LVM_INT16   VAR48;
    LVM_UINT32  VAR49 = (VAR50)VAR45;

 
 for (VAR47 = 0; VAR47<32; VAR47++)
 {
 if ((VAR49 & 0x80000000U)!=0)
 {
 break;
 }
 VAR49 = VAR49 << 1;
 }

 
    VAR46    = (VAR44)(-96 * VAR47); 
 VAR48 = (VAR44)((VAR49 & 0x7fffffff) >> 24);
    VAR46 = (VAR44)(VAR46 + VAR48 );
 VAR48 = (VAR44)(VAR48 * VAR48);
    VAR46 = (VAR44)(VAR46 - (VAR44)((VAR51)VAR48 >> 9));

 
    VAR46 = (VAR44)(VAR46 - 5);

 return VAR46;
}















int FUN23(VAR1 *VAR2, bool VAR52)
{
    FUN2("", VAR2->VAR53, VAR52);

 if (VAR52) {
 
 
 bool VAR54 = false;
 switch (VAR2->VAR53) {
 case VAR55:
 if (VAR2->VAR38->VAR56 == VAR57) {
                     FUN2("");
 return -VAR20;
 }
 if(VAR2->VAR38->VAR58 <= 0){
                    VAR2->VAR38->VAR59++;
 }
                VAR2->VAR38->VAR58 =
 (VAR60)(VAR2->VAR38->VAR61*0.1);
                VAR2->VAR38->VAR56 = VAR57;
                VAR54 = VAR2->VAR38->VAR62;
 break;
 case VAR63:
 if (VAR2->VAR38->VAR64 == VAR57) {
                    FUN2("");
 return -VAR20;
 }
 if(VAR2->VAR38->VAR65 <= 0){
                    VAR2->VAR38->VAR59++;
 }
                VAR2->VAR38->VAR65 =
 (VAR60)(VAR2->VAR38->VAR61*0.1);
                VAR2->VAR38->VAR64 = VAR57;
 break;
 case VAR66:
 if (VAR2->VAR38->VAR67 == VAR57) {
                    FUN2("");
 return -VAR20;
 }
 if(VAR2->VAR38->VAR68 <= 0){
                    VAR2->VAR38->VAR59++;
 }
                VAR2->VAR38->VAR68 =
 (VAR60)(VAR2->VAR38->VAR61*0.1);
                VAR2->VAR38->VAR67 = VAR57;
                VAR54 = VAR2->VAR38->VAR69;
 break;
 case VAR70:
 if (VAR2->VAR38->VAR71 == VAR57) {
                    FUN2("");
 return -VAR20;
 }
                VAR2->VAR38->VAR59++;
                VAR2->VAR38->VAR71 = VAR57;
 break;
 default:
                FUN2("");
 return -VAR20;
 }
 if (!VAR54) {
 FUN24(VAR2);
 }
 } else {
 switch (VAR2->VAR53) {
 case VAR55:
 if (VAR2->VAR38->VAR56 == VAR72) {
                    FUN2("");
 return -VAR20;
 }
                VAR2->VAR38->VAR56 = VAR72;
 break;
 case VAR63:
 if (VAR2->VAR38->VAR64 == VAR72) {
                    FUN2("");
 return -VAR20;
 }
                VAR2->VAR38->VAR64 = VAR72;
 break;
 case VAR66:
 if (VAR2->VAR38->VAR67 == VAR72) {
                    FUN2("");
 return -VAR20;
 }
                VAR2->VAR38->VAR67 = VAR72;
 break;
 case VAR70:
 if (VAR2->VAR38->VAR71 == VAR72) {
                    FUN2("");
 return -VAR20;
 }
                VAR2->VAR38->VAR71 = VAR72;
 break;
 default:
                FUN2("");
 return -VAR20;
 }
 FUN25(VAR2);
 }

 return 0;
}












VAR19 FUN26(uint32_t VAR73){
 int16_t  VAR74;

    VAR74 = FUN22(VAR73 <<7);
    VAR74 = (VAR74 +8)>>4;
    VAR74 = (VAR74 <-96) ? -96 : VAR74 ;

 return VAR74;
}

}