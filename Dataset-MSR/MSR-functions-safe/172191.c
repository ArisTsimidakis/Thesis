VAR1 *FUN1(unsigned int VAR2) {
 VAR1 *VAR3 = FUN2(sizeof(VAR1));
 if (VAR3) {
    VAR3->VAR4 = FUN3(VAR2, VAR5);
 if (VAR3->VAR4 == VAR6) {
      FUN4("", VAR7, strerror(VAR8));
      FUN5(VAR3);
      VAR3 = NULL;
 }
 }
 return VAR3;
}