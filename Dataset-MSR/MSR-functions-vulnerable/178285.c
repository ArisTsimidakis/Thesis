FUN1 (VAR1 *VAR2, const char * const *VAR3, char ***VAR4, VAR5 **VAR6)

{

  int VAR7;

  int VAR8;



  VAR7 = FUN2 ((char**) VAR3);



  *VAR4 = FUN3 (char *, VAR7 + 1);

  for (VAR8 = 0; VAR8 < VAR7; VAR8++)

    {

      (*VAR4)[VAR8] = FUN4 (VAR3[VAR8], -1);

    }

  (*VAR4)[VAR8] = NULL;

  

  return VAR9;

}