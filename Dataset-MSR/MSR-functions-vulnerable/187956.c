int FUN1(effect_handle_t  VAR1,
 uint32_t            VAR2,
 uint32_t            VAR3,
 void *VAR4,
 VAR5 *VAR6,
 void *VAR7){
 VAR8 * VAR9 = (VAR8 *) VAR1;
 int VAR10;

 

 if(VAR9->VAR11 == VAR12){
 
 }
 if(VAR9->VAR11 == VAR13){
 
 }
 if(VAR9->VAR11 == VAR14){
 
 }
 if(VAR9->VAR11 == VAR15){
 
 }

 if (VAR9 == NULL){
        FUN2("");
 return -VAR16;
 }

 

 
 
 

 
 
 

 switch (VAR2){
 case VAR17:
 if (VAR7 == NULL || VAR6 == NULL || *VAR6 != sizeof(int)){
                FUN2("",
                        VAR9->VAR11);
 return -VAR16;
 }
 *(int *) VAR7 = 0;
 
 if(VAR9->VAR11 == VAR12){
 
                VAR18::FUN3(VAR9, 0);
 }
 if(VAR9->VAR11 == VAR13){
 
                VAR18::FUN4(VAR9, 0);
 }
 if(VAR9->VAR11 == VAR14){
 
                VAR18::FUN5(VAR9, 0);
 }
 if(VAR9->VAR11 == VAR15){
 
 *(int *) VAR7 = VAR18::FUN6(VAR9, 0);
 }
 break;

 case VAR19:
 
 if (VAR4    == NULL || VAR3     != sizeof(VAR20) ||
                    VAR7  == NULL || VAR6 == NULL || *VAR6  != sizeof(int)) {
                FUN2(""
 "");
 return -VAR16;
 }
 *(int *) VAR7 = VAR18::FUN7(VAR9, (VAR20 *) VAR4);
 
 break;

 case VAR21:
 if (VAR7 == NULL || VAR6 == NULL || *VAR6 != sizeof(VAR20)) {
                FUN2(""
 "");
 return -VAR16;
 }

            VAR18::FUN8(VAR9, (VAR20 *)VAR7);
 break;

 case VAR22:
 
            VAR18::FUN7(VAR9, &VAR9->VAR23);
 
 break;

 case VAR24:{

             
 
             VAR25 *VAR26 = (VAR25 *)VAR4;










             if (VAR4 == NULL || VAR3 < sizeof(VAR25) ||
                     VAR3 < (sizeof(VAR25) + VAR26->VAR27) ||
                     VAR7 == NULL || VAR6 == NULL ||
 *VAR6 < (sizeof(VAR25) + VAR26->VAR27)) {
                FUN2("");
 return -VAR16;
 }

            memcpy(VAR7, VAR4, sizeof(VAR25) + VAR26->VAR27);

            VAR26 = (VAR25 *)VAR7;

 int VAR28 = ((VAR26->VAR27 - 1) / sizeof(VAR29) + 1) * sizeof(VAR29);

 if(VAR9->VAR11 == VAR12){
                VAR26->VAR30 = VAR18::FUN9(VAR9,
                                                            VAR26->VAR31,
 (VAR32 *)&VAR26->VAR33,
                                                            VAR26->VAR31 + VAR28);
 
 
 
 
 
 }

 if(VAR9->VAR11 == VAR13){
                VAR26->VAR30 = VAR18::FUN10(VAR9,
 (void *)VAR26->VAR31,
 (VAR32 *)&VAR26->VAR33,
                                                              VAR26->VAR31 + VAR28);

 
 
 
 
 
 }
 if(VAR9->VAR11 == VAR14){
 
 
                VAR26->VAR30 = VAR18::FUN11(VAR9,
                                                            VAR26->VAR31,
 &VAR26->VAR33,
                                                            VAR26->VAR31 + VAR28);

 
 
 
 
 
 
 }
 if(VAR9->VAR11 == VAR15){
 
                VAR26->VAR30 = VAR18::FUN12(VAR9,
 (void *)VAR26->VAR31,
 (VAR32 *)&VAR26->VAR33,
                                                         VAR26->VAR31 + VAR28);

 
 
 
 
 
 }
 *VAR6 = sizeof(VAR25) + VAR28 + VAR26->VAR33;

 
 } break;
 case VAR34:{
 
 if(VAR9->VAR11 == VAR12){
 
 
 
 

 if (VAR4   == NULL ||
                        VAR3    != (sizeof(VAR25) + sizeof(VAR29) +sizeof(VAR35)) ||
                        VAR7 == NULL || VAR6 == NULL || *VAR6 != sizeof(VAR29)) {
                    FUN2(""
 "");
 return -VAR16;
 }
 VAR25 *VAR26 = (VAR25 *) VAR4;

 if (VAR26->VAR27 != sizeof(VAR29)){
                    FUN2(""
 "");
 return -VAR16;
 }

 
 
 
 
 
 

 *(int *)VAR7 = VAR18::FUN13(VAR9,
 (void *)VAR26->VAR31,
                                                                    VAR26->VAR31 + VAR26->VAR27);
 }
 if(VAR9->VAR11 == VAR13){
 
 
 
 

 if (VAR4   == NULL ||
 
                        VAR3    > (sizeof(VAR25) + sizeof(VAR29) +sizeof(VAR29)) ||
                        VAR3    < (sizeof(VAR25) + sizeof(VAR29) +sizeof(VAR35)) ||
                        VAR7 == NULL || VAR6 == NULL || *VAR6 != sizeof(VAR29)) {
                    FUN2(""
 "");
 return -VAR16;
 }
 VAR25 *VAR26 = (VAR25 *) VAR4;

 if (VAR26->VAR27 != sizeof(VAR29)){
                    FUN2(""
 "");
 return -VAR16;
 }

 
 
 
 
 
 

 *(int *)VAR7 = VAR18::FUN14(VAR9,
 (void *)VAR26->VAR31,
                                                                       VAR26->VAR31 + VAR26->VAR27);
 }
 if(VAR9->VAR11 == VAR14){
 
 
 
 
 
 

 if (VAR4 == NULL || VAR3 < (sizeof(VAR25) + sizeof(VAR29)) ||
                        VAR7 == NULL || VAR6 == NULL || *VAR6 != sizeof(VAR29)) {
                    FUN2(""
 "");
 return -VAR16;
 }
 VAR25 *VAR26 = (VAR25 *) VAR4;

 *(int *)VAR7 = VAR18::FUN15(VAR9,
 (void *)VAR26->VAR31,
                                                                     VAR26->VAR31 + VAR26->VAR27);
 }
 if(VAR9->VAR11 == VAR15){
 
 
 
 
 

 if (VAR4   == NULL ||
                        VAR3    < (sizeof(VAR25) + sizeof(VAR29)) ||
                        VAR7 == NULL || VAR6 == NULL ||
 *VAR6 != sizeof(VAR29)) {
                    FUN2(""
 "");
 return -VAR16;
 }
 VAR25 *VAR26 = (VAR25 *) VAR4;

 *(int *)VAR7 = VAR18::FUN16(VAR9,
 (void *)VAR26->VAR31,
                                                                 VAR26->VAR31 + VAR26->VAR27);
 }
 
 } break;

 case VAR36:
            FUN2("");
 if (VAR7 == NULL || VAR6 == NULL || *VAR6 != sizeof(int)) {
                FUN2("");
 return -VAR16;
 }

 *(int *)VAR7 = VAR18::FUN17(VAR9, VAR37);
 break;

 case VAR38:
 
 if (VAR7 == NULL || VAR6 == NULL || *VAR6 != sizeof(int)) {
                FUN2("");
 return -VAR16;
 }
 *(int *)VAR7 = VAR18::FUN17(VAR9, VAR39);
 break;

 case VAR40:
 {
            FUN2("");
 if (VAR4   == NULL){
                FUN2("");
 return -VAR16;
 }

 uint32_t VAR41 = *(VAR5 *)VAR4;

 if (VAR9->VAR11 == VAR12) {
 if((VAR41 == VAR42) ||
 (VAR41 == VAR43) ||
 (VAR41 == VAR44)){
                    FUN2("",
 *(VAR29 *)VAR4);
                    FUN2("");

 
 
 

 if (VAR9->VAR45->VAR46 == VAR37) {
                        FUN2("",
 *(VAR29 *)VAR4);
                        VAR18::FUN18(VAR9);
 }
                    VAR9->VAR45->VAR47 = VAR37;
 } else {
                    FUN2("",
 *(VAR29 *)VAR4);

 
 

 if (VAR9->VAR45->VAR46 == VAR37) {
                        FUN2("",
 *(VAR29 *)VAR4);
                        VAR18::FUN19(VAR9);
 }
                    VAR9->VAR45->VAR47 = VAR39;
 }
 }
 if (VAR9->VAR11 == VAR13) {
 if((VAR41 == VAR42)||
 (VAR41 == VAR43)||
 (VAR41 == VAR44)){
                    FUN2("",
 *(VAR29 *)VAR4);
                    FUN2("");

 
 
 

 if (VAR9->VAR45->VAR48 == VAR37) {
                        FUN2("",
 *(VAR29 *)VAR4);
                        VAR18::FUN18(VAR9);
 }
                    VAR9->VAR45->VAR49 = VAR37;
 } else {
                    FUN2("",
 *(VAR29 *)VAR4);

 
 

 if(VAR9->VAR45->VAR48 == VAR37){
                        FUN2("",
 *(VAR29 *)VAR4);
                        VAR18::FUN19(VAR9);
 }
                    VAR9->VAR45->VAR49 = VAR39;
 }
 }
            FUN2("");
 break;
 }
 case VAR50:
 {
 uint32_t VAR51, VAR52;
 int16_t  VAR53, VAR54;
 int16_t  VAR55, VAR56;
 int32_t  VAR57[2] = {1<<24,1<<24}; 
 int      VAR30 = 0;
 LVM_ControlParams_t VAR58; 
            LVM_ReturnStatus_en     VAR59=VAR60; 

 
 if(VAR7 == VAR61){
 break;
 }

 if (VAR4 == NULL || VAR3 != 2 * sizeof(VAR5) || VAR7 == NULL ||
                    VAR6 == NULL || *VAR6 < 2*sizeof(VAR29)) {
                FUN2(""
 "");
 return -VAR16;
 }

            VAR51  = ((*(VAR5 *)VAR4));
            VAR52 = ((*((VAR5 *)VAR4 + 1)));

 if(VAR51 == 0x1000000){
                VAR51 -= 1;
 }
 if(VAR52 == 0x1000000){
                VAR52 -= 1;
 }

 
            VAR53  = VAR18::FUN20(VAR51);
            VAR54 = VAR18::FUN20(VAR52);

            VAR56 = VAR54 - VAR53;

 
            VAR55 = VAR53;
 if(VAR54 > VAR55){
                VAR55 = VAR54;
 }
 
 
 
 
 
 
 

            memcpy(VAR7, VAR57, sizeof(VAR29)*2);
            VAR18::FUN6(VAR9, (VAR35)(VAR55*100));

 
 VAR59 =FUN21(VAR9->VAR45->VAR62,&VAR58);
            FUN22(VAR59, "", "")
 if(VAR59 != VAR60) return -VAR16;

 
 VAR58.VAR63  = VAR56;
            FUN2("", VAR58.VAR63 );

 
 VAR59 =FUN23(VAR9->VAR45->VAR62,&VAR58);
            FUN22(VAR59, "", "")
 if(VAR59 != VAR60) return -VAR16;
 break;
 }
 case VAR64:
 break;
 default:
 return -VAR16;
 }

 
 return 0;
}