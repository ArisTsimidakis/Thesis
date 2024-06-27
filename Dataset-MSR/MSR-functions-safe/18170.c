FUN1(conn VAR1, job VAR2)
{
    VAR2 = FUN2(VAR2);
    if (VAR2) {
        VAR3.VAR4--;
        VAR2->VAR5->VAR6.VAR4--;
        VAR2->VAR7 = NULL;
    }
    VAR1->VAR8 = NULL;
    if (!FUN3(&VAR1->VAR9)) FUN4(VAR1);
    return VAR2;
}