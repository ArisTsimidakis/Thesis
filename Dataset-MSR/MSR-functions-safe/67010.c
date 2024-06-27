static void FUN1(VAR1 *VAR2)
{
    FUN2(&VAR2->VAR3);

    memset(VAR2, 0, sizeof(*VAR2));

    VAR2->VAR4          = VAR5;
    VAR2->VAR6            = VAR7;
    VAR2->VAR8              = -1;
    VAR2->VAR9         = VAR10;
    VAR2->VAR11         = VAR12;
    VAR2->VAR13     = VAR14;
    VAR2->VAR15           = VAR16;
    VAR2->VAR17         = VAR18;
    VAR2->VAR19     = VAR20;
    VAR2->VAR21 = (VAR22){ 0, 1 };
    VAR2->VAR23             = VAR24;
    VAR2->VAR25               = VAR26;
}