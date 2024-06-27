FUN1(VAR1 *VAR2, int VAR3, VAR4 **VAR5)


 {

    int VAR6, VAR7, VAR8, VAR9;

    VAR4 *new = NULL;




 
     
     VAR9 = 0;
    for (VAR6 = 0; VAR6 < VAR3; VAR6++)
         VAR9 += VAR5[VAR6]->VAR10;
 
     

    new = FUN2(VAR2, VAR9);

    if (new != NULL) {




         VAR8 = 0;
         for (VAR6 = 0; VAR6 < VAR3; VAR6++)
             for (VAR7 = 0; VAR7 < VAR5[VAR6]->VAR10; VAR7++)

                new->VAR11[VAR8++] = FUN3(VAR2, VAR5[VAR6]->VAR11[VAR7]);


     } else {
         FUN4(VAR2, VAR12, -1, "");
     }
 

    return new;


 }