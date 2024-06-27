bool VAR1::VAR2::FUN1() {
  FUN2(!VAR3);  
                              
  VAR4 = false;

  if (VAR5.FUN3()) {
    return true;
  }

  if (VAR6 == -1) {
    return false;
  }

  
  
  while (!VAR5.FUN3()) {
    VAR7* VAR8 = VAR5.FUN4();

#if !FUN5(VAR9)
    VAR10<VAR7> VAR11;
    if (VAR12 != -1 &&
        VAR8->FUN6() == VAR13 &&
        VAR8->FUN7() == VAR14) {
      VAR11.FUN8(new FUN9(VAR13,
                              VAR14,
                              VAR15::VAR7::VAR16));
      void* VAR17 = NULL;
      int VAR18;
      if (!VAR8->FUN10(&VAR17, &VAR18) ||
          !VAR11->FUN11(VAR18)) {
        FUN12();
      }
      FUN13(VAR11->FUN14(), VAR8->FUN14());
      if (!VAR11->FUN15(VAR19::FUN16(VAR12,
                                                           false))) {
        FUN12();
      }
      VAR8 = VAR11.FUN17();
      FUN13(VAR8->FUN18()->FUN14(), 1);
    }
#endif

    size_t VAR20 = VAR8->FUN14() - VAR21;
    FUN2(VAR20 != 0);
    const char* VAR22 = reinterpret_cast<const char*>(VAR8->FUN19()) +
        VAR21;

    struct msghdr VAR23 = {0};
    struct iovec VAR24 = {const_cast<char*>(VAR22), VAR20};
    VAR23.VAR25 = &VAR24;
    VAR23.VAR26 = 1;
    char VAR27[FUN20(
        sizeof(int[VAR28::VAR29]))];

    ssize_t VAR30 = 1;
    int VAR31 = -1;

    if (VAR21 == 0 &&
        !VAR8->FUN18()->FUN3()) {
      
      struct VAR32 *VAR33;
       const unsigned VAR34 = VAR8->FUN18()->FUN14();
 
       FUN21(VAR34, VAR28::VAR29);


















 
       VAR23.VAR35 = VAR27;
       VAR23.VAR36 = FUN20(sizeof(int) * VAR34);
      VAR33 = FUN22(&VAR23);
      VAR33->VAR37 = VAR38;
      VAR33->VAR39 = VAR40;
      VAR33->VAR41 = FUN23(sizeof(int) * VAR34);
      VAR8->FUN18()->FUN24(
          reinterpret_cast<int*>(FUN25(VAR33)));
      VAR23.VAR36 = VAR33->VAR41;

      
      
      VAR8->FUN26()->VAR34 = static_cast<VAR42>(VAR34);

#if !FUN5(VAR9)
      if (!VAR43 &&
          (VAR8->FUN6() != VAR13 ||
           VAR8->FUN7() != VAR14)) {
        
        
        
        struct iovec VAR44 = { const_cast<char *>(""), 1 };
        VAR23.VAR25 = &VAR44;
        VAR31 = VAR45;
        VAR30 = FUN27(sendmsg(VAR45, &VAR23, VAR46));
        VAR23.VAR25 = &VAR24;
        VAR23.VAR36 = 0;
        if (VAR30 > 0) {
          VAR8->FUN18()->FUN28();
        }
      }
#endif
    }

    if (VAR30 == 1) {
      VAR31 = VAR6;
#if !FUN5(VAR9)
      if (VAR47 != VAR48 && !VAR43 &&
          VAR8->FUN6() == VAR13 &&
          VAR8->FUN7() == VAR14) {
        FUN13(VAR8->FUN18()->FUN14(), 1);
      }
      if (!VAR43 && !VAR23.VAR36) {
        VAR30 = FUN27(write(VAR6, VAR22, VAR20));
      } else
#endif
      {
        VAR30 = FUN27(sendmsg(VAR6, &VAR23, VAR46));
      }
    }
    if (VAR30 > 0)
      VAR8->FUN18()->FUN28();

    if (VAR30 < 0 && !FUN29()) {
#if FUN5(VAR9)
      
      if (VAR49 == VAR50) {
        FUN30();
        return false;
      }
#endif  
      if (VAR49 == VAR51) {
        FUN30();
        return false;
      }
      FUN31(VAR52) << ""
                  << VAR31
                  << ""
                  << VAR8->FUN14();
      return false;
    }

    if (static_cast<VAR53>(VAR30) != VAR20) {
      if (VAR30 > 0) {
        
        VAR21 += VAR30;
      }

      
      VAR4 = true;
      VAR54::FUN32()->FUN33(
          VAR6,
          false,  
          VAR54::VAR55,
          &VAR56,
          this);
      return true;
    } else {
      VAR21 = 0;

      
#ifdef VAR57
      FUN34(VAR58) << "" << VAR8 << "" << this <<
                    "" << VAR8->FUN7();
#endif
      delete VAR5.FUN4();
      VAR5.FUN35();
    }
  }
  return true;
}