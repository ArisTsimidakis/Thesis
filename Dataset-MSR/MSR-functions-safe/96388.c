static VAR1 FUN1(const char *VAR2)
{
    do {
        if ((unsigned char)(*VAR2) < '' || *VAR2 == 0x7f)
            return VAR3;
        VAR2++;
    } while (*VAR2);
    return VAR4;
}