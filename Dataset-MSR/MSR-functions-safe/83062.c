void FUN1(VAR1 *VAR2, VAR3 *VAR4) {
    lua_Number VAR5 = FUN2(VAR2,-1);

    if (FUN3(VAR5)) {
        FUN4(VAR2, VAR4);
    } else {
        FUN5(VAR2,VAR4,(double)VAR5);
    }
}