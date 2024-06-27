void FUN1(wifi_handle VAR1, wifi_cleaned_up_handler VAR2)
{
    VAR3 *VAR4 = FUN2(VAR1);
 char VAR5[64];

    VAR4->VAR6 = VAR2;
 if (write(VAR4->VAR7[0], "", 4) < 1) {
 
        FUN3("");
 } else {
 
 
 
 
 
        memset(VAR5, 0, sizeof(VAR5));
 int VAR8 = read(VAR4->VAR7[0], VAR5, sizeof(VAR5));
        FUN3("", VAR9, VAR8, VAR10);
 if (FUN4(VAR5, "", 4) == 0) {
            FUN3("");
 } else {
            FUN5("", VAR5);
 }
 }
    VAR4->VAR11 = true;
    pthread_mutex_lock(&VAR4->VAR12);

 int VAR13 = 0;

 for (int VAR14 = 0; VAR14 < VAR4->VAR15; VAR14++) {
        VAR16 *VAR17 = &(VAR4->VAR18[VAR14]);
 VAR19 *VAR20 = (VAR19 *)VAR17->VAR21;
        FUN6("", VAR20, (VAR20 ? VAR20->FUN7(): ""));
 }

 while (VAR4->VAR22 > VAR13) {
 int VAR22 = VAR4->VAR22;
        VAR23 *VAR24 = &(VAR4->VAR20[VAR13]);
 VAR19 *VAR20 = VAR24->VAR20;
 if (VAR20 != NULL) {
            FUN6("", VAR20, VAR20->FUN7());

             pthread_mutex_unlock(&VAR4->VAR12);
             VAR20->FUN8();
             pthread_mutex_lock(&VAR4->VAR12);

            

            VAR20->FUN9();
             if (VAR22 == VAR4->VAR22) {
                 FUN6("", VAR20, (VAR20 ? VAR20->FUN7(): ""));
                 VAR13++;
             }




         }
     }
 
 for (int VAR14 = 0; VAR14 < VAR4->VAR15; VAR14++) {
        VAR16 *VAR17 = &(VAR4->VAR18[VAR14]);
 VAR19 *VAR20 = (VAR19 *)VAR17->VAR21;
        FUN3("", VAR20);
 }
    pthread_mutex_unlock(&VAR4->VAR12);
    FUN10(VAR1);
}