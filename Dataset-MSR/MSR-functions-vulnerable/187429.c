static int FUN1(int VAR1, VAR2* VAR3) {
   ucred VAR4;
   socklen_t VAR5 = sizeof(VAR4);
 int VAR6 = FUN2(VAR1, VAR7, VAR8, &VAR4, &VAR5);
 if (VAR6 != 0) {
    FUN3("");
 return -1;
 }

  FUN4("");
  FUN5(VAR1, VAR9, VAR10);

  pollfd VAR11[1];
  VAR11[0].VAR1 = VAR1;
  VAR11[0].VAR12 = VAR13;
  VAR11[0].VAR14 = 0;
  VAR6 = FUN6(FUN7(VAR11, 1, 3000));
 if (VAR6 != 1) {
    FUN3("", VAR4.VAR15, VAR4.VAR16);
 return -1;
 }

 debugger_msg_t VAR17;
  memset(&VAR17, 0, sizeof(VAR17));
  VAR6 = FUN6(read(VAR1, &VAR17, sizeof(VAR17)));
 if (VAR6 < 0) {
    FUN3("", strerror(VAR18), VAR4.VAR15, VAR4.VAR16);
 return -1;
 }
 if (VAR6 != sizeof(VAR19)) {
    FUN3("", VAR6, VAR4.VAR15, VAR4.VAR16);
 return -1;
 }

  VAR3->VAR20 = static_cast<VAR21>(VAR17.VAR20);
  VAR3->VAR22 = VAR17.VAR22;
  VAR3->VAR15 = VAR4.VAR15;
  VAR3->VAR16 = VAR4.VAR16;
  VAR3->VAR23 = VAR4.VAR23;
  VAR3->VAR24 = VAR17.VAR24;
  VAR3->VAR25 = VAR17.VAR25;

 
   if (VAR17.VAR20 == VAR26) {
     

    char VAR27[64];

    struct stat VAR28;

    snprintf(VAR27, sizeof VAR27, "", VAR3->VAR15, VAR3->VAR22);

    if (FUN8(VAR27, &VAR28)) {

      FUN3("",

          VAR3->VAR22, VAR3->VAR15);








       return -1;
     }

  } else if (VAR4.VAR16 == 0

            || (VAR4.VAR16 == VAR29 && VAR17.VAR20 == VAR30)) {


     
     
     VAR6 = FUN9(VAR3->VAR22, &VAR3->VAR15,
 &VAR3->VAR16, &VAR3->VAR23);
 if (VAR6 < 0) {
      FUN3("", VAR3->VAR22);
 return -1;
 }

 if (!FUN10(VAR1, VAR3))
 return -1;
 } else {
 
 return -1;
 }
 return 0;
}