int FUN1(void *VAR1, VAR2 *VAR3, uint16_t VAR4) {
  pthread_mutex_lock(&VAR5);

 uint32_t VAR6 = (VAR7)VAR1;
 int VAR8 = false;
 VAR9 *VAR10 = FUN2(VAR6);

   if (!VAR10)
     goto VAR11;
 

  int VAR12 = recv(VAR10->VAR13, VAR3, VAR4, 0);


   if(VAR12 == VAR4) {
     VAR8 = true;
   } else {
    FUN3("", VAR14, strerror(VAR15));
    FUN4(VAR10);
 }

VAR11:;
  pthread_mutex_unlock(&VAR5);
 return VAR8;
}