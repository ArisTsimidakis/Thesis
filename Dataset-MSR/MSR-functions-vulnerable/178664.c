FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)


 {
     if (VAR5 == VAR4->VAR5) {
         
        int64_t VAR7 = ((VAR8) VAR4->VAR9) * ((VAR8) VAR6);

        if (VAR7 != (int)VAR7) {
            FUN2(VAR2, VAR10, -1, "", VAR4->VAR9, VAR6);
            return NULL;
        }
        
        VAR4->VAR11 = FUN3(VAR2, VAR4->VAR11, VAR12, (int)VAR7);
        if (VAR4->VAR11 == NULL) {
            FUN2(VAR2, VAR10, -1, "");
            return NULL;
        }
        if (VAR6 > VAR4->VAR6) {
            memset(VAR4->VAR11 + VAR4->VAR6 * VAR4->VAR9, 0, (VAR6 - VAR4->VAR6) * VAR4->VAR9);
        }
        VAR4->VAR6 = VAR6;

    } else {
        
        FUN2(VAR2, VAR13, -1, "");
    }

    return NULL;
}