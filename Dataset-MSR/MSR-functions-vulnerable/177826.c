bool FUN1 (const char *VAR1, const char *VAR2) {

  char VAR3[1024];


   VAR4 *VAR5 = new FUN2 (VAR1);
   VAR6 *VAR7 = new FUN3 (VAR5, NULL, NULL, NULL);
 
  if (!VAR7->FUN4()) {
    FUN5(VAR8, -1, "", VAR1);
    return false;
  }

  if (VAR9 == 0 && VAR10 == 0) {
    VAR9 = 1;
    VAR10 = VAR7->FUN6();
  }
  if (VAR10 == 0)
    VAR10 = VAR7->FUN6();
  if (VAR9 == 0)
    VAR9 = 1;
  if (VAR9 != VAR10 && strstr(VAR2, "") == NULL) {
    FUN5(VAR8, -1, "", VAR2);
     return false;
   }
   for (int VAR11 = VAR9; VAR11 <= VAR10; VAR11++) {

    sprintf (VAR3, VAR2, VAR11);


     VAR4 *VAR12 = new FUN2 (VAR3);
     int VAR13 = VAR7->FUN7(VAR12, VAR11);
     if ( VAR13 != VAR14) {
      delete VAR12;
      delete VAR5;
      return false;
    }
    delete VAR12;
  }
  delete VAR5;
  return true;
}