bool VAR1::FUN1(
    const VAR2::VAR3<VAR4*>& VAR5,
    VAR2::VAR6<int, VAR7*>* VAR8,
    VAR2::VAR6<int, VAR9*>* VAR10) {
   
   
 


   for (VAR2::VAR3<VAR4*>::const_iterator VAR11 = VAR5.FUN2();
        VAR11 != VAR5.FUN3(); ++VAR11) {
     const VAR4::id_type VAR12 = 10;
    const VAR4* VAR13 = *VAR11;

    switch (VAR13->FUN4()) {
      case VAR14: {
        VAR15::id_type VAR16[2];
        if (!VAR13->FUN5(VAR16, sizeof(VAR16)))
          return true;
        FUN6(VAR16[1], VAR8)->VAR17.FUN7(VAR16[0]);
        break;
      }

      
      
      case VAR12: {
        WindowBoundsPayload2 VAR16;
        if (!VAR13->FUN5(&VAR16, sizeof(VAR16)))
          return true;
        FUN8(VAR16.VAR17, VAR10)->VAR18.FUN9(VAR16.VAR19,
                                                              VAR16.VAR20,
                                                              VAR16.VAR21,
                                                              VAR16.VAR22);
        FUN8(VAR16.VAR17, VAR10)->VAR23 =
            VAR16.VAR24 ?
                VAR25::VAR26 : VAR25::VAR27;
        break;
      }

      case VAR28: {
        WindowBoundsPayload3 VAR16;
        if (!VAR13->FUN5(&VAR16, sizeof(VAR16)))
          return true;
        FUN8(VAR16.VAR17, VAR10)->VAR18.FUN9(VAR16.VAR19,
                                                              VAR16.VAR20,
                                                              VAR16.VAR21,
                                                              VAR16.VAR22);
        
        VAR25::WindowShowState VAR23 = VAR25::VAR27;
        if (VAR16.VAR23 > VAR25::VAR29 &&
            VAR16.VAR23 < VAR25::VAR30 &&
            VAR16.VAR23 != VAR25::VAR31) {
          VAR23 = static_cast<VAR25::VAR32>(VAR16.VAR23);
        } else {
          FUN10();
        }
        FUN8(VAR16.VAR17, VAR10)->VAR23 = VAR23;
        break;
      }

      case VAR33: {
        TabIndexInWindowPayload VAR16;
        if (!VAR13->FUN5(&VAR16, sizeof(VAR16)))
          return true;
        FUN6(VAR16.VAR34, VAR8)->VAR35 = VAR16.VAR36;
        break;
      }

      case VAR37:
      case VAR38: {
        ClosedPayload VAR16;
        if (!VAR13->FUN5(&VAR16, sizeof(VAR16)))
          return true;
        if (VAR13->FUN4() == VAR37) {
          delete FUN6(VAR16.VAR34, VAR8);
          VAR8->FUN11(VAR16.VAR34);
        } else {
          delete FUN8(VAR16.VAR34, VAR10);
          VAR10->FUN11(VAR16.VAR34);
        }
        break;
      }

      case VAR39: {
        TabNavigationPathPrunedFromBackPayload VAR16;
        if (!VAR13->FUN5(&VAR16, sizeof(VAR16)))
          return true;
        VAR7* VAR40 = FUN6(VAR16.VAR34, VAR8);
        VAR40->VAR41.FUN11(
            FUN12(&(VAR40->VAR41), VAR16.VAR36),
            VAR40->VAR41.FUN3());
        break;
      }

      case VAR42: {
        TabNavigationPathPrunedFromFrontPayload VAR16;
        if (!VAR13->FUN5(&VAR16, sizeof(VAR16)) ||
            VAR16.VAR36 <= 0) {
          return true;
        }
        VAR7* VAR40 = FUN6(VAR16.VAR34, VAR8);

        
        VAR40->VAR43 =
            VAR2::FUN13(-1, VAR40->VAR43 - VAR16.VAR36);

        
        for (VAR2::VAR3<VAR44>::iterator VAR11 = VAR40->VAR41.FUN2();
             VAR11 != VAR40->VAR41.FUN3();) {
          VAR11->FUN14(VAR11->FUN15() - VAR16.VAR36);
          if (VAR11->FUN15() < 0)
            VAR11 = VAR40->VAR41.FUN11(VAR11);
          else
            ++VAR11;
        }
        break;
      }

      case VAR45: {
        TabNavigation VAR46;
        VAR15::id_type VAR47;
        if (!FUN16(*VAR13, &VAR46, &VAR47))
          return true;

        VAR7* VAR40 = FUN6(VAR47, VAR8);
        VAR2::VAR3<VAR44>::iterator VAR11 =
            FUN12(&(VAR40->VAR41),
                                           VAR46.FUN15());
        if (VAR11 != VAR40->VAR41.FUN3() && VAR11->FUN15() == VAR46.FUN15())
          *VAR11 = VAR46;
        else
          VAR40->VAR41.FUN17(VAR11, VAR46);
        break;
      }

      case VAR48: {
        SelectedNavigationIndexPayload VAR16;
        if (!VAR13->FUN5(&VAR16, sizeof(VAR16)))
          return true;
        FUN6(VAR16.VAR34, VAR8)->VAR43 = VAR16.VAR36;
        break;
      }

      case VAR49: {
        SelectedTabInIndexPayload VAR16;
        if (!VAR13->FUN5(&VAR16, sizeof(VAR16)))
          return true;
        FUN8(VAR16.VAR34, VAR10)->VAR50 = VAR16.VAR36;
        break;
      }

      case VAR51: {
        WindowTypePayload VAR16;
        if (!VAR13->FUN5(&VAR16, sizeof(VAR16)))
          return true;
        FUN8(VAR16.VAR34, VAR10)->VAR52 = false;
        FUN8(VAR16.VAR34, VAR10)->VAR53 =
            FUN18(
                static_cast<VAR54>(VAR16.VAR36));
        break;
      }

      case VAR55: {
        PinnedStatePayload VAR16;
        if (!VAR13->FUN5(&VAR16, sizeof(VAR16)))
          return true;
        FUN6(VAR16.VAR47, VAR8)->VAR56 = VAR16.VAR57;
        break;
      }

      case VAR58: {
        VAR15::id_type VAR47;
        VAR2::string VAR59;
        if (!FUN19(
                *VAR13, &VAR47, &VAR59)) {
          return true;
        }

        FUN6(VAR47, VAR8)->VAR59.FUN20(VAR59);
        break;
      }

      default:
         return true;
     }
   }


   return true;
 }