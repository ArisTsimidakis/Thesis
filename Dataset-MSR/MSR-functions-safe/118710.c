void VAR1::FUN1(const VAR2::VAR3<VAR2::VAR4>& VAR5)
{
    
    
    VAR6* VAR7 = VAR1::FUN2(VAR5.FUN3());
    VAR6* VAR8 = FUN4();

    
    if (!VAR8) {
        FUN5(VAR5.FUN6());
        return;
    }

    
    
    
    
    
    
    MessagePortArray VAR9;
    ArrayBufferArray VAR10;
    int VAR11 = 1;
    if (VAR5.FUN7() > 2) {
        int VAR12 = 2;
        if (FUN8(VAR5[2])) {
            VAR11 = 2;
            VAR12 = 1;
        }
        if (!FUN9(VAR5[VAR12], VAR9, VAR10, VAR5.FUN6()))
            return;
    }
    FUN10(VAR13<VAR14>, VAR15, VAR5[VAR11]);

    bool VAR16 = false;
    VAR17<VAR18> VAR19 =
        VAR18::FUN11(VAR5[0], &VAR9, &VAR10, VAR16, VAR5.FUN6());
    if (VAR16)
        return;

    VAR20 FUN12(VAR5.FUN6());
    VAR7->FUN13(VAR19.FUN14(), &VAR9, VAR15, VAR8, VAR21);
    VAR21.FUN15();
}