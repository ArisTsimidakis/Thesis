void FUN1() {
    GDataRootDirectoryProto VAR1;
    VAR2* VAR3 = VAR1.FUN2();
     VAR4* VAR5 = VAR3->FUN3();
     VAR6* VAR7 = VAR5->FUN4();
     VAR5->FUN5("");


     VAR7->FUN6(true);
 
     
    VAR8* VAR9 = VAR3->FUN7();
    VAR5 = VAR9->FUN3();
    VAR7 = VAR5->FUN4();
    VAR5->FUN5("");
    VAR7->FUN6(false);
    VAR7->FUN8(1048576);

    
    VAR2* VAR10 = VAR3->FUN9();
    VAR5 = VAR10->FUN3();
    VAR7 = VAR5->FUN4();
    VAR5->FUN5("");
    VAR7->FUN6(true);

    
    VAR9 = VAR10->FUN7();
    VAR5 = VAR9->FUN3();
    VAR7 = VAR5->FUN4();
    VAR5->FUN5("");
    VAR7->FUN6(false);
    VAR7->FUN8(555);

    
    VAR2* VAR11 = VAR10->FUN9();
    VAR5 = VAR11->FUN3();
    VAR7 = VAR5->FUN4();
    VAR5->FUN5("");
    VAR7->FUN6(true);

    
    VAR9 = VAR11->FUN7();
    VAR5 = VAR9->FUN3();
    VAR7 = VAR5->FUN4();
    VAR5->FUN5("");
    VAR7->FUN6(false);
    VAR7->FUN8(12345);

    
    VAR12::string VAR13;
    FUN10(VAR1.FUN11(&VAR13));
    FUN10(!VAR13.FUN12());

    FilePath VAR14 = VAR15->FUN13().FUN14(
        FUN15(""));
    FUN10(VAR16::FUN16(VAR14));
    const int VAR17 = static_cast<int>(VAR13.FUN17());
    FUN18(VAR16::FUN19(VAR14.FUN14(""),
        VAR13.FUN20(), VAR17), VAR17);
  }