FUN1(ClientPtr VAR1)
{
    VAR2 *VAR3;
    FUN2(VAR4);
    int VAR5;

    FUN3(&VAR6->VAR7);
     FUN4(VAR4);
 
     FUN5(&VAR6->VAR8);




     FUN6(VAR4, VAR6->VAR8 * sizeof(VAR2));
 
     VAR3 = (VAR2*) &VAR6[1];
        FUN5(&VAR3->VAR9);
        FUN5(&VAR3->VAR10);
    }