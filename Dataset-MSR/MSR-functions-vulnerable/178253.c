FUN1 (gnutls_session_t VAR1,
                               VAR2 * VAR3,
                               int VAR4,
                               gnutls_datum_t VAR5, uint8_t VAR6,
                               VAR7 * VAR8)
{
  uint8_t VAR9[VAR10];
  uint16_t VAR11;
  uint8_t VAR12;
  int VAR13;
  uint16_t VAR14;
  int VAR15, VAR16, VAR17 = 0;
  opaque VAR18[VAR19];
  int VAR20;
  int VAR21 = FUN2 (VAR1);
  int VAR22 = FUN3 (VAR8->VAR23);

  VAR14 = FUN4 (VAR8->VAR24);


  
  switch (FUN5 (VAR8->VAR24))
    {
    case VAR25:
      if ((VAR15 =
           FUN6 (&VAR8->read.VAR26,
                                   VAR5.VAR27, VAR5.VAR28)) < 0)
        {
          FUN7 ();
          return VAR15;
        }

      VAR13 = VAR5.VAR28 - VAR22;

      break;
    case VAR29:
      if ((VAR5.VAR28 < VAR14) || (VAR5.VAR28 % VAR14 != 0))
        {
          FUN7 ();
          return VAR30;
        }

      if ((VAR15 =
           FUN6 (&VAR8->read.VAR26,
                                   VAR5.VAR27, VAR5.VAR28)) < 0)
        {
          FUN7 ();
          return VAR15;
        }

      
      if (VAR31
          (VAR1->VAR32.VAR33))
         {
           VAR5.VAR28 -= VAR14;
           VAR5.VAR27 += VAR14;



          if (VAR5.VAR28 == 0)

            {

              FUN7 ();

              return VAR30;

            }
         }
 










       VAR12 = VAR5.VAR27[VAR5.VAR28 - 1] + 1;   
 
       if ((int) VAR12 > (int) VAR5.VAR28 - VAR22)
      if ((int) VAR12 > (int) VAR5.VAR28 - VAR22)
        {
          FUN7 ();
          VAR34
            ("",
             VAR1, VAR12, VAR5.VAR28, VAR22);
          
          VAR17 = VAR30;
        }

      VAR13 = VAR5.VAR28 - VAR22 - VAR12;

      
      if (FUN8 (VAR21) && VAR17 == 0)
        for (VAR16 = 2; VAR16 < VAR12; VAR16++)
          {
            if (VAR5.VAR27[VAR5.VAR28 - VAR16] !=
                VAR5.VAR27[VAR5.VAR28 - 1])
              VAR17 = VAR30;
          }
      break;
    default:
      FUN7 ();
      return VAR35;
    }

  if (VAR13 < 0)
    VAR13 = 0;
  VAR11 = FUN9 ((VAR36) VAR13);

  
  if (VAR8->VAR23 != VAR37)
    {
      digest_hd_st VAR38;

      VAR15 = FUN10 (&VAR38, VAR8->VAR23,
                      VAR8->read.VAR39.VAR27,
                      VAR8->read.VAR39.VAR28, VAR21);

      if (VAR15 < 0)
        {
          FUN7 ();
          return VAR35;
        }

      VAR20 =
        FUN11 (VAR40
                       (VAR8->read.VAR41), VAR6,
                       VAR11, VAR21, VAR18);
      FUN12 (&VAR38, VAR18, VAR20, VAR21);
      if (VAR13 > 0)
        FUN12 (&VAR38, VAR5.VAR27, VAR13, VAR21);

      FUN13 (&VAR38, VAR9, VAR21);
    }

  
  if (VAR17 != 0)
    {
      FUN7 ();
      return VAR17;
    }

  
  if (memcmp (VAR9, &VAR5.VAR27[VAR13], VAR22) != 0)
    {
      FUN7 ();
      return VAR30;
    }

  
  if (VAR4 < VAR13)
    {
      FUN7 ();
      return VAR42;
    }
  memcpy (VAR3, VAR5.VAR27, VAR13);

  return VAR13;
}