FUN1(ClientPtr VAR1)
{
    int VAR2, VAR3;
    XvPortPtr VAR4;
    XvAttributePtr VAR5;
    xvQueryPortAttributesReply VAR6;
    xvAttributeInfo VAR7;

    FUN2(VAR8);
    FUN3(VAR8);

    FUN4(VAR9->VAR10, VAR4, VAR11);

    VAR6 = (VAR12) {
        .VAR13 = VAR14,
        .VAR15 = VAR1->VAR16,
        .VAR17 = VAR4->VAR18->VAR19,
        .VAR20 = 0
    };

    for (VAR3 = 0, VAR5 = VAR4->VAR18->VAR21;
         VAR3 < VAR4->VAR18->VAR19; VAR3++, VAR5++) {
        VAR6.VAR20 += FUN5(strlen(VAR5->VAR22) + 1);
    }

    VAR6.VAR23 = (VAR4->VAR18->VAR19 * VAR24)
        + VAR6.VAR20;
    VAR6.VAR23 >>= 2;

    FUN6(VAR1, &VAR6);

    for (VAR3 = 0, VAR5 = VAR4->VAR18->VAR21;
         VAR3 < VAR4->VAR18->VAR19; VAR3++, VAR5++) {
        VAR2 = strlen(VAR5->VAR22) + 1;  
        VAR7.VAR25 = VAR5->VAR25;
        VAR7.VAR26 = VAR5->VAR27;
        VAR7.VAR28 = VAR5->VAR29;
        VAR7.VAR2 = FUN5(VAR2);

        FUN7(VAR1, &VAR7);

        FUN8(VAR1, VAR2, VAR5->VAR22);
    }

    return VAR30;
}