static void FUN1(VAR1 *VAR2,
  const size_t VAR3,const double VAR4)
{
  double
    VAR5;

  register double
    VAR6,
    VAR7;

  register VAR8
    VAR9;

  VAR8
    VAR10;

  VAR6=0.0;
  VAR7=0.0;
  for (VAR9=1; VAR9 < (VAR8) VAR3; VAR9++)
  {
    VAR6=VAR2[0].VAR11.VAR12-VAR2[VAR9].VAR11.VAR12;
    VAR7=VAR2[0].VAR11.VAR13-VAR2[VAR9].VAR11.VAR13;
    if ((FUN2((double) VAR6) >= VAR14) ||
        (FUN2((double) VAR7) >= VAR14))
      break;
  }
  if (VAR9 == (VAR8) VAR3)
    VAR9=(VAR8) VAR3-1L;
  VAR5=FUN3((double) VAR6,(double) VAR7);
  VAR2[0].VAR11.VAR12=(double) (VAR2[VAR9].VAR11.VAR12+
    VAR6*(VAR5+VAR4)/VAR5);
  VAR2[0].VAR11.VAR13=(double) (VAR2[VAR9].VAR11.VAR13+
    VAR7*(VAR5+VAR4)/VAR5);
  for (VAR10=(VAR8) VAR3-2; VAR10 >= 0;  VAR10--)
  {
    VAR6=VAR2[VAR3-1].VAR11.VAR12-VAR2[VAR10].VAR11.VAR12;
    VAR7=VAR2[VAR3-1].VAR11.VAR13-VAR2[VAR10].VAR11.VAR13;
    if ((FUN2((double) VAR6) >= VAR14) ||
        (FUN2((double) VAR7) >= VAR14))
      break;
  }
  VAR5=FUN3((double) VAR6,(double) VAR7);
  VAR2[VAR3-1].VAR11.VAR12=(double) (VAR2[VAR10].VAR11.VAR12+
    VAR6*(VAR5+VAR4)/VAR5);
  VAR2[VAR3-1].VAR11.VAR13=(double) (VAR2[VAR10].VAR11.VAR13+
    VAR7*(VAR5+VAR4)/VAR5);
}