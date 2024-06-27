FUN1(struct VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = malloc(sizeof(VAR4) + VAR3);
    if (!VAR5) {
        return NULL;
    } else {
        VAR5->VAR3 = VAR3;
        FUN2(&VAR5->VAR6, VAR2->VAR7);
        return (char*) VAR5 + sizeof(*VAR5);
    }
}