static VAR1 FUN1(VAR2 *VAR3,unsigned char *VAR4)
{
#define MinimumRunlength 4

  register VAR1
    VAR5,
    VAR6;

  VAR1
    VAR7;

  VAR8
    VAR9,
    VAR10;

  unsigned char
    VAR11[2];

  for (VAR5=0; VAR5 < VAR3->VAR12; )
  {
    VAR6=VAR5;
    VAR7=0;
    VAR10=0;
    while ((VAR7 < VAR13) && (VAR6 < VAR3->VAR12))
    {
      VAR6+=VAR7;
      VAR10=(VAR8) VAR7;
      VAR7=1;
      while ((VAR4[VAR6] == VAR4[VAR6+VAR7]) &&
             ((VAR6+VAR7) < VAR3->VAR12) && (VAR7 < 127))
       VAR7++;
    }
    if ((VAR10 > 1) && (VAR10 == (VAR8) (VAR6-VAR5)))
      {
        VAR11[0]=(unsigned char) (128+VAR10);
        VAR11[1]=VAR4[VAR5];
        if (FUN2(VAR3,2*sizeof(*VAR11),VAR11) < 1)
          break;
        VAR5=VAR6;
      }
    while (VAR5 < VAR6)
    {
      VAR9=(VAR8) (VAR6-VAR5);
      if (VAR9 > 128)
        VAR9=128;
      VAR11[0]=(unsigned char) VAR9;
      if (FUN2(VAR3,sizeof(*VAR11),VAR11) < 1)
        break;
      if (FUN2(VAR3,(VAR1) VAR9*sizeof(*VAR11),&VAR4[VAR5]) < 1)
        break;
      VAR5+=VAR9;
    }
    if (VAR7 >= VAR13)
      {
        VAR11[0]=(unsigned char) (128+VAR7);
        VAR11[1]=VAR4[VAR6];
        if (FUN2(VAR3,2*sizeof(*VAR11),VAR11) < 1)
          break;
        VAR5+=VAR7;
      }
  }
  return(VAR5);
}