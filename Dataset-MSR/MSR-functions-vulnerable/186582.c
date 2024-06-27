String VAR1::FUN1(const char* VAR2,
                             wtf_size_t VAR3,
                             FlushBehavior VAR4,
                             bool VAR5,
                             bool& VAR6) {
  const bool VAR7 = VAR4 != VAR8::VAR9;
   
   
   

  VAR10<VAR11> FUN2(VAR12 + VAR3);




 
   const VAR13* VAR14 = reinterpret_cast<const VAR13*>(VAR2);
   const VAR13* VAR15 = VAR14 + VAR3;
  const VAR13* VAR16 = FUN3(VAR15);
  VAR11* VAR17 = VAR18.FUN4();

  do {
    if (VAR12) {
      
      
      
      VAR11* VAR19 = VAR17;
      const VAR13* VAR20 = VAR14;
      if (FUN5(VAR19,
                                VAR20, VAR15,
                                VAR7, VAR5, VAR6)) {
        VAR14 = VAR20;
        goto VAR21;
      }
      VAR17 = VAR19;
      VAR14 = VAR20;
      if (VAR12)
        break;
    }

    while (VAR14 < VAR15) {
      if (FUN6(*VAR14)) {
        
        if (FUN7(VAR14)) {
          while (VAR14 < VAR16) {
            MachineWord VAR22 =
                *VAR23<const VAR24*>(VAR14);
            if (!VAR25<VAR11>(VAR22))
              break;
            FUN8(VAR17, VAR14);
            VAR14 += sizeof(VAR24);
            VAR17 += sizeof(VAR24);
          }
          if (VAR14 == VAR15)
            break;
          if (!FUN6(*VAR14))
            continue;
        }
        *VAR17++ = *VAR14++;
        continue;
      }
      int VAR26 = FUN9(*VAR14);
      int VAR27;
      if (VAR26 == 0) {
        VAR27 = VAR28;
      } else {
        if (VAR26 > VAR15 - VAR14) {
          FUN10(VAR15 - VAR14 <
                          static_cast<VAR29>(sizeof(VAR30)));
          FUN11(!VAR12);
          VAR12 = static_cast<VAR31>(VAR15 - VAR14);
          memcpy(VAR30, VAR14, VAR12);
          VAR14 = VAR15;
          break;
        }
        VAR27 = FUN12(VAR14, VAR26);
      }
      if (FUN13(VAR27)) {
        VAR6 = true;
        if (VAR5)
          break;

        goto VAR21;
      }
      if (VAR27 > 0xff)
        goto VAR21;

      VAR14 += VAR26;
      *VAR17++ = static_cast<VAR11>(VAR27);
    }
  } while (VAR7 && VAR12);

  VAR18.FUN14(static_cast<VAR31>(VAR17 - VAR18.FUN4()));

   return VAR32::FUN15(VAR18);
 
 VAR21:

  VAR10<VAR33> FUN16(VAR12 + VAR3);




 
   VAR33* VAR34 = VAR35.FUN4();
 
  
  for (VAR11* VAR36 = VAR18.FUN4(); VAR36 < VAR17;)
    *VAR34++ = *VAR36++;

  do {
    if (VAR12) {
      
      
      
      VAR33* VAR19 = VAR34;
      const VAR13* VAR20 = VAR14;
      FUN5(VAR19,
                            VAR20, VAR15, VAR7,
                            VAR5, VAR6);
      VAR34 = VAR19;
      VAR14 = VAR20;
      if (VAR12)
        break;
    }

    while (VAR14 < VAR15) {
      if (FUN6(*VAR14)) {
        
        if (FUN7(VAR14)) {
          while (VAR14 < VAR16) {
            MachineWord VAR22 =
                *VAR23<const VAR24*>(VAR14);
            if (!VAR25<VAR11>(VAR22))
              break;
            FUN8(VAR34, VAR14);
            VAR14 += sizeof(VAR24);
            VAR34 += sizeof(VAR24);
          }
          if (VAR14 == VAR15)
            break;
          if (!FUN6(*VAR14))
            continue;
        }
        *VAR34++ = *VAR14++;
        continue;
      }
      int VAR26 = FUN9(*VAR14);
      int VAR27;
      if (VAR26 == 0) {
        VAR27 = VAR28;
      } else {
        if (VAR26 > VAR15 - VAR14) {
          FUN10(VAR15 - VAR14 <
                          static_cast<VAR29>(sizeof(VAR30)));
          FUN11(!VAR12);
          VAR12 = static_cast<VAR31>(VAR15 - VAR14);
          memcpy(VAR30, VAR14, VAR12);
          VAR14 = VAR15;
          break;
        }
        VAR27 = FUN12(VAR14, VAR26);
      }
      if (FUN13(VAR27)) {
        VAR6 = true;
        if (VAR5)
          break;
        
        
        
        
        
        
        *VAR34++ = VAR37;
        VAR14 -= VAR27;
        continue;
      }
      VAR14 += VAR26;
      VAR34 = FUN17(VAR34, VAR27);
    }
  } while (VAR7 && VAR12);

  VAR35.FUN14(
      static_cast<VAR31>(VAR34 - VAR35.FUN4()));

  return VAR32::FUN15(VAR35);
}