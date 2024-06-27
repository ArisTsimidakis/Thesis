void FUN1(VAR1* VAR2, const char* VAR3, ...)
{
    char VAR4[4096];
    va_list VAR5;

    FUN2(VAR5, VAR3);
    vsnprintf(VAR4, 4095, VAR3, VAR5);
    VAR4[4095] = 0;
    FUN3(VAR2, VAR4);
    FUN4(VAR5);

}