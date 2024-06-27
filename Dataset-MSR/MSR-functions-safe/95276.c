static void FUN1(struct VAR1 **VAR2)
{
    struct VAR1 *VAR3 = *VAR2;

    syslog(VAR4, "");

    free(VAR3->VAR5);

    FUN2(&VAR3->VAR6);

    FUN3(VAR3);

    free(VAR3);

    *VAR2 = NULL;
}