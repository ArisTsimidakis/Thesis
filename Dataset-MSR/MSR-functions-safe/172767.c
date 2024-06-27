status_t VAR1::FUN1(off64_t VAR2, size_t VAR3) {
 if (VAR3 < 4 || VAR3 == VAR4) {
 return VAR5;
 }

 VAR6 *VAR7 = new (VAR8::VAR9) VAR6[VAR3 + 1];
 if (VAR7 == NULL) {
 return VAR5;
 }
 if (VAR10->FUN2(
                VAR2, VAR7, VAR3) != (VAR11)VAR3) {
 delete[] VAR7;
        VAR7 = NULL;

 return VAR12;
 }

 uint32_t VAR13 = FUN3(VAR7);

 uint32_t VAR14 = 0;
 char VAR15[5];
 FUN4(VAR16[4], VAR15);
    FUN5("", VAR15, (long long)VAR2);
 switch ((VAR17)VAR16[4]) {
 case FUN6(0xa9, '', '', ''):
 {
            VAR14 = VAR18;
 break;
 }
 case FUN6(0xa9, '', '', ''):
 {
            VAR14 = VAR19;
 break;
 }
 case FUN6('', '', '', ''):
 {
            VAR14 = VAR20;
 break;
 }
 case FUN6(0xa9, '', '', ''):
 {
            VAR14 = VAR21;
 break;
 }
 case FUN6(0xa9, '', '', ''):
 {
            VAR14 = VAR22;
 break;
 }
 case FUN6(0xa9, '', '', ''):
 {
            VAR14 = VAR23;
 break;
 }
 case FUN6('', '', '', ''):
 {
            VAR14 = VAR24;
 break;
 }
 case FUN6('', '', '', ''):
 {
            VAR14 = VAR25;
 break;
 }
 case FUN6(0xa9, '', '', ''):
 {
            VAR14 = VAR25;
 break;
 }
 case FUN6('', '', '', ''):
 {
 if (VAR3 == 9 && VAR13 == 21) {
 char VAR26[16];
                sprintf(VAR26, "",
 (int)VAR7[VAR3 - 1]);

                VAR27->FUN7(VAR28, VAR26);
 }
 break;
 }
 case FUN6('', '', '', ''):
 {
 if (VAR3 == 16 && VAR13 == 0) {
 char VAR26[16];
 VAR29* VAR30 = (VAR29*)&VAR7[10];
 VAR29* VAR31 = (VAR29*)&VAR7[12];
                sprintf(VAR26, "", FUN8(*VAR30), FUN8(*VAR31));

                VAR27->FUN7(VAR32, VAR26);
 }
 break;
 }
 case FUN6('', '', '', ''):
 {
 if ((VAR3 == 14 || VAR3 == 16) && VAR13 == 0) {
 char VAR26[16];
 VAR29* VAR33 = (VAR29*)&VAR7[10];
 VAR29* VAR34 = (VAR29*)&VAR7[12];
                sprintf(VAR26, "", FUN8(*VAR33), FUN8(*VAR34));

                VAR27->FUN7(VAR35, VAR26);
 }
 break;
 }
 case FUN6('', '', '', ''):
 {
            VAR7[VAR3] = '';
 switch (VAR16[5]) {
 case FUN6('', '', '', ''):
                    VAR36.FUN9((const char *)VAR7 + 4);
 break;
 case FUN6('', '', '', ''):
                    VAR37.FUN9((const char *)VAR7 + 4);
 break;
 case FUN6('', '', '', ''):
 if (VAR3 < 8) {
 delete[] VAR7;
                        VAR7 = NULL;
                        FUN10("");
 return VAR5;
 }
                    VAR38.FUN9((const char *)VAR7 + 8);
 break;
 }

 
 
 
 
 
 if ((VAR36.FUN11() != 0) &&
 (VAR37.FUN11() != 0) &&
 (VAR38.FUN11() != 0)) {

 if (VAR36 == ""
 && VAR37 == "") {
 int32_t VAR39, VAR40;
 if (sscanf(VAR38,
 "", &VAR39, &VAR40) == 2) {
 if (VAR41 == NULL)
 return VAR5;

                        VAR41->VAR42->FUN12(VAR43, VAR39);
                        VAR41->VAR42->FUN12(VAR44, VAR40);
 }
 }

                VAR36.FUN13();
                VAR37.FUN13();
                VAR38.FUN13();
 }
 break;
 }

 default:
 break;
 }

 if (VAR3 >= 8 && VAR14 && !VAR27->FUN14(VAR14)) {
 if (VAR14 == VAR24) {
            VAR27->FUN15(
                    VAR24, VAR45::VAR46,
                    VAR7 + 8, VAR3 - 8);
 } else if (VAR14 == VAR25) {
 if (VAR13 == 0) {
 
 
 
 
 int VAR47 = (int)VAR7[VAR3 - 1];
                VAR47--;
 if (VAR47 < 0) {
                    VAR47 = 255; 
 }
 char VAR48[10];
                sprintf(VAR48, "", VAR47);

                VAR27->FUN7(VAR14, VAR48);
 } else if (VAR13 == 1) {
 
                VAR7[VAR3] = '';

                VAR27->FUN7(
                        VAR14, (const char *)VAR7 + 8);
 }
 } else {
            VAR7[VAR3] = '';

            VAR27->FUN7(
                    VAR14, (const char *)VAR7 + 8);
 }
 }

 delete[] VAR7;
    VAR7 = NULL;

 return VAR49;
}