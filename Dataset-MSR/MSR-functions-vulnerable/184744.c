static void FUN1(VAR1* VAR2, VAR3* VAR4)
{
    VAR5* VAR6 = FUN2(VAR2);
    VAR7* VAR8 = VAR6->VAR8;

    if (FUN3(VAR4)
         && VAR9::FUN4(FUN2(VAR4)->VAR8->VAR10.FUN5())) {
         FUN6(!VAR8->VAR11);
         VAR8->VAR11 = VAR4;

        VAR8->VAR12 = VAR13;
     } else {
         GtkAllocation VAR14;
         FUN7(VAR4, &VAR14);
        VAR8->VAR15.FUN8(VAR4, VAR14);
    }

    FUN9(VAR4, FUN10(VAR2));
}