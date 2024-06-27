static void FUN1(UINT16 VAR1, char* VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR2;
 VAR5 *VAR6 = NULL;
 int VAR7;
 int VAR8, VAR9;

    FUN2("", VAR10, FUN3(VAR1));

 switch (VAR1)
 {
 case VAR11:
            FUN2("",VAR10, VAR4->VAR12);
 if (VAR4->VAR12 == VAR13) {
                VAR14.VAR12 = VAR15;
                FUN2("",VAR10);
 
                FUN4();
 }
 else {
                VAR14.VAR12 = VAR16;
                FUN5("", VAR4->VAR12);
 }
 break;

 case VAR17:
            VAR14.VAR12 = VAR16;
 if (VAR4->VAR12 == VAR13) {
 int VAR7;
 
                memset(&VAR14, 0, sizeof(VAR14));
 for (VAR7 = 0; VAR7 < VAR18; VAR7++){
                    VAR14.VAR19[VAR7].VAR20 = VAR21;
 }
 }
 else
                FUN5("", VAR4->VAR12);
 break;

 case VAR22:
            FUN5("",VAR10, VAR4->VAR23.VAR24, VAR4->VAR23.VAR12);
 if (VAR4->VAR23.VAR12 == VAR13) {
                VAR6 = FUN6(VAR4->VAR23.VAR24);
 if (VAR6 == NULL) {
                    FUN5("", VAR4->VAR23.VAR24);
                    VAR14.VAR12 = VAR25;
 
 
                    FUN7(VAR4->VAR23.VAR24);
                    FUN8(VAR26, VAR27, (VAR28*) &VAR4->VAR23.VAR29,VAR30);
 }
 else if (VAR6->VAR31 < 0) {
                    FUN5("");
                    memcpy(&(VAR6->VAR32), VAR4->VAR23.VAR29, VAR33);
 
                    VAR14.VAR12 = VAR25;
                    FUN7(VAR4->VAR23.VAR24);
 }
 else {
                    FUN5("",VAR4->VAR23.VAR24);
                    memcpy(&(VAR6->VAR32), VAR4->VAR23.VAR29, VAR33);
                    VAR14.VAR12 = VAR34;
 
 if (FUN9((VAR28*)VAR4->VAR23.VAR29, VAR35 )||
                                FUN9((VAR28*)VAR4->VAR23.VAR29, VAR36))
                        FUN10(VAR4->VAR23.VAR24, 0);
                    VAR14.VAR37 = FUN6(VAR4->VAR23.VAR24);
                    FUN11(VAR4->VAR23.VAR24);
                    VAR6->VAR20 = VAR38;
                    FUN8(VAR26, VAR27,&(VAR6->VAR32), VAR6->VAR20);
 }
 }
 else {
 VAR28 *VAR39 = (VAR28*)VAR4->VAR23.VAR29;
                FUN12(VAR39);
                VAR6 = FUN13(VAR39);
 if (VAR6 != NULL) {
 if(VAR6->VAR40)
                        FUN14(&(VAR6->VAR32));
 if (VAR6->VAR31 >= 0) {
                        FUN15(VAR6->VAR31);
                        VAR6->VAR31 = -1;
 }
                    VAR6->VAR20 = VAR30;
 }
                FUN8(VAR26, VAR27, (VAR28*) &VAR4->VAR23.VAR29,VAR30);
                VAR14.VAR12 = VAR25;
 }
 break;

 case VAR41:
            FUN2("",
            VAR4->VAR20.VAR12, VAR4->VAR20.VAR24);
            VAR6 = FUN6(VAR4->VAR20.VAR24);
 if (VAR6 != NULL) {
                FUN2("", VAR10, VAR6->VAR31);
 if(VAR6->VAR40)
                    FUN14(&(VAR6->VAR32));
 if (VAR6->VAR31 >= 0) {
                    FUN15(VAR6->VAR31);
                    VAR6->VAR31 = -1;
 }
                VAR14.VAR12 = VAR25;
                VAR6->VAR20 = VAR30;
                FUN8(VAR26, VAR27,&(VAR6->VAR32), VAR6->VAR20);
 }
 else {
                FUN5("", VAR4->VAR20.VAR24);
 }
 break;

 case VAR42: {
            VAR43 *VAR44 = VAR4->VAR45.VAR46.VAR47;
            VAR48 *VAR49 = NULL;
            UINT16 VAR8 = 0;

            FUN2("",
                 VAR4->VAR45.VAR12, VAR4->VAR45.VAR24);
            VAR6 = FUN6(VAR4->VAR45.VAR24);
 if (VAR6) {
 
 if (VAR44) {
                    VAR49 = (VAR48 *)(VAR44 + 1) + VAR44->VAR50;
                    VAR8 = VAR44->VAR8;
                    FUN8(VAR26, VAR51,
 (VAR28*) &(VAR6->VAR32),
 (VAR52) VAR4->VAR45.VAR12, VAR49, VAR8);
 } else {
                    FUN8(VAR26, VAR53,
 (VAR28*) &(VAR6->VAR32),
 (VAR52) VAR4->VAR45.VAR12);
 }
 } else {
                FUN5("", VAR4->VAR45.VAR24);
 }
 break;
 }

 case VAR54:
            FUN2("",
            VAR4->VAR20.VAR12, VAR4->VAR20.VAR24);
            VAR6 = FUN6(VAR4->VAR20.VAR24);
 if (VAR6 != NULL) {
                FUN8(VAR26, VAR53,
 (VAR28*) &(VAR6->VAR32),
 (VAR52) VAR4->VAR45.VAR12);
 }
 break;

 case VAR55:
            VAR6 = FUN6(VAR4->VAR20.VAR24);
            FUN5("",
                 VAR4->VAR45.VAR12, VAR4->VAR45.VAR24,
                 VAR4->VAR45.VAR46.VAR56,
 (VAR4->VAR45.VAR46.VAR56 == VAR57) ? "" :
 (VAR4->VAR45.VAR46.VAR56 == VAR58) ? "" : "");
 if (VAR4->VAR45.VAR46.VAR56 != VAR59) {
                FUN8(VAR26, VAR60,
 (VAR28*) &(VAR6->VAR32),
 (VAR52)VAR4->VAR45.VAR12,
 (VAR61) VAR4->VAR45.VAR46.VAR56);
 } else {
                FUN8(VAR26, VAR53,
 (VAR28*) &(VAR6->VAR32),
 (VAR52)VAR4->VAR45.VAR12);
 }
 break;

 case VAR62:
            FUN2("",
                 VAR4->VAR20.VAR12, VAR4->VAR20.VAR24);
            VAR6 = FUN6(VAR4->VAR20.VAR24);
 if (VAR6) {
                FUN8(VAR26, VAR53,
 (VAR28*)&(VAR6->VAR32),
 (VAR52)VAR4->VAR45.VAR12);
 }
 break;

 case VAR63:
            FUN2("",
                 VAR4->VAR45.VAR24, VAR4->VAR45.VAR12,
                 VAR4->VAR45.VAR46.VAR64);
 break;

 case VAR65:
            FUN2("",
            VAR4->VAR20.VAR12, VAR4->VAR20.VAR24);
 break;

 case VAR66:
            VAR8 = VAR4->VAR67.VAR68.VAR69;
            FUN2("", VAR8);
            VAR6 = VAR14.VAR37;
 if (VAR6 == NULL) {
                FUN16("");
 return;
 }
 if (VAR6->VAR31 < 0) {
                FUN17("");
 return;
 }
 {
 char *VAR70 = NULL;
 bt_bdname_t VAR71;
 bt_property_t VAR72;
                FUN18(&VAR72, VAR73,
 sizeof(VAR74), &VAR71);
 if (FUN19(
 &VAR6->VAR32, &VAR72) == VAR75)
 {
                    VAR70 = (char *)VAR71.VAR76;
 }
 else
 {
                    VAR70 = "";
 }

                FUN5("", VAR10, VAR70);
                FUN20(VAR6, VAR70,
                    VAR4->VAR67.VAR77, VAR4->VAR67.VAR78,
                    VAR4->VAR67.VAR79,   VAR4->VAR67.VAR80,
                    VAR8, VAR4->VAR67.VAR68.VAR81);
 if (FUN21(VAR6->VAR32, VAR6->VAR82)) {
                    BD_ADDR VAR29;
                    FUN22(VAR29, VAR6->VAR32.VAR83);
                    tBTA_HH_DEV_DSCP_INFO VAR67;
 bt_status_t VAR84;
                    FUN22(VAR29, VAR6->VAR32.VAR83);
                    FUN23(&VAR67, &VAR4->VAR67);
                    FUN2("",
                              VAR6->VAR32.VAR83[0], VAR6->VAR32.VAR83[1],
                              VAR6->VAR32.VAR83[2],VAR6->VAR32.VAR83[3],
                              VAR6->VAR32.VAR83[4], VAR6->VAR32.VAR83[5]);
                    FUN24(VAR29, VAR6->VAR82,VAR6->VAR85,VAR6->VAR86, VAR67);
 
                    VAR84 = FUN25(&(VAR6->VAR32), VAR6->VAR82,VAR6->VAR85,VAR6->VAR86,
                                                        VAR4->VAR67.VAR77, VAR4->VAR67.VAR78,
                                                        VAR4->VAR67.VAR79,   VAR4->VAR67.VAR80,
                                                        VAR4->VAR67.VAR87, VAR4->VAR67.VAR88,
                                                        VAR8, VAR4->VAR67.VAR68.VAR81);

                    FUN26(VAR84 == VAR75, "", VAR84);
                    FUN5("");

 
 if (VAR67.VAR68.VAR69 >0 && VAR67.VAR68.VAR81 != NULL)
 {
                      FUN27(VAR67.VAR68.VAR81);
                      VAR67.VAR68.VAR81 = NULL;
                      VAR67.VAR68.VAR69=0;
 }
 }
 else {
 
                    FUN5("",VAR10);
 }
 
                VAR9 = sizeof(VAR89)
 / sizeof(VAR90);
 for(VAR7 = 0; VAR7< VAR9; VAR7++)
 {
 if(VAR4->VAR67.VAR77
 == VAR89[VAR7].VAR91 &&
                        VAR4->VAR67.VAR78
 == VAR89[VAR7].VAR78)
 {
                        FUN2(""\
 "", VAR10,
                            VAR7, VAR89[VAR7].VAR92);
 
                        FUN28(VAR93,
                                        VAR94);
                        FUN29(VAR6);
 
 break;
 }
 }
 }
 break;

 case VAR95:
            FUN5("",VAR4->VAR96.VAR12, VAR4->VAR96.VAR24);
 int VAR7;
 for (VAR7 = 0; VAR7 < VAR97; VAR7++) {
 if (memcmp(VAR14.VAR98[VAR7].VAR32.VAR83, VAR4->VAR96.VAR29, 6) == 0) {
 if (VAR4->VAR96.VAR12 == VAR13) {
                        VAR14.VAR98[VAR7].VAR99 = VAR4->VAR96.VAR24;
 }
 else {
                        memset(VAR14.VAR98[VAR7].VAR32.VAR83, 0, 6);
                        VAR14.VAR98[VAR7].VAR99 = VAR100;
 }
 break;
 }
 }
 break;
 case VAR101:
                FUN2("",
                     VAR4->VAR96.VAR12, VAR4->VAR96.VAR24);
                FUN2("",
                     VAR4->VAR96.VAR29[0], VAR4->VAR96.VAR29[1], VAR4->VAR96.VAR29[2],
                     VAR4->VAR96.VAR29[3], VAR4->VAR96.VAR29[4], VAR4->VAR96.VAR29[5]);
 break;


 case VAR102:
                FUN2("",
                     VAR4->VAR20.VAR12, VAR4->VAR20.VAR24);
                VAR6 = FUN6(VAR4->VAR20.VAR24);
                VAR14.VAR12 = VAR25;
 if (VAR6 != NULL) {
                    FUN2("",
                         VAR6->VAR32.VAR83[0], VAR6->VAR32.VAR83[1],
                         VAR6->VAR32.VAR83[2],VAR6->VAR32.VAR83[3],
                         VAR6->VAR32.VAR83[4], VAR6->VAR32.VAR83[5]);
 
 if(VAR6->VAR40)
 {
                        FUN14(&(VAR6->VAR32));
 }
                    VAR6->VAR20 = VAR30;
                    FUN2("", VAR10);
                    FUN8(VAR26, VAR27,&(VAR6->VAR32), VAR6->VAR20);
                    FUN2("", VAR10);
 
 if (VAR6->VAR103  || FUN30(&(VAR6->VAR32), VAR104))
 {
                        VAR6->VAR103 = VAR105;
                        FUN31((VAR48 *)VAR6->VAR32.VAR83);
 }
 else
                        FUN32(VAR6->VAR32);
                    FUN8(VAR26, VAR106,&(VAR6->VAR32),
                                    VAR4->VAR20.VAR12);
 }
 break;

 case VAR107  :
                FUN33("");
 break;



 default:
                FUN5("", VAR10, VAR1);
 break;
 }
}