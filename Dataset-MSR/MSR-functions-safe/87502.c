unsigned FUN1(VAR1* VAR2,
                                   const unsigned char* VAR3, unsigned VAR4, unsigned VAR5,
                                   const VAR1* VAR6)
{
  LodePNGColorProfile VAR7;
  unsigned VAR8 = 0;
  unsigned VAR9, VAR10, VAR11, VAR12, VAR13;

  FUN2(&VAR7);
  VAR8 = FUN3(&VAR7, VAR3, VAR4, VAR5, VAR6);
  if(VAR8) return VAR8;
  VAR2->VAR14 = 0;

  if(VAR7.VAR15 && VAR4 * VAR5 <= 16) VAR7.VAR16 = 1; 
  VAR12 = !VAR7.VAR17 && !VAR7.VAR16; 
  VAR10 = VAR7.VAR18;
  VAR11 = VAR10 <= 2 ? 1 : (VAR10 <= 4 ? 2 : (VAR10 <= 16 ? 4 : 8));
  VAR13 = VAR10 <= 256 && (VAR10 * 2 < VAR4 * VAR5) && VAR7.VAR19 <= 8;
  if(VAR4 * VAR5 < VAR10 * 2) VAR13 = 0; 
  if(VAR12 && VAR7.VAR19 <= VAR11) VAR13 = 0; 

  if(VAR13)
  {
    unsigned char* VAR20 = VAR7.VAR21;
    FUN4(VAR2); 
    for(VAR9 = 0; VAR9 < VAR7.VAR18; VAR9++)
    {
      VAR8 = FUN5(VAR2, VAR20[VAR9 * 4 + 0], VAR20[VAR9 * 4 + 1], VAR20[VAR9 * 4 + 2], VAR20[VAR9 * 4 + 3]);
      if(VAR8) break;
    }

    VAR2->VAR22 = VAR23;
    VAR2->VAR24 = VAR11;

    if(VAR6->VAR22 == VAR23 && VAR6->VAR25 >= VAR2->VAR25
        && VAR6->VAR24 == VAR2->VAR24)
    {
      
      FUN6(VAR2);
      FUN7(VAR2, VAR6);
    }
  }
  else 
  {
    VAR2->VAR24 = VAR7.VAR19;
    VAR2->VAR22 = VAR7.VAR16 ? (VAR7.VAR17 ? VAR26 : VAR27)
                                     : (VAR7.VAR17 ? VAR28 : VAR29);

    if(VAR7.VAR15 && !VAR7.VAR16)
    {
      unsigned VAR30 = (1u << VAR2->VAR24) - 1u; 
      VAR2->VAR31 = VAR7.VAR31 & VAR30;
      VAR2->VAR32 = VAR7.VAR32 & VAR30;
      VAR2->VAR33 = VAR7.VAR33 & VAR30;
      VAR2->VAR14 = 1;
    }
  }

  return VAR8;
}