VAR1 *FUN1(void)
{
    VAR1 *VAR2;

    VAR2 = FUN2(sizeof(*VAR2));
    if (VAR2 == NULL) {
        FUN3(VAR3, VAR4);
        return (0);
    }
    memset(VAR2, 0, sizeof(*VAR2));

    VAR2->VAR5 = 1;      
    VAR2->VAR6 = 1;
    VAR2->VAR7 = 60 * 5 + 4;   
    VAR2->VAR8 = (unsigned long)FUN4(NULL);
    VAR2->VAR9 = NULL;
    VAR2->VAR10 = NULL;
    VAR2->VAR11 = 0;
    VAR2->VAR12 = NULL;
#ifndef VAR13
    VAR2->VAR14 = 0;
    VAR2->VAR15 = NULL;
    VAR2->VAR16 = 0;
    VAR2->VAR17 = NULL;
#endif
    FUN5(VAR18, VAR2, &VAR2->VAR19);
#ifndef VAR20
    VAR2->VAR21 = NULL;
    VAR2->VAR22 = NULL;
#endif
#ifndef VAR23
    VAR2->VAR24 = NULL;
#endif
     return (VAR2);
 }