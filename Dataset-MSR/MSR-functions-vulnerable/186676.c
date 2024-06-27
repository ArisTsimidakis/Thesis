void VAR1::FUN1() {
  switch (VAR2) {
    case VAR3:
      VAR4 = VAR5->FUN2();
      break;
    case VAR6: {
      VAR7<VAR8> VAR9;
      VAR4 = VAR5->FUN3(VAR10, &VAR9);
      *VAR11 = FUN4(VAR12::move(VAR9));
      break;
    }
    case VAR13: {
      VAR7<VAR8> VAR9;
      VAR4 = VAR5->FUN5(VAR10, &VAR9);
      *VAR11 = FUN4(VAR12::move(VAR9));
      break;
    }
    case VAR14:
      VAR4 = VAR5->FUN6(VAR10);
      break;
    case VAR15:
      VAR4 = VAR5->FUN7();
      break;
    case VAR16:
      VAR4 = VAR5->FUN8(VAR17, VAR18);
      break;
    case VAR19:
      VAR4 = VAR5->FUN9(VAR17);
      break;
    case VAR20:
      VAR4 = VAR5->FUN10();
      break;
    case VAR21: {
      VAR7<VAR8> VAR9;
      VAR4 = VAR5->FUN11(VAR22, &VAR9);
      *VAR11 = FUN4(VAR12::move(VAR9));
      break;
    }
    case VAR23:
      VAR5->FUN12(VAR12::move(VAR24));
      VAR4 = VAR25::VAR26;
      break;
    case VAR27:
      VAR5->FUN13(VAR10);
      VAR4 = VAR25::VAR26;
      break;
    case VAR28:
      
      
      VAR29->FUN14();
      VAR4 = VAR25::VAR26;
      break;
    case VAR30:
      VAR29->FUN15();
      VAR4 = VAR25::VAR26;
      break;
    case VAR31:
      VAR4 = VAR25::VAR26;
      break;
    case VAR32:
      VAR33.FUN16();
      VAR4 = VAR25::VAR26;
      break;
    default:
      FUN17() << "";
      VAR4 = VAR25::VAR34;
   }
   FUN18(VAR25::VAR35, VAR4);
   FUN19();


 }