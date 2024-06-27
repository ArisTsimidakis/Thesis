static VAR1 *FUN1(void) {
  pthread_mutex_init(&VAR2, NULL);
  VAR3 = FUN2(VAR4);
 if (!VAR3) {
    FUN3("", VAR5);
    VAR3 = FUN4(VAR6);
 if (!VAR3) {
      FUN3("", VAR5);
      VAR3 = FUN5();
 if (!VAR3) {
        FUN6("", VAR5);
 goto VAR7;
 }
 }

 if (FUN7(VAR3, VAR4))
      unlink(VAR6);
 }

 
   FUN8(VAR3);
 








   
   
   
  VAR8 = FUN9();
 if (!VAR8) {
    FUN6("", VAR5);
 goto VAR7;
 }

 return FUN10(VAR9);

VAR7:;
  FUN11(VAR8);
  FUN12(VAR3);
  pthread_mutex_destroy(&VAR2);
  VAR8 = NULL;
  VAR3 = NULL;
 return FUN10(VAR10);
}