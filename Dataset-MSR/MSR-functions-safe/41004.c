cmsInt32Number VAR1 FUN1(const VAR2* VAR3, const char* VAR4)
{
    int VAR5, VAR6;

    if (VAR3 == NULL) return -1;
    VAR6 = FUN2(VAR3);
    for (VAR5=0; VAR5 < VAR6; VAR5++) {
        if (FUN3(VAR4,  VAR3->VAR7[VAR5].VAR4) == 0)
            return VAR5;
    }

    return -1;
}