static int FUN1(void)
 {
   char *VAR1 = VAR2;

  while (FUN2(*VAR1))


     VAR1++;
   return (*VAR1 == '' || (VAR1[0] == '' && VAR1[1] == '' && VAR1[2] == ''));
 }