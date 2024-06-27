FUN1(struct VAR1 *VAR2,
                          const struct VAR3 *VAR4)
{
    switch (FUN2(VAR2)) {
    case VAR5: {
        struct VAR6 *VAR7 = FUN3(VAR2, sizeof *VAR7);
        FUN4(VAR4, VAR7);
        break;
    }

    case VAR8:
    case VAR9: {
        struct VAR10 *VAR7 = FUN3(VAR2, sizeof *VAR7);
        FUN5(VAR4, VAR7);
        break;
    }

    case VAR11: {
        struct VAR12 *VAR7 = FUN3(VAR2, sizeof *VAR7);
        FUN6(VAR4, VAR7);
        break;
    }

    case VAR13:
    case VAR14:
    case VAR15: {
        struct VAR16 *VAR7 = FUN3(VAR2, sizeof *VAR7);
        FUN7(VAR4, VAR7);
        break;
    }

    default:
        FUN8();
    }
}