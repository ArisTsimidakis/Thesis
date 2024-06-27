void FUN1(VAR1 *VAR2)
{
 int VAR3 = 0;
 unsigned int VAR4;

    VAR2->VAR5 = 0;
    VAR2->VAR6 = 0;

 
    VAR3 = (VAR2->VAR7 > 8) ? 8 : VAR2->VAR7;

 
 if (VAR3 > VAR2->VAR8.VAR9)
        VAR3 = VAR2->VAR8.VAR9;

 if (VAR3 > 1)
 {
        VAR2->VAR5 = 1;
        VAR2->VAR10 = VAR3 - 1;

        FUN2(VAR2->VAR11, VAR2->VAR10);
        FUN2(VAR2->VAR12, VAR2->VAR10);
        FUN3(VAR2->VAR13, VAR2->VAR10, 32);
        FUN2(VAR2->VAR14, VAR2->VAR10);

 for (VAR4 = 0; VAR4 < VAR2->VAR10; VAR4++)
 {
            FUN4(&VAR2->VAR12[VAR4], 0, 0);

            FUN5(&VAR2->VAR13[VAR4].VAR15);

            VAR2->VAR14[VAR4].VAR4  = VAR4;
            VAR2->VAR14[VAR4].VAR16     = (void *)VAR2;
            VAR2->VAR14[VAR4].VAR17     = (void *) &VAR2->VAR13[VAR4];

            FUN6(&VAR2->VAR11[VAR4], 0, VAR18, (&VAR2->VAR14[VAR4]));
 }

        FUN4(&VAR2->VAR19, 0, 0);

        VAR2->VAR6 = VAR2->VAR10;
 }

 }