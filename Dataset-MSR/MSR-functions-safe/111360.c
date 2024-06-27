bool VAR1::FUN1(const VAR2& VAR3, bool VAR4)
{
    VAR5* VAR6 = VAR3.FUN2();

    if (VAR6 && VAR6->FUN3()) {
        VAR7* VAR8 = VAR6->FUN4();
        if (VAR9* VAR10 = VAR8->FUN5()) {
            
            if (VAR4) {
                VAR10->FUN6()->FUN7(VAR6, VAR8->FUN8());
                if (VAR6->FUN9())
                    static_cast<VAR11*>(VAR6)->FUN10(true);
                VAR12->VAR13->FUN11(VAR6);
            } else if (VAR8->FUN12() == VAR6) 
                VAR10->FUN6()->FUN7(0, VAR8->FUN8());

            return true;
        }
    }
    return false;
}