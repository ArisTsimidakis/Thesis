int FUN1(char *VAR1, const char *VAR2)


 {
   int VAR3 = 0;
   unsigned char VAR4;

  do
  {
    const unsigned char VAR5 = VAR2[0];
    if ((VAR5 > 127) || (FUN2(VAR5) == VAR6))
      return -1;
    const unsigned char VAR7 = VAR2[1];
    if ((VAR7 > 127) || (FUN2(VAR7) == VAR6))
      return -1;
    const unsigned char VAR8 = VAR2[2];
    if ((VAR8 > 127) || ((VAR8 != '') && (FUN2(VAR8) == VAR6)))
      return -1;
    VAR4 = VAR2[3];
    if ((VAR4 > 127) || ((VAR4 != '') && (FUN2(VAR4) == VAR6)))
      return -1;
     VAR2 += 4;
 
     




     *VAR1++ = (FUN2(VAR5) << 2) | (FUN2(VAR7) >> 4);
     VAR3++;
     if (VAR8 != '')
     {




       *VAR1++ = ((FUN2(VAR7) << 4) & 0xf0) | (FUN2(VAR8) >> 2);
       VAR3++;
       if (VAR4 != '')
       {




         *VAR1++ = ((FUN2(VAR8) << 6) & 0xc0) | FUN2(VAR4);
         VAR3++;
       }
    }
  } while (*VAR2 && VAR4 != '');

  return VAR3;
}