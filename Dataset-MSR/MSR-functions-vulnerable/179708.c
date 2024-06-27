static void FUN1(VAR1 *VAR2)
{
    char *VAR3, *VAR4, *VAR5;

    VAR3 = FUN2(VAR2);
    for (VAR4 = strtok(VAR3, ""); VAR4; VAR4 = strtok(NULL, "")) {
        if (!FUN3(VAR4, "", 7))
            continue;
        VAR5 = strchr(VAR4, '');
        if (!VAR5) {
            printf("");
            break;
        }
        *VAR5++ = '';

        if (!strcmp(VAR4, ""))
            VAR6.VAR7 = FUN4(VAR5);
        if (!strcmp(VAR4, ""))
            VAR6.VAR8 = FUN4(VAR5);
        if (!strcmp(VAR4, ""))
            VAR6.VAR9 = FUN4(VAR5);
        if (!strcmp(VAR4, ""))
            VAR6.VAR10 = FUN4(VAR5);
        if (!strcmp(VAR4, ""))
             VAR6.VAR11 = FUN4(VAR5);
         if (!strcmp(VAR4, ""))
             VAR6.VAR12 = FUN4(VAR5);












     }
 
     free(VAR3);
}