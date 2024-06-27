static void FUN1() {
 bool VAR1 = VAR2 &&
 (VAR3 || VAR4->FUN2());

 if (VAR1 == VAR5)
 return;

  VAR5 = VAR1;
 if (VAR1) {
    FUN3();

 const char *VAR6 = VAR4->FUN4();

 
 if (VAR4->FUN5()) {
 char VAR7[VAR8];
      snprintf(VAR7, VAR8, "", VAR6, FUN6());
 if (!FUN7(VAR6, VAR7) && VAR9 != VAR10)

         FUN8("", VAR11, VAR6, VAR7, strerror(VAR9));
     }
 

    VAR12 = open(VAR6, VAR13 | VAR14 | VAR15, VAR16 | VAR17 | VAR18 | VAR19 | VAR20);


     if (VAR12 == VAR21) {
       FUN8("", VAR11, VAR6, strerror(VAR9));
       VAR5 = false;
       return;
     }
 

    write(VAR12, "", 16);


   } else {
     if (VAR12 != VAR21)
       close(VAR12);

    VAR12 = VAR21;
    FUN9();
 }
}