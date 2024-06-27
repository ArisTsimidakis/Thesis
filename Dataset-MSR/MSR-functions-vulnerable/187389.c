status_t VAR1::FUN1(off64_t VAR2, size_t VAR3, int VAR4) {
 if (VAR3 < 4 || VAR3 == VAR5) {
 return VAR6;
 }

 VAR7 *VAR8 = new (VAR9::VAR10) VAR7[VAR3 + 1];
 if (VAR8 == NULL) {
 return VAR6;
 }
 if (VAR11->FUN2(
                VAR2, VAR8, VAR3) != (VAR12)VAR3) {
 delete[] VAR8;
        VAR8 = NULL;

 return VAR13;
 }

 uint32_t VAR14 = 0;
 switch (VAR15[VAR4]) {
 case FUN3('', '', '', ''):
 {
            VAR14 = VAR16;
 break;
 }
 case FUN3('', '', '', ''):
 {
            VAR14 = VAR17;
 break;
 }
 case FUN3('', '', '', ''):
 {
            VAR14 = VAR18;
 break;
 }
 case FUN3('', '', '', ''):
 {
            VAR14 = VAR19;
 break;
 }
 case FUN3('', '', '', ''):
 {
 if (VAR8[VAR3 - 1] != '') {
 char VAR20[4];
              sprintf(VAR20, "", VAR8[VAR3 - 1]);

              VAR21->FUN4(VAR22, VAR20);
 }

            VAR14 = VAR23;
 break;
 }
 case FUN3('', '', '', ''):
 {
 char VAR20[5];
 uint16_t VAR24 = FUN5(&VAR8[4]);

 if (VAR24 < 10000) {
                sprintf(VAR20, "", VAR24);

                VAR21->FUN4(VAR25, VAR20);
 }
 break;
 }

 default:
 break;
 }

 if (VAR14 > 0) {
 bool VAR26 = true; 
 char16_t *VAR27 = NULL;

         int VAR28 = 0; 
 
         








         if (VAR3 - 6 >= 4) {
             VAR28 = ((VAR3 - 6) / 2) - 1; 
             VAR27 = (char16_t *)(VAR8 + 6);
 if (0xfffe == *VAR27) {
 
 for (int VAR29 = 0; VAR29 < VAR28; VAR29++) {
                    VAR27[VAR29] = FUN6(VAR27[VAR29]);
 }
 
 }

 if (0xfeff == *VAR27) {
 
                VAR27++;
                VAR28--;
                VAR26 = false;
 }
 
 
 
 }

 if (VAR26) {
            VAR8[VAR3] = 0;
            VAR21->FUN4(VAR14, (const char *)VAR8 + 6);
 } else {
 
 VAR30 FUN7(VAR27, VAR28);
            VAR21->FUN4(VAR14, VAR31.FUN8());
 }
 }

 delete[] VAR8;
    VAR8 = NULL;

 return VAR32;
}