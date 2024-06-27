GBool VAR1::FUN1(int VAR2, int VAR3, int VAR4,
			      VAR5 *VAR6, int VAR7, int VAR8, VAR9 *VAR10, VAR11 *VAR12) {
  VAR13 *VAR14;
  FT_Vector VAR15;
  FT_GlyphSlot VAR16;
  FT_UInt VAR17;
  int VAR18;
  VAR19 *VAR20, *VAR21;
  int VAR22;

  VAR14 = (VAR13 *)VAR23;

  VAR14->VAR24->VAR25 = VAR26;
  VAR15.VAR27 = (VAR28)(int)((VAR29)VAR3 * VAR30 * 64);
  VAR15.VAR31 = 0;
  FUN2(VAR14->VAR24, &VAR32, &VAR15);
  VAR16 = VAR14->VAR24->VAR33;

  if (VAR14->VAR34 && VAR2 < VAR14->VAR35) {
    VAR17 = (VAR36)VAR14->VAR34[VAR2];
  } else {
    VAR17 = (VAR36)VAR2;
  }
  if (VAR14->VAR37 && VAR17 == 0) {
    
    return VAR38;
  }

  
#ifdef VAR39
  if (FUN3(VAR14->VAR24, VAR17,
		    VAR40 ? VAR41 : VAR42)) {
    return VAR38;
  }
#else
  
  
  
  
  if (FUN3(VAR14->VAR24, VAR17,
		    VAR40 ? VAR43 | VAR41
                       : VAR42)) {
    return VAR38;
  }
#endif

  VAR44 *VAR45 = &(VAR14->VAR24->VAR33->VAR46);
  
  VAR6->VAR27 = FUN4(-VAR45->VAR47 / 64.0);
  VAR6->VAR31 = FUN4(VAR45->VAR48 / 64.0);
  VAR6->VAR49 = FUN4(VAR45->VAR50 / 64.0);
  VAR6->VAR51 = FUN4(VAR45->VAR52 / 64.0);

  *VAR12 = VAR10->FUN5(VAR7 - VAR6->VAR27,
                            VAR8 - VAR6->VAR31,
                            VAR7 - VAR6->VAR27 + VAR6->VAR49,
                            VAR8 - VAR6->VAR31 + VAR6->VAR51);
  if (*VAR12 == VAR53) {
    VAR6->VAR54 = VAR38;
    return VAR55;
  }

  if (FUN6(VAR16, VAR40 ? VAR56
		               : VAR57)) {
    return VAR38;
  }

  VAR6->VAR27 = -VAR16->VAR58;
  VAR6->VAR31 = VAR16->VAR59;
  VAR6->VAR49 = VAR16->VAR6.VAR50;
  VAR6->VAR51 = VAR16->VAR6.VAR60;
  VAR6->VAR40 = VAR40;
  if (VAR40) {
    VAR18 = VAR6->VAR49;
   } else {
     VAR18 = (VAR6->VAR49 + 7) >> 3;
   }

  VAR6->VAR61 = (VAR19 *)FUN7(VAR18 * VAR6->VAR51);


   VAR6->VAR54 = VAR55;
   for (VAR22 = 0, VAR20 = VAR6->VAR61, VAR21 = VAR16->VAR6.VAR62;
        VAR22 < VAR6->VAR51;
       ++VAR22, VAR20 += VAR18, VAR21 += VAR16->VAR6.VAR63) {
    memcpy(VAR20, VAR21, VAR18);
  }

  return VAR55;
}