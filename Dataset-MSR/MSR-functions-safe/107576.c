VAR1* FUN1(VAR2* VAR3, VAR4* VAR5)
{
    FUN2(VAR3, 0);
    FUN2(VAR5, 0);
    FUN2(VAR3->VAR6, 0);
    VAR7::VAR8* VAR9 = VAR3->VAR6->FUN3();
    FUN2(VAR9, 0);
    VAR1* VAR10 = static_cast<VAR1*>(malloc(sizeof(*VAR10)));
    FUN2(VAR10, 0);

    VAR10->VAR11 = new VAR7::FUN4(VAR5);
    if (!VAR10->VAR11) {
        free(VAR10);
        return 0;
    }
    VAR10->VAR9 = VAR9;
    VAR10->VAR5 = FUN5(VAR5);
    return VAR10;
}