void VAR1::FUN1() {
  if (VAR2 != VAR3) {
    FUN2(VAR2, VAR4);
    return;
 
   VAR5::FUN3()->FUN4();
 

  VAR6::FUN5()->FUN1();



  if (VAR7 != VAR8) {

    

    

    VAR9::FUN6();

  }


   VAR10->FUN1();
   VAR10.FUN7();

  if (VAR7 != VAR8) {
    
    
    VAR9::FUN6();
  }

  VAR10->FUN1();
  VAR10.FUN7();

  VAR11.FUN7();

  VAR12.FUN7();
  VAR13.FUN7();

  VAR2 = VAR14;
}

VAR15::FUN8() {}

VAR15::~FUN8() {}


ProcessModel VAR15::FUN9() {
  static bool VAR16 = false;
  static ProcessModel VAR17 = VAR18;

  if (VAR16) {
    return VAR17;
  }

  VAR16 = true;

  VAR19::VAR20<VAR21::VAR22> VAR23 = VAR21::VAR22::FUN10();

  if (FUN11("", VAR23.FUN12())) {
    VAR17 = VAR8;
  } else {
    VAR19::string VAR24 = FUN13("", VAR23.FUN12());
    if (!VAR24.FUN14()) {
      if (VAR24 == "") {
        VAR17 = VAR25;
      } else if (VAR24 == "") {
        VAR17 = VAR8;
      } else if (VAR24 == "") {
        VAR17 = VAR26;
      } else if (VAR24 == "") {
        VAR17 = VAR27;
      } else if (VAR24 == "") {
        VAR17 = VAR28;
      } else if (VAR24 == "") {
        VAR17 = VAR29;
      } else {
        FUN15(VAR30) << "" << VAR24;
      }
    }
  }

  return VAR17;
}


VAR15* VAR15::FUN5() {
  static BrowserProcessMainImpl VAR31;
  return &VAR31;
}

}