static void FUN1(VAR1 *VAR2,VAR3 *VAR4)
{
  unsigned char
    VAR5;

  VAR5=FUN2(VAR2);
  *VAR4=VAR5;
  if (VAR5 < 0xFFU)
    return;
  VAR5=FUN2(VAR2);
  *VAR4=(VAR3) VAR5;
  VAR5=FUN2(VAR2);
  *VAR4+=(VAR3) VAR5*256l;
  if (*VAR4 < 0x8000)
    return;
  *VAR4=(*VAR4 & 0x7FFF) << 16;
  VAR5=FUN2(VAR2);
  *VAR4+=(VAR3) VAR5;
  VAR5=FUN2(VAR2);
  *VAR4+=(VAR3) VAR5*256l;
  return;
}