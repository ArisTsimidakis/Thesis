bool VAR1::FUN1(
 size_t VAR2, unsigned long VAR3,
 VAR4 *VAR5, VAR4 *VAR6) const {

     *VAR5 = 0;
     *VAR6 = 0;
 

    char VAR7[20];

    sprintf(VAR7, "", VAR3);










     AString VAR8;
     if (!FUN2(VAR2, VAR7, &VAR8)) {
         return false;
 }

 const char *VAR9 = VAR8.FUN3();
 char *VAR10;
 *VAR5 = FUN4(VAR9, &VAR10, 10);
    FUN5(VAR10, VAR9);
    FUN6(*VAR10, '');

    VAR9 = VAR10 + 1;
 *VAR6 = FUN4(VAR9, &VAR10, 10);
    FUN5(VAR10, VAR9);
    FUN6(*VAR10, '');

 return true;
}