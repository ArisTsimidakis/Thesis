static bool FUN1(const char *VAR1, char *VAR2, int VAR3)


 {
     VAR4 *VAR5 = fopen(VAR1, "");
     if (!VAR5)
        return false;

    unsigned VAR6 = 0;
    while (VAR6 <= 99999) 
    {
        sprintf(VAR2 + VAR3, "", VAR6);
        char *VAR7 = FUN2(VAR2);
        if (!VAR7)
            break;
        fprintf(VAR5, "", VAR6, VAR7);
        free(VAR7);

        sprintf(VAR2 + VAR3, "", VAR6);
        VAR6++;
        VAR4 *VAR8 = fopen(VAR2, "");
        if (!VAR8)
            continue;
        char VAR9[128];
        while (fgets(VAR9, sizeof(VAR9)-1, VAR8))
        {
            
            char *VAR10 = FUN3(VAR9, '');
            VAR10[0] = '';
            VAR10[1] = '';
            fputs(VAR9, VAR5);
         }
         fclose(VAR8);
     }




















     fclose(VAR5);
     return true;
 }