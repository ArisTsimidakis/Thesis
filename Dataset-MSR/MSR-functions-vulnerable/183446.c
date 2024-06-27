VAR1 FUN1(VAR2* VAR3)
{
    FUN2(FUN3(VAR3), NULL);

    VAR4* VAR5 = FUN4(VAR3);
     if (!VAR5)
         return NULL;
 

    return FUN5(VAR5->FUN6()->FUN7()->FUN8());


 }