static char *FUN1(VAR1 *VAR2,char **VAR3,VAR4 *VAR5,
  VAR4 *VAR6,size_t VAR7,char ***VAR8)
{
  char
    *VAR9;

  const char
    *VAR10;

  register VAR11
    VAR12;

  VAR4
    VAR13;

  VAR11
    VAR14;

  VAR9=(char *) "";
  if (VAR2->VAR15 != (VAR1 *) NULL)
    VAR9=VAR2->VAR15->VAR9;
  VAR13=0;
  *VAR3=FUN2(VAR9+VAR7,(VAR11) (VAR2->VAR13-
    VAR7),VAR3,VAR5,VAR6,VAR16);
  if ((*VAR5+strlen(VAR2->VAR17)+VAR18) > *VAR6)
    {
      *VAR6=(*VAR5)+strlen(VAR2->VAR17)+VAR18;
      *VAR3=(char *) FUN3(*VAR3,*VAR6,sizeof(**VAR3));
      if (*VAR3 == (char *) NULL)
        return(*VAR3);
    }
  *VAR5+=FUN4(*VAR3+(*VAR5),*VAR6,"",VAR2->VAR17);
  for (VAR12=0; VAR2->VAR8[VAR12]; VAR12+=2)
  {
    VAR10=FUN5(VAR2,VAR2->VAR8[VAR12]);
    if (VAR10 != VAR2->VAR8[VAR12+1])
      continue;
    if ((*VAR5+strlen(VAR2->VAR8[VAR12])+VAR18) > *VAR6)
      {
        *VAR6=(*VAR5)+strlen(VAR2->VAR8[VAR12])+VAR18;
        *VAR3=(char *) FUN3(*VAR3,*VAR6,sizeof(**VAR3));
        if (*VAR3 == (char *) NULL)
          return((char *) NULL);
      }
    *VAR5+=FUN4(*VAR3+(*VAR5),*VAR6,""",
      VAR2->VAR8[VAR12]);
    (void) FUN2(VAR2->VAR8[VAR12+1],-1,VAR3,VAR5,
      VAR6,VAR19);
    *VAR5+=FUN4(*VAR3+(*VAR5),*VAR6,""");
  }
  VAR12=0;
  while ((VAR8[VAR12] != (char **) NULL) &&
         (strcmp(VAR8[VAR12][0],VAR2->VAR17) != 0))
    VAR12++;
  VAR14=1;
  while ((VAR8[VAR12] != (char **) NULL) &&
         (VAR8[VAR12][VAR14] != (char *) NULL))
  {
    if ((VAR8[VAR12][VAR14+1] == (char *) NULL) ||
        (FUN5(VAR2,VAR8[VAR12][VAR14]) != VAR8[VAR12][VAR14+1]))
      {
        VAR14+=3;
        continue;
      }
    if ((*VAR5+strlen(VAR8[VAR12][VAR14])+VAR18) > *VAR6)
      {
        *VAR6=(*VAR5)+strlen(VAR8[VAR12][VAR14])+VAR18;
        *VAR3=(char *) FUN3(*VAR3,*VAR6,sizeof(**VAR3));
        if (*VAR3 == (char *) NULL)
          return((char *) NULL);
      }
    *VAR5+=FUN4(*VAR3+(*VAR5),*VAR6,""",
      VAR8[VAR12][VAR14]);
    (void) FUN2(VAR8[VAR12][VAR14+1],-1,VAR3,VAR5,VAR6,
      VAR19);
    *VAR5+=FUN4(*VAR3+(*VAR5),*VAR6,""");
    VAR14+=3;
  }
  *VAR5+=FUN4(*VAR3+(*VAR5),*VAR6,*VAR2->VAR9 ?
    "" : "");
  if (VAR2->VAR20 != (VAR1 *) NULL)
    *VAR3=FUN1(VAR2->VAR20,VAR3,VAR5,VAR6,0,VAR8);
  else
    *VAR3=FUN2(VAR2->VAR9,-1,VAR3,VAR5,VAR6,
      VAR16);
  if ((*VAR5+strlen(VAR2->VAR17)+VAR18) > *VAR6)
    {
      *VAR6=(*VAR5)+strlen(VAR2->VAR17)+VAR18;
      *VAR3=(char *) FUN3(*VAR3,*VAR6,sizeof(**VAR3));
      if (*VAR3 == (char *) NULL)
        return((char *) NULL);
    }
  if (*VAR2->VAR9 != '')
    *VAR5+=FUN4(*VAR3+(*VAR5),*VAR6,"",
      VAR2->VAR17);
  while ((VAR9[VAR13] != '') && (VAR13 < VAR2->VAR13))
    VAR13++;
  if (VAR2->VAR21 != (VAR1 *) NULL)
    VAR9=FUN1(VAR2->VAR21,VAR3,VAR5,VAR6,VAR13,
      VAR8);
  else
    VAR9=FUN2(VAR9+VAR13,-1,VAR3,VAR5,VAR6,
      VAR16);
  return(VAR9);
}