FUN1(VAR1 *VAR2, BOOL VAR3)
 {


















































 int_eximarith_t VAR4;

VAR1 *VAR5 = FUN2(VAR2);
 VAR1 *VAR6 = VAR7""%VAR5\"";
 VAR1 *VAR8;


if (VAR5 == NULL) return -1;



VAR9 = 0;
VAR10 = NULL;               


if (FUN3(*VAR5))
  {
  while (FUN3(*VAR5)) ++VAR5;
  if (*VAR5 == '')
    {
      FUN4(VAR11)
       FUN5("");
      return 0;
    }
  }

VAR4 = FUN6(CS VAR5, VAR12 &VAR8, 10);

if (VAR8 == VAR5)
  {
  VAR6 = VAR7""%VAR5\"";
  }
else if (VAR4 < 0 && VAR3)
  {
  VAR6 = VAR7""%VAR5\"";
  }
else
  {
  switch (FUN7(*VAR8))
    {
    default:
      break;
    case '':
      if (VAR4 > VAR13/1024 || VAR4 < VAR14/1024) VAR9 = VAR15;
      else VAR4 *= 1024;
      VAR8++;
      break;
    case '':
      if (VAR4 > VAR13/(1024*1024) || VAR4 < VAR14/(1024*1024)) VAR9 = VAR15;
      else VAR4 *= 1024*1024;
      VAR8++;
      break;
    case '':
      if (VAR4 > VAR13/(1024*1024*1024) || VAR4 < VAR14/(1024*1024*1024)) VAR9 = VAR15;
      else VAR4 *= 1024*1024*1024;
      VAR8++;
      break;
    }
  if (VAR9 == VAR15)
    VAR6 = VAR7""%VAR5\"";
  else
    {
    while (FUN3(*VAR8)) VAR8++;
    if (*VAR8 == 0) return VAR4;
    }
  }

VAR10 = FUN8(CS VAR6, VAR5);
return -2;
}