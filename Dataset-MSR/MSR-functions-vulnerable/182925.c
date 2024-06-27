void FUN1(VAR1 *VAR2, VAR1 *VAR3) {
    VAR4 *VAR5, *VAR6;
    VAR7 *VAR8;
     struct VAR9 {
         VAR4 * VAR10;
         char * VAR11;

        char VAR12;
     } *VAR13, *VAR14;
 
     VAR13 = malloc(sizeof(struct VAR9));
    VAR13->VAR10 = VAR3->VAR10;
    VAR13->VAR11 = NULL;

    VAR5 = FUN2();
    FUN3(VAR5, NULL, NULL, &free);
    FUN4(VAR5, VAR13, 0);

    while (VAR5->VAR15 != NULL) {
        VAR8 = VAR5->VAR15;
        FUN5(VAR5, VAR5->VAR15);
        VAR6 = ((struct VAR9*)VAR8->VAR16)->VAR10;
        VAR14 = (struct VAR9*) VAR8->VAR16;
        free(VAR8);

        for (VAR8 = VAR6->VAR15; VAR8 != NULL; VAR8=VAR8->VAR17) {
            VAR13 = malloc(sizeof(struct VAR9));
            VAR13->VAR10 = ((VAR18*)VAR8->VAR16)->VAR10;

            if (VAR14->VAR11 != NULL) {
                VAR13->VAR11 = malloc(sizeof(char)
                               * (strlen(((VAR18*)VAR8->VAR16)->VAR11)
                               + strlen(VAR14->VAR11) + 1));
                memcpy(VAR13->VAR11, VAR14->VAR11,
                       sizeof(char) * strlen(VAR14->VAR11));
                memcpy(VAR13->VAR11 + strlen(VAR14->VAR11),
                       ((VAR18*)VAR8->VAR16)->VAR11,
                       sizeof(char)*(strlen(((VAR18*)VAR8->VAR16)->VAR11)+1));
            } else {
                VAR13->VAR11 = malloc(sizeof(char)*
                                (strlen(((VAR18*)VAR8->VAR16)->VAR11) +1));
                memcpy(VAR13->VAR11, ((VAR18*)VAR8->VAR16)->VAR11,
                       sizeof(char)*(strlen(((VAR18*)VAR8->VAR16)->VAR11)+1));
            }
            
            if (((VAR18*)VAR8->VAR16)->VAR16 != NULL) {
                    FUN6(VAR2,
                                    VAR13->VAR11,
                        VAR3->FUN7(((VAR18*)VAR8->VAR16)->VAR16));
            }
            if (((VAR18*)VAR8->VAR16)->VAR10->VAR15) {
                FUN4(VAR5, VAR13, 0);
            } else {
                free(VAR13->VAR11);
                free(VAR13);
            }
        }
        free(VAR14->VAR11);
        free(VAR14);
    }
    FUN8(&VAR5);
}