VAR1::FUN1(VAR2* VAR3)
    : FUN2(VAR3),
      FUN3(FUN4().FUN5() ? nullptr : FUN4().FUN6()),
      
      FUN7(
          FUN4().FUN8()
              ? FUN4().FUN8()
              : VAR4::FUN9()->FUN10()->FUN11(),
          this,
          &VAR1::VAR5),
      FUN12(true),
      FUN13(true),
      FUN14(false),
      FUN15(false) {}