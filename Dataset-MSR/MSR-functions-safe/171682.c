VAR1 * FUN1 (BD_ADDR VAR2,
                                                   VAR3 *VAR4, UINT8 VAR5)
{
    FUN2(VAR5);

 unsigned VAR6 = 0;

 bdstr_t VAR7;
    sprintf(VAR7, "",
        VAR2[0], VAR2[1], VAR2[2],
        VAR2[3], VAR2[4], VAR2[5]);

 size_t VAR8 = FUN3(VAR7, "");
 if (!VAR4 && VAR8 < sizeof(VAR1))
 return NULL;

 if (VAR8 > sizeof(VAR9))
        VAR8 = sizeof(VAR9);
    FUN4(VAR7, "", (VAR10 *)VAR9, &VAR8);
 *VAR4 = VAR8 / sizeof(VAR1);

    FUN5("", VAR11, *VAR4, VAR7);

 return VAR9;
}