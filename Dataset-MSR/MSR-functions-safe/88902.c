static VAR1 FUN1(const char *VAR2,
  const MagickOffsetType VAR3,const MagickSizeType VAR4,
  void *FUN2(VAR5))
{
  char
    VAR6[VAR7],
    VAR8[VAR7];

  const char
    *VAR9;

  register char
    *VAR10;

  FUN3(VAR5);

  if ((VAR4 <= 1) || (VAR3 < 0) || (VAR3 >= (VAR11) VAR4))
    return(VAR12);
  if ((VAR3 != (VAR11) (VAR4-1)) && ((VAR3 % 50) != 0))
    return(VAR12);
  (void) FUN4(VAR8,VAR2,VAR7);
  VAR10=strrchr(VAR8,'');
  if (VAR10 != (char *) NULL)
    *VAR10='';
  (void) FUN5(VAR6,VAR7,"",VAR8);
  VAR9=FUN6(VAR6);
  if (VAR9 == VAR6)
    VAR9=VAR8;
  if (VAR10 == (char *) NULL)
    (void) FUN7(VAR13,"",
      VAR9,(long) VAR3,(unsigned long) VAR4,(long)
      (100L*VAR3/(VAR4-1)));
  else
    (void) FUN7(VAR13,"",
      VAR9,VAR10+1,(long) VAR3,(unsigned long) VAR4,(long)
      (100L*VAR3/(VAR4-1)));
  if (VAR3 == (VAR11) (VAR4-1))
    (void) FUN7(VAR13,"");
  (void) FUN8(VAR13);
  return(VAR12);
}