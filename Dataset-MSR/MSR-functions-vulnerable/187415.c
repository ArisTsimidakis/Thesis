void VAR1::VAR2::FUN1(VAR3 *VAR4, bool VAR5) const {
    VAR4->FUN2("");

 const VAR6 *VAR7 = VAR8;
 if (VAR7 == NULL) {
 return;
 }

 uint8_t VAR9 = *VAR7;

 if (VAR10.VAR11 == VAR12 || VAR10.VAR11 == VAR13) {
 if (VAR14 == 126 || VAR14 == 127) {
 
 char VAR15[16];
            sprintf(VAR15, "", (int)*VAR7);

            VAR4->FUN2(VAR15);
 return;
 }

 
 
        VAR4->FUN2((const char*)VAR7, VAR16);
 return;
 }

 if (VAR16 < FUN3() + 1) {
 return;
 }
 size_t VAR17 = VAR16 - FUN3() - 1;
 if (VAR5) {
 
        VAR7 += 4;
 int32_t VAR18 = VAR17 - 4;
 while(--VAR18 >= 0 && *++VAR7 != 0) ;
 int VAR19 = (VAR7 - VAR8);
 if (VAR19 >= (int)VAR17) {
 return;
 }

         VAR17 -= VAR19;
     }
 








     if (VAR9 == 0x00) {
         
         VAR4->FUN2((const char*)VAR7 + 1, VAR17);
 } else if (VAR9 == 0x03) {
 
        VAR4->FUN2((const char *)(VAR7 + 1), VAR17);
 } else if (VAR9 == 0x02) {
 
 
 int VAR20 = VAR17 / 2;

         const char16_t *VAR21 = (const char16_t *) (VAR7 + 1);
         char16_t *VAR22 = NULL;
 #if VAR23 == VAR24

        VAR22 = new char16_t[VAR20];

        for (int VAR18 = 0; VAR18 < VAR20; VAR18++) {

            VAR22[VAR18] = FUN4(VAR21[VAR18]);


















         }

        VAR21 = VAR22;
 #endif
         VAR4->FUN2(VAR21, VAR20);
         if (VAR22 != NULL) {
 delete[] VAR22;
 }
 } else if (VAR9 == 0x01) {
 
 
 int VAR20 = VAR17 / 2;

         const char16_t *VAR21 = (const char16_t *) (VAR7 + 1);
         char16_t *VAR22 = NULL;
         if (*VAR21 == 0xfffe) {

            

            VAR22 = new char16_t[VAR20];
















             for (int VAR18 = 0; VAR18 < VAR20; VAR18++) {
                 VAR22[VAR18] = FUN4(VAR21[VAR18]);
             }
             VAR21 = VAR22;

        }

        

        if (*VAR21 == 0xfeff) {
















             VAR21++;
             VAR20--;
         }

 
 bool VAR25 = true;
 for (int VAR18 = 0; VAR18 < VAR20; VAR18++) {
 if (VAR21[VAR18] > 0xff) {
                VAR25 = false;
 break;
 }

         }
         if (VAR25) {
             

            char *VAR26 = new char[VAR20];

            for (int VAR18 = 0; VAR18 < VAR20; VAR18++) {

                VAR26[VAR18] = VAR21[VAR18];


















             }

            VAR4->FUN2(VAR26, VAR20);

            delete [] VAR26;
         } else {
             VAR4->FUN2(VAR21, VAR20);
         }

 if (VAR22 != NULL) {
 delete[] VAR22;
 }
 }
}