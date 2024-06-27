static int FUN1 (const VAR1 *VAR2) 
{
  int VAR3;
  if ((VAR2->VAR4 != 1)
      || (VAR2->VAR5[0].VAR6 != VAR7))
  {
    FUN2 (""
        "");
    return (-1);
  }

  VAR3 = (int) VAR2->VAR5[0].VAR8.VAR9;
  if ((VAR3 > 0) && (VAR3 <= 255))
    VAR10 = VAR3;
  else {
    FUN2 ("");
    return (-1);
  }

  return (0);
}