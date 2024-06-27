FUN1(const struct VAR1 *VAR2,
                struct VAR3 *VAR4)
{
    struct ofpbuf VAR5;
    ovs_be16 VAR6;

    VAR4->VAR7 = FUN2(VAR2->VAR8.VAR9);

    FUN3(&VAR5, VAR4, FUN4(VAR4->VAR10));
    FUN5(&VAR5, FUN6(VAR4, VAR11));
    FUN7(&VAR5, VAR2->VAR8.VAR12, 0, false);
    VAR6 = FUN2(VAR2->VAR8.VAR6);
    FUN8(&VAR5, &VAR6, sizeof VAR6);
}