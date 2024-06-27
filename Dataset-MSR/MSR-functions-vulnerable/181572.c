char *FUN1(VAR1 *VAR2)
{
  const size_t VAR3 = 1024;
  char VAR4[1024];
  char VAR5[256];
  char *VAR6 = NULL;

  const char *VAR7 = NULL;
  const char *VAR8 = NULL;
  const char *VAR9 = NULL;
  int  VAR10 = 0;
  VAR11* VAR12;

  int VAR13=0, VAR14=0, VAR15=0;

  if (!VAR2 || !VAR2->VAR16 || !VAR2->VAR17 || !VAR2->VAR18 || !VAR2->VAR18->VAR6)
    return NULL;

  VAR12 = (VAR11 *)VAR2->VAR16;
  VAR7 = VAR12->VAR19;
  VAR8 = VAR12->VAR20;
  VAR9 = VAR12->VAR21;
  VAR10 = VAR12->VAR10;

  if (!VAR7 || strlen(VAR7) == 0 || !VAR8 || strlen(VAR8) == 0 || !VAR9 || strlen(VAR9) == 0)
    return NULL;

  
  
  
  VAR4[0] = '';
  sprintf(VAR5, "", ""[");
  VAR5[4] = '';

  FUN2(VAR4, VAR5, VAR3);

  
  FUN2(VAR4, VAR2->VAR17->VAR6, VAR3);
  VAR4[strlen(VAR4)] = '';

  
  if (VAR10 == 1)
    sprintf(VAR5, "", "" ~* \"");
  else
    sprintf(VAR5, "", "" ~ \"");
  VAR5[7] = '';
  FUN2(VAR4, VAR5, VAR3);
  VAR4[strlen(VAR4)] = '';
 
   VAR6 = VAR2->VAR18->VAR6;
   VAR13 = strlen(VAR6);




 
   VAR15 =0;
   if (VAR13 > 0 && VAR6[0] != VAR7[0] && VAR6[0] != VAR8[0] && VAR6[0] != VAR9[0]) {
    VAR5[VAR15]= '';
    VAR15++;
  }
  for (VAR14=0; VAR14<VAR13; VAR14++) {
    if (VAR6[VAR14] != VAR7[0] && VAR6[VAR14] != VAR8[0] && VAR6[VAR14] != VAR9[0]) {
      VAR5[VAR15] = VAR6[VAR14];
      VAR15++;
      VAR5[VAR15] = '';
    } else if (VAR6[VAR14] == VAR8[0]) {
      VAR5[VAR15] = '';
      VAR15++;
      VAR5[VAR15] = '';
    } else if (VAR6[VAR14] == VAR9[0]) {
      VAR5[VAR15] = '';
      VAR15++;
      VAR5[VAR15] = '';
    } else if (VAR6[VAR14] == VAR7[0]) {
      VAR5[VAR15++] = '';
      VAR5[VAR15++] = '';
      VAR5[VAR15] = '';
    }
  }
  VAR5[VAR15] = '';
  VAR5[++VAR15] = '';

  FUN2(VAR4, VAR5, VAR3);
  FUN2(VAR4, "", VAR3);
  return FUN3(VAR4);
}