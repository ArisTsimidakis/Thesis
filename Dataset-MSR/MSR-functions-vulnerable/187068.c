VAR1::FUN1(
    VAR2::VAR3* VAR4,
    VAR2::VAR5* VAR6,
    VAR7::VAR8<VAR9> VAR10,
    VAR11* VAR12,
    VAR13* VAR14,
     VAR15::VAR16<VAR17::VAR1> VAR18,
     VAR19* VAR20)
     : FUN2(VAR6),


       FUN3(VAR7::move(VAR10)),
       FUN4(VAR12),
       FUN5(VAR14),
      FUN6(nullptr),
      FUN7(this, VAR7::move(VAR18)),
      FUN8(VAR21::FUN9(
          VAR22->FUN10())),
      FUN11(VAR21::FUN9(
          VAR4->FUN10())),
      FUN12(VAR20),
      FUN13(VAR23->FUN14(),
                      VAR24::FUN15(VAR6)),
      FUN16(this) {
  
  
  
  
  
  VAR25.FUN17(VAR26::FUN18(
      &VAR1::VAR27, VAR28.FUN19()));
}