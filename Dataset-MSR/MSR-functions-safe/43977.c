FUN1(const char *VAR1, VAR2 *VAR3, char *VAR4, int VAR5)
{
    const char *VAR6 = FUN2(VAR3);

    if(VAR5 == 0 && VAR1 == NULL && VAR3->VAR7) {
        VAR5 = FUN1(NULL, VAR3->VAR7, VAR4, VAR5);
    }

    if(VAR6) {
        VAR5 += snprintf(VAR4 + VAR5, VAR8 - VAR5, "", (const char *)VAR3->VAR9, VAR6);
    } else if(VAR3->VAR9) {
        VAR5 += snprintf(VAR4 + VAR5, VAR8 - VAR5, "", (const char *)VAR3->VAR9);
    }

    return VAR5;
}