status_t VAR1::FUN1(const VAR2 &VAR3) {
    FUN2();
 status_t VAR4;
 VAR5::VAR6 FUN3(VAR7);

    VAR8<VAR9> VAR10 = VAR11.FUN4();
 if (VAR10 == 0) {
        FUN5("", VAR12, VAR13);
 return VAR14;
 }

 if (VAR15.FUN6() == 0) {
        VAR4 = VAR10->FUN7(VAR16,
 &VAR15);
 if (VAR4 != VAR17) {
            FUN5(""
 "", VAR12, VAR13, strerror(-VAR4), VAR4);
 return VAR4;
 }
 }

    VAR4 = VAR3.FUN8(&VAR15);
 if (VAR4 != VAR17) {
        FUN5(""
 "", VAR12, VAR13,
                strerror(-VAR4), VAR4);
 return VAR4;
 }

    VAR4 = VAR15.update(VAR18,
 &VAR19, 1);
 if (VAR4 != VAR17) {
        FUN5("",
                VAR12, VAR13, strerror(-VAR4), VAR4);
 return VAR4;
 }

 return VAR17;
}