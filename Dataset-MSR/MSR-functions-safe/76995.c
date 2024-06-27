FUN1(enum ofpact_type VAR1)
{
    switch (VAR1) {
#VAR2 FUN2(VAR3, VAR4, VAR5, VAR6) case VAR7##VAR3: return VAR6;
        VAR8
#undef VAR9
    }
    return "";
}