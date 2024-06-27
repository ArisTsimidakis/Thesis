void FUN1(VAR1 *VAR2)
{
    do {
        VAR2->VAR3 = VAR4;
    } while (VAR2->VAR3 != FUN2((void * volatile *)&VAR4, VAR2->VAR3, VAR2));
}