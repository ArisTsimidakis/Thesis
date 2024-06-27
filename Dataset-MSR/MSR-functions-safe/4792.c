FUN1(DeviceIntPtr VAR1, CursorPtr VAR2)
{
    SpritePtr VAR3 = VAR1->VAR4->VAR5;
    ScreenPtr VAR6;

    if (VAR2 != VAR3->VAR7) {
        if ((VAR3->VAR7->VAR8->VAR9 != VAR2->VAR8->VAR9) ||
            (VAR3->VAR7->VAR8->VAR10 != VAR2->VAR8->VAR10))
            FUN2(VAR1, VAR2, VAR11, VAR3->VAR12,
                            (VAR13) NULL);
#ifdef VAR14
        
        if (!VAR15)
            VAR6 = VAR3->VAR16;
        else
#endif
            VAR6 = VAR3->VAR17.VAR6;

        (*VAR6->VAR18) (VAR1, VAR6, VAR2);
        FUN3(VAR3->VAR7, (VAR19) 0);
        VAR3->VAR7 = FUN4(VAR2);
    }
}