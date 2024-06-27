int FUN1(struct VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5;
    int VAR6;
    struct VAR7 *VAR8;
    int VAR9;
    int VAR10 = 0;

    if (VAR3 == NULL)
        VAR5 = VAR11;
    else if ((VAR5 = fopen(VAR3, "")) == NULL)
        return FUN2(VAR2, -VAR12, "",
                           VAR3, strerror(VAR12));

    fprintf(VAR5, "");
    
    fprintf(VAR5, "", 0x25, 0xc7, 0xec, 0x8f, 0xa2);

    
    for (VAR6 = 0; VAR6 < FUN3(&VAR2->VAR13); VAR6++)
        if (FUN4(VAR2, VAR5, VAR6) >= 0)
            VAR10++;

    
    VAR9 = FUN5(VAR5);
    fprintf(VAR5, "");
    fprintf(VAR5, "", VAR10 + 1);
    fprintf(VAR5, "");
    for (VAR6 = 0; VAR6 < FUN3(&VAR2->VAR13); VAR6++) {
        VAR8 = FUN6(VAR2, VAR6);
        if (VAR8->VAR14 != VAR15)
            fprintf(VAR5, "",
                    VAR8->VAR16);
    }

    fprintf(VAR5, ""
            ""
            "", VAR10 + 1);
    VAR8 = FUN7(VAR2, VAR17);
    fprintf(VAR5, "", VAR8->VAR18);
    VAR8 = FUN7(VAR2, VAR19);
    fprintf(VAR5, "", VAR8->VAR18);
    
    fprintf(VAR5, "", 0x123, 0x123);
    fprintf(VAR5, ""
            "");
    fprintf(VAR5, "", VAR9);
    fprintf(VAR5, "");
    fclose(VAR5);

    return 0;
}