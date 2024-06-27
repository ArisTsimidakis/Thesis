void FUN1(VAR1::VAR2* VAR3, VAR4* VAR5) {
  LocalizedString VAR6[] = {
    {"", VAR7},
    {"", VAR8},
    {"", VAR9},
    {"", VAR10},
    {"", VAR11},
    {"", VAR12},
    {"", VAR13},
    {"", VAR14},
    {"", VAR15},
#if FUN2(VAR16)
    {"", VAR17},
    {"", VAR18},
#endif
    {"", VAR19},
    {"", VAR20},
    {"", VAR21},
    {"", VAR22},
    {"", VAR23},
    {"", VAR24},
    {"", VAR25},
    {"", VAR26},
    {"", VAR27},
    {"", VAR28},
    {"", VAR29},
    {"", VAR30},
    {"", VAR31},
    {"", VAR32},
  };
  FUN3(VAR3, VAR6,
                          FUN4(VAR6));

  VAR3->FUN5(
      "",
#if FUN2(VAR16)
      VAR33::VAR34::FUN6()->FUN7() ||
      VAR33::VAR34::FUN6()->FUN8());
#else
      VAR5->FUN9());
#endif

  VAR3->FUN5("", VAR5->FUN10());
}