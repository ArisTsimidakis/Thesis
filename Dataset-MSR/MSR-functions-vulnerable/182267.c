FUN1(VAR1 *VAR2, struct VAR3 *VAR4, enum merge_mode VAR5)
{
    bool VAR6;
    VAR1 *VAR7[VAR8 + 1] = { NULL };
    enum xkb_file_type VAR9;
    struct VAR10 *VAR11 = VAR4->VAR11;

    
    for (VAR2 = (VAR1 *) VAR2->VAR12; VAR2;
          VAR2 = (VAR1 *) VAR2->VAR13.VAR14) {
         if (VAR2->VAR15 < VAR16 ||
             VAR2->VAR15 > VAR8) {

            FUN2(VAR11, "",

                    FUN3(VAR2->VAR15));














             continue;
         }
 
        if (VAR7[VAR2->VAR15]) {
            FUN2(VAR11,
                    ""
                    "",
                    FUN3(VAR2->VAR15));
            continue;
        }

        VAR7[VAR2->VAR15] = VAR2;
    }

    
    VAR6 = true;
    for (VAR9 = VAR16;
         VAR9 <= VAR8;
         VAR9++) {
        if (VAR7[VAR9] == NULL) {
            FUN2(VAR11, "",
                    FUN3(VAR9));
            VAR6 = false;
        }
    }
    if (!VAR6)
        return false;

    
    for (VAR9 = VAR16;
         VAR9 <= VAR8;
         VAR9++) {
        FUN4(VAR11, ""%VAR17\"",
                FUN3(VAR9), VAR7[VAR9]->VAR18);

        VAR6 = VAR19[VAR9](VAR7[VAR9], VAR4, VAR5);
        if (!VAR6) {
            FUN2(VAR11, "",
                    FUN3(VAR9));
            return false;
        }
    }

    return FUN5(VAR4);
}