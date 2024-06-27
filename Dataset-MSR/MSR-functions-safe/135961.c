VAR1<VAR2> VAR3::FUN1(const VAR4& VAR5, VAR6& VAR7)
{
    if (VAR5.FUN2()) {
        VAR7.FUN3(VAR8, "");
        return nullptr;
    }

    VAR9* VAR10 = FUN4().FUN5().FUN6(VAR5, FUN4(), VAR7);
    if (!VAR10)
        return nullptr;

    VAR11 FUN7(FUN4());
    return VAR10->FUN8(*this);
}