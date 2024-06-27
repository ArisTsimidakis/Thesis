VAR1<VAR2> VAR3::FUN1(const VAR4& VAR5, VAR6& VAR7)
{
    if (!FUN2(VAR5)) {
        VAR7.FUN3(VAR8);
        return 0;
    }

    if (FUN4() || FUN5())
        return VAR9::FUN6(FUN7(VAR10, FUN5() ? VAR5.FUN8() : VAR5, VAR11), this, 0, false);

    return FUN1(FUN7(VAR10, VAR5, VAR10), false);
}