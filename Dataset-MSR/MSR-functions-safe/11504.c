bool FUN1(const char *VAR1, const char *VAR2) {
        const char *VAR3;

        
        for (VAR3 = VAR1; *VAR3; VAR3++)
                if (strchr(VAR2, *VAR3))
                        return true;

        return false;
}