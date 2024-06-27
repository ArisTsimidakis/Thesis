local void FUN1(void)
{
    
    FUN2(VAR1.VAR2, &VAR1.VAR3, 1);
    VAR1.VAR4 = 1;

    
    while (VAR1.VAR5) {
        FUN2(VAR1.VAR2, VAR1.VAR6, VAR1.VAR5);
        VAR1.VAR4 += VAR1.VAR5;
        VAR1.VAR5 = 0;
        FUN3();
    }
}