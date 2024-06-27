void FUN1(char *VAR1, int VAR2, VAR3 *VAR4, int VAR5)
{
    const char *VAR6;
    const char *VAR7;
    const char *VAR8 = NULL;
    int64_t VAR9;
    int VAR10 = 0;
    AVRational VAR11;
    const char *VAR12 = VAR4->VAR13 ? (const char *)VAR4->VAR13 : "";

    if (!VAR1 || VAR2 <= 0)
        return;
    VAR6 = FUN2(VAR4->VAR6);
    VAR7 = FUN3(VAR4->VAR14);
    VAR8 = FUN4(VAR4->VAR14, VAR4->VAR8);

    snprintf(VAR1, VAR2, "", VAR6 ? VAR6 : "",
             VAR7);
    VAR1[0] ^= '' ^ ''; 

    if (VAR4->VAR15 && strcmp(VAR4->VAR15->VAR16, VAR7))
        snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "", VAR4->VAR15->VAR16);

    if (VAR8)
        snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "", VAR8);
    if (   VAR4->VAR6 == VAR17
        && FUN5() >= VAR18
        && VAR4->VAR19)
        snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1),
                 "",
                 VAR4->VAR19, VAR4->VAR19 > 1 ? "" : "");

    if (VAR4->VAR20)
        snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), "",
                 FUN6(VAR4->VAR20), VAR4->VAR20);

    switch (VAR4->VAR6) {
    case VAR17:
        {
            char VAR21[256] = "";

            FUN7(VAR1, VAR12, VAR2);

            snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1),
                 "", VAR4->VAR22 == VAR23 ? "" :
                     FUN8(VAR4->VAR22));
            if (VAR4->VAR24 && VAR4->VAR22 != VAR23 &&
                VAR4->VAR24 < FUN9(VAR4->VAR22)->VAR25[0].VAR26)
                FUN10(VAR21, sizeof(VAR21), "", VAR4->VAR24);
            if (VAR4->VAR27 != VAR28)
                FUN10(VAR21, sizeof(VAR21), "",
                            FUN11(VAR4->VAR27));

            if (VAR4->VAR29 != VAR30 ||
                VAR4->VAR31 != VAR32 ||
                VAR4->VAR33 != VAR34) {
                if (VAR4->VAR29 != (int)VAR4->VAR31 ||
                    VAR4->VAR29 != (int)VAR4->VAR33) {
                    VAR10 = 1;
                    FUN10(VAR21, sizeof(VAR21), "",
                                FUN12(VAR4->VAR29),
                                FUN13(VAR4->VAR31),
                                FUN14(VAR4->VAR33));
                } else
                    FUN10(VAR21, sizeof(VAR21), "",
                                FUN15(VAR4->VAR29));
            }

            if (VAR4->VAR35 != VAR36) {
                const char *VAR35 = "";
                if (VAR4->VAR35 == VAR37)
                    VAR35 = "";
                else if (VAR4->VAR35 == VAR38)
                    VAR35 = "";
                else if (VAR4->VAR35 == VAR39)
                    VAR35 = "";
                else if (VAR4->VAR35 == VAR40)
                    VAR35 = "";

                FUN10(VAR21, sizeof(VAR21), "", VAR35);
            }

            if (FUN5() >= VAR18 &&
                VAR4->VAR41 != VAR42)
                FUN10(VAR21, sizeof(VAR21), "",
                            FUN16(VAR4->VAR41));

            if (strlen(VAR21) > 1) {
                VAR21[strlen(VAR21) - 2] = 0;
                FUN10(VAR1, VAR2, "", VAR21);
            }
        }

        if (VAR4->VAR43) {
            FUN7(VAR1, VAR10 ? VAR12 : "", VAR2);

            snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1),
                     "",
                     VAR4->VAR43, VAR4->VAR44);

            if (FUN5() >= VAR18 &&
                (VAR4->VAR43 != VAR4->VAR45 ||
                 VAR4->VAR44 != VAR4->VAR46))
                snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1),
                         "", VAR4->VAR45, VAR4->VAR46);

            if (VAR4->VAR47.VAR48) {
                FUN17(&VAR11.VAR48, &VAR11.VAR49,
                          VAR4->VAR43 * (VAR50)VAR4->VAR47.VAR48,
                          VAR4->VAR44 * (VAR50)VAR4->VAR47.VAR49,
                          1024 * 1024);
                snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1),
                         "",
                         VAR4->VAR47.VAR48, VAR4->VAR47.VAR49,
                         VAR11.VAR48, VAR11.VAR49);
            }
            if (FUN5() >= VAR51) {
                int VAR52 = FUN18(VAR4->VAR53.VAR48, VAR4->VAR53.VAR49);
                snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1),
                         "",
                         VAR4->VAR53.VAR48 / VAR52, VAR4->VAR53.VAR49 / VAR52);
            }
        }
        if (VAR5) {
            snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1),
                     "", VAR4->VAR54, VAR4->VAR55);
        } else {
            if (VAR4->VAR56 & VAR57)
                snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1),
                         "");
            if (VAR4->VAR56 & VAR58)
                snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1),
                         "");
        }
        break;
    case VAR59:
        FUN7(VAR1, VAR12, VAR2);

        if (VAR4->VAR60) {
            snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1),
                     "", VAR4->VAR60);
        }
        FUN19(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1), VAR4->VAR61, VAR4->VAR62);
        if (VAR4->VAR63 != VAR64) {
            snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1),
                     "", FUN20(VAR4->VAR63));
        }
        if (   VAR4->VAR24 > 0
            && VAR4->VAR24 != FUN21(VAR4->VAR63) * 8)
            snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1),
                     "", VAR4->VAR24);
        if (FUN5() >= VAR18) {
            if (VAR4->VAR65)
                snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1),
                         "", VAR4->VAR65);
            if (VAR4->VAR66)
                snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1),
                         "", VAR4->VAR66);
        }
        break;
    case VAR67:
        if (FUN5() >= VAR51) {
            int VAR52 = FUN18(VAR4->VAR53.VAR48, VAR4->VAR53.VAR49);
            if (VAR52)
                snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1),
                         "",
                         VAR4->VAR53.VAR48 / VAR52, VAR4->VAR53.VAR49 / VAR52);
        }
        break;
    case VAR68:
        if (VAR4->VAR43)
            snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1),
                     "", VAR4->VAR43, VAR4->VAR44);
        break;
    default:
        return;
    }
    if (VAR5) {
        if (VAR4->VAR69 & VAR70)
            snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1),
                     "");
        if (VAR4->VAR69 & VAR71)
            snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1),
                     "");
    }
    VAR9 = FUN22(VAR4);
    if (VAR9 != 0) {
        snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1),
                 ""VAR72"", VAR9 / 1000);
    } else if (VAR4->VAR73 > 0) {
        snprintf(VAR1 + strlen(VAR1), VAR2 - strlen(VAR1),
                 ""VAR72"", VAR4->VAR73 / 1000);
    }
}