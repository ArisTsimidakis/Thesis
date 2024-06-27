VAR1::Status VAR2::FUN1(int32_t VAR3,
 const VAR4::VAR5& VAR6,
 const VAR4::VAR5& VAR7,
 int32_t VAR8, VAR9* VAR10) {
    FUN2("", VAR11, VAR12);
    FUN2("", VAR3);
    FUN2("", VAR6.FUN3());
    FUN2("", VAR7.FUN3());
    FUN2("", VAR8);

 XfrmSaInfo VAR13{};
    VAR1::Status VAR14 =
        FUN4(VAR6, VAR7, VAR15, 0, 0, VAR3, &VAR13);
 if (!FUN5(VAR14)) {
 return VAR14;
 }

 XfrmSocketImpl VAR16;
    VAR1::Status VAR17 = VAR16.open();
 if (!FUN5(VAR17)) {
        FUN2("", VAR12);
 return VAR17;
 }

 int VAR18 = VAR19, VAR20 = VAR21;

 if (VAR8)
        VAR18 = VAR20 = VAR8;

    VAR14 = FUN6(VAR13, VAR18, VAR20, reinterpret_cast<VAR22*>(VAR10), VAR16);
 if (!FUN5(VAR14)) {
 
        FUN2("", VAR12);
 *VAR10 = VAR15;
 }

 return VAR14;
}