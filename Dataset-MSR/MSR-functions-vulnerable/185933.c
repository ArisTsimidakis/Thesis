void VAR1::FUN1(VAR2::VAR3<VAR2::VAR4> VAR5, const VAR2::VAR6<VAR2::VAR7>& VAR8)
{
    if (!VAR5->FUN2())
        return;

    auto VAR9 = VAR5.VAR10<VAR2::VAR11>();
    VAR12* VAR13 = FUN3(VAR1::FUN4(VAR8.FUN5()));
    if (!VAR13)
        return;

    VAR14* VAR15 = VAR13->FUN6();
    
    if (!VAR15)
        return;

    
    AtomicString VAR16 = FUN7(VAR9);
    VAR17* VAR18 = VAR15->FUN8().FUN9(VAR16);
    if (VAR18) {
        FUN10(VAR8, VAR18->FUN11(), VAR13);
        return;
    }

    
     if (!VAR8.FUN5()->FUN12(VAR9).FUN13())
         return;
 












     
     VAR19* VAR20 = VAR15->FUN14();
 
    if (VAR20 && VAR20->FUN15()) {
        if (FUN16(VAR20)->FUN17(VAR16) || VAR20->FUN18(VAR16)) {
            VAR21<VAR22> VAR23 = VAR20->FUN19(VAR16);
            if (!VAR23->FUN20()) {
                if (VAR23->FUN21()) {
                    FUN10(VAR8, VAR23->FUN22(0), VAR13);
                    return;
                }
                FUN10(VAR8, VAR23.FUN23(), VAR13);
                return;
            }
        }
    }
}