VAR1<VAR2> FUN1(const VAR3& VAR4, VAR5* VAR6, VAR7& VAR8)


 {
     VAR9* VAR10 = VAR6->FUN2();
     VAR11<VAR2> VAR12 = VAR2::FUN3(VAR10);

    if (VAR10->FUN4()) {
        VAR12->FUN5(VAR4, VAR6);
        return VAR12;
    }

    bool VAR13 = VAR12->FUN6(VAR4, VAR6);
    if (!VAR13) {
        VAR8 = VAR14;
        return 0;
    }
     return VAR12.FUN7();
 }