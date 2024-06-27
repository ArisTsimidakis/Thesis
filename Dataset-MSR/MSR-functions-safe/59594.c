FUN1(void) {
    VAR1 = 0;
    FUN2(0);

    FUN3(VAR2, VAR3, VAR4, VAR5);
    FUN4();
    FUN5(VAR6);
    FUN6(NULL, VAR7);
#ifdef VAR8
    FUN7();
    FUN8();
#endif
}