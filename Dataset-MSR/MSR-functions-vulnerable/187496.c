void FUN1(const void *VAR1, size_t VAR2) {
#if (!FUN2(VAR3) || (VAR3 != VAR4))
 return; 
#endif

 
   pthread_mutex_lock(&VAR5);
   if (VAR6 != -1) {

    if (send(VAR6, VAR1, VAR2, 0) == -1 && VAR7 == VAR8) {


       FUN3(&VAR6);
     }
   }
  pthread_mutex_unlock(&VAR5);
}