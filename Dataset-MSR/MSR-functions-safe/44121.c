FUN1(VAR1 * VAR2, const char *VAR3, VAR1 *VAR4, bool VAR5) 
{
    FUN2(VAR2);
    FUN3("", VAR5?"":"", VAR2);
    FUN4(VAR2, VAR6);
    if(VAR5) {
        if(VAR4 == NULL) {
            VAR4 = VAR2;
        }
        FUN4(VAR2, VAR7);
        FUN5(VAR4, VAR2, VAR3);
        FUN6(VAR2);
    }
}