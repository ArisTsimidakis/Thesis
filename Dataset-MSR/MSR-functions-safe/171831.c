void FUN1(VAR1 *VAR2) {
 VAR3 *VAR4 = NULL;
 VAR5 *VAR6 = NULL;
 VAR7 *VAR8 = NULL;
 btif_hl_evt_cb_t                VAR9;
 bt_status_t                     VAR10;
 int                             VAR11;

    FUN2("",VAR12);

 for (const VAR13 *VAR14 = FUN3(VAR15);
            VAR14 != FUN4(VAR15); VAR14 = FUN5(VAR14)) {
 VAR16 *VAR17 = FUN6(VAR14);

        FUN2("", VAR17);
 if (FUN7(VAR17) == VAR18) {
            FUN8(VAR17, VAR19);
            FUN9(VAR17->VAR20[1], VAR2);
            FUN2("",
                    VAR17->VAR20[1], FUN10(VAR17->VAR20[1], VAR2));
            VAR6 = FUN11(VAR17->VAR21, VAR17->VAR22);
            VAR4 = FUN12(VAR17->VAR21, VAR17->VAR22, VAR17->VAR23);
            VAR8 = FUN13(VAR17->VAR21);
 if (VAR6 && VAR4) {
                FUN14(VAR6->VAR24);
                VAR9.VAR25.VAR26 = VAR8->VAR26;
                memcpy(VAR9.VAR25.VAR27, VAR6->VAR27, sizeof(VAR28));
                VAR9.VAR25.VAR29 = VAR4->VAR29;
                VAR9.VAR25.VAR30 = VAR17->VAR20[0];
                VAR9.VAR25.VAR31 = (int ) VAR4->VAR32;
                VAR9.VAR25.VAR33 = VAR34;
                VAR11 = sizeof(VAR35);
                VAR10 = FUN15 (VAR36, VAR37,
 (char*) &VAR9, VAR11, NULL);
                FUN16(VAR10 == VAR38, "", VAR10);
 }
 }
 }
    FUN2("",VAR12);
}