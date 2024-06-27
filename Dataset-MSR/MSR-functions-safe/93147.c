FUN1(VAR1 *VAR2,
             const VAR3 *VAR4, const VAR3 *VAR5, const VAR3 *VAR6, const VAR3 *VAR7)
{
    u_int VAR8;
    static const struct VAR9 *VAR10 = &VAR11[0];
    const VAR3 *VAR12, *VAR13;
    const VAR3 *VAR14 = VAR4 + 1;
    const char *VAR15 = NULL, *VAR16 = NULL;
    int VAR17, VAR18;

    FUN2(VAR4[0]);
    if (VAR19) {
	FUN3(VAR14[14 * 2], 2);
	VAR17 = FUN4(VAR14 + 9 * 2);
	VAR13 = VAR6 + FUN4(VAR14 + 10 * 2);
	VAR18 = FUN4(VAR14 + 11 * 2);
	VAR12 = VAR6 + FUN4(VAR14 + 12 * 2);
	VAR10 = FUN5(FUN4(VAR14 + 14 * 2), VAR11);
    } else {
	if (VAR4[0] == 0) {
	    FUN6((VAR2, "", VAR10->VAR20));
	    FUN6((VAR2, ""));
	    return;
	}
	FUN3(VAR14[7 * 2], 2);
	VAR17 = FUN4(VAR14 + 3 * 2);
	VAR13 = VAR6 + FUN4(VAR14 + 4 * 2);
	VAR18 = FUN4(VAR14 + 6 * 2);
	VAR12 = VAR6 + FUN4(VAR14 + 7 * 2);
    }

    FUN6((VAR2, "", VAR10->VAR20, VAR17, VAR18));

    if (VAR19) {
	if (VAR4[0] == 8) {
	    FUN7(VAR2, VAR4 + 1,
		"",
		VAR7, VAR21);
	    return;
	} else {
	    FUN7(VAR2, VAR4 + 1,
		"",
		VAR4 + 1 + 14 * 2, VAR21);
	}
	VAR15 = VAR10->VAR22.VAR23;
	VAR16 = VAR10->VAR22.VAR24;
    } else {
	FUN7(VAR2, VAR4 + 1,
	    "",
	    VAR4 + 1 + 10 * 2, VAR21);
	VAR15 = VAR10->VAR22.VAR25;
	VAR16 = VAR10->VAR22.VAR26;
    }

    FUN3(*VAR5, 2);
    VAR8 = FUN4(VAR5);
    FUN6((VAR2, "", VAR8));
    if (VAR10->VAR22.VAR10)
	(*VAR10->VAR22.VAR10)(VAR2, VAR13, VAR12, VAR17, VAR18);
    else {
	FUN7(VAR2, VAR13, VAR15 ? VAR15 : "", VAR13 + VAR17, VAR21);
	FUN7(VAR2, VAR12, VAR16 ? VAR16 : "", VAR12 + VAR18, VAR21);
    }
    return;
VAR27:
    FUN6((VAR2, "", VAR28));
}