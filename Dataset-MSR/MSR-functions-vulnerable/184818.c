VAR1::VAR2<VAR1::VAR3> VAR4::FUN1(const VAR1::VAR5& VAR6)
{
     FUN2("");
 
     if (VAR6.FUN3() != 2)

        return VAR7::FUN4();


 
     ExceptionCode VAR8 = 0;
     VAR9* VAR10 = VAR4::FUN5(VAR6.FUN6());
    if (VAR6.FUN3() > 0 && !FUN7(VAR6[0]) && !VAR11::FUN8(VAR6[0])) {
        VAR7::FUN9();
        return FUN10();
    }
    VAR12* VAR13 = VAR11::FUN8(VAR6[0]) ? VAR11::FUN5(VAR1::VAR2<VAR1::VAR14>::FUN11(VAR6[0])) : 0;
    unsigned VAR15 = FUN12(VAR6[1]);
    WebGLGetInfo VAR16 = VAR10->FUN13(VAR13, VAR15, VAR8);
    if (VAR8) {
        VAR7::FUN14(VAR8, VAR6.FUN15());
        return VAR1::FUN16();
    }
    return FUN17(VAR16, VAR6.FUN15());
}