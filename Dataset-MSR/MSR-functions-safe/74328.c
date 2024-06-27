FUN1(void* VAR1,
                                    char VAR2,
                                    size_t VAR3)
{
  char* VAR4;
  char* VAR5;

  VAR4 = VAR1 + VAR3;
  VAR5 = VAR1;

  while(VAR4 >= VAR5)
  {
    if(*(VAR4 - 1) == VAR2)
      return VAR4 - 1;
    --VAR4;
  }

  return NULL;
}