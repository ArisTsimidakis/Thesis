static int FUN1(const VAR1 *VAR2, size_t VAR3, pid_t VAR4, uid_t VAR5)

 {
     const char *VAR6 = "";
 

    if (VAR5 >= VAR7) {


         return 0; 
     }
 
 return FUN2(VAR4, VAR5, VAR6, FUN3(VAR2, VAR3)) ? 1 : 0;
}