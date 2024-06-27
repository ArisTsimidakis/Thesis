static inline unsigned short FUN1(const EndianType VAR1,
  const unsigned char *VAR2)
{
  unsigned short
    VAR3;
 
   if (VAR1 == VAR4)
     {

      VAR3=(unsigned short) ((VAR2[1] << 8) | VAR2[0]);

      return((unsigned short) (VAR3 & 0xffff));






     }

  VAR3=(unsigned short) ((((unsigned char *) VAR2)[0] << 8) |

    ((unsigned char *) VAR2)[1]);

  return((unsigned short) (VAR3 & 0xffff));






 }