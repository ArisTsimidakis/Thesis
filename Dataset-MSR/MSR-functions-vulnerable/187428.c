static void FUN1(pid_t VAR1, pid_t VAR2, VAR3::VAR4<VAR5>& VAR6) {

  char VAR7[64];










 

  snprintf(VAR7, sizeof(VAR7), "", VAR1);






































 
   VAR3::VAR8<VAR9, int (*)(VAR9*)> FUN2(FUN3(VAR7), VAR10);
 
 
 if (!VAR11) {
    FUN4("", VAR1, strerror(VAR12));
 return;
 }

 struct VAR13* VAR14;
 while ((VAR14 = FUN5(VAR11.FUN6())) != NULL) {
 
 if (!strcmp(VAR14->VAR15, "") || !strcmp(VAR14->VAR15, "")) {
 continue;
 }

 char* VAR16;
 pid_t VAR17 = FUN7(VAR14->VAR15, &VAR16, 10);
 if (*VAR16) {
 continue;
 }

 if (VAR17 == VAR2) {

       continue;
     }
 

    if (FUN8(VAR18, VAR17, 0, 0) < 0) {


       FUN4("", VAR17, strerror(VAR12));
       continue;
     }

    VAR6.FUN9(VAR17);
 }
}