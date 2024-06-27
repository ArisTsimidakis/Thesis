static VAR1 FUN1(HWND VAR2)
{
    if (!VAR2)
        return 0;

    HWND VAR3 = VAR2;
    for (HWND VAR4 = FUN2(VAR3); VAR3; VAR3 = VAR4, VAR4 = FUN2(VAR4)) {
        if (!VAR4 || !(FUN3(VAR3, VAR5) & (VAR6 | VAR7)))
            return VAR3;
    }
    FUN4();
    return 0;
}