int FUN1(const char *VAR1, bool VAR2) {
        struct stat VAR3, VAR4;
        char *VAR5;
        int VAR6;

        if (VAR2)
                VAR6 = FUN2(VAR1, &VAR3);
        else
                VAR6 = FUN3(VAR1, &VAR3);

        if (VAR6 < 0) {
                if (VAR7 == VAR8)
                        return 0;

                return -VAR7;
        }

        VAR6 = FUN4(VAR1, &VAR5);
        if (VAR6 < 0)
                return VAR6;

        VAR6 = FUN3(VAR5, &VAR4);
        free(VAR5);

        if (VAR6 < 0)
                return -VAR7;

        return VAR3.VAR9 != VAR4.VAR9;
}