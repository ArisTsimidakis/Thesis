char *FUN1(const char *VAR1) {
        char *VAR2, *VAR3;
        const char *VAR4;

        assert(VAR1);

        

        if (!(VAR2 = new(char, strlen(VAR1)*3+1)))
                return NULL;

        for (VAR4 = VAR1, VAR3 = VAR2; *VAR4; VAR4++) {

                if (!(*VAR4 >= '' && *VAR4 <= '') &&
                    !(*VAR4 >= '' && *VAR4 <= '') &&
                    !(*VAR4 >= '' && *VAR4 <= '')) {
                        *(VAR3++) = '';
                        *(VAR3++) = FUN2(*VAR4 >> 4);
                        *(VAR3++) = FUN2(*VAR4);
                } else
                        *(VAR3++) = *VAR4;
        }

        *VAR3 = 0;

        return VAR2;
}