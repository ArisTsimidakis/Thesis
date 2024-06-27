int FUN1(
    VAR1** VAR2)
{
  *VAR2 = (VAR1*) FUN2(sizeof(VAR1));

  if (*VAR2 == NULL)
     return VAR3;
 
   (*VAR2)->VAR4 = 0;


   (*VAR2)->VAR5 = NULL;
 
   return VAR6;
}