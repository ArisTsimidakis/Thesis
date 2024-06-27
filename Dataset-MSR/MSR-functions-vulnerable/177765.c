static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)


 {

       FUN2(VAR2, VAR4->VAR5);

       FUN3(VAR2, VAR4->VAR6,

                              (VAR4->VAR6) ? strlen(VAR4->VAR6) : 0);

       FUN3(VAR2, VAR4->VAR7,








                               (VAR4->VAR7) ?

                              strlen(VAR4->VAR7) : 0);


        if (VAR4->VAR8) {

               FUN4(VAR2, FUN5(3));

               FUN3(VAR2, VAR4->VAR8,

                                      strlen(VAR4->VAR8));

               FUN6(VAR2);








        }


 }