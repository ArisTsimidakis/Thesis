static VAR1 FUN1( const char **VAR2, int *VAR3 )
{
   const char *VAR4 = *VAR2;
   int VAR5 = (*VAR4 == '' ? -1 : 1);

   if (*VAR4 == '' || *VAR4 == '')
      VAR4++;

   if (FUN2(&VAR4, (VAR6 *)VAR3)) {
      *VAR3 *= VAR5;
      *VAR2 = VAR4;
      return VAR7;
   }

   return VAR8;
}