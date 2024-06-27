void VAR1::FUN1() {
  
  
  
  if (VAR2)
    VAR2 = false;

   if (VAR3 != 0 && VAR4->FUN2()) {
     VAR5::VAR6* VAR7 = VAR8[VAR3];
     VAR9->FUN3(VAR7);

    VAR10 = true;
 
     if (!VAR7) {
       VAR11.FUN4();
    } else {
      VAR12::iterator VAR13 = VAR11.FUN5();
      while (VAR13 != VAR11.FUN6()) {
        VAR14::Size VAR15 = FUN7(this,
            VAR7->FUN8());
        if ((*VAR13)->FUN9() == VAR15)
          break;
        ++VAR13;
      }
      if (VAR13 != VAR11.FUN6()) {
        ++VAR13;
        VAR5::VAR16* VAR17 = FUN10();
        if (VAR17) {
          
          
          
          VAR18.FUN11(
              VAR18.FUN5(), VAR11.FUN5(), VAR13);
          
          
          for (VAR12::iterator VAR19 = VAR11.FUN5();
              VAR19 !=VAR13; ++VAR19) {
            VAR19->FUN12()->FUN13();
          }
          if (!VAR17->FUN14(this))
            VAR17->FUN15(this);
        }
        VAR11.FUN16(VAR11.FUN5(), VAR13);
      }
     }
   } else {
     VAR9->FUN3(NULL);

    if (FUN17() &&

        VAR4->FUN2()) {

      

      

      VAR5::VAR16* VAR17 = FUN10();

      if (VAR17) {

        VAR20 = VAR21;

        VAR22.FUN18(

            VAR23::FUN19(&VAR1::

                           VAR24,

                       FUN20()));

        if (!VAR17->FUN14(this))

          VAR17->FUN15(this);

      }

    }
     VAR11.FUN4();
   }
 }