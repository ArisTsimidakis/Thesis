int FUN1(const char *VAR1, bool VAR2, usec_t VAR3, uid_t VAR4, gid_t VAR5, mode_t VAR6) {
        _cleanup_close_ int VAR7;
        int VAR8;

        assert(VAR1);

        if (VAR2)
                FUN2(VAR1, 0755);

        VAR7 = open(VAR1, VAR9|VAR10|VAR11|VAR12, VAR6 > 0 ? VAR6 : 0644);
         if (VAR7 < 0)
                 return -VAR13;
 

        if (VAR6 > 0) {


                 VAR8 = FUN3(VAR7, VAR6);
                 if (VAR8 < 0)
                         return -VAR13;
        }

        if (VAR4 != VAR14 || VAR5 != VAR15) {
                VAR8 = FUN4(VAR7, VAR4, VAR5);
                if (VAR8 < 0)
                        return -VAR13;
        }

        if (VAR3 != VAR16) {
                struct timespec VAR17[2];

                FUN5(&VAR17[0], VAR3);
                VAR17[1] = VAR17[0];
                VAR8 = FUN6(VAR7, VAR17);
        } else
                VAR8 = FUN6(VAR7, NULL);
        if (VAR8 < 0)
                return -VAR13;

        return 0;
 }