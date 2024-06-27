int FUN1(int VAR1) {
        static const struct vt_mode VAR2 = {
                .VAR2 = VAR3,
        };
        int VAR4, VAR5 = 0;

        VAR4 = FUN2(VAR1, VAR6, VAR7);
        if (VAR4 < 0)
                VAR5 = FUN3(VAR8, "");

        VAR4 = FUN4(VAR1);
        if (VAR4 < 0) {
                FUN3(VAR4, "");
                if (VAR5 >= 0)
                        VAR5 = VAR4;
        }

        VAR4 = FUN2(VAR1, VAR9, &VAR2);
        if (VAR4 < 0) {
                FUN3(VAR8, "");
                if (VAR5 >= 0)
                        VAR5 = -VAR8;
        }

        VAR4 = FUN5(VAR1, 0, (VAR10) -1);
        if (VAR4 < 0) {
                FUN3(VAR8, "");
                if (VAR5 >= 0)
                        VAR5 = -VAR8;
        }

        return VAR5;
}