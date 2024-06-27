VAR1 FUN1(VAR2* VAR3, Eina_Bool VAR4)
{
    FUN2(VAR3, VAR5, false);
    FUN3(VAR5, VAR6, false);
    VAR4 = !!VAR4;
    if (VAR6->VAR7.VAR8 != VAR4) {
        VAR6->VAR9->FUN4(VAR4);
        VAR6->VAR7.VAR8 = VAR4;
    }
    return true;
}