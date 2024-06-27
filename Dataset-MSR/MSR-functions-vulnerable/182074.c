static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5,
  VAR6 *VAR7)
{
  VAR8
    *VAR9;

  VAR10
    VAR11, VAR12;

  unsigned short
    VAR13;

  if (VAR5->VAR14.VAR15 == 8)
    (void) FUN2(VAR3,VAR16);
  else if (VAR5->VAR14.VAR15 == 16 && !FUN3(
    VAR5->VAR14,0xf800,0x07e0,0x001f,0x0000))
    FUN4(VAR17,"",
      VAR3->VAR18);

  for (VAR12 = 0; VAR12 < (VAR10) VAR5->VAR19; VAR12++)
  {
    VAR9 = FUN5(VAR3, 0, VAR12, VAR5->VAR20, 1,VAR7);

    if (VAR9 == (VAR8 *) NULL)
      return VAR21;

    for (VAR11 = 0; VAR11 < (VAR10) VAR5->VAR20; VAR11++)
    {
      if (VAR5->VAR14.VAR15 == 8)
        FUN6(VAR9,FUN7(FUN8(VAR3)));
      else if (VAR5->VAR14.VAR15 == 16)
        {
           VAR13=FUN9(VAR3);
           FUN10(VAR9,FUN7((unsigned char)
             (((VAR13 >> 11)/31.0)*255)));
           FUN11(VAR9,FUN7((unsigned char)
             ((((unsigned short)(VAR13 << 5) >> 10)/63.0)*255)));
           FUN12(VAR9,FUN7((unsigned char)
             ((((unsigned short)(VAR13 << 11) >> 11)/31.0)*255)));
        }
      else
        {
          FUN12(VAR9,FUN7((unsigned char)
            FUN8(VAR3)));
          FUN11(VAR9,FUN7((unsigned char)
            FUN8(VAR3)));
          FUN10(VAR9,FUN7((unsigned char)
            FUN8(VAR3)));
          if (VAR5->VAR14.VAR15 == 32)
            (void) FUN8(VAR3);
        }
      FUN13(VAR9,VAR22);
      VAR9++;
    }
 
    if (FUN14(VAR3,VAR7) == VAR21)
       return VAR21;
   }
 

  FUN15(VAR3, VAR5, 3);



  return VAR23;


 }