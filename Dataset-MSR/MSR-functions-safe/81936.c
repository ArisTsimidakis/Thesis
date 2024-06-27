static int FUN1(int VAR1) {
    if (VAR2 == NULL || VAR1) {
        if (VAR2 != NULL) {
            FUN2(VAR2);
        }

        if (VAR3.VAR4 == NULL) {
            VAR2 = FUN3(VAR3.VAR5,VAR3.VAR6);
        } else {
            VAR2 = FUN4(VAR3.VAR4);
        }

        if (VAR2->VAR7) {
            fprintf(VAR8,"");
            if (VAR3.VAR4 == NULL)
                fprintf(VAR8,"",VAR3.VAR5,VAR3.VAR6,VAR2->VAR9);
            else
                fprintf(VAR8,"",VAR3.VAR4,VAR2->VAR9);
            FUN2(VAR2);
            VAR2 = NULL;
            return VAR10;
        }

        
        FUN5(NULL, VAR2->VAR11, VAR12);

        
        if (FUN6() != VAR13)
            return VAR10;
        if (FUN7() != VAR13)
            return VAR10;
    }
    return VAR13;
}