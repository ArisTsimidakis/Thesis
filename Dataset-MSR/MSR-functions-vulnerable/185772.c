void FUN1(VAR1::VAR2* VAR3) {
#if FUN2(VAR4)
  VAR5::VAR6::FUN3(VAR3);
  VAR5::VAR7::FUN3(VAR3);
 #else
   VAR5::VAR8::FUN3(VAR3);
 #endif  


 }