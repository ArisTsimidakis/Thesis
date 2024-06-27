FUN1(VAR1 *VAR2)
{
  VAR3 *VAR4;
  VAR5 *VAR6;
  int VAR7;

  FUN2(VAR2->VAR8);
  VAR2->VAR8 = NULL;

  VAR4 = VAR2->VAR8 = FUN3(sizeof(VAR3));
  VAR4->VAR9 = FUN4(VAR2->VAR10);
  VAR4->VAR11 = FUN5(NULL);
  VAR4->VAR11 -= VAR4->VAR11 % 3600; 
  VAR4->VAR12 = FUN6();
  
  VAR4->VAR13 = (1 << 2) + (1 << 3);

  for (VAR7 = 0; VAR7 < FUN7(VAR2->VAR12); ++VAR7) {
    VAR14 *VAR15 = FUN8(VAR2->VAR12, VAR7);
    VAR14 *VAR16;

    
    VAR15->VAR17 = 0;

    VAR6 = FUN9(VAR15, VAR2->VAR18);
    if (!VAR6 || VAR6->VAR19.VAR20 != VAR21) {
      
      continue;
    }

    
    VAR15->VAR17 = 1;

    
    VAR16 = FUN3(sizeof(VAR14));
    VAR16->VAR22 = FUN10(VAR15->VAR22);
    if (VAR15->VAR23)
      VAR16->VAR23 = FUN4(VAR15->VAR23);
    FUN11(VAR4->VAR12, VAR16);

    if (VAR15->VAR24 == -1) {
      
      VAR15->VAR24 = FUN5(NULL);
    }
  }
}