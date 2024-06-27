inline VAR1 FUN1(char *VAR2) {
    uint32_t VAR3 = 0x00000000;
    char *VAR4;

    while(VAR2 && *VAR2 && (VAR4 = FUN2(&VAR2, ""))) {
        if(!*VAR4) continue;

        uint32_t VAR5 = FUN3(VAR4);
        int VAR6;
        for(VAR6 = 0; VAR7[VAR6].VAR8 ; VAR6++) {
            if (FUN4(VAR5 == VAR7[VAR6].VAR5 && !strcmp(VAR4, VAR7[VAR6].VAR8))) {
                VAR3 |= VAR7[VAR6].VAR9;
                break;
            }
        }
    }

    return VAR3;
}