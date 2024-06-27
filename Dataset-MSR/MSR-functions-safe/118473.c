void VAR1::FUN1(VAR2::VAR3* VAR4) {
  FUN2(!VAR5 || VAR5 == VAR4);
  VAR6* VAR7 = VAR4->FUN3();
  FUN2(VAR7);

  const VAR8& VAR9 = VAR7->FUN4();
  const VAR10& VAR11 = VAR7->FUN5();

  VAR12* VAR13 = VAR12::FUN6(VAR7);
  VAR14* VAR15 = VAR13->FUN7();
  VAR16* VAR17 =
      VAR16::FUN8(VAR13);

  FrameHostMsg_DidCommitProvisionalLoad_Params VAR18;
  VAR18.VAR19 = VAR11.FUN9();
  VAR18.VAR20 = false;
  VAR18.VAR21 = -1;
  VAR18.VAR22 = VAR23->VAR24;
  VAR18.VAR25 = VAR4->FUN10();
  VAR18.VAR26.FUN11(VAR11.FUN12().FUN13());
  VAR18.VAR26.FUN14(VAR11.FUN15());
  VAR27* VAR28 = FUN16(VAR11);
  if (VAR28)
    VAR18.VAR29 = VAR28->FUN17();
  VAR18.VAR30 = VAR15->FUN18();
  VAR18.VAR31 = VAR11.FUN19();

  
  VAR18.VAR32 = VAR23->FUN20(VAR4);
  FUN2(!VAR33 || VAR18.VAR32 == FUN21(VAR34));

  if (VAR4->FUN22().FUN23() != VAR18.VAR32)
    VAR18.VAR35 = VAR4->FUN22().FUN23();

  FUN24(VAR7, &VAR18.VAR36);
  VAR18.VAR37 = !VAR7->FUN25() &&
      !VAR11.FUN26() && (VAR11.FUN9() != 404);

  VAR18.VAR38 = VAR17->FUN27();
  VAR18.VAR39 = VAR17->FUN28();

  VAR18.VAR40 = VAR23->VAR41;
  VAR23->VAR41 = VAR42;

  
  
  VAR43* VAR44 = VAR23->FUN29()->FUN30();
  if (VAR44)
    VAR18.VAR45 = FUN31(VAR44);
  else
    VAR18.VAR45 = VAR46::FUN32(VAR9.FUN33());

  if (!VAR4->FUN34()) {
    

    
    
    
    VAR23->FUN35()->FUN36(
        FUN37(VAR47),
        FUN37(VAR48));

    
    
    VAR49::iterator VAR50 =
        VAR23->VAR51.FUN38(FUN21(VAR9.FUN33()));
    if (VAR23->FUN35()->FUN39()->FUN22().FUN40()) {
      
      VAR23->FUN35()->FUN41(0);
    } else {
      if (VAR50 != VAR23->VAR51.FUN42())
        VAR23->FUN35()->FUN41(VAR50->VAR52);
    }

    if (VAR50 != VAR23->VAR51.FUN42()) {
      
      
      
      VAR23->VAR51.FUN43(VAR50);
    }

    
    VAR18.VAR53 = VAR7->FUN5().FUN44().FUN13();

    VAR18.VAR54 = VAR15->FUN45();
    if (!FUN46(VAR18.VAR54)) {
      
      
      
      
      
      
      
      
      
      
      
      VAR18.VAR54 = VAR55;
    }

    
    
    if (VAR7->FUN47()) {
      VAR18.VAR56 =
          FUN48(VAR18.VAR36[0], VAR7->FUN4().FUN49());
      VAR18.VAR54 = static_cast<VAR57>(
          VAR18.VAR54 | VAR58);
    } else {
      VAR18.VAR56 = VAR59::FUN50(
          VAR4, VAR7->FUN4());
    }

    VAR60::string16 VAR61 = VAR9.FUN51();
    if (FUN52(VAR61, "")) {
      VAR18.VAR20 = true;
      VAR18.VAR21 = FUN53(VAR44->FUN54());
    }

    
    VAR18.VAR62 = VAR17->FUN55();

    
    
    
    VAR18.VAR63 = FUN56(VAR7);

    VAR18.VAR64 =
        VAR15->FUN57();

    
    
    FUN58("",
                               VAR2::VAR65::FUN59());

    
    
    
    
    FUN60(new FUN61(VAR66, VAR18));
  } else {
    
    
    
    
    
    if (VAR23->VAR24 > VAR23->VAR67)
      VAR18.VAR54 = VAR68;
    else
      VAR18.VAR54 = VAR69;

    FUN2(!VAR15->FUN57());
    VAR18.VAR64 = false;

    
    if (!FUN62())
      FUN60(new FUN61(VAR66, VAR18));
  }

  VAR23->VAR67 =
      VAR70::FUN63(VAR23->VAR67,
               VAR23->VAR24);

  
  
  VAR15->FUN64(VAR55);
}