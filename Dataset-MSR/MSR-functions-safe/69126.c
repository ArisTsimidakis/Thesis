static inline void FUN1(unsigned char *VAR1,
  const unsigned int VAR2)
{
  unsigned char
    VAR3[4];

  VAR3[0]=(unsigned char) (VAR2 >> 24);
  VAR3[1]=(unsigned char) (VAR2 >> 16);
  VAR3[2]=(unsigned char) (VAR2 >> 8);
  VAR3[3]=(unsigned char) VAR2;
  (void) FUN2(VAR1,VAR3,4);
}