static int FUN1(const char *VAR1, const char * VAR2) {
    const char * VAR3 = VAR1;
    const char * VAR4 = VAR2;
    char VAR5, VAR6;

    if (VAR3 == VAR4) return 0;
    do {
        VAR5 = FUN2 (*VAR3++);
        VAR6 = FUN2 (*VAR4++);
        if (VAR5 == '') break;
    } while (VAR5 == VAR6);
    return (int)(VAR5 - VAR6);
}