void FUN1(struct VAR1 *VAR2) {
    struct VAR3 *VAR4;
    uint32_t VAR5;

    if (VAR2->VAR6 != 0) {
        FUN2(&VAR7);
        for (VAR5 = 0; VAR5 < VAR2->VAR6; VAR5++) {
            VAR2->VAR8[VAR5]->VAR9--;
            if (VAR2->VAR8[VAR5]->VAR9 == 0) {
                
                while (VAR2->VAR8[VAR5]->VAR10) {
                    VAR4 = VAR2->VAR8[VAR5]->VAR10->VAR11;
                    free(VAR2->VAR8[VAR5]->VAR10->VAR12);
                    free(VAR2->VAR8[VAR5]->VAR10);
                    VAR2->VAR8[VAR5]->VAR10 = VAR4;
                }
                VAR2->VAR8[VAR5]->VAR13 = 0;
            }
        }
        FUN3(&VAR7);
        free(VAR2->VAR8);
    }

    if (VAR2->VAR14 != 0) {
        for (VAR5 = 0; VAR5 < VAR2->VAR14; VAR5++) {
            
            if (VAR2->VAR15[VAR5].VAR16 == VAR17) {
                free(VAR2->VAR15[VAR5].VAR18.VAR12.VAR19);
            } else if (VAR2->VAR15[VAR5].VAR16 == VAR17) {
                free(VAR2->VAR15[VAR5].VAR18.VAR12.VAR19);
            } else if (VAR2->VAR15[VAR5].VAR16 == VAR20) {
                free(VAR2->VAR15[VAR5].VAR18.VAR12.VAR19);
            } else if (VAR2->VAR15[VAR5].VAR16 == VAR21) {
                free(VAR2->VAR15[VAR5].VAR18.VAR12.VAR19);
            } else if (VAR2->VAR15[VAR5].VAR16 == VAR22) {
                free(VAR2->VAR15[VAR5].VAR18.VAR12.VAR19);
            } else if (VAR2->VAR15[VAR5].VAR16 == VAR23) {
                free(VAR2->VAR15[VAR5].VAR18.VAR12.VAR19);
            } else if (VAR2->VAR15[VAR5].VAR16 == VAR24) {
                free(VAR2->VAR15[VAR5].VAR18.VAR12.VAR19);
            } else if (VAR2->VAR15[VAR5].VAR16 == VAR25) {
                free(VAR2->VAR15[VAR5].VAR18.VAR12.VAR19);
            }
        }
    }

    free(VAR2->VAR15);
    FUN4(VAR2->VAR26);
    free(VAR2->VAR27);
     free(VAR2);
 }