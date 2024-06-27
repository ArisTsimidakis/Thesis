static VAR1 *FUN1(void) {
  pthread_mutex_init(&VAR2, NULL);
  VAR3 = FUN2(VAR4);
 if (!VAR3) {
    FUN3(VAR5, "", VAR6);
    VAR3 = FUN4(VAR7);
 if (!VAR3) {
      FUN3(VAR5, "", VAR6);
      VAR3 = FUN5();
 if (!VAR3) {
        FUN6(VAR5, "", VAR6);
 goto VAR8;
 }
 }

 if (FUN7(VAR3, VAR4))

       unlink(VAR7);
   }
 




   
   
   
  VAR9 = FUN8();
 if (!VAR9) {
    FUN6(VAR5, "", VAR6);
 goto VAR8;
 }

 return FUN9(VAR10);

VAR8:;
  FUN10(VAR9);
  FUN11(VAR3);
  pthread_mutex_destroy(&VAR2);
  VAR9 = NULL;
  VAR3 = NULL;
 return FUN9(VAR11);
}